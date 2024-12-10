#pragma once
#include "include.h"
#include "scr_value.h"
#include "scr_vector.h"

namespace rage {
	//#ifdef __SNC__
	//For some retarded fucking reason, they used 6 different vector3 classes in multiple places. I do not get it
	//struct sVector3 { u32 x, y, z; } __attribute__((aligned(16)));
	//#else
	//__declspec(align(16)) struct Vector3 { float x, y, z; };
	//#endif //We love yoinking R*s code. At least, for me, this will compile right as I have the exact PS3 SDK version they used
	class scrNativeCallContext {
	public:
		void reset() {
			ArgCount = 0;
			BufferCount = 0;
			/*mset(Orig, NULL, sizeof(Orig));
			mset(Buffer, NULL, sizeof(Buffer));*/
		}
		template <typename t>
		t& getArg(size_t index) {
			static_assert(sizeof(t) <= sizeof(uint64_t));
			return *reinterpret_cast<t*>(reinterpret_cast<uint64_t*>(Args) + index);
		}
		template <typename t>
		t* getRetValue() {
			return reinterpret_cast<t*>(Return);
		}
	public:
		scrValue* Return;
		int ArgCount;
		scrValue* Args;
		int BufferCount;
		u32* Orig[4];
		//sVector3 Buffer[4];
		void shiftVectorCoords() {
			/*int bc = BufferCount;
			while (bc--) {
				u32* dst = Orig[bc];
				u32* src = &Buffer[bc].x;
				dst[0] = src[0];
				dst[1] = src[1];
				dst[2] = src[2];
			}*/
		}
	};
}