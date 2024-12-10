#include "hooking/hooking.h"
#include "util/pad.h"

uint32_t sButtonData = 0;
CellPadUtilAxis sAxisLeft = { 0x80, 0x80 };
CellPadUtilAxis sAxisRight = { 0x80, 0x80 };
CellPadUtilPress sPadPressData = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
bool sEditMode = false;
uint32_t sActiveMenu = 0;
uint32_t sActiveFilter = 0;
uint32_t sTargetPad = 0;
uint32_t sControlPad = 0;
float inputFixup(int control, int action) {
	static bool init{};
	if (!init) {
		cellPadUtilPadInit();
		cellPadUtilSetPressMode(true);
		init = true;
	}
	if (!cellPadUtilUpdate()) return;
	if (!sEditMode) {
		sControlPad = sTargetPad;
	}
	if (!cellPadUtilIsConnected(sControlPad)) {
		sEditMode = false;
		int16_t active_pad = cellPadUtilGetFirstConnectedPad();
		if (active_pad < 0) return;
		sControlPad = static_cast<uint8_t>(active_pad);
		sTargetPad = sControlPad;
	}
	// get pad data
	sButtonData = cellPadUtilGetDigitalData(sTargetPad);
	sAxisLeft = cellPadUtilGetAxisValue(sTargetPad, CELL_UTIL_ANALOG_LEFT);
	sAxisRight = cellPadUtilGetAxisValue(sTargetPad, CELL_UTIL_ANALOG_RIGHT);
	sPadPressData = cellPadUtilGetPressValue(sTargetPad);
	switch (action) {
	case 57:
	case 80:
	case 140:
	case 170:
	case 177:
	case 194:
	case 202:
	case 225:
	case 263:
	case 45: { //CIRCLE
		return cellPadUtilDigitalButtonPressed(sButtonData, CELL_UTIL_BUTTON_CIRCLE);
	} break;
	case 21:
	case 70:
	case 73:
	case 105:
	case 114:
	case 120:
	case 132:
	case 136:
	case 137:
	case 141:
	case 154:
	case 176:
	case 191:
	case 201:
	case 215:
	case 223:
	case 255:
	case 258:
	case 264:
	case 288:
	case 298:
	case 301:
	case 337:
	case 345:
	case 353:
	case 354:
	case 357:
	case 18: { //CROSS
		return cellPadUtilDigitalButtonPressed(sButtonData, CELL_UTIL_BUTTON_CROSS);
	} break;
	case 99:
	case 131:
	case 143:
	case 179:
	case 193:
	case 203:
	case 214:
	case 224:
	case 256:
	case 259:
	case 289:
	case 296:
	case 349:
	case 22: { //SQUARE
		return cellPadUtilDigitalButtonPressed(sButtonData, CELL_UTIL_BUTTON_SQUARE);
	} break;
	case 49:
	case 53:
	case 56:
	case 75:
	case 144:
	case 145:
	case 178:
	case 192:
	case 204:
	case 222:
	case 297:
	case 348:
	case 23: { //TRIANGLE
		return cellPadUtilDigitalButtonPressed(sButtonData, CELL_UTIL_BUTTON_TRIANGLE);
	} break;
	case 68:
	case 89:
	case 117:
	case 133:
	case 152:
	case 185:
	case 205:
	case 226:
	case 299:
	case 315:
	case 346:
	case 38: { //L1
		return cellPadUtilDigitalButtonPressed(sButtonData, CELL_UTIL_BUTTON_L1);
	} break;
	case 55:
	case 69:
	case 76:
	case 90:
	case 102:
	case 118:
	case 134:
	case 153:
	case 183:
	case 206:
	case 211:
	case 213:
	case 227:
	case 300:
	case 314:
	case 347:
	case 358:
	case 44: { //R1
		return cellPadUtilDigitalButtonPressed(sButtonData, CELL_UTIL_BUTTON_R1);
	} break;
	case 25:
	case 72:
	case 77:
	case 88:
	case 91:
	case 130:
	case 138:
	case 207:
	case 228:
	case 252:
	case 10: { //L2
		if (cellPadUtilDigitalButtonPressed(sButtonData, CELL_UTIL_BUTTON_L2)) {
			return sPadPressData.L2 / 255.0f; //Float actuation value, fucking nightmare
		}
	} break;
	case 24:
	case 71:
	case 78:
	case 87:
	case 92:
	case 129:
	case 139:
	case 142:
	case 182:
	case 208:
	case 229:
	case 253:
	case 257:
	case 260:
	case 328:
	case 11: { //R2
		if (cellPadUtilDigitalButtonPressed(sButtonData, CELL_UTIL_BUTTON_R2)) {
			return sPadPressData.R2 / 255.0f; //Float actuation value, fucking nightmare
		}
	} break;
	case 31:
	case 60:
	case 110:
	case 126:
	case 149:
	case 195:
	case 218:
	case 333:
	case 342:
	case 8: { //LEFT-UD-AXIS
		if (cellPadUtilDigitalButtonPressed(sButtonData, CELL_UTIL_BUTTON_R2)) {
			return sAxisLeft.x / 255.0f; //How in the fuck do I handle this??????????
			//Why in the FUCK is there one-movement only? WHY?
		}
	} break;
	case 61:
	case 96: //Fun fact, this input isn't normally registered but used.
	case 111:
	case 127:
	case 150:
	case 335:
	case 32: { //LEFT-UP-ONLY-AXIS
		if (cellPadUtilDigitalButtonPressed(sButtonData, CELL_UTIL_BUTTON_R2)) {
			float value{ sAxisLeft.x / 255.0f };
			if (value < 0) { //Should this be positive? I do not fucking know....
				return value; //How in the fuck do I handle this??????????
			}
			//Why in the FUCK is there one-movement only? WHY?
		}
	} break;
	case 62:
	case 97: //Fun fact, this input isn't normally registered but used.
	case 112:
	case 128:
	case 151:
	case 336:
	case 33: { //LEFT-DOWN-ONLY-AXIS
		if (cellPadUtilDigitalButtonPressed(sButtonData, CELL_UTIL_BUTTON_R2)) {
			float value{ sAxisLeft.x / 255.0f };
			if (value > 0) { //Should this be negative? I do not fucking know....
				return value; //How in the fuck do I handle this??????????
			}
			//Why in the FUCK is there one-movement only? WHY?
		}
	} break;
	case 188:
	case 172:
	case 42:
	case 27: { //DPAD_UP
		return cellPadUtilDigitalButtonPressed(sButtonData, CELL_UTIL_BUTTON_UP);
	} break;
	case 20:
	case 43:
	case 48:
	case 173:
	case 187:
	case 233:
	case 309:
	case 311:
	case 19: { //DPAD_DOWN
		return cellPadUtilDigitalButtonPressed(sButtonData, CELL_UTIL_BUTTON_DOWN);
	} break;
	case 47:
	case 52:
	case 58:
	case 85:
	case 115:
	case 174:
	case 189:
	case 234:
	case 261:
	case 308:
	case 312:
	case 15: { //DPAD_LEFT
		return cellPadUtilDigitalButtonPressed(sButtonData, CELL_UTIL_BUTTON_LEFT);
	} break;
	case 14:
	case 46:
	case 51:
	case 54:
	case 74:
	case 101:
	case 103:
	case 104:
	case 119:
	case 175:
	case 190:
	case 235:
	case 262:
	case 307:
	case 313:
	case 344:
	case 355:
	case 356: { //DPAD_RIGHT
		return cellPadUtilDigitalButtonPressed(sButtonData, CELL_UTIL_BUTTON_RIGHT);
	} break;
	}
}

void hooks::getControlValue(rage::scrNativeCallContext* ctx) {
	ctx->Return->Int = static_cast<int>(inputFixup(ctx->Args[0].Int, ctx->Args[1].Int));
}
void hooks::getControlNormal(rage::scrNativeCallContext* ctx) {
	ctx->Return->Float = static_cast<float>(inputFixup(ctx->Args[0].Int, ctx->Args[1].Int));
}
void hooks::getDisabledControlNormal(rage::scrNativeCallContext* ctx) {
	ctx->Return->Float = static_cast<float>(inputFixup(ctx->Args[0].Int, ctx->Args[1].Int));
}
void hooks::getDisabledControlUnboundNormal(rage::scrNativeCallContext* ctx) {
	ctx->Return->Float = static_cast<float>(inputFixup(ctx->Args[0].Int, ctx->Args[1].Int));
}