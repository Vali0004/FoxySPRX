#pragma once
#include "rage/page.h"
#include "rage/scr_value.h"
#include "rage/joaat.h"
#define rage_new new //We have our own new impl, but R* uses a weird custom impl to be compatiable for all platforms.

namespace rage {
	//Not exactly the correct sysEndian, but it'll have to do.
	static u32 SwapMe4(u32& x) {
		const u32 x0 = (x >> (8 * 0)) & 0xff;
		const u32 x1 = (x >> (8 * 1)) & 0xff;
		const u32 x2 = (x >> (8 * 2)) & 0xff;
		const u32 x3 = (x >> (8 * 3)) & 0xff;
		return (x0 << (8 * 3)) | (x1 << (8 * 2)) | (x2 << (8 * 1)) | (x3 << (8 * 0));
	}
	static u32 Swap(u32& x) { return SwapMe4(*(u32*)&x); }
	inline void Convert_LE(u32* d, u32 c) { for (; c; c--, d++) *d = Swap(*d); }
	inline void Convert_BE(u32*, u32) { }
	inline void Convert_BE(u64*, u32) { }
	const int MAX_LEGIT_OPS = (11 * 1024 * 1024);
	static const u32 scrPageShift = 14;
	static const u32 scrPageSize = (1 << scrPageShift);
	static const u32 scrPageMask = (scrPageSize - 1);
	static const u32 scrStringShift = 14;
	static const u32 scrStringSize = (1 << scrStringShift);
	static const u32 scrStringMask = (scrStringSize - 1);
	static const u32 scrGlobalsPageShift = 14;
	static const u32 scrGlobalsPageSize = (1 << scrGlobalsPageShift);
	static const u32 scrGlobalsPageMask = (scrGlobalsPageSize - 1);
	struct scrProgram : public pgBase { //I love stealing R* code.
		scrProgram(ccp name, u32 opcodeSize, u32 nativeSize, u32 staticSize, u32 globalSize, int globalsBlock, u32 stringHeapSize, u32 argStructSize, u32 globalsHash) {
			if (!opcodeSize)
				++opcodeSize;
			OpcodeSize = opcodeSize;
			opcodeSize = ((opcodeSize + scrPageMask)) >> scrPageShift;
			Table = rage_new u8*[opcodeSize];
			for (u32 i = 0; i < opcodeSize - 1; i++)
				Table[i] = rage_new u8[scrPageSize];
			// Last page doesn't need to be complete (but make sure it's not bogus if it's an exact multiple!)
			Table[opcodeSize - 1] = rage_new u8[(OpcodeSize & scrPageMask) ? (OpcodeSize & scrPageMask) : scrPageSize];
			Statics = rage_new scrValue[StaticSize = staticSize];

			GlobalSizeAndBlock = globalSize | (globalsBlock << MAX_GLOBAL_BLOCKS_SHIFT);
			if (globalSize) {
				GlobalsTable = rage_new scrValue*[GetGlobalsPageCount()];
				for (u32 i = 0; i < GetGlobalsPageCount(); i++)
					GlobalsTable[i] = rage_new scrValue[GetGlobalsPageChunkSize(i)];
			}
			else
				GlobalsTable = NULL;

			ArgStructSize = argStructSize;
			GlobalsHash = globalsHash;
			Natives = rage_new u32[NativeSize = nativeSize];
			StringHeapSize = stringHeapSize;
			u32 numStringHeaps = GetStringHeapCount();
			StringHeaps = rage_new const char*[numStringHeaps];
			for (u32 i = 0; i < numStringHeaps; i++)
				StringHeaps[i] = rage_new char[GetStringHeapChunkSize(i)];
			ProcCount = 0;
			ProcNames = 0;
			HashCode = atComputeHash(name);
			ScriptName = name;
			RefCount = 0;
			m_programBreakpoints = NULL;
		}
		enum {
			MAX_GLOBAL_BLOCKS_SHIFT = (24 - 6),
			MAX_GLOBAL_BLOCKS = (64),
			GLOBAL_SIZE_MASK = ((1 << (MAX_GLOBAL_BLOCKS_SHIFT)) - 1)
		};
		u8** Table;					// +8
		u32 GlobalsHash;			// +12
		u32 OpcodeSize;				// +16
		u32 ArgStructSize;			// +20
		u32 StaticSize;				// +24
		u32 GlobalSizeAndBlock;		// +28
		u32 NativeSize;				// +32
		scrValue* Statics;			// +36
		scrValue** GlobalsTable;	// +40
		u32* Natives;				// +44
		u32 ProcCount;				// +48
		const char** ProcNames;		// +52
		u32 HashCode;				// +56
		u32 RefCount;				// +60
		const char* ScriptName;		// +64
		const char** StringHeaps;	// +68
		u32 StringHeapSize;		    // +72
		s32* m_programBreakpoints;  // +76
		const scrValue* GetStatics() const { return Statics; }
		int GetStaticSize() const { return StaticSize; }
		int GetStringHeapSize() const { return StringHeapSize; }
		int GetArgStructSize() const { return ArgStructSize; }
		u32 GetHashCode() const { return HashCode; }
		u32 GetNativeSize() const { return NativeSize; }
		const u32* GetNatives() const { return Natives; }
		u32 GetStringHeapCount() const { return (StringHeapSize + scrStringMask) >> scrStringShift; }
		u32 GetStringHeapChunkSize(u32 i) { return i == GetStringHeapCount() - 1 ? StringHeapSize - (i << scrStringShift) : scrStringSize; }
		u32 GetGlobalsPageCount() const { return ((GlobalSizeAndBlock & GLOBAL_SIZE_MASK) + scrGlobalsPageMask) >> scrGlobalsPageShift; }
		u32 GetGlobalsPageChunkSize(u32 i) { return i == GetGlobalsPageCount() - 1 ? (GlobalSizeAndBlock & GLOBAL_SIZE_MASK) - (i << scrGlobalsPageShift) : scrGlobalsPageSize; }
		u8& operator[](u32 index) const {
			return Table[index >> scrPageShift][index & scrPageMask];
		}
		u8& operator[](u32 index) {
			return Table[index >> scrPageShift][index & scrPageMask];
		}
	};
}