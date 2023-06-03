#pragma once
#include "rage/natives/invoker/invoker.h"
#include "rage/natives/caller.h"
#define nativeDecl static

namespace PLAYER
{
	nativeDecl Ped GET_PLAYER_PED(Player player) { return invoke<Ped>(0x6E31E993, player); } // 0x6E31E993
	nativeDecl Ped GET_PLAYER_PED_SCRIPT_INDEX(Player player) { return invoke<Ped>(0x6AC64990, player); } // 0x6AC64990
	nativeDecl void SET_PLAYER_MODEL(Player player, Hash modelHash) { invoke<Void>(0x774A4C54, player, modelHash); } // 0x774A4C54
	nativeDecl void CHANGE_PLAYER_PED(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xBE515485, p0, p1, p2, p3); } // 0xBE515485
	nativeDecl void GET_PLAYER_RGB_COLOUR(Player player, int* Red, int* Green, int* Blue) { invoke<Void>(0x6EF43BBB, player, Red, Green, Blue); } // 0x6EF43BBB
	nativeDecl int GET_NUMBER_OF_PLAYERS() { return invoke<int>(0x4C1B8867); } // 0x4C1B8867
	nativeDecl int GET_PLAYER_TEAM(Player player) { return invoke<int>(0x9873E404, player); } // 0x9873E404
	nativeDecl void SET_PLAYER_TEAM(Player player, int Team) { invoke<Void>(0x725ADCF2, player, Team); } // 0x725ADCF2
	nativeDecl const char* GET_PLAYER_NAME(Player player) { return invoke<const char*>(0x406B4B20, player); } // 0x406B4B20
	nativeDecl float GET_WANTED_LEVEL_RADIUS(Player player) { return invoke<float>(0x1CF7D7DA, player); } // 0x1CF7D7DA
	nativeDecl Vector3 GET_PLAYER_WANTED_CENTRE_POSITION(Player player) { return invoke<Vector3>(0x821F2D2C, player); } // 0x821F2D2C
	nativeDecl void SET_PLAYER_WANTED_CENTRE_POSITION(Player player, float x, float y, float z) { invoke<Void>(0xF261633A, player, x, y, z); } // 0xF261633A
	nativeDecl int GET_WANTED_LEVEL_THRESHOLD(int wantedLevel) { return invoke<int>(0xD9783F6B, wantedLevel); } // 0xD9783F6B
	nativeDecl void SET_PLAYER_WANTED_LEVEL(Player player, Hash wantedLevel, BOOL p2) { invoke<Void>(0xB7A0914B, player, wantedLevel, p2); } // 0xB7A0914B
	nativeDecl void SET_PLAYER_WANTED_LEVEL_NO_DROP(Player player, BOOL wantedLevel, Any p2) { invoke<Void>(0xED6F44F5, player, wantedLevel, p2); } // 0xED6F44F5
	nativeDecl void SET_PLAYER_WANTED_LEVEL_NOW(Player player, BOOL p1) { invoke<Void>(0xAF3AFD83, player, p1); } // 0xAF3AFD83
	nativeDecl BOOL ARE_PLAYER_FLASHING_STARS_ABOUT_TO_DROP(Player player) { return invoke<BOOL>(0xE13A71C7, player); } // 0xE13A71C7
	nativeDecl BOOL ARE_PLAYER_STARS_GREYED_OUT(Player player) { return invoke<BOOL>(0x5E72AB72, player); } // 0x5E72AB72
	nativeDecl void SET_DISPATCH_COPS_FOR_PLAYER(Player player, BOOL Enable) { invoke<Void>(0x48A18913, player, Enable); } // 0x48A18913
	nativeDecl BOOL IS_PLAYER_WANTED_LEVEL_GREATER(Player player, int wantedLevel) { return invoke<BOOL>(0x589A2661, player, wantedLevel); } // 0x589A2661
	nativeDecl void CLEAR_PLAYER_WANTED_LEVEL(Player player) { invoke<Void>(0x54EA5BCC, player); } // 0x54EA5BCC
	nativeDecl BOOL IS_PLAYER_DEAD(Player player) { return invoke<BOOL>(0x140CA5A8, player); } // 0x140CA5A8
	nativeDecl BOOL IS_PLAYER_PRESSING_HORN(Player player) { return invoke<BOOL>(0xED1D1662, player); } // 0xED1D1662
	nativeDecl void SET_PLAYER_CONTROL(Player playerId, BOOL Toggle, int possiblyFlags) { invoke<Void>(0xD17AFCD8, playerId, Toggle, possiblyFlags); } // 0xD17AFCD8
	nativeDecl int GET_PLAYER_WANTED_LEVEL(Player player) { return invoke<int>(0xBDCDD163, player); } // 0xBDCDD163
	nativeDecl void SET_MAX_WANTED_LEVEL(int maxWantedLevel) { invoke<Void>(0x665A06F5, maxWantedLevel); } // 0x665A06F5
	nativeDecl void SET_POLICE_RADAR_BLIPS(BOOL Toggle) { invoke<Void>(0x8E114B10, Toggle); } // 0x8E114B10
	nativeDecl void SET_POLICE_IGNORE_PLAYER(Player player, BOOL Toggle) { invoke<Void>(0xE6DE71B7, player, Toggle); } // 0xE6DE71B7
	nativeDecl BOOL IS_PLAYER_PLAYING(Player player) { return invoke<BOOL>(0xE15D777F, player); } // 0xE15D777F
	nativeDecl void SET_EVERYONE_IGNORE_PLAYER(Player player, BOOL Toggle) { invoke<Void>(0xC915285E, player, Toggle); } // 0xC915285E
	nativeDecl void SET_ALL_RANDOM_PEDS_FLEE(Player player, int p1) { invoke<Void>(0x49EAE968, player, p1); } // 0x49EAE968
	nativeDecl void SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(Player player) { invoke<Void>(0xBF974891, player); } // 0xBF974891
	nativeDecl void _0x274631FE(Player Player, BOOL Toggle) { invoke<Void>(0x274631FE, Player, Toggle); } // 0x274631FE
	nativeDecl void _0x02DF7AF4(Any p0) { invoke<Void>(0x02DF7AF4, p0); } // 0x02DF7AF4
	nativeDecl void SET_IGNORE_LOW_PRIORITY_SHOCKING_EVENTS(int playerIndex, BOOL p1) { invoke<Void>(0xA3D675ED, playerIndex, p1); } // 0xA3D675ED
	nativeDecl void SET_WANTED_LEVEL_MULTIPLIER(float Multiplier) { invoke<Void>(0x1359292F, Multiplier); } // 0x1359292F
	nativeDecl void SET_WANTED_LEVEL_DIFFICULTY(Player player, float difficulty) { invoke<Void>(0xB552626C, player, difficulty); } // 0xB552626C
	nativeDecl void RESET_WANTED_LEVEL_DIFFICULTY(Player player) { invoke<Void>(0xA64C378D, player); } // 0xA64C378D
	nativeDecl void START_FIRING_AMNESTY(Any p0) { invoke<Void>(0x5F8A22A6, p0); } // 0x5F8A22A6
	nativeDecl void REPORT_CRIME(Player player, int p0, int p1) { invoke<Void>(0xD8EB3A44, player, p0, p1); } // 0xD8EB3A44
	nativeDecl void _0x59B5C2A2(Any p0, Any p1) { invoke<Void>(0x59B5C2A2, p0, p1); } // 0x59B5C2A2
	nativeDecl void _0x6B34A160(Any p0) { invoke<Void>(0x6B34A160, p0); } // 0x6B34A160
	nativeDecl void _0xB9FB142F(Any p0) { invoke<Void>(0xB9FB142F, p0); } // 0xB9FB142F
	nativeDecl void _0x85725848(Any p0) { invoke<Void>(0x85725848, p0); } // 0x85725848
	nativeDecl void _0x3A7E5FB6(float* p0f) { invoke<Void>(0x3A7E5FB6, p0f); } // 0x3A7E5FB6
	nativeDecl void _0xD15C4B1C(Any p0) { invoke<Void>(0xD15C4B1C, p0); } // 0xD15C4B1C
	nativeDecl void _0xBF6993C7(Any p0) { invoke<Void>(0xBF6993C7, p0); } // 0xBF6993C7
	nativeDecl void _0x47CAB814() { invoke<Void>(0x47CAB814); } // 0x47CAB814
	nativeDecl BOOL CAN_PLAYER_START_MISSION(Any p0) { return invoke<BOOL>(0x39E3CB3F, p0); } // 0x39E3CB3F
	nativeDecl BOOL IS_PLAYER_READY_FOR_CUTSCENE(Any p0) { return invoke<BOOL>(0xBB77E9CD, p0); } // 0xBB77E9CD
	nativeDecl BOOL IS_PLAYER_TARGETTING_ENTITY(Player Player, Entity Entity) { return invoke<BOOL>(0xF3240B77, Player, Entity); } // 0xF3240B77
	nativeDecl Any GET_PLAYER_TARGET_ENTITY(Player player, Entity* entity) { return invoke<Any>(0xF6AAA2D7, player, entity); } // 0xF6AAA2D7
	nativeDecl BOOL IS_PLAYER_FREE_AIMING(Player player) { return invoke<BOOL>(0x1DEC67B7, player); } // 0x1DEC67B7
	nativeDecl BOOL IS_PLAYER_FREE_AIMING_AT_ENTITY(Player player, Entity entity) { return invoke<BOOL>(0x7D80EEAA, player, entity); } // 0x7D80EEAA
	nativeDecl BOOL _GET_AIMED_ENTITY(Player player, Entity* entity) { return invoke<BOOL>(0x8866D9D0, player, entity); } // 0x8866D9D0
	nativeDecl void _0x74D42C03(Any p0, Any p1) { invoke<Void>(0x74D42C03, p0, p1); } // 0x74D42C03
	nativeDecl void SET_PLAYER_CAN_DO_DRIVE_BY(Any p0, Any p1) { invoke<Void>(0xF4D99685, p0, p1); } // 0xF4D99685
	nativeDecl void SET_PLAYER_CAN_BE_HASSLED_BY_GANGS(Any p0, Any p1) { invoke<Void>(0x71B305BB, p0, p1); } // 0x71B305BB
	nativeDecl void SET_PLAYER_CAN_USE_COVER(Any p0, Any p1) { invoke<Void>(0x13CAFAFA, p0, p1); } // 0x13CAFAFA
	nativeDecl int GET_MAX_WANTED_LEVEL() { return invoke<int>(0x457F1E44); } // 0x457F1E44
	nativeDecl BOOL IS_PLAYER_TARGETTING_ANYTHING(Player player) { return invoke<BOOL>(0x456DB50D, player); } // 0x456DB50D
	nativeDecl void SET_PLAYER_SPRINT(Any p0, Any p1) { invoke<Void>(0x7DD7900C, p0, p1); } // 0x7DD7900C
	nativeDecl void RESET_PLAYER_STAMINA(Any Player) { invoke<Void>(0xC0445A9C, Player); } // 0xC0445A9C
	nativeDecl void RESTORE_PLAYER_STAMINA(Any p0, Any p1) { invoke<Void>(0x62A93608, p0, p1); } // 0x62A93608
	nativeDecl Any _0x47017C90(Any p0) { return invoke<Any>(0x47017C90, p0); } // 0x47017C90
	nativeDecl Any GET_PLAYER_SPRINT_TIME_REMAINING(Any p0) { return invoke<Any>(0x40E80543, p0); } // 0x40E80543
	nativeDecl Any GET_PLAYER_UNDERWATER_TIME_REMAINING(Any p0) { return invoke<Any>(0x1317125A, p0); } // 0x1317125A
	nativeDecl int GET_PLAYER_GROUP(Player Player) { return invoke<int>(0xA5EDCDE8, Player); } // 0xA5EDCDE8
	nativeDecl Any GET_PLAYER_MAX_ARMOUR(Player Player) { return invoke<Any>(0x02A50657, Player); } // 0x02A50657
	nativeDecl BOOL IS_PLAYER_CONTROL_ON(Player Player) { return invoke<BOOL>(0x618857F2, Player); } // 0x618857F2
	nativeDecl BOOL IS_PLAYER_SCRIPT_CONTROL_ON(Any p0) { return invoke<BOOL>(0x61B00A84, p0); } // 0x61B00A84
	nativeDecl BOOL IS_PLAYER_CLIMBING(Any p0) { return invoke<BOOL>(0x4A9E9AE0, p0); } // 0x4A9E9AE0
	nativeDecl BOOL IS_PLAYER_BEING_ARRESTED(Any p0, Any p1) { return invoke<BOOL>(0x7F6A60D3, p0, p1); } // 0x7F6A60D3
	nativeDecl void _0x453C7CAB(Any p0) { invoke<Void>(0x453C7CAB, p0); } // 0x453C7CAB
	nativeDecl Any GET_PLAYERS_LAST_VEHICLE() { return invoke<Any>(0xE2757AC1); } // 0xE2757AC1
	nativeDecl Any GET_PLAYER_INDEX() { return invoke<Any>(0x309BBDC1); } // 0x309BBDC1
	nativeDecl Any INT_TO_PLAYERINDEX(Any p0) { return invoke<Any>(0x98DD98F1, p0); } // 0x98DD98F1
	nativeDecl Any _0x98F3B274(Any p0) { return invoke<Any>(0x98F3B274, p0); } // 0x98F3B274
	nativeDecl Any GET_TIME_SINCE_PLAYER_HIT_VEHICLE(Any p0) { return invoke<Any>(0x6E9B8B9E, p0); } // 0x6E9B8B9E
	nativeDecl Any GET_TIME_SINCE_PLAYER_HIT_PED(Any p0) { return invoke<Any>(0xB6209195, p0); } // 0xB6209195
	nativeDecl Any GET_TIME_SINCE_PLAYER_DROVE_ON_PAVEMENT(Any p0) { return invoke<Any>(0x8836E732, p0); } // 0x8836E732
	nativeDecl float GET_TIME_SINCE_PLAYER_DROVE_AGAINST_TRAFFIC(float time) { return invoke<float>(0x9F27D00E, time); } // 0x9F27D00E
	nativeDecl BOOL IS_PLAYER_FREE_FOR_AMBIENT_TASK(Any p0) { return invoke<BOOL>(0x85C7E232, p0); } // 0x85C7E232
	nativeDecl Any PLAYER_ID() { return invoke<Any>(0x8AEA886C); } // 0x8AEA886C
	nativeDecl Any PLAYER_PED_ID() { return invoke<Any>(0xFA92E226); } // 0xFA92E226
	nativeDecl Any _0x8DD5B838() { return invoke<Any>(0x8DD5B838); } // 0x8DD5B838
	nativeDecl Any _0x4B37333C(Any p0) { return invoke<Any>(0x4B37333C, p0); } // 0x4B37333C
	nativeDecl void FORCE_CLEANUP(Any p0) { invoke<Void>(0xFDAAEA2B, p0); } // 0xFDAAEA2B
	nativeDecl void _0x04256C73(Any p0, Any p1) { invoke<Void>(0x04256C73, p0, p1); } // 0x04256C73
	nativeDecl void _0x882D3EB3(Any p0, Any p1) { invoke<Void>(0x882D3EB3, p0, p1); } // 0x882D3EB3
	nativeDecl Any _0x39AA9FC8() { return invoke<Any>(0x39AA9FC8); } // 0x39AA9FC8
	nativeDecl void SET_PLAYER_MAY_ONLY_ENTER_THIS_VEHICLE(Any p0, Any p1) { invoke<Void>(0xA454DD29, p0, p1); } // 0xA454DD29
	nativeDecl void _0xAF7AFCC4(Any p0) { invoke<Void>(0xAF7AFCC4, p0); } // 0xAF7AFCC4
	nativeDecl Any GIVE_ACHIEVEMENT_TO_PLAYER(int achievement) { return invoke<Any>(0x822BC992, achievement); } // 0x822BC992
	nativeDecl BOOL HAS_ACHIEVEMENT_BEEN_PASSED(int achievement) { return invoke<BOOL>(0x136A5BE9, achievement); } // 0x136A5BE9
	nativeDecl BOOL IS_PLAYER_ONLINE() { return invoke<BOOL>(0x9FAB6729); } // 0x9FAB6729
	nativeDecl BOOL IS_PLAYER_LOGGING_IN_NP() { return invoke<BOOL>(0x8F72FAD0); } // 0x8F72FAD0
	nativeDecl void DISPLAY_SYSTEM_SIGNIN_UI(Any p0) { invoke<Void>(0x4264CED2, p0); } // 0x4264CED2
	nativeDecl BOOL IS_SYSTEM_UI_BEING_DISPLAYED() { return invoke<BOOL>(0xE495B6DA); } // 0xE495B6DA
	nativeDecl void SET_PLAYER_INVINCIBLE(Player player, BOOL toggle) { invoke<Void>(0xDFB9A2A2, player, toggle); } // 0xDFB9A2A2
	nativeDecl Any GET_PLAYER_INVINCIBLE(Any p0) { return invoke<Any>(0x680C90EE, p0); } // 0x680C90EE
	nativeDecl void _0x00563E0D(Any p0, Any p1) { invoke<Void>(0x00563E0D, p0, p1); } // 0x00563E0D
	nativeDecl void REMOVE_PLAYER_HELMET(Player player, BOOL p2) { invoke<Void>(0x6255F3B4, player, p2); } // 0x6255F3B4
	nativeDecl void GIVE_PLAYER_RAGDOLL_CONTROL(Any p0, Any p1) { invoke<Void>(0xC7B4D7AC, p0, p1); } // 0xC7B4D7AC
	nativeDecl void SET_PLAYER_LOCKON(Any p0, Any p1) { invoke<Void>(0x0B270E0F, p0, p1); } // 0x0B270E0F
	nativeDecl void SET_PLAYER_TARGETING_MODE(Any Player) { invoke<Void>(0x61CAE253, Player); } // 0x61CAE253
	nativeDecl void CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(Any p0) { invoke<Void>(0x1D31CBBD, p0); } // 0x1D31CBBD
	nativeDecl BOOL HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(Any p0) { return invoke<BOOL>(0x14F52453, p0); } // 0x14F52453
	nativeDecl void _0x7E3BFBC5(Any p0) { invoke<Void>(0x7E3BFBC5, p0); } // 0x7E3BFBC5
	nativeDecl Any _0xA3707DFC(Any p0) { return invoke<Any>(0xA3707DFC, p0); } // 0xA3707DFC
	nativeDecl void SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(Any p0, Any p1) { invoke<Void>(0xF20F72E5, p0, p1); } // 0xF20F72E5
	nativeDecl void _0xB986FF47(Any p0, Any p1) { invoke<Void>(0xB986FF47, p0, p1); } // 0xB986FF47
	nativeDecl void _0x825423C2(Any p0, float p1) { invoke<Void>(0x825423C2, p0, p1); } // 0x825423C2
	nativeDecl Any GET_TIME_SINCE_LAST_ARREST() { return invoke<Any>(0x62824EF4); } // 0x62824EF4
	nativeDecl Any GET_TIME_SINCE_LAST_DEATH() { return invoke<Any>(0x24BC5AC0); } // 0x24BC5AC0
	nativeDecl void ASSISTED_MOVEMENT_CLOSE_ROUTE() { invoke<Void>(0xF23277F3); } // 0xF23277F3
	nativeDecl void ASSISTED_MOVEMENT_FLUSH_ROUTE() { invoke<Void>(0xD04568B9); } // 0xD04568B9
	nativeDecl void SET_PLAYER_FORCED_AIM(Player p0, BOOL p1) { invoke<Void>(0x94E42E2E, p0, p1); } // 0x94E42E2E
	nativeDecl void SET_PLAYER_FORCED_ZOOM(Any p0, Any p1) { invoke<Void>(0xB0C576CB, p0, p1); } // 0xB0C576CB
	nativeDecl void _0x374F42F0(Any p0, Any p1) { invoke<Void>(0x374F42F0, p0, p1); } // 0x374F42F0
	nativeDecl void DISABLE_PLAYER_FIRING(Player Player, BOOL Toggle) { invoke<Void>(0x30CB28CB, Player, Toggle); } // 0x30CB28CB
	nativeDecl void _0xCCD937E7(Any p0, Any p1) { invoke<Void>(0xCCD937E7, p0, p1); } // 0xCCD937E7
	nativeDecl void SET_PLAYER_MAX_ARMOUR(Player Player, BOOL Toggle) { invoke<Void>(0xC6C3C53B, Player, Toggle); } // 0xC6C3C53B
	nativeDecl void SPECIAL_ABILITY_DEACTIVATE(Any p0) { invoke<Void>(0x80C2AB09, p0); } // 0x80C2AB09
	nativeDecl void _0x0751908A(Any p0) { invoke<Void>(0x0751908A, p0); } // 0x0751908A
	nativeDecl void SPECIAL_ABILITY_RESET(Any p0) { invoke<Void>(0xA7D8BCD3, p0); } // 0xA7D8BCD3
	nativeDecl void _0x4136829A(Any p0) { invoke<Void>(0x4136829A, p0); } // 0x4136829A
	nativeDecl void _0x6F463F56(Any p0, Any p1, Any p2) { invoke<Void>(0x6F463F56, p0, p1, p2); } // 0x6F463F56
	nativeDecl void _0xAB55D8F3(Any p0, Any p1, Any p2) { invoke<Void>(0xAB55D8F3, p0, p1, p2); } // 0xAB55D8F3
	nativeDecl void _0xF440C04D(Any p0, Any p1, Any p2) { invoke<Void>(0xF440C04D, p0, p1, p2); } // 0xF440C04D
	nativeDecl void _0x5FEE98A2(Any p0, Any p1) { invoke<Void>(0x5FEE98A2, p0, p1); } // 0x5FEE98A2
	nativeDecl void _0x72429998(Any p0, Any p1, Any p2) { invoke<Void>(0x72429998, p0, p1, p2); } // 0x72429998
	nativeDecl void RESET_SPECIAL_ABILITY_CONTROLS_CINEMATIC(Any p0, Any p1, Any p2) { invoke<Void>(0x8C7E68C1, p0, p1, p2); } // 0x8C7E68C1
	nativeDecl void _0xB71589DA(Any p0, Any p1) { invoke<Void>(0xB71589DA, p0, p1); } // 0xB71589DA
	nativeDecl void _0x9F80F6DF(Any p0, Any p1) { invoke<Void>(0x9F80F6DF, p0, p1); } // 0x9F80F6DF
	nativeDecl void SPECIAL_ABILITY_LOCK(Any p0) { invoke<Void>(0x1B7BB388, p0); } // 0x1B7BB388
	nativeDecl void SPECIAL_ABILITY_UNLOCK(Any p0) { invoke<Void>(0x1FDB2919, p0); } // 0x1FDB2919
	nativeDecl BOOL IS_SPECIAL_ABILITY_UNLOCKED(Any p0) { return invoke<BOOL>(0xC9C75E82, p0); } // 0xC9C75E82
	nativeDecl BOOL IS_SPECIAL_ABILITY_ACTIVE(Any p0) { return invoke<BOOL>(0x1B17E334, p0); } // 0x1B17E334
	nativeDecl BOOL IS_SPECIAL_ABILITY_METER_FULL(Any p0) { return invoke<BOOL>(0x2E19D7F6, p0); } // 0x2E19D7F6
	nativeDecl void ENABLE_SPECIAL_ABILITY(Any p0, Any p1) { invoke<Void>(0xC86C1B4E, p0, p1); } // 0xC86C1B4E
	nativeDecl BOOL IS_SPECIAL_ABILITY_ENABLED(Any p0) { return invoke<BOOL>(0xC01238CC, p0); } // 0xC01238CC
	nativeDecl void SET_SPECIAL_ABILITY_MULTIPLIER(Any p0) { invoke<Void>(0xFF1BC556, p0); } // 0xFF1BC556
	nativeDecl void _0x5D0FE25B(Any p0) { invoke<Void>(0x5D0FE25B, p0); } // 0x5D0FE25B
	nativeDecl Any _0x46E7E31D(Any p0) { return invoke<Any>(0x46E7E31D, p0); } // 0x46E7E31D
	nativeDecl Any _0x1E359CC8(Any p0, Any p1) { return invoke<Any>(0x1E359CC8, p0, p1); } // 0x1E359CC8
	nativeDecl Any _0x8CB53C9F(Any p0, Any p1) { return invoke<Any>(0x8CB53C9F, p0, p1); } // 0x8CB53C9F
	nativeDecl void START_PLAYER_TELEPORT(Any p0, float p1, float p2, float p3, float p4, Any p5, Any p6, Any p7) { invoke<Void>(0xC552E06C, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xC552E06C
	nativeDecl void STOP_PLAYER_TELEPORT() { invoke<Void>(0x86AB8DBB); } // 0x86AB8DBB
	nativeDecl BOOL IS_PLAYER_TELEPORT_ACTIVE() { return invoke<BOOL>(0x3A11D118); } // 0x3A11D118
	nativeDecl float GET_PLAYER_CURRENT_STEALTH_NOISE(Vehicle* p0) { return invoke<float>(0xC3B02362, p0); } // 0xC3B02362
	nativeDecl void _0x45514731(Any p0, Any p1) { invoke<Void>(0x45514731, p0, p1); } // 0x45514731
	nativeDecl void SET_PLAYER_WEAPON_DAMAGE_MODIFIER(Player player, float DamageAmount) { invoke<Void>(0xB02C2F39, player, DamageAmount); } // 0xB02C2F39
	nativeDecl void _0xAE446344(Player player, float multiplier) { invoke<Void>(0xAE446344, player, multiplier); } // 0xAE446344
	nativeDecl void _0x362E69AD(Any p0, Any p1) { invoke<Void>(0x362E69AD, p0, p1); } // 0x362E69AD
	nativeDecl void _0x9F3D577F(Any p0, Any p1) { invoke<Void>(0x9F3D577F, p0, p1); } // 0x9F3D577F
	nativeDecl void SET_PLAYER_VEHICLE_DAMAGE_MODIFIER(Player Player, float DamageAmount) { invoke<Void>(0x823ECA63, Player, DamageAmount); } // 0x823ECA63
	nativeDecl void _0xA16626C7(Any p0, Any p1) { invoke<Void>(0xA16626C7, p0, p1); } // 0xA16626C7
	nativeDecl void SET_PLAYER_PARACHUTE_TINT_INDEX(Any p0, Any p1) { invoke<Void>(0x8EA12EDB, p0, p1); } // 0x8EA12EDB
	nativeDecl void GET_PLAYER_PARACHUTE_TINT_INDEX(Any p0, Any p1) { invoke<Void>(0x432B0509, p0, p1); } // 0x432B0509
	nativeDecl void _0x70689638(Any p0, Any p1) { invoke<Void>(0x70689638, p0, p1); } // 0x70689638
	nativeDecl void _0x77B8EF01(Any p0, Any p1) { invoke<Void>(0x77B8EF01, p0, p1); } // 0x77B8EF01
	nativeDecl void SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(Any p0, Any p1) { invoke<Void>(0xD79D5D1B, p0, p1); } // 0xD79D5D1B
	nativeDecl void _0x4E418E13(Any p0, Any p1) { invoke<Void>(0x4E418E13, p0, p1); } // 0x4E418E13
	nativeDecl void _0xA3E4798E(Any p0) { invoke<Void>(0xA3E4798E, p0); } // 0xA3E4798E
	nativeDecl Any _0x30DA1DA1(Any p0) { return invoke<Any>(0x30DA1DA1, p0); } // 0x30DA1DA1
	nativeDecl void _0x832DEB7A(Any p0, Any p1) { invoke<Void>(0x832DEB7A, p0, p1); } // 0x832DEB7A
	nativeDecl void _0x14FE9264(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x14FE9264, p0, p1, p2, p3); } // 0x14FE9264
	nativeDecl void _0xF66E5CDD(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF66E5CDD, p0, p1, p2, p3); } // 0xF66E5CDD
	nativeDecl void _0x725C6174(Any p0, Any p1) { invoke<Void>(0x725C6174, p0, p1); } // 0x725C6174
	nativeDecl void _0xF8A62EFC(Any p0, Any p1) { invoke<Void>(0xF8A62EFC, p0, p1); } // 0xF8A62EFC
	nativeDecl void SET_PLAYER_NOISE_MULTIPLIER(Player Player, float Multipliyer) { invoke<Void>(0x15786DD1, Player, Multipliyer); } // 0x15786DD1
	nativeDecl void _0x8D2D89C4(Any p0, Any p1) { invoke<Void>(0x8D2D89C4, p0, p1); } // 0x8D2D89C4
	nativeDecl Any _0x1C70B2EB(Any p0, Any p1) { return invoke<Any>(0x1C70B2EB, p0, p1); } // 0x1C70B2EB
	nativeDecl void SIMULATE_PLAYER_INPUT_GAIT(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x0D77CC34, p0, p1, p2, p3, p4, p5); } // 0x0D77CC34
	nativeDecl void RESET_PLAYER_INPUT_GAIT(Any p0) { invoke<Void>(0x4A701EE1, p0); } // 0x4A701EE1
	nativeDecl void _0xA97C2059(Any p0, Any p1) { invoke<Void>(0xA97C2059, p0, p1); } // 0xA97C2059
	nativeDecl void _0xA25D767E(Any p0, Any p1) { invoke<Void>(0xA25D767E, p0, p1); } // 0xA25D767E
	nativeDecl void _0x3D26105F(Any p0, Any p1) { invoke<Void>(0x3D26105F, p0, p1); } // 0x3D26105F
	nativeDecl Any _0x1D371529(Any p0) { return invoke<Any>(0x1D371529, p0); } // 0x1D371529
	nativeDecl void _0xE30A64DC(Any p0) { invoke<Void>(0xE30A64DC, p0); } // 0xE30A64DC
	nativeDecl void SET_PLAYER_SIMULATE_AIMING(Any p0, Any p1) { invoke<Void>(0xF1E0CAFC, p0, p1); } // 0xF1E0CAFC
	nativeDecl void _0xF7A0F00F(Any p0, Any p1) { invoke<Void>(0xF7A0F00F, p0, p1); } // 0xF7A0F00F
	nativeDecl void _0xB8209F16(Any p0) { invoke<Void>(0xB8209F16, p0); } // 0xB8209F16
	nativeDecl void _0x8D9FD4D1(Any p0) { invoke<Void>(0x8D9FD4D1, p0); } // 0x8D9FD4D1
	nativeDecl void _0xECD12E60(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0xECD12E60, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xECD12E60
	nativeDecl void _0x96100EA4() { invoke<Void>(0x96100EA4); } // 0x96100EA4
	nativeDecl Any _0x4A01B76A(Any p0) { return invoke<Any>(0x4A01B76A, p0); } // 0x4A01B76A
	nativeDecl Any _0x013B4F72(Any p0) { return invoke<Any>(0x013B4F72, p0); } // 0x013B4F72
	nativeDecl Any _0x9DF75B2A(Any p0, Any p1, Any p2) { return invoke<Any>(0x9DF75B2A, p0, p1, p2); } // 0x9DF75B2A
	nativeDecl void _0x64DDB07D(Any p0, Any p1, Any p2) { invoke<Void>(0x64DDB07D, p0, p1, p2); } // 0x64DDB07D
	nativeDecl void _0xA97C2F6C() { invoke<Void>(0xA97C2F6C); } // 0xA97C2F6C
	nativeDecl BOOL IS_PLAYER_RIDING_TRAIN(Player Player) { return invoke<BOOL>(0x9765E71D, Player); } // 0x9765E71D
	nativeDecl Any _0xFEA40B6C(Any p0) { return invoke<Any>(0xFEA40B6C, p0); } // 0xFEA40B6C
	nativeDecl void _0xAD8383FA(Any p0, Any p1) { invoke<Void>(0xAD8383FA, p0, p1); } // 0xAD8383FA
	nativeDecl void _0x9254249D(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x9254249D, p0, p1, p2, p3, p4); } // 0x9254249D
	nativeDecl void _0xFD60F5AB(Any p0) { invoke<Void>(0xFD60F5AB, p0); } // 0xFD60F5AB
	nativeDecl void _0x5D382498(Any p0, Any p1) { invoke<Void>(0x5D382498, p0, p1); } // 0x5D382498
	nativeDecl void _0x6FF034BB(Any p0) { invoke<Void>(0x6FF034BB, p0); } // 0x6FF034BB
	nativeDecl void _0xA877FF5E(Any p0, Any p1) { invoke<Void>(0xA877FF5E, p0, p1); } // 0xA877FF5E
	nativeDecl void _0xBB62AAC5(Any p0) { invoke<Void>(0xBB62AAC5, p0); } // 0xBB62AAC5
	nativeDecl void _0x8C6E611D(Any p0) { invoke<Void>(0x8C6E611D, p0); } // 0x8C6E611D
	nativeDecl void _0x2849D4B2(Any p0) { invoke<Void>(0x2849D4B2, p0); } // 0x2849D4B2
}

namespace ENTITY
{
	nativeDecl void SET_ENTITY_COLLISION1(Entity entity, BOOL p1) { invoke<Void>(0x139FD37D, entity, p1); } // 0x139FD37D
	nativeDecl BOOL DOES_ENTITY_EXIST(Entity entity) { return invoke<BOOL>(0x3AC90869, entity); } // 0x3AC90869
	nativeDecl Any _0xACFEB3F9(Any p0, Any p1) { return invoke<Any>(0xACFEB3F9, p0, p1); } // 0xACFEB3F9
	nativeDecl BOOL DOES_ENTITY_HAVE_DRAWABLE(Entity Entity) { return invoke<BOOL>(0xA5B33300, Entity); } // 0xA5B33300
	nativeDecl BOOL DOES_ENTITY_HAVE_PHYSICS(Entity Entity) { return invoke<BOOL>(0x9BCD2979, Entity); } // 0x9BCD2979
	nativeDecl BOOL HAS_ENTITY_ANIM_FINISHED(Any p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0x1D9CAB92, p0, p1, p2, p3); } // 0x1D9CAB92
	nativeDecl BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(Entity Entity) { return invoke<BOOL>(0x6B74582E, Entity); } // 0x6B74582E
	nativeDecl BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Entity Entity) { return invoke<BOOL>(0x53FD4A25, Entity); } // 0x53FD4A25
	nativeDecl BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Entity Entity) { return invoke<BOOL>(0x878C2CE0, Entity); } // 0x878C2CE0
	nativeDecl BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Any p0, Any p1, Any p2) { return invoke<BOOL>(0x07FC77E0, p0, p1, p2); } // 0x07FC77E0
	nativeDecl BOOL HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Any p0, Any p1, Any p2) { return invoke<BOOL>(0x53576FA7, p0, p1, p2); } // 0x53576FA7
	nativeDecl BOOL HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Any p0, Any p1) { return invoke<BOOL>(0x210D87C8, p0, p1); } // 0x210D87C8
	nativeDecl BOOL HAS_ENTITY_COLLIDED_WITH_ANYTHING(Entity Entity) { return invoke<BOOL>(0x662A2F41, Entity); } // 0x662A2F41
	nativeDecl Any _0xC0E3AA47(Any p0) { return invoke<Any>(0xC0E3AA47, p0); } // 0xC0E3AA47
	nativeDecl Vector3 _0xAB415C07(Any p0) { return invoke<Vector3>(0xAB415C07, p0); } // 0xAB415C07
	nativeDecl void _0x58D9775F(Any p0) { invoke<Void>(0x58D9775F, p0); } // 0x58D9775F
	nativeDecl Any GET_ENTITY_ANIM_CURRENT_TIME(Any p0, Any p1, Any p2) { return invoke<Any>(0x83943F41, p0, p1, p2); } // 0x83943F41
	nativeDecl Any GET_ENTITY_ANIM_TOTAL_TIME(Any p0, Any p1, Any p2) { return invoke<Any>(0x433A9D18, p0, p1, p2); } // 0x433A9D18
	nativeDecl Entity GET_ENTITY_ATTACHED_TO(Entity Entity) { return invoke<Any>(0xFE1589F9, Entity); } // 0xFE1589F9
	nativeDecl Vector3 GET_ENTITY_COORDS(Entity entity, BOOL unkBool) { return invoke<Vector3>(0x1647F1CB, entity, unkBool); } // 0x1647F1CB
	nativeDecl Vector3 GET_ENTITY_FORWARD_VECTOR(Entity entity) { return invoke<Vector3>(0x84DCECBF, entity); } // 0x84DCECBF
	nativeDecl Any GET_ENTITY_FORWARD_X(Entity Entity) { return invoke<Any>(0x49FAE914, Entity); } // 0x49FAE914
	nativeDecl Any GET_ENTITY_FORWARD_Y(Entity Entity) { return invoke<Any>(0x9E2F917C, Entity); } // 0x9E2F917C
	nativeDecl float GET_ENTITY_HEADING(Entity Entity) { return invoke<float>(0x972CC383, Entity); } // 0x972CC383
	nativeDecl Any GET_ENTITY_HEALTH(Entity Entity) { return invoke<Any>(0x8E3222B7, Entity); } // 0x8E3222B7
	nativeDecl Any GET_ENTITY_MAX_HEALTH(Entity Entity) { return invoke<Any>(0xC7AE6AA1, Entity); } // 0xC7AE6AA1
	nativeDecl void SET_ENTITY_MAX_HEALTH(Entity Entity, BOOL Toggle) { invoke<Void>(0x96F84DF8, Entity, Toggle); } // 0x96F84DF8
	nativeDecl Any GET_ENTITY_HEIGHT(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0xEE443481, p0, p1, p2, p3, p4, p5); } // 0xEE443481
	nativeDecl Any GET_ENTITY_HEIGHT_ABOVE_GROUND(Entity Entity) { return invoke<Any>(0x57F56A4D, Entity); } // 0x57F56A4D
	nativeDecl void GET_ENTITY_MATRIX(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xEB9EB001, p0, p1, p2, p3, p4); } // 0xEB9EB001
	nativeDecl Any GET_ENTITY_MODEL(Entity Entity) { return invoke<Any>(0xDAFCB3EC, Entity); } // 0xDAFCB3EC
	nativeDecl Vector3 GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Any p0, float p1, float p2, float p3) { return invoke<Vector3>(0x6477EC9E, p0, p1, p2, p3); } // 0x6477EC9E
	nativeDecl Vector3 GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Entity Entity, float xCoord, float yCoord, float zCoord) { return invoke<Vector3>(0xABCF043A, Entity, xCoord, yCoord, zCoord); } // 0xABCF043A
	nativeDecl float GET_ENTITY_PITCH(Entity Entity) { return invoke<float>(0xFCE6ECE5, Entity); } // 0xFCE6ECE5
	nativeDecl void GET_ENTITY_QUATERNION(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x5154EC90, p0, p1, p2, p3, p4); } // 0x5154EC90
	nativeDecl float GET_ENTITY_ROLL(Entity Entity) { return invoke<float>(0x36610842, Entity); } // 0x36610842
	nativeDecl Vector3 GET_ENTITY_ROTATION(Any p0, Any p1) { return invoke<Vector3>(0x8FF45B04, p0, p1); } // 0x8FF45B04
	nativeDecl Vector3 GET_ENTITY_ROTATION_VELOCITY(Any p0) { return invoke<Vector3>(0x9BF8A73F, p0); } // 0x9BF8A73F
	nativeDecl Any GET_ENTITY_SCRIPT(Any p0, Any p1) { return invoke<Any>(0xB7F70784, p0, p1); } // 0xB7F70784
	nativeDecl float GET_ENTITY_SPEED(Entity entity) { return invoke<float>(0x9E1E4798, entity); } // 0x9E1E4798
	nativeDecl Vector3 GET_ENTITY_SPEED_VECTOR(Any p0, Any p1) { return invoke<Vector3>(0x3ED2B997, p0, p1); } // 0x3ED2B997
	nativeDecl Any GET_ENTITY_UPRIGHT_VALUE(Any p0) { return invoke<Any>(0xF4268190, p0); } // 0xF4268190
	nativeDecl Vector3 GET_ENTITY_VELOCITY(Entity entity) { return invoke<Vector3>(0xC14C9B6B, entity); } // 0xC14C9B6B
	nativeDecl Any _0xBC5A9C58(Any p0) { return invoke<Any>(0xBC5A9C58, p0); } // 0xBC5A9C58
	nativeDecl Any _0xC46F74AC(Any p0) { return invoke<Any>(0xC46F74AC, p0); } // 0xC46F74AC
	nativeDecl Any _0xC69CF43D(Any p0) { return invoke<Any>(0xC69CF43D, p0); } // 0xC69CF43D
	nativeDecl Vector3 _0x7C6339DF(Any p0, Any p1) { return invoke<Vector3>(0x7C6339DF, p0, p1); } // 0x7C6339DF
	nativeDecl Any GET_NEAREST_PLAYER_TO_ENTITY(Entity Entity) { return invoke<Any>(0xCE17FDEC, Entity); } // 0xCE17FDEC
	nativeDecl Any _0xB1808F56(Any p0, Any p1) { return invoke<Any>(0xB1808F56, p0, p1); } // 0xB1808F56
	nativeDecl int GET_ENTITY_TYPE(Entity Entity) { return invoke<int>(0x0B1BD08D, Entity); } // 0x0B1BD08D
	nativeDecl BOOL IS_AN_ENTITY(Entity Entity) { return invoke<BOOL>(0xD4B9715A, Entity); } // 0xD4B9715A
	nativeDecl BOOL IS_ENTITY_A_PED(Entity Entity) { return invoke<BOOL>(0x55D33EAB, Entity); } // 0x55D33EAB
	nativeDecl BOOL IS_ENTITY_A_MISSION_ENTITY(Entity Entity) { return invoke<BOOL>(0x2632E124, Entity); } // 0x2632E124
	nativeDecl BOOL IS_ENTITY_A_VEHICLE(Entity Entity) { return invoke<BOOL>(0xBE800B01, Entity); } // 0xBE800B01
	nativeDecl BOOL IS_ENTITY_AN_OBJECT(Any p0) { return invoke<BOOL>(0x3F52E561, p0); } // 0x3F52E561
	nativeDecl BOOL IS_ENTITY_AT_COORD(Entity entity, float x, float y, float z, float xSize, float ySize, float zSize, int p7, int p8, int p9) { return invoke<BOOL>(0xD749B606, entity, x, y, z, xSize, ySize, zSize, p7, p8, p9); } // 0xD749B606
	nativeDecl BOOL IS_ENTITY_AT_ENTITY(Entity entity1, Entity entity2, float xSize, float ySize, float zSize, int p5, int p6, int p7) { return invoke<BOOL>(0xDABDCB52, entity1, entity2, xSize, ySize, zSize, p5, p6, p7); } // 0xDABDCB52
	nativeDecl BOOL IS_ENTITY_ATTACHED(Any p0) { return invoke<BOOL>(0xEC1479D5, p0); } // 0xEC1479D5
	nativeDecl BOOL IS_ENTITY_ATTACHED_TO_ANY_OBJECT(Any p0) { return invoke<BOOL>(0x0B5DE340, p0); } // 0x0B5DE340
	nativeDecl BOOL IS_ENTITY_ATTACHED_TO_ANY_PED(Any p0) { return invoke<BOOL>(0x9D7A609C, p0); } // 0x9D7A609C
	nativeDecl BOOL IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(Any p0) { return invoke<BOOL>(0xDE5C995E, p0); } // 0xDE5C995E
	nativeDecl BOOL IS_ENTITY_ATTACHED_TO_ENTITY(Any p0, Any p1) { return invoke<BOOL>(0xB0ABFEA8, p0, p1); } // 0xB0ABFEA8
	nativeDecl BOOL IS_ENTITY_DEAD(Entity entity) { return invoke<BOOL>(0xB6F7CBAC, entity); } // 0xB6F7CBAC
	nativeDecl BOOL IS_ENTITY_IN_AIR(Entity entity) { return invoke<BOOL>(0xA4157987, entity); } // 0xA4157987
	nativeDecl BOOL IS_ENTITY_IN_ANGLED_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { return invoke<BOOL>(0x883622FA, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x883622FA
	nativeDecl BOOL IS_ENTITY_IN_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return invoke<BOOL>(0x8C2DFA9D, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x8C2DFA9D
	nativeDecl BOOL IS_ENTITY_IN_ZONE(Any p0, Any p1) { return invoke<BOOL>(0x45C82B21, p0, p1); } // 0x45C82B21
	nativeDecl BOOL IS_ENTITY_IN_WATER(Entity entity) { return invoke<BOOL>(0x4C3C2508, entity); } // 0x4C3C2508
	nativeDecl Any _0x0170F68C(Any p0) { return invoke<Any>(0x0170F68C, p0); } // 0x0170F68C
	nativeDecl void _0x40C84A74(Any p0, Any p1) { invoke<Void>(0x40C84A74, p0, p1); } // 0x40C84A74
	nativeDecl BOOL IS_ENTITY_ON_SCREEN(Any p0) { return invoke<BOOL>(0xC1FEC5ED, p0); } // 0xC1FEC5ED
	nativeDecl BOOL IS_ENTITY_PLAYING_ANIM(Any p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0x0D130D34, p0, p1, p2, p3); } // 0x0D130D34
	nativeDecl BOOL IS_ENTITY_STATIC(Any p0) { return invoke<BOOL>(0x928E12E9, p0); } // 0x928E12E9
	nativeDecl BOOL IS_ENTITY_TOUCHING_ENTITY(Entity p0, Entity p1) { return invoke<BOOL>(0x6B931477, p0, p1); } // 0x6B931477
	nativeDecl Any _0x307E7611(Any p0, Any p1) { return invoke<Any>(0x307E7611, p0, p1); } // 0x307E7611
	nativeDecl BOOL IS_ENTITY_UPRIGHT(Any p0, Any p1) { return invoke<BOOL>(0x3BCDF4E1, p0, p1); } // 0x3BCDF4E1
	nativeDecl BOOL IS_ENTITY_UPSIDEDOWN(Any p0) { return invoke<BOOL>(0x5ACAA48F, p0); } // 0x5ACAA48F
	nativeDecl BOOL IS_ENTITY_VISIBLE(Entity entity) { return invoke<BOOL>(0x120B4ED5, entity); } // 0x120B4ED5
	nativeDecl BOOL IS_ENTITY_VISIBLE_TO_SCRIPT(Any p0) { return invoke<BOOL>(0x5D240E9D, p0); } // 0x5D240E9D
	nativeDecl BOOL IS_ENTITY_OCCLUDED(Any p0) { return invoke<BOOL>(0x46BC5B40, p0); } // 0x46BC5B40
	nativeDecl Any _0xEA127CBC(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0xEA127CBC, p0, p1, p2, p3, p4); } // 0xEA127CBC
	nativeDecl BOOL IS_ENTITY_WAITING_FOR_WORLD_COLLISION(Any p0) { return invoke<BOOL>(0x00AB7A4A, p0); } // 0x00AB7A4A
	nativeDecl void _0x28924E98(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0x28924E98, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x28924E98
	nativeDecl void APPLY_FORCE_TO_ENTITY(Entity entity, BOOL p1, float Force_X, float Force_Y, float Force_Z, float Rot_X, float Rot_Y, float Rot_Z, BOOL p8, BOOL p9, BOOL p10, BOOL p11, int p12, BOOL p13) { invoke<Void>(0xC1C0855A, entity, p1, Force_X, Force_Y, Force_Z, Rot_X, Rot_Y, Rot_Z, p8, p9, p10, p11, p12, p13); } // 0xC1C0855A
	nativeDecl void ATTACH_ENTITY_TO_ENTITY(Entity entity1, Entity entity2, int boneIndex, float xPos, float yPos, float zPos, float xRot, float yRot, float zRot, BOOL p9, BOOL useSoftPinning, BOOL collision, BOOL isPed, int vertexIndex, BOOL fixedRot) { invoke<Void>(0xEC024237, entity1, entity2, boneIndex, xPos, yPos, zPos, xRot, yRot, zRot, p9, useSoftPinning, collision, isPed, vertexIndex, fixedRot); } // 0xEC024237
	nativeDecl void ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(Entity entity1, Entity entity2, float unknown1, float unknown2, float x1, float y1, float z1, float x2, float y2, float z2, float rot_x, float rot_y, float rot_z, Any unknown3, Any unknown4, Any unknown5, Any unknown6, Any unknown7, Any unknown8) { invoke<Void>(0x0547417F, entity1, entity2, unknown1, unknown2, x1, y1, z1, x2, y2, z2, rot_x, rot_y, rot_z, unknown3, unknown4, unknown5, unknown6, unknown7, unknown8); } // 0x0547417F
	nativeDecl void _0x6909BA59(Any p0) { invoke<Void>(0x6909BA59, p0); } // 0x6909BA59
	nativeDecl Any _0xE4ECAC22(Any p0, const char* p1) { return invoke<Any>(0xE4ECAC22, p0, p1); } // 0xE4ECAC22
	nativeDecl void CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Entity entity) { invoke<Void>(0x2B83F43B, entity); } // 0x2B83F43B
	nativeDecl void DELETE_ENTITY(Entity* EntityHandle, bool bypassOwnerCheck = false) { invoke<Void>(0xFAA3D236, EntityHandle); } // 0xFAA3D236
	nativeDecl void DETACH_ENTITY(Any p0, Any p1, Any p2) { invoke<Void>(0xC8EFCB41, p0, p1, p2); } // 0xC8EFCB41
	nativeDecl void FREEZE_ENTITY_POSITION(Entity entity, BOOL toggle) { invoke<Void>(0x65C16D57, entity, toggle); } // 0x65C16D57
	nativeDecl void SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Entity entity, BOOL toggle) { invoke<Void>(0xD3850671, entity, toggle); } // 0xD3850671
	nativeDecl Any PLAY_ENTITY_ANIM(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoke<Any>(0x878753D5, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x878753D5
	nativeDecl Any PLAY_SYNCHRONIZED_ENTITY_ANIM(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoke<Any>(0x012760AA, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x012760AA
	nativeDecl Any _0xEB4CBA74(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { return invoke<Any>(0xEB4CBA74, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0xEB4CBA74
	nativeDecl Any _0x7253D5B2(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0x7253D5B2, p0, p1, p2, p3, p4, p5); } // 0x7253D5B2
	nativeDecl Any STOP_ENTITY_ANIM(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0xC4769830, p0, p1, p2, p3); } // 0xC4769830
	nativeDecl Any STOP_SYNCHRONIZED_ENTITY_ANIM(Any p0, Any p1, Any p2) { return invoke<Any>(0xE27D2FC1, p0, p1, p2); } // 0xE27D2FC1
	nativeDecl Any _0x66571CA0(Any p0, Any p1) { return invoke<Any>(0x66571CA0, p0, p1); } // 0x66571CA0
	nativeDecl Any _0xC41DDA62(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0xC41DDA62, p0, p1, p2, p3, p4); } // 0xC41DDA62
	nativeDecl void SET_ENTITY_ANIM_CURRENT_TIME(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x99D90735, p0, p1, p2, p3); } // 0x99D90735
	nativeDecl void SET_ENTITY_ANIM_SPEED(int p0, const char* p1, const char* p2, float p3) { invoke<Void>(0x3990C90A, p0, p1, p2, p3); } // 0x3990C90A
	nativeDecl void SET_ENTITY_AS_MISSION_ENTITY(Entity entityHandle, BOOL value, BOOL p2) { invoke<Void>(0x5D1F9E0F, entityHandle, value, p2); } // 0x5D1F9E0F
	nativeDecl void SET_ENTITY_AS_NO_LONGER_NEEDED(Entity* entityHandle) { invoke<Void>(0xADF2267C, entityHandle); } // 0xADF2267C
	nativeDecl void SET_PED_AS_NO_LONGER_NEEDED(Ped* pedHandle) { invoke<Void>(0x9A388380, pedHandle); } // 0x9A388380
	nativeDecl void SET_VEHICLE_AS_NO_LONGER_NEEDED(Vehicle* vehicleHandle) { invoke<Void>(0x9B0E10BE, vehicleHandle); } // 0x9B0E10BE
	nativeDecl void SET_OBJECT_AS_NO_LONGER_NEEDED(Object* objectHandle) { invoke<Void>(0x3F6B949F, objectHandle); } // 0x3F6B949F
	nativeDecl void SET_ENTITY_CAN_BE_DAMAGED(Entity Entity, BOOL Toggle) { invoke<Void>(0x60B6E744, Entity, Toggle); } // 0x60B6E744
	nativeDecl void SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Any p0, Any p1, Any p2) { invoke<Void>(0x34165B5D, p0, p1, p2); } // 0x34165B5D
	nativeDecl void SET_ENTITY_CAN_BE_TARGETED_WITHOUT_LOS(Any p0, Any p1) { invoke<Void>(0x3B13797C, p0, p1); } // 0x3B13797C
	nativeDecl void SET_ENTITY_COLLISION(Entity entity, BOOL p1, BOOL p2) { invoke<Void>(0x139FD37D, entity, p1, p2); } // 0x139FD37D
	nativeDecl BOOL _0xCCF1E97BEFDAE480(Entity entity) { return invoke<BOOL>(0xE8C0C629, entity); } // 0xCCF1E97BEFDAE480
	nativeDecl void SET_ENTITY_COORDS(Entity entity, float X, float Y, float Z, float XAxes, float YAxes, float ZAxes, BOOL unk) { invoke<Void>(0xDF70B41B, entity, X, Y, Z, XAxes, YAxes, ZAxes, unk); } // 0xDF70B41B
	nativeDecl void SET_ENTITY_COORDS_NO_OFFSET(Entity entity, float xCoord, float yCoord, float zCoord, BOOL p4, BOOL p5, BOOL p6) { invoke<Void>(0x4C83DE8D, entity, xCoord, yCoord, zCoord, p4, p5, p6); } // 0x4C83DE8D
	nativeDecl void SET_ENTITY_DYNAMIC(Entity entity, BOOL ToggleDynamics) { invoke<Void>(0x236F525B, entity, ToggleDynamics); } // 0x236F525B
	nativeDecl void SET_ENTITY_HEADING(Entity entity, float Heading) { invoke<Void>(0xE0FF064D, entity, Heading); } // 0xE0FF064D
	nativeDecl void SET_ENTITY_HEALTH(Entity entity, int Amount) { invoke<Void>(0xFBCD1831, entity, Amount); } // 0xFBCD1831
	nativeDecl void SET_ENTITY_INVINCIBLE(Entity entity, BOOL Toggle) { invoke<Void>(0xC1213A21, entity, Toggle); } // 0xC1213A21
	nativeDecl void SET_ENTITY_IS_TARGET_PRIORITY(Any p0, Any p1, Any p2) { invoke<Void>(0x9729EE32, p0, p1, p2); } // 0x9729EE32
	nativeDecl void SET_ENTITY_LIGHTS(Any p0, Any p1) { invoke<Void>(0xE8FC85AF, p0, p1); } // 0xE8FC85AF
	nativeDecl void SET_ENTITY_LOAD_COLLISION_FLAG(Entity entity, BOOL Toggle) { invoke<Void>(0xC52F295B, entity, Toggle); } // 0xC52F295B
	nativeDecl Any _0x851687F9(Any p0) { return invoke<Any>(0x851687F9, p0); } // 0x851687F9
	nativeDecl void SET_ENTITY_MAX_SPEED(Any p0, Any p1) { invoke<Void>(0x46AFFED3, p0, p1); } // 0x46AFFED3
	nativeDecl void SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Any p0, Any p1) { invoke<Void>(0x4B707F50, p0, p1); } // 0x4B707F50
	nativeDecl void SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(Any p0, Any p1, Any p2) { invoke<Void>(0x202237E2, p0, p1, p2); } // 0x202237E2
	nativeDecl void SET_ENTITY_PROOFS(Entity Entity, BOOL bulletProof, BOOL fireProof, BOOL explosionProof, BOOL collisionProof, BOOL meleeProof, Any p6, Any p7, Any p8) { invoke<Void>(0x7E9EAB66, Entity, bulletProof, fireProof, explosionProof, collisionProof, meleeProof, p6, p7, p8); } // 0x7E9EAB66
	nativeDecl void SET_ENTITY_QUATERNION(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x83B6046F, p0, p1, p2, p3, p4); } // 0x83B6046F
	nativeDecl void SET_ENTITY_RECORDS_COLLISIONS(Any p0, Any p1) { invoke<Void>(0x6B189A1A, p0, p1); } // 0x6B189A1A
	nativeDecl void SET_ENTITY_ROTATION(Entity entity, float Pitch, float Roll, float Yaw, Any p4, Any p5) { invoke<Void>(0x0A345EFE, entity, Pitch, Roll, Yaw, p4, p5); } // 0x0A345EFE
	nativeDecl void SET_ENTITY_VISIBLE(Entity entity, BOOL Toggle) { invoke<Void>(0xD043E8E1, entity, Toggle); } // 0xD043E8E1
	nativeDecl void SET_ENTITY_VELOCITY(Entity entity, float xVel, float yVel, float zVel) { invoke<Void>(0xFF5A1988, entity, xVel, yVel, zVel); } // 0xFF5A1988
	nativeDecl void SET_ENTITY_HAS_GRAVITY(Any p0, Any p1) { invoke<Void>(0xE2F262BF, p0, p1); } // 0xE2F262BF
	nativeDecl void SET_ENTITY_LOD_DIST(Entity entity, int Distance) { invoke<Void>(0xD7ACC7AD, entity, Distance); } // 0xD7ACC7AD
	nativeDecl Any _0x4DA3D51F(Any p0) { return invoke<Any>(0x4DA3D51F, p0); } // 0x4DA3D51F
	nativeDecl void SET_ENTITY_ALPHA(Entity entity, int AlphaLVL, Any p2) { invoke<Void>(0xAE667CB0, entity, AlphaLVL, p2); } // 0xAE667CB0
	nativeDecl Any GET_ENTITY_ALPHA(Entity entity) { return invoke<Any>(0x1560B017, entity); } // 0x1560B017
	nativeDecl void RESET_ENTITY_ALPHA(Entity entity) { invoke<Void>(0x8A30761C, entity); } // 0x8A30761C
	nativeDecl void _0xD8FF798A(Any p0, Any p1) { invoke<Void>(0xD8FF798A, p0, p1); } // 0xD8FF798A
	nativeDecl void SET_ENTITY_RENDER_SCORCHED(Any p0, Any p1) { invoke<Void>(0xAAC9317B, p0, p1); } // 0xAAC9317B
	nativeDecl void _0xC47F5B91(Any p0, Any p1) { invoke<Void>(0xC47F5B91, p0, p1); } // 0xC47F5B91
	nativeDecl void CREATE_MODEL_SWAP(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x0BC12F9E, p0, p1, p2, p3, p4, p5, p6); } // 0x0BC12F9E
	nativeDecl void REMOVE_MODEL_SWAP(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0xCE0AA8BC, p0, p1, p2, p3, p4, p5, p6); } // 0xCE0AA8BC
	nativeDecl void CREATE_MODEL_HIDE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x7BD5CF2F, p0, p1, p2, p3, p4, p5); } // 0x7BD5CF2F
	nativeDecl void _0x07AAF22C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x07AAF22C, p0, p1, p2, p3, p4, p5); } // 0x07AAF22C
	nativeDecl void REMOVE_MODEL_HIDE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x993DBC10, p0, p1, p2, p3, p4, p5); } // 0x993DBC10
	nativeDecl void CREATE_FORCED_OBJECT(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x335190A2, p0, p1, p2, p3, p4, p5); } // 0x335190A2
	nativeDecl void REMOVE_FORCED_OBJECT(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xAED73ADD, p0, p1, p2, p3, p4); } // 0xAED73ADD
	nativeDecl void SET_ENTITY_NO_COLLISION_ENTITY(Entity ent1, Entity ent2, BOOL toogle) { invoke<Void>(0x1E11BFE9, ent1, ent2, toogle); } // 0x1E11BFE9
	nativeDecl void SET_ENTITY_MOTION_BLUR(Any p0, Any p1) { invoke<Void>(0xE90005B8, p0, p1); } // 0xE90005B8
	nativeDecl void _0x44767B31(Any p0, Any p1) { invoke<Void>(0x44767B31, p0, p1); } // 0x44767B31
	nativeDecl void _0xE224A6A5(Any p0, Any p1) { invoke<Void>(0xE224A6A5, p0, p1); } // 0xE224A6A5
}

namespace PED
{
	nativeDecl Ped CREATE_PED(int type, Hash pedHash, float x, float y, float z, float heading, BOOL networkHandle, BOOL returnPEDHandle) { return invoke<Ped>(0x0389EF71, type, pedHash, x, y, z, heading, networkHandle, returnPEDHandle); } // 0x0389EF71
	nativeDecl void DELETE_PED(Ped* ped) { invoke<Void>(0x13EFB9A0, ped); } // 0x13EFB9A0
	nativeDecl Ped CLONE_PED(Ped Priest, float Heading, BOOL networkhandle, BOOL createpedhandle) { return invoke<Ped>(0x8C8A8D6E, Priest, Heading, networkhandle, createpedhandle); } // 0x8C8A8D6E
	nativeDecl void _0xFC70EEC7(Ped GamerHandle, Ped* pedHandle) { invoke<Void>(0xFC70EEC7, GamerHandle, pedHandle); } // 0xFC70EEC7
	nativeDecl BOOL IS_PED_IN_VEHICLE(Ped pedHandle, Vehicle vehicleHandle, BOOL atGetIn) { return invoke<BOOL>(0x7DA6BC83, pedHandle, vehicleHandle, atGetIn); } // 0x7DA6BC83
	nativeDecl BOOL IS_PED_IN_MODEL(Ped ped, Hash vehicleModel) { return invoke<BOOL>(0xA6438D4B, ped, vehicleModel); } // 0xA6438D4B
	nativeDecl BOOL IS_PED_IN_ANY_VEHICLE(Ped pedHandle, BOOL atGetIn) { return invoke<BOOL>(0x3B0171EE, pedHandle, atGetIn); } // 0x3B0171EE
	nativeDecl BOOL IS_COP_PED_IN_AREA_3D(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<BOOL>(0xB98DB96B, p0, p1, p2, p3, p4, p5); } // 0xB98DB96B
	nativeDecl BOOL IS_PED_INJURED(Ped ped) { return invoke<BOOL>(0x2530A087, ped); } // 0x2530A087
	nativeDecl BOOL IS_PED_HURT(Any p0) { return invoke<BOOL>(0x69DFA0AF, p0); } // 0x69DFA0AF
	nativeDecl BOOL IS_PED_FATALLY_INJURED(Ped ped) { return invoke<BOOL>(0xBADA0093, ped); } // 0xBADA0093
	nativeDecl BOOL _IS_PED_DEAD(Ped pedHandle, BOOL p1) { return invoke<BOOL>(0xCBDB7739, pedHandle, p1); } // 0xCBDB7739
	nativeDecl BOOL IS_CONVERSATION_PED_DEAD(Any p0) { return invoke<BOOL>(0x1FA39EFE, p0); } // 0x1FA39EFE
	nativeDecl BOOL IS_PED_AIMING_FROM_COVER(Player* p0) { return invoke<BOOL>(0xDEBAB2AF, p0); } // 0xDEBAB2AF
	nativeDecl BOOL IS_PED_RELOADING(Ped ped) { return invoke<BOOL>(0x961E1745, ped); } // 0x961E1745
	nativeDecl BOOL IS_PED_A_PLAYER(Ped ped) { return invoke<BOOL>(0x404794CA, ped); } // 0x404794CA
	nativeDecl Any CREATE_PED_INSIDE_VEHICLE(Vehicle vehicle, int pedType, Hash modelHash, int seat, Any p4, Any p5) { return invoke<Any>(0x3000F092, vehicle, pedType, modelHash, seat, p4, p5); } // 0x3000F092
	nativeDecl void SET_PED_DESIRED_HEADING(Any p0, Any p1) { invoke<Void>(0x961458F9, p0, p1); } // 0x961458F9
	nativeDecl void _0x290421BE(Any p0) { invoke<Void>(0x290421BE, p0); } // 0x290421BE
	nativeDecl BOOL IS_PED_FACING_PED(Any p0, Any p1, Any p2) { return invoke<BOOL>(0x0B775838, p0, p1, p2); } // 0x0B775838
	nativeDecl BOOL IS_PED_IN_MELEE_COMBAT(Ped ped) { return invoke<BOOL>(0xFD7814A5, ped); } // 0xFD7814A5
	nativeDecl BOOL IS_PED_STOPPED(Ped ped) { return invoke<BOOL>(0xA0DC0B87, ped); } // 0xA0DC0B87
	nativeDecl BOOL IS_PED_SHOOTING_IN_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoke<BOOL>(0x741BF04F, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x741BF04F
	nativeDecl BOOL IS_ANY_PED_SHOOTING_IN_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoke<BOOL>(0x91833867, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x91833867
	nativeDecl BOOL IS_PED_SHOOTING(Ped ped) { return invoke<BOOL>(0xE7C3405E, ped); } // 0xE7C3405E
	nativeDecl void SET_PED_ACCURACY(Ped ped, int accuracy) { invoke<Void>(0x6C17122E, ped, accuracy); } // 0x6C17122E
	nativeDecl Any GET_PED_ACCURACY(Any p0) { return invoke<Any>(0x0A2A0AA0, p0); } // 0x0A2A0AA0
	nativeDecl BOOL IS_PED_MODEL(Ped pedHandle, Hash modelHash) { return invoke<BOOL>(0x5F1DDFCB, pedHandle, modelHash); } // 0x5F1DDFCB
	nativeDecl void EXPLODE_PED_HEAD(Ped ped, Hash WeaponHash) { invoke<Void>(0x05CC1380, ped, WeaponHash); } // 0x05CC1380
	nativeDecl void REMOVE_PED_ELEGANTLY(Ped PedHandle) { invoke<Void>(0x4FFB8C6C, PedHandle); } // 0x4FFB8C6C
	nativeDecl void ADD_ARMOUR_TO_PED(Ped PedHandle, int Amount) { invoke<Void>(0xF686B26E, PedHandle, Amount); } // 0xF686B26E
	nativeDecl void SET_PED_ARMOUR(Any p0, Any p1) { invoke<Void>(0x4E3A0CC4, p0, p1); } // 0x4E3A0CC4
	nativeDecl void SET_PED_INTO_VEHICLE(Ped PedHandle, Vehicle VehicleHandle, int SeatIndex) { invoke<Void>(0x07500C79, PedHandle, VehicleHandle, SeatIndex); } // 0x07500C79
	nativeDecl void _0x58A80BD5(Any p0, Any p1) { invoke<Void>(0x58A80BD5, p0, p1); } // 0x58A80BD5
	nativeDecl BOOL CAN_CREATE_RANDOM_PED(Any p0) { return invoke<BOOL>(0xF9ABE88F, p0); } // 0xF9ABE88F
	nativeDecl Ped CREATE_RANDOM_PED(float X, float Y, float Z) { return invoke<Ped>(0x5A949543, X, Y, Z); } // 0x5A949543
	nativeDecl Ped CREATE_RANDOM_PED_AS_DRIVER(Vehicle vehicleHandle, BOOL p1) { return invoke<Ped>(0xB927CE9A, vehicleHandle, p1); } // 0xB927CE9A
	nativeDecl BOOL CAN_CREATE_RANDOM_DRIVER() { return invoke<BOOL>(0x99861609); } // 0x99861609
	nativeDecl Any _0x7018BE31() { return invoke<Any>(0x7018BE31); } // 0x7018BE31
	nativeDecl void SET_PED_MOVE_ANIMS_BLEND_OUT(Any p0) { invoke<Void>(0x20E01957, p0); } // 0x20E01957
	nativeDecl void SET_PED_CAN_BE_DRAGGED_OUT(Any p0, Any p1) { invoke<Void>(0xAA7F1131, p0, p1); } // 0xAA7F1131
	nativeDecl void _0x6CD58238(Any p0) { invoke<Void>(0x6CD58238, p0); } // 0x6CD58238
	nativeDecl BOOL IS_PED_MALE(Any p0) { return invoke<BOOL>(0x90950455, p0); } // 0x90950455
	nativeDecl BOOL IS_PED_HUMAN(Any p0) { return invoke<BOOL>(0x194BB7B0, p0); } // 0x194BB7B0
	nativeDecl Vehicle GET_VEHICLE_PED_IS_IN(Ped pedHandle, BOOL getLastVehicle) { return invoke<Vehicle>(0xAFE92319, pedHandle, getLastVehicle); } // 0xAFE92319
	nativeDecl void RESET_PED_LAST_VEHICLE(Any p0) { invoke<Void>(0x5E3B5942, p0); } // 0x5E3B5942
	nativeDecl void SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(Any p0) { invoke<Void>(0x039C82BB, p0); } // 0x039C82BB
	nativeDecl void SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(Any p0, Any p1) { invoke<Void>(0x2909ABF0, p0, p1); } // 0x2909ABF0
	nativeDecl void _0xB48C0C04() { invoke<Void>(0xB48C0C04); } // 0xB48C0C04
	nativeDecl void _0x25EA2AA5(Any p0, Any p1, Any p2) { invoke<Void>(0x25EA2AA5, p0, p1, p2); } // 0x25EA2AA5
	nativeDecl void SET_PED_NON_CREATION_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x7A97283F, p0, p1, p2, p3, p4, p5); } // 0x7A97283F
	nativeDecl void CLEAR_PED_NON_CREATION_AREA() { invoke<Void>(0x6F7043A3); } // 0x6F7043A3
	nativeDecl void _0x8C555ADD() { invoke<Void>(0x8C555ADD); } // 0x8C555ADD
	nativeDecl BOOL IS_PED_ON_MOUNT(Any p0) { return invoke<BOOL>(0x43103006, p0); } // 0x43103006
	nativeDecl Any GET_MOUNT(Any p0) { return invoke<Any>(0xDD31EC4E, p0); } // 0xDD31EC4E
	nativeDecl BOOL IS_PED_ON_VEHICLE(Any p0) { return invoke<BOOL>(0xA1AE7CC7, p0); } // 0xA1AE7CC7
	nativeDecl BOOL IS_PED_ON_SPECIFIC_VEHICLE(Ped ped, Vehicle specificVehicle) { return invoke<BOOL>(0x63CB4603, ped, specificVehicle); } // 0x63CB4603
	nativeDecl void SET_PED_MONEY(Ped pedHandle, int amount) { invoke<Void>(0x40D90BF2, pedHandle, amount); } // 0x40D90BF2
	nativeDecl Any GET_PED_MONEY(Ped pedHandle) { return invoke<Any>(0xEB3C4C7E, pedHandle); } // 0xEB3C4C7E
	nativeDecl void _0xD41C9AED(Any p0, Any p1) { invoke<Void>(0xD41C9AED, p0, p1); } // 0xD41C9AED
	nativeDecl void _0x30B98369(Any p0) { invoke<Void>(0x30B98369, p0); } // 0x30B98369
	nativeDecl void _0x02A080C8(Any p0) { invoke<Void>(0x02A080C8, p0); } // 0x02A080C8
	nativeDecl void SET_PED_SUFFERS_CRITICAL_HITS(Any p0, Any p1) { invoke<Void>(0x6F6FC7E6, p0, p1); } // 0x6F6FC7E6
	nativeDecl void _0x1572022A(Any p0, Any p1) { invoke<Void>(0x1572022A, p0, p1); } // 0x1572022A
	nativeDecl BOOL IS_PED_SITTING_IN_VEHICLE(Any p0, Any p1) { return invoke<BOOL>(0xDDDE26FA, p0, p1); } // 0xDDDE26FA
	nativeDecl BOOL IS_PED_SITTING_IN_ANY_VEHICLE(Ped Ped) { return invoke<BOOL>(0x0EA9CA03, Ped); } // 0x0EA9CA03
	nativeDecl BOOL IS_PED_ON_FOOT(Ped Ped) { return invoke<BOOL>(0xC60D0785, Ped); } // 0xC60D0785
	nativeDecl BOOL IS_PED_ON_ANY_BIKE(Any p0) { return invoke<BOOL>(0x4D885B2E, p0); } // 0x4D885B2E
	nativeDecl BOOL IS_PED_PLANTING_BOMB(Any p0) { return invoke<BOOL>(0x0EDAC574, p0); } // 0x0EDAC574
	nativeDecl Vector3 GET_DEAD_PED_PICKUP_COORDS(Any p0, Any p1, Any p2) { return invoke<Vector3>(0x129F9DC1, p0, p1, p2); } // 0x129F9DC1
	nativeDecl BOOL IS_PED_IN_ANY_BOAT(Any p0) { return invoke<BOOL>(0x1118A947, p0); } // 0x1118A947
	nativeDecl BOOL IS_PED_IN_ANY_SUB(Any p0) { return invoke<BOOL>(0xE65F8059, p0); } // 0xE65F8059
	nativeDecl BOOL IS_PED_IN_ANY_HELI(Any p0) { return invoke<BOOL>(0x7AB5523B, p0); } // 0x7AB5523B
	nativeDecl BOOL IS_PED_IN_ANY_PLANE(Any p0) { return invoke<BOOL>(0x51BBCE7E, p0); } // 0x51BBCE7E
	nativeDecl BOOL IS_PED_IN_FLYING_VEHICLE(Any p0) { return invoke<BOOL>(0xCA072485, p0); } // 0xCA072485
	nativeDecl void SET_PED_DIES_IN_WATER(Any p0, Any p1) { invoke<Void>(0x604C872B, p0, p1); } // 0x604C872B
	nativeDecl void SET_PED_DIES_IN_SINKING_VEHICLE(Any p0, Any p1) { invoke<Void>(0x8D4D9ABB, p0, p1); } // 0x8D4D9ABB
	nativeDecl int GET_PED_ARMOUR(Ped PedHandle) { return invoke<int>(0x2CE311A7, PedHandle); } // 0x2CE311A7
	nativeDecl void SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(Any p0, Any p1) { invoke<Void>(0xB014A09C, p0, p1); } // 0xB014A09C
	nativeDecl void SET_PED_CAN_BE_SHOT_IN_VEHICLE(Any p0, Any p1) { invoke<Void>(0x5DB7B3A9, p0, p1); } // 0x5DB7B3A9
	nativeDecl Any GET_PED_LAST_DAMAGE_BONE(Any p0, Any p1) { return invoke<Any>(0xAB933841, p0, p1); } // 0xAB933841
	nativeDecl void CLEAR_PED_LAST_DAMAGE_BONE(Any p0) { invoke<Void>(0x56CB715E, p0); } // 0x56CB715E
	nativeDecl void SET_AI_WEAPON_DAMAGE_MODIFIER(Any p0) { invoke<Void>(0x516E30EE, p0); } // 0x516E30EE
	nativeDecl void RESET_AI_WEAPON_DAMAGE_MODIFIER() { invoke<Void>(0x6E965420); } // 0x6E965420
	nativeDecl void _0x0F9A401F(Any p0) { invoke<Void>(0x0F9A401F, p0); } // 0x0F9A401F
	nativeDecl void _0x97886238() { invoke<Void>(0x97886238); } // 0x97886238
	nativeDecl void _0xCC9D7F1A(Any p0, Any p1) { invoke<Void>(0xCC9D7F1A, p0, p1); } // 0xCC9D7F1A
	nativeDecl void SET_PED_CAN_BE_TARGETTED(Any p0, Any p1) { invoke<Void>(0x75C49F74, p0, p1); } // 0x75C49F74
	nativeDecl void SET_PED_CAN_BE_TARGETTED_BY_TEAM(Any p0, Any p1, Any p2) { invoke<Void>(0xB103A8E1, p0, p1, p2); } // 0xB103A8E1
	nativeDecl void SET_PED_CAN_BE_TARGETTED_BY_PLAYER(Any p0, Any p1, Any p2) { invoke<Void>(0xD050F490, p0, p1, p2); } // 0xD050F490
	nativeDecl void _0x7DA12905(Any p0, Any p1) { invoke<Void>(0x7DA12905, p0, p1); } // 0x7DA12905
	nativeDecl void SET_TIME_EXCLUSIVE_DISPLAY_TEXTURE(Any p0, Any p1) { invoke<Void>(0x7F67671D, p0, p1); } // 0x7F67671D
	nativeDecl BOOL IS_PED_IN_ANY_POLICE_VEHICLE(Any p0) { return invoke<BOOL>(0x84FA790D, p0); } // 0x84FA790D
	nativeDecl void _0xA819680B(Any p0) { invoke<Void>(0xA819680B, p0); } // 0xA819680B
	nativeDecl Any _0xCD71F11B(Ped ped) { return invoke<Any>(0xCD71F11B, ped); } // 0xCD71F11B
	nativeDecl BOOL IS_PED_FALLING(Ped PedHandle) { return invoke<BOOL>(0xABF77334, PedHandle); } // 0xABF77334
	nativeDecl BOOL IS_PED_JUMPING(Ped Ped) { return invoke<BOOL>(0x07E5BC0E, Ped); } // 0x07E5BC0E
	nativeDecl BOOL IS_PED_CLIMBING(Ped Ped) { return invoke<BOOL>(0xBCE03D35, Ped); } // 0xBCE03D35
	nativeDecl Any _0xC3169BDA(Any p0) { return invoke<Any>(0xC3169BDA, p0); } // 0xC3169BDA
	nativeDecl BOOL IS_PED_DIVING(Any p0) { return invoke<BOOL>(0x7BC5BF3C, p0); } // 0x7BC5BF3C
	nativeDecl Any _0xB19215F6(Any p0) { return invoke<Any>(0xB19215F6, p0); } // 0xB19215F6
	nativeDecl Any GET_PED_PARACHUTE_STATE(Any p0) { return invoke<Any>(0x7D4BC475, p0); } // 0x7D4BC475
	nativeDecl Any _0x01F3B035(Any p0) { return invoke<Any>(0x01F3B035, p0); } // 0x01F3B035
	nativeDecl void SET_PED_PARACHUTE_TINT_INDEX(Any p0, Any p1) { invoke<Void>(0x5AEFEC3A, p0, p1); } // 0x5AEFEC3A
	nativeDecl void GET_PED_PARACHUTE_TINT_INDEX(Any p0, Any p1) { invoke<Void>(0xE9E7FAC5, p0, p1); } // 0xE9E7FAC5
	nativeDecl void _0x177EFC79(Any p0, Any p1) { invoke<Void>(0x177EFC79, p0, p1); } // 0x177EFC79
	nativeDecl void SET_PED_DUCKING(Any p0, Any p1) { invoke<Void>(0xB90353D7, p0, p1); } // 0xB90353D7
	nativeDecl BOOL IS_PED_DUCKING(Any p0) { return invoke<BOOL>(0x9199C77D, p0); } // 0x9199C77D
	nativeDecl BOOL IS_PED_IN_ANY_TAXI(Any p0) { return invoke<BOOL>(0x16FD386C, p0); } // 0x16FD386C
	nativeDecl void SET_PED_ID_RANGE(Any p0, Any p1) { invoke<Void>(0xEF3B4ED9, p0, p1); } // 0xEF3B4ED9
	nativeDecl void _0x9A2180FF(Any p0, Any p1) { invoke<Void>(0x9A2180FF, p0, p1); } // 0x9A2180FF
	nativeDecl void _0xF30658D2(Any p0, Any p1) { invoke<Void>(0xF30658D2, p0, p1); } // 0xF30658D2
	nativeDecl void _0x43709044(Any p0) { invoke<Void>(0x43709044, p0); } // 0x43709044
	nativeDecl void SET_PED_SEEING_RANGE(Any p0, float p1) { invoke<Void>(0x4BD72FE8, p0, p1); } // 0x4BD72FE8
	nativeDecl void SET_PED_HEARING_RANGE(Any p0, Any p1) { invoke<Void>(0xB32087E0, p0, p1); } // 0xB32087E0
	nativeDecl void SET_PED_VISUAL_FIELD_MIN_ANGLE(Any p0, Any p1) { invoke<Void>(0x72E2E18B, p0, p1); } // 0x72E2E18B
	nativeDecl void SET_PED_VISUAL_FIELD_MAX_ANGLE(Any p0, Any p1) { invoke<Void>(0x0CEA0F9A, p0, p1); } // 0x0CEA0F9A
	nativeDecl void SET_PED_VISUAL_FIELD_MIN_ELEVATION_ANGLE(Any p0, Any p1) { invoke<Void>(0x5CC2F1B8, p0, p1); } // 0x5CC2F1B8
	nativeDecl void SET_PED_VISUAL_FIELD_MAX_ELEVATION_ANGLE(Any p0, Any p1) { invoke<Void>(0x39D9102F, p0, p1); } // 0x39D9102F
	nativeDecl void SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(Any p0, float p1) { invoke<Void>(0xFDF2F7C2, p0, p1); } // 0xFDF2F7C2
	nativeDecl void _0xE57202A1(Any p0, Any p1) { invoke<Void>(0xE57202A1, p0, p1); } // 0xE57202A1
	nativeDecl void SET_PED_STEALTH_MOVEMENT(Any p0, Any p1, Any p2) { invoke<Void>(0x67E28E1D, p0, p1, p2); } // 0x67E28E1D
	nativeDecl Any GET_PED_STEALTH_MOVEMENT(Any p0) { return invoke<Any>(0x40321B83, p0); } // 0x40321B83
	nativeDecl Any CREATE_GROUP(int Zombies) { return invoke<Any>(0x8DC0368D, Zombies); } // 0x8DC0368D
	nativeDecl void SET_PED_AS_GROUP_LEADER(Ped PedHandle, int Zombies) { invoke<Void>(0x7265BEA2, PedHandle, Zombies); } // 0x7265BEA2
	nativeDecl void SET_PED_AS_GROUP_MEMBER(Ped PedHandle, int groupId) { invoke<Void>(0x0EE13F92, PedHandle, groupId); } // 0x0EE13F92
	nativeDecl void _0xD0D8BDBC(Any p0, Any p1, Any p2) { invoke<Void>(0xD0D8BDBC, p0, p1, p2); } // 0xD0D8BDBC
	nativeDecl void REMOVE_GROUP(int Group) { invoke<Void>(0x48D72B88, Group); } // 0x48D72B88
	nativeDecl void REMOVE_PED_FROM_GROUP(Ped PedHandle) { invoke<Void>(0x82697713, PedHandle); } // 0x82697713
	nativeDecl BOOL IS_PED_GROUP_MEMBER(Ped PedHandle, int Group) { return invoke<BOOL>(0x876D5363, PedHandle, Group); } // 0x876D5363
	nativeDecl Any _0x9678D4FF(Any p0) { return invoke<Any>(0x9678D4FF, p0); } // 0x9678D4FF
	nativeDecl void SET_GROUP_SEPARATION_RANGE(Any p0, Any p1) { invoke<Void>(0x7B820CD5, p0, p1); } // 0x7B820CD5
	nativeDecl void _0x2F0D0973(Any p0, Any p1) { invoke<Void>(0x2F0D0973, p0, p1); } // 0x2F0D0973
	nativeDecl BOOL IS_PED_PRONE(Any p0) { return invoke<BOOL>(0x02C2A6C3, p0); } // 0x02C2A6C3
	nativeDecl BOOL IS_PED_IN_COMBAT(Any p0, Any p1) { return invoke<BOOL>(0xFE027CB5, p0, p1); } // 0xFE027CB5
	nativeDecl Any _0xCCD525E1(Any p0, Any p1) { return invoke<Any>(0xCCD525E1, p0, p1); } // 0xCCD525E1
	nativeDecl BOOL IS_PED_DOING_DRIVEBY(Any p0) { return invoke<BOOL>(0xAC3CEB9C, p0); } // 0xAC3CEB9C
	nativeDecl BOOL IS_PED_JACKING(Any p0) { return invoke<BOOL>(0x3B321816, p0); } // 0x3B321816
	nativeDecl BOOL IS_PED_BEING_JACKED(Any p0) { return invoke<BOOL>(0xD45D605C, p0); } // 0xD45D605C
	nativeDecl BOOL IS_PED_BEING_STUNNED(Any p0, Any p1) { return invoke<BOOL>(0x0A66CE30, p0, p1); } // 0x0A66CE30
	nativeDecl Any GET_PEDS_JACKER(Any p0) { return invoke<Any>(0xDE1DBB59, p0); } // 0xDE1DBB59
	nativeDecl Any GET_JACK_TARGET(Any p0) { return invoke<Any>(0x1D196361, p0); } // 0x1D196361
	nativeDecl BOOL IS_PED_FLEEING(Any p0) { return invoke<BOOL>(0x85D813C6, p0); } // 0x85D813C6
	nativeDecl BOOL IS_PED_IN_COVER(Any p0, Any p1) { return invoke<BOOL>(0x972C5A8B, p0, p1); } // 0x972C5A8B
	nativeDecl BOOL IS_PED_IN_COVER_FACING_LEFT(Any p0) { return invoke<BOOL>(0xB89DBB80, p0); } // 0xB89DBB80
	nativeDecl BOOL IS_PED_GOING_INTO_COVER(Any p0) { return invoke<BOOL>(0xA3589628, p0); } // 0xA3589628
	nativeDecl Any SET_PED_PINNED_DOWN(Any p0, Any p1, Any p2) { return invoke<Any>(0xCC78999D, p0, p1, p2); } // 0xCC78999D
	nativeDecl Any _0xACF162E0(Any p0) { return invoke<Any>(0xACF162E0, p0); } // 0xACF162E0
	nativeDecl Any _0x99968B37(Any p0) { return invoke<Any>(0x99968B37, p0); } // 0x99968B37
	nativeDecl Any _0x84ADF9EB(Any p0) { return invoke<Any>(0x84ADF9EB, p0); } // 0x84ADF9EB
	nativeDecl Any GET_PED_CAUSE_OF_DEATH(Any p0) { return invoke<Any>(0x63458C27, p0); } // 0x63458C27
	nativeDecl Any GET_PED_TIME_OF_DEATH(Any p0) { return invoke<Any>(0xDF6D5D54, p0); } // 0xDF6D5D54
	nativeDecl Any _0xEF0B78E6(Any p0) { return invoke<Any>(0xEF0B78E6, p0); } // 0xEF0B78E6
	nativeDecl Any _0xFB18CB19(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0xFB18CB19, p0, p1, p2, p3, p4); } // 0xFB18CB19
	nativeDecl void SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Any p0, Any p1) { invoke<Void>(0x423B7BA2, p0, p1); } // 0x423B7BA2
	nativeDecl void SET_PED_RELATIONSHIP_GROUP_HASH(Ped pedHandle, Any groupHandle) { invoke<Void>(0x79F8C18C, pedHandle, groupHandle); } // 0x79F8C18C
	nativeDecl void SET_RELATIONSHIP_BETWEEN_GROUPS(int RelationStatus, Any Group1, Any Group2) { invoke<Void>(0xD4A215BA, RelationStatus, Group1, Group2); } // 0xD4A215BA
	nativeDecl void CLEAR_RELATIONSHIP_BETWEEN_GROUPS(int RelationStatus, Any Group1, Any Group2) { invoke<Void>(0x994B8C2D, RelationStatus, Group1, Group2); } // 0x994B8C2D
	nativeDecl Any ADD_RELATIONSHIP_GROUP(const char* crewName, Any p1) { return invoke<Any>(0x8B635546, crewName, p1); } // 0x8B635546
	nativeDecl void REMOVE_RELATIONSHIP_GROUP(Any p0) { invoke<Void>(0x4A1DC59A, p0); } // 0x4A1DC59A
	nativeDecl int GET_RELATIONSHIP_BETWEEN_PEDS(Ped ped1, Ped ped2) { return invoke<int>(0xE254C39C, ped1, ped2); } // 0xE254C39C
	nativeDecl Any GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Any p0) { return invoke<Any>(0x714BD6E4, p0); } // 0x714BD6E4
	nativeDecl Any GET_PED_RELATIONSHIP_GROUP_HASH(Player playerId) { return invoke<Any>(0x354F283C, playerId); } // 0x354F283C
	nativeDecl int GET_RELATIONSHIP_BETWEEN_GROUPS(Any p0, Any p1) { return invoke<int>(0x4E372FE2, p0, p1); } // 0x4E372FE2
	nativeDecl void SET_PED_CAN_BE_TARGETED_WITHOUT_LOS(Any p0, Any p1) { invoke<Void>(0x7FDDC0A6, p0, p1); } // 0x7FDDC0A6
	nativeDecl void SET_PED_TO_INFORM_RESPECTED_FRIENDS(Any p0, Any p1, Any p2) { invoke<Void>(0xD78AC46C, p0, p1, p2); } // 0xD78AC46C
	nativeDecl BOOL IS_PED_RESPONDING_TO_EVENT(Any p0, Any p1) { return invoke<BOOL>(0x7A877554, p0, p1); } // 0x7A877554
	nativeDecl void SET_PED_FIRING_PATTERN(Ped ped, Hash patternHash) { invoke<Void>(0xB4629D66, ped, patternHash); } // 0xB4629D66
	nativeDecl void SET_PED_SHOOT_RATE(Ped ped, int shootRate) { invoke<Void>(0xFB301746, ped, shootRate); } // 0xFB301746
	nativeDecl void SET_COMBAT_FLOAT(Any p0, Any p1, Any p2) { invoke<Void>(0xD8B7637C, p0, p1, p2); } // 0xD8B7637C
	nativeDecl Any GET_COMBAT_FLOAT(Any p0, Any p1) { return invoke<Any>(0x511D7EF8, p0, p1); } // 0x511D7EF8
	nativeDecl void GET_GROUP_SIZE(Any p0, Any p1, Any p2) { invoke<Void>(0xF7E1A691, p0, p1, p2); } // 0xF7E1A691
	nativeDecl BOOL DOES_GROUP_EXIST(int Group) { return invoke<BOOL>(0x935C978D, Group); } // 0x935C978D
	nativeDecl int GET_PED_GROUP_INDEX(Ped pedHandle) { return invoke<int>(0x134E0785, pedHandle); } // 0x134E0785
	nativeDecl BOOL IS_PED_IN_GROUP(Ped pedHandle) { return invoke<BOOL>(0x836D9795, pedHandle); } // 0x836D9795
	nativeDecl Any _0xDE7442EE(Any p0) { return invoke<Any>(0xDE7442EE, p0); } // 0xDE7442EE
	nativeDecl void SET_GROUP_FORMATION(int group, int formationType) { invoke<Void>(0x08FAC739, group, formationType); } // 0x08FAC739
	nativeDecl void SET_GROUP_FORMATION_SPACING(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xB1E086FF, p0, p1, p2, p3); } // 0xB1E086FF
	nativeDecl void _0x267FCEAD(Any p0) { invoke<Void>(0x267FCEAD, p0); } // 0x267FCEAD
	nativeDecl Vehicle GET_VEHICLE_PED_IS_USING(Ped PedHandle) { return invoke<Vehicle>(0x6DE3AADA, PedHandle); } // 0x6DE3AADA
	nativeDecl Any SET_EXCLUSIVE_PHONE_RELATIONSHIPS(Any p0) { return invoke<Any>(0x56E0C163, p0); } // 0x56E0C163
	nativeDecl void SET_PED_GRAVITY(Any p0, Any p1) { invoke<Void>(0x3CA16652, p0, p1); } // 0x3CA16652
	nativeDecl void APPLY_DAMAGE_TO_PED(Ped pedHandle, Any damageAmount, BOOL p2) { invoke<Void>(0x4DC27FCF, pedHandle, damageAmount, p2); } // 0x4DC27FCF
	nativeDecl void SET_PED_ALLOWED_TO_DUCK(Any p0, Any p1) { invoke<Void>(0xC4D122F8, p0, p1); } // 0xC4D122F8
	nativeDecl void SET_PED_NEVER_LEAVES_GROUP(Ped PedHandle, int Group) { invoke<Void>(0x0E038813, PedHandle, Group); } // 0x0E038813
	nativeDecl Any GET_PED_TYPE(Ped PedHandle) { return invoke<Any>(0xB1460D43, PedHandle); } // 0xB1460D43
	nativeDecl void SET_PED_AS_COP(int PedHandle, BOOL Toggle) { invoke<Void>(0x84E7DE9F, PedHandle, Toggle); } // 0x84E7DE9F
	nativeDecl void SET_PED_MAX_HEALTH(Any p0, Any p1) { invoke<Void>(0x5533F60B, p0, p1); } // 0x5533F60B
	nativeDecl Any GET_PED_MAX_HEALTH(Any p0) { return invoke<Any>(0xA45B6C8D, p0); } // 0xA45B6C8D
	nativeDecl void SET_PED_MAX_TIME_IN_WATER(Any p0, Any p1) { invoke<Void>(0xFE0A106B, p0, p1); } // 0xFE0A106B
	nativeDecl void SET_PED_MAX_TIME_UNDERWATER(Any p0, Any p1) { invoke<Void>(0x082EF240, p0, p1); } // 0x082EF240
	nativeDecl void _0x373CC405(Any p0, Any p1) { invoke<Void>(0x373CC405, p0, p1); } // 0x373CC405
	nativeDecl void SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Ped PedHandle, int p1) { invoke<Void>(0x8A251612, PedHandle, p1); } // 0x8A251612
	nativeDecl Any _0xC9D098B3(Any p0) { return invoke<Any>(0xC9D098B3, p0); } // 0xC9D098B3
	nativeDecl void KNOCK_PED_OFF_VEHICLE(Ped PedHandle) { invoke<Void>(0xACDD0674, PedHandle); } // 0xACDD0674
	nativeDecl void SET_PED_COORDS_NO_GANG(Ped ped, float XCoord, float YCoord, float ZCoord) { invoke<Void>(0x9561AD98, ped, XCoord, YCoord, ZCoord); } // 0x9561AD98
	nativeDecl Any GET_PED_AS_GROUP_MEMBER(Any p0, Any p1) { return invoke<Any>(0x9AA3CC8C, p0, p1); } // 0x9AA3CC8C
	nativeDecl void SET_PED_KEEP_TASK(Ped ped, BOOL Toggle) { invoke<Void>(0xA7EC79CE, ped, Toggle); } // 0xA7EC79CE
	nativeDecl void _0x397F06E3(Any p0, Any p1) { invoke<Void>(0x397F06E3, p0, p1); } // 0x397F06E3
	nativeDecl BOOL IS_PED_SWIMMING(Any p0) { return invoke<BOOL>(0x7AB43DB8, p0); } // 0x7AB43DB8
	nativeDecl BOOL IS_PED_SWIMMING_UNDER_WATER(Any p0) { return invoke<BOOL>(0x0E8D524F, p0); } // 0x0E8D524F
	nativeDecl void SET_PED_COORDS_KEEP_VEHICLE(Ped ped, float XCoord, float YCoord, float ZCoord) { invoke<Void>(0xD66AE1D3, ped, XCoord, YCoord, ZCoord); } // 0xD66AE1D3
	nativeDecl void SET_PED_DIES_IN_VEHICLE(Any p0, Any p1) { invoke<Void>(0x6FE1E440, p0, p1); } // 0x6FE1E440
	nativeDecl void SET_CREATE_RANDOM_COPS(Any p0) { invoke<Void>(0x23441648, p0); } // 0x23441648
	nativeDecl void _0x82E548CC(Any p0) { invoke<Void>(0x82E548CC, p0); } // 0x82E548CC
	nativeDecl void _0xEDC31475(Any p0) { invoke<Void>(0xEDC31475, p0); } // 0xEDC31475
	nativeDecl BOOL CAN_CREATE_RANDOM_COPS() { return invoke<BOOL>(0xAA73DAD9); } // 0xAA73DAD9
	nativeDecl void SET_PED_AS_ENEMY(Ped pedHandle, BOOL p1) { invoke<Void>(0xAE620A1B, pedHandle, p1); } // 0xAE620A1B
	nativeDecl void SET_PED_CAN_SMASH_GLASS(Any p0, Any p1, Any p2) { invoke<Void>(0x149C60A8, p0, p1, p2); } // 0x149C60A8
	nativeDecl BOOL IS_PED_IN_ANY_TRAIN(Any p0) { return invoke<BOOL>(0x759EF63A, p0); } // 0x759EF63A
	nativeDecl BOOL IS_PED_GETTING_INTO_A_VEHICLE(int playerID) { return invoke<BOOL>(0x90E805AC, playerID); } // 0x90E805AC
	nativeDecl BOOL IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(Any p0) { return invoke<BOOL>(0x46828B4E, p0); } // 0x46828B4E
	nativeDecl void SET_ENABLE_HANDCUFFS(Ped PedHandle, BOOL Toggle) { invoke<Void>(0xAC9BBA23, PedHandle, Toggle); } // 0xAC9BBA23
	nativeDecl void SET_ENABLE_BOUND_ANKLES(Any p0, Any p1) { invoke<Void>(0x9208D689, p0, p1); } // 0x9208D689
	nativeDecl void _0x7BF61471(Any p0, Any p1) { invoke<Void>(0x7BF61471, p0, p1); } // 0x7BF61471
	nativeDecl void SET_CAN_ATTACK_FRIENDLY(Player p0, Ped p1, Any p2) { invoke<Void>(0x47C60963, p0, p1, p2); } // 0x47C60963
	nativeDecl Any GET_PED_ALERTNESS(Any p0) { return invoke<Any>(0xF83E4DAF, p0); } // 0xF83E4DAF
	nativeDecl void SET_PED_ALERTNESS(Any p0, Any p1) { invoke<Void>(0x2C32D9AE, p0, p1); } // 0x2C32D9AE
	nativeDecl void SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(Any p0, Any p1) { invoke<Void>(0x89AD49FF, p0, p1); } // 0x89AD49FF
	nativeDecl void SET_PED_MOVEMENT_CLIPSET(Any p0, const char* p1, Any p2) { invoke<Void>(0xA817CDEB, p0, p1, p2); } // 0xA817CDEB
	nativeDecl void RESET_PED_MOVEMENT_CLIPSET(Any p0, Any p1) { invoke<Void>(0xB83CEE93, p0, p1); } // 0xB83CEE93
	nativeDecl void SET_PED_STRAFE_CLIPSET(Any p0, Any p1) { invoke<Void>(0x0BACF010, p0, p1); } // 0x0BACF010
	nativeDecl void RESET_PED_STRAFE_CLIPSET(Any p0) { invoke<Void>(0xF1967A12, p0); } // 0xF1967A12
	nativeDecl void SET_PED_WEAPON_MOVEMENT_CLIPSET(Any p0, Any p1) { invoke<Void>(0xF8BE54DC, p0, p1); } // 0xF8BE54DC
	nativeDecl void RESET_PED_WEAPON_MOVEMENT_CLIPSET(Any p0) { invoke<Void>(0xC60C9ACD, p0); } // 0xC60C9ACD
	nativeDecl void _0xD4C73595(Any p0, Any p1) { invoke<Void>(0xD4C73595, p0, p1); } // 0xD4C73595
	nativeDecl void _0xAEC9163B(Any p0) { invoke<Void>(0xAEC9163B, p0); } // 0xAEC9163B
	nativeDecl void SET_PED_IN_VEHICLE_CONTEXT(Any p0, Any p1) { invoke<Void>(0x27F25C0E, p0, p1); } // 0x27F25C0E
	nativeDecl void RESET_PED_IN_VEHICLE_CONTEXT(Any p0) { invoke<Void>(0x3C94D88A, p0); } // 0x3C94D88A
	nativeDecl Any _0x3C30B447(Any p0, Any p1, Any p2) { return invoke<Any>(0x3C30B447, p0, p1, p2); } // 0x3C30B447
	nativeDecl void _0x895E1D67(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x895E1D67, p0, p1, p2, p3, p4); } // 0x895E1D67
	nativeDecl void _0x5736FB23(Any p0, Any p1) { invoke<Void>(0x5736FB23, p0, p1); } // 0x5736FB23
	nativeDecl void SET_PED_ALTERNATE_MOVEMENT_ANIM(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0xBA84FD8C, p0, p1, p2, p3, p4, p5); } // 0xBA84FD8C
	nativeDecl void CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(Any p0, Any p1, Any p2) { invoke<Void>(0x7A7F5BC3, p0, p1, p2); } // 0x7A7F5BC3
	nativeDecl void SET_PED_GESTURE_GROUP(Any p0, Any p1) { invoke<Void>(0x170DA109, p0, p1); } // 0x170DA109
	nativeDecl Vector3 _0xC59D4268(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return invoke<Vector3>(0xC59D4268, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0xC59D4268
	nativeDecl Vector3 _0x5F7789E6(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return invoke<Vector3>(0x5F7789E6, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x5F7789E6
	nativeDecl int GET_PED_DRAWABLE_VARIATION(Ped pedID, int componentID) { return invoke<int>(0x29850FE2, pedID, componentID); } // 0x29850FE2
	nativeDecl int GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(Ped pedID, int componentID) { return invoke<int>(0x9754C27D, pedID, componentID); } // 0x9754C27D
	nativeDecl int GET_PED_TEXTURE_VARIATION(Ped pedID, int componentID) { return invoke<int>(0xC0A8590A, pedID, componentID); } // 0xC0A8590A
	nativeDecl int GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(Ped pedID, int componentID, int drawableID) { return invoke<int>(0x83D9FBE7, pedID, componentID, drawableID); } // 0x83D9FBE7
	nativeDecl int _0xC9780B95(Any p0, Any p1) { return invoke<int>(0xC9780B95, p0, p1); } // 0xC9780B95
	nativeDecl Any REMOVE_NIGHTVISION_MELEE(Any p0, Any p1, Any p2) { return invoke<Any>(0x4892B882, p0, p1, p2); } // 0x4892B882
	nativeDecl int GET_PED_PALETTE_VARIATION(Any p0, Any p1) { return invoke<int>(0xEF1BC082, p0, p1); } // 0xEF1BC082
	nativeDecl BOOL IS_PED_COMPONENT_VARIATION_VALID(Any p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0x952ABD9A, p0, p1, p2, p3); } // 0x952ABD9A
	nativeDecl void SET_PED_COMPONENT_VARIATION(Ped PedHandle, int componentID, int drawableID, int textureID, int paletteID) { invoke<Void>(0xD4F7B05C, PedHandle, componentID, drawableID, textureID, paletteID); } // 0xD4F7B05C
	nativeDecl void SET_PED_RANDOM_COMPONENT_VARIATION(Ped pedHandle, BOOL p1) { invoke<Void>(0x4111BA46, pedHandle, p1); } // 0x4111BA46
	nativeDecl void SET_PED_RANDOM_PROPS(Ped PedHandle) { invoke<Void>(0xE3318E0E, PedHandle); } // 0xE3318E0E
	nativeDecl void SET_PED_DEFAULT_COMPONENT_VARIATION(Ped PedHandle) { invoke<Void>(0xC866A984, PedHandle); } // 0xC866A984
	nativeDecl void SET_PED_BLEND_FROM_PARENTS(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x837BD370, p0, p1, p2, p3, p4); } // 0x837BD370
	nativeDecl void _0xC21C8A56(Any p0) { invoke<Void>(0xC21C8A56, p0); } // 0xC21C8A56
	nativeDecl void _0x5D2FC042(Any p0, Any p1, Any p2) { invoke<Void>(0x5D2FC042, p0, p1, p2); } // 0x5D2FC042
	nativeDecl void SET_PED_HEAD_BLEND_DATA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { invoke<Void>(0x60746B88, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x60746B88
	nativeDecl void UPDATE_PED_HEAD_BLEND_DATA(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x5CB76219, p0, p1, p2, p3); } // 0x5CB76219
	nativeDecl void SET_PED_HEAD_OVERLAY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xD28DBA90, p0, p1, p2, p3); } // 0xD28DBA90
	nativeDecl Any _0xFF43C18D(Any p0) { return invoke<Any>(0xFF43C18D, p0); } // 0xFF43C18D
	nativeDecl BOOL HAS_PED_HEAD_BLEND_FINISHED(Any p0) { return invoke<BOOL>(0x2B1BD9C5, p0); } // 0x2B1BD9C5
	nativeDecl void _0x894314A4(Any p0) { invoke<Void>(0x894314A4, p0); } // 0x894314A4
	nativeDecl void _0x57E5B3F9(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x57E5B3F9, p0, p1, p2, p3, p4); } // 0x57E5B3F9
	nativeDecl void _0xC6F36292(Any p0) { invoke<Void>(0xC6F36292, p0); } // 0xC6F36292
	nativeDecl Any _0x211DEFEC(Any p0) { return invoke<Any>(0x211DEFEC, p0); } // 0x211DEFEC
	nativeDecl Any _0x095D3BD8(Any p0) { return invoke<Any>(0x095D3BD8, p0); } // 0x095D3BD8
	nativeDecl void _0x45F3BDFB(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x45F3BDFB, p0, p1, p2, p3); } // 0x45F3BDFB
	nativeDecl Any _0xC6517D52(Any p0) { return invoke<Any>(0xC6517D52, p0); } // 0xC6517D52
	nativeDecl void _0x6435F67F(Any p0) { invoke<Void>(0x6435F67F, p0); } // 0x6435F67F
	nativeDecl void _0xC0E23671(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xC0E23671, p0, p1, p2, p3); } // 0xC0E23671
	nativeDecl Any _0x3B0CA391(Any p0) { return invoke<Any>(0x3B0CA391, p0); } // 0x3B0CA391
	nativeDecl void _0xFD103BA7(Any p0) { invoke<Void>(0xFD103BA7, p0); } // 0xFD103BA7
	nativeDecl Any GET_PED_PROP_INDEX(Ped PedHandle, int ComponentID) { return invoke<Any>(0x746DDAC0, PedHandle, ComponentID); } // 0x746DDAC0
	nativeDecl void SET_PED_PROP_INDEX(Ped PedHandle, int ComponentID, int drawableID, int TextureID, int PaletteID) { invoke<Void>(0x0829F2E2, PedHandle, ComponentID, drawableID, TextureID, PaletteID); } // 0x0829F2E2
	nativeDecl void KNOCK_OFF_PED_PROP(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x08D8B180, p0, p1, p2, p3, p4); } // 0x08D8B180
	nativeDecl void CLEAR_PED_PROP(Ped PedHandle, int PropID) { invoke<Void>(0x2D23D743, PedHandle, PropID); } // 0x2D23D743
	nativeDecl void CLEAR_ALL_PED_PROPS(Ped PedHandle) { invoke<Void>(0x81DF8B43, PedHandle); } // 0x81DF8B43
	nativeDecl Any GET_PED_PROP_TEXTURE_INDEX(Any p0, Any p1) { return invoke<Any>(0x922A6653, p0, p1); } // 0x922A6653
	nativeDecl void _0x7BCD8991(Any p0) { invoke<Void>(0x7BCD8991, p0); } // 0x7BCD8991
	nativeDecl void _0x080275EE(Any p0) { invoke<Void>(0x080275EE, p0); } // 0x080275EE
	nativeDecl void SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Any p0, Any p1) { invoke<Void>(0xDFE34E4A, p0, p1); } // 0xDFE34E4A
	nativeDecl void SET_PED_BOUNDS_ORIENTATION(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0xCFA20D68, p0, p1, p2, p3, p4, p5); } // 0xCFA20D68
	nativeDecl void REGISTER_TARGET(Any p0, Any p1) { invoke<Void>(0x50A95442, p0, p1); } // 0x50A95442
	nativeDecl void REGISTER_HATED_TARGETS_AROUND_PED(Ped PedHandle, float AreaToAttack) { invoke<Void>(0x7F87559E, PedHandle, AreaToAttack); } // 0x7F87559E
	nativeDecl Ped GET_RANDOM_PED_AT_COORD(float x, float y, float z, float xRadius, float yRadius, float zRadius, int p6) { return invoke<Ped>(0xDC8239EB, x, y, z, xRadius, yRadius, zRadius, p6); } // 0xDC8239EB
	nativeDecl Ped GET_CLOSEST_PED(float x, float y, float z, float Radius, BOOL p4, BOOL p5, int handle, BOOL p7, BOOL p8, int p9) { return invoke<Ped>(0x8F6C1F55, x, y, z, Radius, p4, p5, handle, p7, p8, p9); } // 0x8F6C1F55
	nativeDecl void SET_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND(Any p0) { invoke<Void>(0x85615FD0, p0); } // 0x85615FD0
	nativeDecl Any _0x18DD76A1(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoke<Any>(0x18DD76A1, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x18DD76A1
	nativeDecl void _0x6D55B3B3(Any p0, Any p1) { invoke<Void>(0x6D55B3B3, p0, p1); } // 0x6D55B3B3
	nativeDecl void SET_DRIVER_ABILITY(Any p0, Any p1) { invoke<Void>(0xAAD4012C, p0, p1); } // 0xAAD4012C
	nativeDecl void SET_DRIVER_AGGRESSIVENESS(Any p0, Any p1) { invoke<Void>(0x8B02A8FB, p0, p1); } // 0x8B02A8FB
	nativeDecl BOOL CAN_PED_RAGDOLL(Any p0) { return invoke<BOOL>(0xC0EFB7A3, p0); } // 0xC0EFB7A3
	nativeDecl Any SET_PED_TO_RAGDOLL(Ped ped, int Xforce, int Yforce, int Zforce, BOOL p4, BOOL p5, BOOL p6) { return invoke<Any>(0x83CB5052, ped, Xforce, Yforce, Zforce, p4, p5, p6); } // 0x83CB5052
	nativeDecl Any SET_PED_TO_RAGDOLL_WITH_FALL(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13) { return invoke<Any>(0xFA12E286, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); } // 0xFA12E286
	nativeDecl void SET_PED_RAGDOLL_ON_COLLISION(Ped PedHandle, BOOL Toggle) { invoke<Void>(0x2654A0F4, PedHandle, Toggle); } // 0x2654A0F4
	nativeDecl BOOL IS_PED_RAGDOLL(Any p0) { return invoke<BOOL>(0xC833BBE1, p0); } // 0xC833BBE1
	nativeDecl BOOL IS_PED_RUNNING_RAGDOLL_TASK(Any p0) { return invoke<BOOL>(0x44A153F2, p0); } // 0x44A153F2
	nativeDecl void SET_PED_RAGDOLL_FORCE_FALL(Ped ped) { invoke<Void>(0x20A5BDE0, ped); } // 0x20A5BDE0
	nativeDecl void RESET_PED_RAGDOLL_TIMER(Any p0) { invoke<Void>(0xF2865370, p0); } // 0xF2865370
	nativeDecl void SET_PED_CAN_RAGDOLL(Ped PedHandle, BOOL Toggle) { invoke<Void>(0xCF1384C4, PedHandle, Toggle); } // 0xCF1384C4
	nativeDecl BOOL IS_PED_RUNNING_MOBILE_PHONE_TASK(Any p0) { return invoke<BOOL>(0xFB2AFED1, p0); } // 0xFB2AFED1
	nativeDecl Any _0x97353375(Any p0) { return invoke<Any>(0x97353375, p0); } // 0x97353375
	nativeDecl void _0x9C8F830D(Any p0, Any p1) { invoke<Void>(0x9C8F830D, p0, p1); } // 0x9C8F830D
	nativeDecl void _0x77CBA290(Any p0, Any p1) { invoke<Void>(0x77CBA290, p0, p1); } // 0x77CBA290
	nativeDecl void SET_PED_ANGLED_DEFENSIVE_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoke<Void>(0x3EFBDD9B, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x3EFBDD9B
	nativeDecl void SET_PED_SPHERE_DEFENSIVE_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0xBD96D8E8, p0, p1, p2, p3, p4, p5, p6); } // 0xBD96D8E8
	nativeDecl void _0x40638BDC(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x40638BDC, p0, p1, p2, p3, p4, p5, p6); } // 0x40638BDC
	nativeDecl void _0x4763B2C6(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x4763B2C6, p0, p1, p2, p3, p4, p5, p6); } // 0x4763B2C6
	nativeDecl void SET_PED_DEFENSIVE_AREA_ATTACHED_TO_PED(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { invoke<Void>(0x74BDA7CE, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x74BDA7CE
	nativeDecl void _0xB66B0C9A(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xB66B0C9A, p0, p1, p2, p3, p4); } // 0xB66B0C9A
	nativeDecl void REMOVE_PED_DEFENSIVE_AREA(Any p0, Any p1) { invoke<Void>(0x34AAAFA5, p0, p1); } // 0x34AAAFA5
	nativeDecl Vector3 GET_PED_DEFENSIVE_AREA_POSITION(Any p0, Any p1) { return invoke<Vector3>(0xCB65198D, p0, p1); } // 0xCB65198D
	nativeDecl void _0xF3B7EFBF(Any p0, Any p1) { invoke<Void>(0xF3B7EFBF, p0, p1); } // 0xF3B7EFBF
	nativeDecl void _0xA0134498(Any p0) { invoke<Void>(0xA0134498, p0); } // 0xA0134498
	nativeDecl void REVIVE_INJURED_PED(Any p0) { invoke<Void>(0x14D3E6E3, p0); } // 0x14D3E6E3
	nativeDecl void RESURRECT_PED(Any p0) { invoke<Void>(0xA4B82097, p0); } // 0xA4B82097
	nativeDecl void SET_PED_NAME_DEBUG(Any p0, Any p1) { invoke<Void>(0x20D6273E, p0, p1); } // 0x20D6273E
	nativeDecl Vector3 GET_PED_EXTRACTED_DISPLACEMENT(Any p0, Any p1) { return invoke<Vector3>(0x5231F901, p0, p1); } // 0x5231F901
	nativeDecl void SET_PED_DIES_WHEN_INJURED(Ped ped, BOOL toggle) { invoke<Void>(0xE94E24D4, ped, toggle); } // 0xE94E24D4
	nativeDecl void SET_PED_ENABLE_WEAPON_BLOCKING(Ped ped, BOOL toggle) { invoke<Void>(0x4CAD1A4A, ped, toggle); } // 0x4CAD1A4A
	nativeDecl void _0x141CC936(Any p0, Any p1) { invoke<Void>(0x141CC936, p0, p1); } // 0x141CC936
	nativeDecl void RESET_PED_VISIBLE_DAMAGE(Ped ped) { invoke<Void>(0xC4BC4841, ped); } // 0xC4BC4841
	nativeDecl void _0x1E54DB12(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x1E54DB12, p0, p1, p2, p3, p4); } // 0x1E54DB12
	nativeDecl void APPLY_PED_BLOOD(Ped ped, int i1, float f1, float f2, float f3, const char* s1) { invoke<Void>(0x376CE3C0, ped, i1, f1, f2, f3, s1); } // 0x376CE3C0
	nativeDecl void _0x8F3F3A9C(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x8F3F3A9C, p0, p1, p2, p3, p4); } // 0x8F3F3A9C
	nativeDecl void _0xFC13CE80(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0xFC13CE80, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xFC13CE80
	nativeDecl void APPLY_PED_DAMAGE_DECAL(Ped p0, int p1, float p2, float p3, float p4, float p5, float p6, int p7, BOOL p8, const char* p9) { invoke<Void>(0x8A13A41F, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x8A13A41F
	nativeDecl void APPLY_PED_DAMAGE_PACK(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x208D0CB8, p0, p1, p2, p3); } // 0x208D0CB8
	nativeDecl void CLEAR_PED_BLOOD_DAMAGE(Ped PedHandle) { invoke<Void>(0xF7ADC960, PedHandle); } // 0xF7ADC960
	nativeDecl void _0xF210BE69(Ped p0, int p1) { invoke<Void>(0xF210BE69, p0, p1); } // 0xF210BE69
	nativeDecl void _0x0CB6C4ED(Any p0, Any p1, Any p2) { invoke<Void>(0x0CB6C4ED, p0, p1, p2); } // 0x0CB6C4ED
	nativeDecl void _0x70AA5B7D(Any p0, Any p1, Any p2) { invoke<Void>(0x70AA5B7D, p0, p1, p2); } // 0x70AA5B7D
	nativeDecl Any _0x47187F7F(Any p0) { return invoke<Any>(0x47187F7F, p0); } // 0x47187F7F
	nativeDecl void CLEAR_PED_WETNESS(Ped ped) { invoke<Void>(0x629F15BD, ped); } // 0x629F15BD
	nativeDecl void SET_PED_WETNESS_HEIGHT(Ped ped, float height) { invoke<Void>(0x7B33289A, ped, height); } // 0x7B33289A
	nativeDecl void SET_PED_WETNESS_ENABLED_THIS_FRAME(Any p0) { invoke<Void>(0xBDE749F7, p0); } // 0xBDE749F7
	nativeDecl void _0xA993915F(Ped ped) { invoke<Void>(0xA993915F, ped); } // 0xA993915F
	nativeDecl void SET_PED_SWEAT(Ped ped, float sweat) { invoke<Void>(0x76A1DB9F, ped, sweat); } // 0x76A1DB9F
	nativeDecl void _0x70559AC7(Ped ped, Hash ShirtType, Hash ShirtDecal) { invoke<Void>(0x70559AC7, ped, ShirtType, ShirtDecal); } // 0x70559AC7
	nativeDecl Any _0x3543019E(Any p0, Any p1) { return invoke<Any>(0x3543019E, p0, p1); } // 0x3543019E
	nativeDecl void CLEAR_PED_DECORATIONS(Ped PedHandle) { invoke<Void>(0xD4496BF3, PedHandle); } // 0xD4496BF3
	nativeDecl void _0xEFD58EB9(Any p0) { invoke<Void>(0xEFD58EB9, p0); } // 0xEFD58EB9
	nativeDecl BOOL WAS_PED_SKELETON_UPDATED(Any p0) { return invoke<BOOL>(0xF7E2FBAD, p0); } // 0xF7E2FBAD
	nativeDecl Vector3 GET_PED_BONE_COORDS(Ped ped, int i1, float f1, float f2, float f3) { return invoke<Vector3>(0x4579CAB1, ped, i1, f1, f2, f3); } // 0x4579CAB1
	nativeDecl void CREATE_NM_MESSAGE(Any p0, Any p1) { invoke<Void>(0x1CFBFD4B, p0, p1); } // 0x1CFBFD4B
	nativeDecl void GIVE_PED_NM_MESSAGE(Any p0) { invoke<Void>(0x737C3689, p0); } // 0x737C3689
	nativeDecl Any ADD_SCENARIO_BLOCKING_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return invoke<Any>(0xA38C0234, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0xA38C0234
	nativeDecl void REMOVE_SCENARIO_BLOCKING_AREAS() { invoke<Void>(0x4DDF845F); } // 0x4DDF845F
	nativeDecl void REMOVE_SCENARIO_BLOCKING_AREA(Any p0, Any p1) { invoke<Void>(0x4483EF06, p0, p1); } // 0x4483EF06
	nativeDecl void SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x80EAD297, p0, p1, p2, p3, p4); } // 0x80EAD297
	nativeDecl BOOL IS_PED_USING_SCENARIO(Any p0, Any p1) { return invoke<BOOL>(0x0F65B0D4, p0, p1); } // 0x0F65B0D4
	nativeDecl BOOL IS_PED_USING_ANY_SCENARIO(Any p0) { return invoke<BOOL>(0x195EF5B7, p0); } // 0x195EF5B7
	nativeDecl Any _0x59DE73AC(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x59DE73AC, p0, p1, p2, p3); } // 0x59DE73AC
	nativeDecl void _0xC08FE5F6(Any p0, Any p1) { invoke<Void>(0xC08FE5F6, p0, p1); } // 0xC08FE5F6
	nativeDecl Any _0x58C0F6CF(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x58C0F6CF, p0, p1, p2, p3); } // 0x58C0F6CF
	nativeDecl Any _0x761F8F48(Any p0, Any p1) { return invoke<Any>(0x761F8F48, p0, p1); } // 0x761F8F48
	nativeDecl void _0x033F43FA(Any p0) { invoke<Void>(0x033F43FA, p0); } // 0x033F43FA
	nativeDecl void _0x4C684C81(Any p0) { invoke<Void>(0x4C684C81, p0); } // 0x4C684C81
	nativeDecl Any _0x7B4C3E6F(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x7B4C3E6F, p0, p1, p2, p3); } // 0x7B4C3E6F
	nativeDecl void _0x5BC276AE(Any p0, Any p1) { invoke<Void>(0x5BC276AE, p0, p1); } // 0x5BC276AE
	nativeDecl void PLAY_FACIAL_ANIM(Any p0, Any p1, Any p2) { invoke<Void>(0x1F6CCDDE, p0, p1, p2); } // 0x1F6CCDDE
	nativeDecl void SET_FACIAL_IDLE_ANIM_OVERRIDE(Any p0, Any p1, Any p2) { invoke<Void>(0x9BA19C13, p0, p1, p2); } // 0x9BA19C13
	nativeDecl void CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Any p0) { invoke<Void>(0x5244F4E2, p0); } // 0x5244F4E2
	nativeDecl void SET_PED_CAN_PLAY_GESTURE_ANIMS(Any p0, Any p1) { invoke<Void>(0xE131E3B3, p0, p1); } // 0xE131E3B3
	nativeDecl void SET_PED_CAN_PLAY_VISEME_ANIMS(Any p0, Any p1, Any p2) { invoke<Void>(0xA2FDAF27, p0, p1, p2); } // 0xA2FDAF27
	nativeDecl void _0xADB2511A(Any p0, Any p1) { invoke<Void>(0xADB2511A, p0, p1); } // 0xADB2511A
	nativeDecl void SET_PED_CAN_PLAY_AMBIENT_ANIMS(Any p0, Any p1) { invoke<Void>(0xF8053081, p0, p1); } // 0xF8053081
	nativeDecl void SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(Any p0, Any p1) { invoke<Void>(0x5720A5DD, p0, p1); } // 0x5720A5DD
	nativeDecl void _0xB7CD0A49(Any p0) { invoke<Void>(0xB7CD0A49, p0); } // 0xB7CD0A49
	nativeDecl void _0x343B4DE0(Any p0, Any p1) { invoke<Void>(0x343B4DE0, p0, p1); } // 0x343B4DE0
	nativeDecl void SET_PED_CAN_HEAD_IK(Any p0, Any p1) { invoke<Void>(0xD3B04476, p0, p1); } // 0xD3B04476
	nativeDecl void SET_PED_CAN_LEG_IK(Any p0, Any p1) { invoke<Void>(0x9955BC6F, p0, p1); } // 0x9955BC6F
	nativeDecl void _0x8E5D4EAB(Any p0, Any p1) { invoke<Void>(0x8E5D4EAB, p0, p1); } // 0x8E5D4EAB
	nativeDecl void _0x7B0040A8(Any p0, Any p1) { invoke<Void>(0x7B0040A8, p0, p1); } // 0x7B0040A8
	nativeDecl void _0x0FDA62DE(Any p0, Any p1) { invoke<Void>(0x0FDA62DE, p0, p1); } // 0x0FDA62DE
	nativeDecl void SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Any p0, Any p1) { invoke<Void>(0x584C5178, p0, p1); } // 0x584C5178
	nativeDecl BOOL IS_PED_HEADTRACKING_PED(Any p0, Any p1) { return invoke<BOOL>(0x2A5DF721, p0, p1); } // 0x2A5DF721
	nativeDecl BOOL IS_PED_HEADTRACKING_ENTITY(Any p0, Any p1) { return invoke<BOOL>(0x233C9ACF, p0, p1); } // 0x233C9ACF
	nativeDecl void SET_PED_PRIMARY_LOOKAT(Any p0, Any p1) { invoke<Void>(0x6DEF6F1C, p0, p1); } // 0x6DEF6F1C
	nativeDecl void _0xFC942D7C(Any p0, Any p1) { invoke<Void>(0xFC942D7C, p0, p1); } // 0xFC942D7C
	nativeDecl void _0x89EEE07B(Any p0, Any p1) { invoke<Void>(0x89EEE07B, p0, p1); } // 0x89EEE07B
	nativeDecl void SET_PED_CONFIG_FLAG(Any p0, Any p1, Any p2) { invoke<Void>(0x9CFBE10D, p0, p1, p2); } // 0x9CFBE10D
	nativeDecl void SET_PED_RESET_FLAG(Any p0, Any p1, Any p2) { invoke<Void>(0xCFF6FF66, p0, p1, p2); } // 0xCFF6FF66
	nativeDecl Any GET_PED_CONFIG_FLAG(Any p0, Any p1, Any p2) { return invoke<Any>(0xABE98267, p0, p1, p2); } // 0xABE98267
	nativeDecl Any GET_PED_RESET_FLAG(Any p0, Any p1) { return invoke<Any>(0x2FC10D11, p0, p1); } // 0x2FC10D11
	nativeDecl void SET_PED_GROUP_MEMBER_PASSENGER_INDEX(Any p0, Any p1) { invoke<Void>(0x2AB3670B, p0, p1); } // 0x2AB3670B
	nativeDecl void SET_PED_CAN_EVASIVE_DIVE(Any p0, Any p1) { invoke<Void>(0x542FEB4D, p0, p1); } // 0x542FEB4D
	nativeDecl BOOL IS_PED_EVASIVE_DIVING(Any p0, Any p1) { return invoke<BOOL>(0xD82829DC, p0, p1); } // 0xD82829DC
	nativeDecl void SET_PED_SHOOTS_AT_COORD(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xFD64EAE5, p0, p1, p2, p3, p4); } // 0xFD64EAE5
	nativeDecl void SET_PED_MODEL_IS_SUPPRESSED(Any p0, Any p1) { invoke<Void>(0x7820CA43, p0, p1); } // 0x7820CA43
	nativeDecl void STOP_ANY_PED_MODEL_BEING_SUPPRESSED() { invoke<Void>(0x5AD7DC55); } // 0x5AD7DC55
	nativeDecl void SET_PED_CAN_BE_TARGETED_WHEN_INJURED(Any p0, Any p1) { invoke<Void>(0x6FD9A7CD, p0, p1); } // 0x6FD9A7CD
	nativeDecl void SET_PED_GENERATES_DEAD_BODY_EVENTS(Ped ped, BOOL Toggle) { invoke<Void>(0xE9B97A2B, ped, Toggle); } // 0xE9B97A2B
	nativeDecl void _0xFF1F6AEB(Any p0, Any p1) { invoke<Void>(0xFF1F6AEB, p0, p1); } // 0xFF1F6AEB
	nativeDecl void SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Any p0, Any p1) { invoke<Void>(0xE9BD733A, p0, p1); } // 0xE9BD733A
	nativeDecl void GIVE_PED_HELMET(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x1862A461, p0, p1, p2, p3); } // 0x1862A461
	nativeDecl void REMOVE_PED_HELMET(Any p0, Any p1) { invoke<Void>(0x2086B1F0, p0, p1); } // 0x2086B1F0
	nativeDecl void SET_PED_HELMET(Any p0, Any p1) { invoke<Void>(0xED366E53, p0, p1); } // 0xED366E53
	nativeDecl void SET_PED_HELMET_FLAG(Any p0, Any p1) { invoke<Void>(0x12677780, p0, p1); } // 0x12677780
	nativeDecl void SET_PED_HELMET_PROP_INDEX(Any p0, Any p1) { invoke<Void>(0xA316D13F, p0, p1); } // 0xA316D13F
	nativeDecl void SET_PED_HELMET_TEXTURE_INDEX(Any p0, Any p1) { invoke<Void>(0x5F6C3328, p0, p1); } // 0x5F6C3328
	nativeDecl BOOL IS_PED_WEARING_HELMET(Ped PedHandle) { return invoke<BOOL>(0x0D680D49, PedHandle); } // 0x0D680D49
	nativeDecl void _0x24A1284E(Any p0) { invoke<Void>(0x24A1284E, p0); } // 0x24A1284E
	nativeDecl Any _0x8A3A3116(Any p0) { return invoke<Any>(0x8A3A3116, p0); } // 0x8A3A3116
	nativeDecl Any _0x74EB662D(Any p0) { return invoke<Any>(0x74EB662D, p0); } // 0x74EB662D
	nativeDecl Any _0xFFF149FE(Any p0) { return invoke<Any>(0xFFF149FE, p0); } // 0xFFF149FE
	nativeDecl void SET_PED_TO_LOAD_COVER(Any p0, Any p1) { invoke<Void>(0xCF94BA97, p0, p1); } // 0xCF94BA97
	nativeDecl void SET_PED_CAN_COWER_IN_COVER(Any p0, Any p1) { invoke<Void>(0x5194658B, p0, p1); } // 0x5194658B
	nativeDecl void SET_PED_CAN_PEEK_IN_COVER(Ped PedHandle, BOOL Toggle) { invoke<Void>(0xC1DAE216, PedHandle, Toggle); } // 0xC1DAE216
	nativeDecl void SET_PED_PLAYS_HEAD_ON_HORN_ANIM_WHEN_DIES_IN_VEHICLE(Any p0, Any p1) { invoke<Void>(0x7C563CD2, p0, p1); } // 0x7C563CD2
	nativeDecl void SET_PED_LEG_IK_MODE(Any p0, Any p1) { invoke<Void>(0xFDDB042E, p0, p1); } // 0xFDDB042E
	nativeDecl void SET_PED_MOTION_BLUR(Any p0, Any p1) { invoke<Void>(0xA211A128, p0, p1); } // 0xA211A128
	nativeDecl void SET_PED_CAN_SWITCH_WEAPON(int PedID, BOOL CAN_SWITCH) { invoke<Void>(0xB5F8BA28, PedID, CAN_SWITCH); } // 0xB5F8BA28
	nativeDecl void SET_PED_DIES_INSTANTLY_IN_WATER(Ped PedHandle, BOOL Toggle) { invoke<Void>(0xFE2554FC, PedHandle, Toggle); } // 0xFE2554FC
	nativeDecl void _0x77BB7CB8(Any p0, Any p1) { invoke<Void>(0x77BB7CB8, p0, p1); } // 0x77BB7CB8
	nativeDecl void STOP_PED_WEAPON_FIRING_WHEN_DROPPED(Any p0) { invoke<Void>(0x4AC3421E, p0); } // 0x4AC3421E
	nativeDecl void SET_SCRIPTED_ANIM_SEAT_OFFSET(Any p0, Any p1) { invoke<Void>(0x7CEFFA45, p0, p1); } // 0x7CEFFA45
	nativeDecl void SET_PED_COMBAT_MOVEMENT(Any p0, Any p1) { invoke<Void>(0x12E62F9E, p0, p1); } // 0x12E62F9E
	nativeDecl Any GET_PED_COMBAT_MOVEMENT(Any p0) { return invoke<Any>(0xF3E7730E, p0); } // 0xF3E7730E
	nativeDecl void SET_PED_COMBAT_ABILITY(Ped ped, int p1) { invoke<Void>(0x6C23D329, ped, p1); } // 0x6C23D329
	nativeDecl void SET_PED_COMBAT_RANGE(Ped ped, float range) { invoke<Void>(0x8818A959, ped, range); } // 0x8818A959
	nativeDecl Any GET_PED_COMBAT_RANGE(Any p0) { return invoke<Any>(0x9B9B7163, p0); } // 0x9B9B7163
	nativeDecl void SET_PED_COMBAT_ATTRIBUTES(Any p0, Any p1, Any p2) { invoke<Void>(0x81D64248, p0, p1, p2); } // 0x81D64248
	nativeDecl void SET_PED_TARGET_LOSS_RESPONSE(Any p0, Any p1) { invoke<Void>(0xCFA613FF, p0, p1); } // 0xCFA613FF
	nativeDecl Any _0x139C0875(Any p0) { return invoke<Any>(0x139C0875, p0); } // 0x139C0875
	nativeDecl BOOL IS_PED_PERFORMING_STEALTH_KILL(Any p0) { return invoke<BOOL>(0x9ADD7B21, p0); } // 0x9ADD7B21
	nativeDecl BOOL _0x9BE7C860(Ped PedHandle) { return invoke<BOOL>(0x9BE7C860, PedHandle); } // 0x9BE7C860
	nativeDecl BOOL IS_PED_BEING_STEALTH_KILLED(Any p0) { return invoke<BOOL>(0xD044C8AF, p0); } // 0xD044C8AF
	nativeDecl Any _0xAFEC26A4(Any p0) { return invoke<Any>(0xAFEC26A4, p0); } // 0xAFEC26A4
	nativeDecl BOOL WAS_PED_KILLED_BY_STEALTH(Any p0) { return invoke<BOOL>(0x2EA4B54E, p0); } // 0x2EA4B54E
	nativeDecl BOOL WAS_PED_KILLED_BY_TAKEDOWN(Any p0) { return invoke<BOOL>(0xBDD3CE69, p0); } // 0xBDD3CE69
	nativeDecl Any _0x3993092B(Any p0) { return invoke<Any>(0x3993092B, p0); } // 0x3993092B
	nativeDecl void SET_PED_FLEE_ATTRIBUTES(Any p0, Any p1, Any p2) { invoke<Void>(0xA717A875, p0, p1, p2); } // 0xA717A875
	nativeDecl void SET_PED_COWER_HASH(Any p0, Any p1) { invoke<Void>(0x16F30DF4, p0, p1); } // 0x16F30DF4
	nativeDecl void _0xA6F2C057(Any p0, Any p1) { invoke<Void>(0xA6F2C057, p0, p1); } // 0xA6F2C057
	nativeDecl void SET_PED_STEERS_AROUND_PEDS(Ped ped, BOOL DoesSteer) { invoke<Void>(0x797CAE4F, ped, DoesSteer); } // 0x797CAE4F
	nativeDecl void SET_PED_STEERS_AROUND_OBJECTS(Ped ped, BOOL DoesSteer) { invoke<Void>(0x3BD9B0A6, ped, DoesSteer); } // 0x3BD9B0A6
	nativeDecl void SET_PED_STEERS_AROUND_VEHICLES(Ped ped, BOOL DoesSteer) { invoke<Void>(0x533C0651, ped, DoesSteer); } // 0x533C0651
	nativeDecl void _0x2276DE0D(Any p0, Any p1) { invoke<Void>(0x2276DE0D, p0, p1); } // 0x2276DE0D
	nativeDecl void _0x59C52BE6(Any p0) { invoke<Void>(0x59C52BE6, p0); } // 0x59C52BE6
	nativeDecl void _0x1D87DDC1(Any p0, Any p1) { invoke<Void>(0x1D87DDC1, p0, p1); } // 0x1D87DDC1
	nativeDecl void _0xB52BA5F5(Any p0) { invoke<Void>(0xB52BA5F5, p0); } // 0xB52BA5F5
	nativeDecl BOOL IS_ANY_PED_NEAR_POINT(Any p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0xFBD9B050, p0, p1, p2, p3); } // 0xFBD9B050
	nativeDecl void _0x187B9070(Any p0, Any p1, Any p2) { invoke<Void>(0x187B9070, p0, p1, p2); } // 0x187B9070
	nativeDecl Any _0x45037B9B(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x45037B9B, p0, p1, p2, p3, p4); } // 0x45037B9B
	nativeDecl void _0x840D24D3(Any p0) { invoke<Void>(0x840D24D3, p0); } // 0x840D24D3
	nativeDecl void GET_PED_FLOOD_INVINCIBILITY(Any p0, Any p1) { invoke<Void>(0x31C31DAA, p0, p1); } // 0x31C31DAA
	nativeDecl void _0x9194DB71(Any p0, Any p1) { invoke<Void>(0x9194DB71, p0, p1); } // 0x9194DB71
	nativeDecl BOOL IS_TRACKED_PED_VISIBLE(Any p0) { return invoke<BOOL>(0x33248CC1, p0); } // 0x33248CC1
	nativeDecl Any _0x5B1B70AA(Any p0) { return invoke<Any>(0x5B1B70AA, p0); } // 0x5B1B70AA
	nativeDecl BOOL IS_PED_TRACKED(Any p0) { return invoke<BOOL>(0x7EB613D9, p0); } // 0x7EB613D9
	nativeDecl BOOL HAS_PED_RECEIVED_EVENT(Any p0, Any p1) { return invoke<BOOL>(0xECD73DB0, p0, p1); } // 0xECD73DB0
	nativeDecl Any _0x74A0F291(Any p0, Any p1) { return invoke<Any>(0x74A0F291, p0, p1); } // 0x74A0F291
	nativeDecl Any GET_PED_BONE_INDEX(Ped PedHandle, int BoneIndex) { return invoke<Any>(0x259C6BA2, PedHandle, BoneIndex); } // 0x259C6BA2
	nativeDecl Any GET_PED_RAGDOLL_BONE_INDEX(Any p0, Any p1) { return invoke<Any>(0x849F0716, p0, p1); } // 0x849F0716
	nativeDecl void SET_PED_ENVEFF_SCALE(Any p0, Any p1) { invoke<Void>(0xFC1CFC27, p0, p1); } // 0xFC1CFC27
	nativeDecl Any GET_PED_ENVEFF_SCALE(Any p0) { return invoke<Any>(0xA3421E39, p0); } // 0xA3421E39
	nativeDecl void SET_ENABLE_PED_ENVEFF_SCALE(Any p0, Any p1) { invoke<Void>(0xC70F4A84, p0, p1); } // 0xC70F4A84
	nativeDecl void _0x3B882533(Any p0, Any p1) { invoke<Void>(0x3B882533, p0, p1); } // 0x3B882533
	nativeDecl void _0x87A0C174(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x87A0C174, p0, p1, p2, p3); } // 0x87A0C174
	nativeDecl void _0x7BD26837(Any p0, Any p1) { invoke<Void>(0x7BD26837, p0, p1); } // 0x7BD26837
	nativeDecl void _0x98E29ED0(Any p0, Any p1) { invoke<Void>(0x98E29ED0, p0, p1); } // 0x98E29ED0
	nativeDecl Any _0xD315978E(Any p0) { return invoke<Any>(0xD315978E, p0); } // 0xD315978E
	nativeDecl Any CREATE_SYNCHRONIZED_SCENE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<Any>(0xFFDDF8FA, p0, p1, p2, p3, p4, p5, p6); } // 0xFFDDF8FA
	nativeDecl Any _0xF3876894(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0xF3876894, p0, p1, p2, p3, p4); } // 0xF3876894
	nativeDecl BOOL IS_SYNCHRONIZED_SCENE_RUNNING(Any p0) { return invoke<BOOL>(0x57A282F1, p0); } // 0x57A282F1
	nativeDecl void SET_SYNCHRONIZED_SCENE_ORIGIN(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0x2EC2A0B2, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x2EC2A0B2
	nativeDecl void SET_SYNCHRONIZED_SCENE_PHASE(Any p0, Any p1) { invoke<Void>(0xF5AB0D98, p0, p1); } // 0xF5AB0D98
	nativeDecl Any GET_SYNCHRONIZED_SCENE_PHASE(Any p0) { return invoke<Any>(0xB0B2C852, p0); } // 0xB0B2C852
	nativeDecl void SET_SYNCHRONIZED_SCENE_RATE(Any p0, Any p1) { invoke<Void>(0xF10112FD, p0, p1); } // 0xF10112FD
	nativeDecl Any GET_SYNCHRONIZED_SCENE_RATE(Any p0) { return invoke<Any>(0x89365F0D, p0); } // 0x89365F0D
	nativeDecl void SET_SYNCHRONIZED_SCENE_LOOPED(Any p0, Any p1) { invoke<Void>(0x32ED9F82, p0, p1); } // 0x32ED9F82
	nativeDecl BOOL IS_SYNCHRONIZED_SCENE_LOOPED(Any p0) { return invoke<BOOL>(0x47D87A84, p0); } // 0x47D87A84
	nativeDecl void _0x2DE48DA1(Any p0, Any p1) { invoke<Void>(0x2DE48DA1, p0, p1); } // 0x2DE48DA1
	nativeDecl Any _0x72CF2514(Any p0) { return invoke<Any>(0x72CF2514, p0); } // 0x72CF2514
	nativeDecl void ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(Any p0, Any p1, Any p2) { invoke<Void>(0xE9BA6189, p0, p1, p2); } // 0xE9BA6189
	nativeDecl void DETACH_SYNCHRONIZED_SCENE(Any p0) { invoke<Void>(0x52A1CAB2, p0); } // 0x52A1CAB2
	nativeDecl void _0xBF7F9035(Any p0) { invoke<Void>(0xBF7F9035, p0); } // 0xBF7F9035
	nativeDecl Any FORCE_PED_MOTION_STATE(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x164DDEFF, p0, p1, p2, p3, p4); } // 0x164DDEFF
	nativeDecl void SET_PED_MAX_MOVE_BLEND_RATIO(Any p0, Any p1) { invoke<Void>(0xEAD0269A, p0, p1); } // 0xEAD0269A
	nativeDecl void SET_PED_MIN_MOVE_BLEND_RATIO(Any p0, Any p1) { invoke<Void>(0x383EC364, p0, p1); } // 0x383EC364
	nativeDecl void SET_PED_MOVE_RATE_OVERRIDE(Any p0, Any p1) { invoke<Void>(0x900008C6, p0, p1); } // 0x900008C6
	nativeDecl Any _0x79543043(Any p0, Any p1) { return invoke<Any>(0x79543043, p0, p1); } // 0x79543043
	nativeDecl int GET_PED_NEARBY_VEHICLES(Ped PedHandle, int* sizeAndVehs) { return invoke<int>(0xCB716F68, PedHandle, sizeAndVehs); } // 0xCB716F68
	nativeDecl int GET_PED_NEARBY_PEDS(Ped PedHandle, int* PToArray, int p2) { return invoke<int>(0x4D3325F4, PedHandle, PToArray, p2); } // 0x4D3325F4
	nativeDecl Any _0xF9FB4B71(Any p0) { return invoke<Any>(0xF9FB4B71, p0); } // 0xF9FB4B71
	nativeDecl BOOL IS_PED_USING_ACTION_MODE(Any p0) { return invoke<BOOL>(0x5AE7EDA2, p0); } // 0x5AE7EDA2
	nativeDecl void SET_PED_USING_ACTION_MODE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x8802F696, p0, p1, p2, p3); } // 0x8802F696
	nativeDecl void SET_PED_CAPSULE(Any p0, Any p1) { invoke<Void>(0xB153E1B9, p0, p1); } // 0xB153E1B9
	nativeDecl Any REGISTER_PEDHEADSHOT(Any p0) { return invoke<Any>(0xFFE2667B, p0); } // 0xFFE2667B
	nativeDecl Any _0x4DD03628(Any p0) { return invoke<Any>(0x4DD03628, p0); } // 0x4DD03628
	nativeDecl void UNREGISTER_PEDHEADSHOT(Any p0) { invoke<Void>(0x0879AE45, p0); } // 0x0879AE45
	nativeDecl BOOL IS_PEDHEADSHOT_VALID(Any p0) { return invoke<BOOL>(0x0B1080C4, p0); } // 0x0B1080C4
	nativeDecl BOOL IS_PEDHEADSHOT_READY(Any p0) { return invoke<BOOL>(0x761CD02E, p0); } // 0x761CD02E
	nativeDecl Any GET_PEDHEADSHOT_TXD_STRING(Any p0) { return invoke<Any>(0x76D28E96, p0); } // 0x76D28E96
	nativeDecl void SET_PEDHEADSHOT_CUSTOM_LIGHTING(Any p0) { invoke<Void>(0xAB688DAB, p0); } // 0xAB688DAB
	nativeDecl void SET_PEDHEADSHOT_CUSTOM_LIGHT(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0xF48A9155, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xF48A9155
	nativeDecl Any _0x10F2C023(Any p0) { return invoke<Any>(0x10F2C023, p0); } // 0x10F2C023
	nativeDecl void _0x0DBB2FA7(Any p0) { invoke<Void>(0x0DBB2FA7, p0); } // 0x0DBB2FA7
	nativeDecl Any _0x810158F8() { return invoke<Any>(0x810158F8); } // 0x810158F8
	nativeDecl Any _0x05023F8F() { return invoke<Any>(0x05023F8F); } // 0x05023F8F
	nativeDecl Any _0xAA39FD6C() { return invoke<Any>(0xAA39FD6C); } // 0xAA39FD6C
	nativeDecl void _0xEF9142DB(Any p0, Any p1) { invoke<Void>(0xEF9142DB, p0, p1); } // 0xEF9142DB
	nativeDecl void _0x0688DE64(Any p0) { invoke<Void>(0x0688DE64, p0); } // 0x0688DE64
	nativeDecl void _0x909A1D76(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0x909A1D76, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x909A1D76
	nativeDecl void _0x4AAD0ECB(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoke<Void>(0x4AAD0ECB, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x4AAD0ECB
	nativeDecl void _0x492C9E46() { invoke<Void>(0x492C9E46); } // 0x492C9E46
	nativeDecl Any _0x814A28F4() { return invoke<Any>(0x814A28F4); } // 0x814A28F4
	nativeDecl Any _0x0B60D2BA() { return invoke<Any>(0x0B60D2BA); } // 0x0B60D2BA
	nativeDecl Any _0x6B83ABDF() { return invoke<Any>(0x6B83ABDF); } // 0x6B83ABDF
	nativeDecl Any _0xF46B4DC8() { return invoke<Any>(0xF46B4DC8); } // 0xF46B4DC8
	nativeDecl void _0x36A4AC65(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x36A4AC65, p0, p1, p2, p3); } // 0x36A4AC65
	nativeDecl void _0xBA699DDF(Any p0, Any p1) { invoke<Void>(0xBA699DDF, p0, p1); } // 0xBA699DDF
	nativeDecl void SET_IK_TARGET(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoke<Void>(0x6FE5218C, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x6FE5218C
	nativeDecl void _0xFB4000DC(Any p0) { invoke<Void>(0xFB4000DC, p0); } // 0xFB4000DC
	nativeDecl void REQUEST_ACTION_MODE_ASSET(Any p0) { invoke<Void>(0x572BA553, p0); } // 0x572BA553
	nativeDecl BOOL HAS_ACTION_MODE_ASSET_LOADED(Any p0) { return invoke<BOOL>(0xF7EB2BF1, p0); } // 0xF7EB2BF1
	nativeDecl void REMOVE_ACTION_MODE_ASSET(Any p0) { invoke<Void>(0x3F480F92, p0); } // 0x3F480F92
	nativeDecl void REQUEST_STEALTH_MODE_ASSET(Any p0) { invoke<Void>(0x280A004A, p0); } // 0x280A004A
	nativeDecl BOOL HAS_STEALTH_MODE_ASSET_LOADED(Any p0) { return invoke<BOOL>(0x39245667, p0); } // 0x39245667
	nativeDecl void REMOVE_STEALTH_MODE_ASSET(Any p0) { invoke<Void>(0x8C0B243A, p0); } // 0x8C0B243A
	nativeDecl void SET_PED_LOD_MULTIPLIER(Any p0, Any p1) { invoke<Void>(0x1D2B5C70, p0, p1); } // 0x1D2B5C70
	nativeDecl void _0x2F9550C2(Any p0, Any p1, Any p2) { invoke<Void>(0x2F9550C2, p0, p1, p2); } // 0x2F9550C2
	nativeDecl void _0x37DBC2AD(Any p0, Any p1) { invoke<Void>(0x37DBC2AD, p0, p1); } // 0x37DBC2AD
	nativeDecl void _0xC0F1BC91(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xC0F1BC91, p0, p1, p2, p3); } // 0xC0F1BC91
	nativeDecl Any _0x1A464167(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x1A464167, p0, p1, p2, p3, p4); } // 0x1A464167
	nativeDecl Any _0xD0567D41(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0xD0567D41, p0, p1, p2, p3, p4, p5); } // 0xD0567D41
	nativeDecl void _0x4BBE5E2C(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x4BBE5E2C, p0, p1, p2, p3, p4); } // 0x4BBE5E2C
	nativeDecl void _0xA89A53F2(Any p0) { invoke<Void>(0xA89A53F2, p0); } // 0xA89A53F2
}

namespace VEHICLE
{
	nativeDecl Vehicle CREATE_VEHICLE(Hash VehicleHash, float xCoord, float yCoord, float zCoord, float Heading, BOOL networkHandle, BOOL vehiclehandle) { return invoke<Vehicle>(0xDD75460A, VehicleHash, xCoord, yCoord, zCoord, Heading, networkHandle, vehiclehandle); } // 0xDD75460A
	nativeDecl void DELETE_VEHICLE(Vehicle* vehicle) { invoke<Void>(0x9803AF60, vehicle); } // 0x9803AF60
	nativeDecl void _0xBB54ECCA(Vehicle p0, BOOL p1) { invoke<Void>(0xBB54ECCA, p0, p1); } // 0xBB54ECCA
	nativeDecl void SET_VEHICLE_ALLOW_NO_PASSENGERS_LOCKON(Any p0, Any p1) { invoke<Void>(0x8BAAC437, p0, p1); } // 0x8BAAC437
	nativeDecl int _0xFBDE9FD8(Vehicle p0) { return invoke<int>(0xFBDE9FD8, p0); } // 0xFBDE9FD8
	nativeDecl BOOL IS_VEHICLE_MODEL(Vehicle hash, BOOL toggle) { return invoke<BOOL>(0x013B10B6, hash, toggle); } // 0x013B10B6
	nativeDecl BOOL DOES_SCRIPT_VEHICLE_GENERATOR_EXIST(Any p0) { return invoke<BOOL>(0xF6BDDA30, p0); } // 0xF6BDDA30
	nativeDecl Any CREATE_SCRIPT_VEHICLE_GENERATOR(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15, Any p16) { return invoke<Any>(0x25A9A261, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16); } // 0x25A9A261
	nativeDecl void DELETE_SCRIPT_VEHICLE_GENERATOR(Any p0) { invoke<Void>(0xE4328E3F, p0); } // 0xE4328E3F
	nativeDecl void SET_SCRIPT_VEHICLE_GENERATOR(Any p0, Any p1) { invoke<Void>(0x40D73747, p0, p1); } // 0x40D73747
	nativeDecl void SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0xB4E0E69A, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xB4E0E69A
	nativeDecl void SET_ALL_VEHICLE_GENERATORS_ACTIVE() { invoke<Void>(0xAB1FDD76); } // 0xAB1FDD76
	nativeDecl void SET_ALL_LOW_PRIORITY_VEHICLE_GENERATORS_ACTIVE(Any p0) { invoke<Void>(0x87F767F2, p0); } // 0x87F767F2
	nativeDecl void _0x935A95DA(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x935A95DA, p0, p1, p2, p3); } // 0x935A95DA
	nativeDecl void _0x6C73E45A() { invoke<Void>(0x6C73E45A); } // 0x6C73E45A
	nativeDecl BOOL SET_VEHICLE_ON_GROUND_PROPERLY(Vehicle vehicle) { return invoke<BOOL>(0xE14FDBA6, vehicle); } // 0xE14FDBA6
	nativeDecl Any SET_ALL_VEHICLES_SPAWN(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0xA0909ADB, p0, p1, p2, p3); } // 0xA0909ADB
	nativeDecl BOOL IS_VEHICLE_STUCK_ON_ROOF(Vehicle Hash) { return invoke<BOOL>(0x18D07C6C, Hash); } // 0x18D07C6C
	nativeDecl void ADD_VEHICLE_UPSIDEDOWN_CHECK(Any p0) { invoke<Void>(0x3A13D384, p0); } // 0x3A13D384
	nativeDecl void REMOVE_VEHICLE_UPSIDEDOWN_CHECK(Any p0) { invoke<Void>(0xF390BA1B, p0); } // 0xF390BA1B
	nativeDecl BOOL IS_VEHICLE_STOPPED(Any p0) { return invoke<BOOL>(0x655F072C, p0); } // 0x655F072C
	nativeDecl int GET_VEHICLE_NUMBER_OF_PASSENGERS(Vehicle Vehicle) { return invoke<int>(0x1EF20849, Vehicle); } // 0x1EF20849
	nativeDecl int GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(Vehicle Vehicle) { return invoke<int>(0x0A2FC08C, Vehicle); } // 0x0A2FC08C
	nativeDecl int _GET_VEHICLE_MODEL_MAX_NUMBER_OF_PASSENGERS(Hash VehicleModel) { return invoke<int>(0x838F7BF7, VehicleModel); } // 0x838F7BF7
	nativeDecl BOOL _769E5CF2(Vehicle Vehicle, int i1) { return invoke<BOOL>(0x769E5CF2, Vehicle, i1); } // 0x769E5CF2
	nativeDecl void SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(Any p0) { invoke<Void>(0xF4187E51, p0); } // 0xF4187E51
	nativeDecl void SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(Any p0) { invoke<Void>(0x543F712B, p0); } // 0x543F712B
	nativeDecl void SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(Any p0) { invoke<Void>(0xDD46CEBE, p0); } // 0xDD46CEBE
	nativeDecl void _0x09462665(Any p0) { invoke<Void>(0x09462665, p0); } // 0x09462665
	nativeDecl void _0xDAE2A2BE(Any p0) { invoke<Void>(0xDAE2A2BE, p0); } // 0xDAE2A2BE
	nativeDecl void SET_FAR_DRAW_VEHICLES(Any p0) { invoke<Void>(0x9F019C49, p0); } // 0x9F019C49
	nativeDecl void SET_NUMBER_OF_PARKED_VEHICLES(int value) { invoke<Void>(0x206A58E8, value); } // 0x206A58E8
	nativeDecl void SET_VEHICLE_DOORS_LOCKED(Vehicle hash, int door) { invoke<Void>(0x4CDD35D0, hash, door); } // 0x4CDD35D0
	nativeDecl void SET_PED_TARGETTABLE_VEHICLE_DESTROY(Any p0, Any p1, Any p2) { invoke<Void>(0xD61D182D, p0, p1, p2); } // 0xD61D182D
	nativeDecl void DISABLE_VEHICLE_IMPACT_EXPLOSION_ACTIVATION(Any p0, Any p1) { invoke<Void>(0xC54156A9, p0, p1); } // 0xC54156A9
	nativeDecl void SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(Any p0, Any p1, Any p2) { invoke<Void>(0x49829236, p0, p1, p2); } // 0x49829236
	nativeDecl Any GET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(Any p0, Any p1) { return invoke<Any>(0x1DC50247, p0, p1); } // 0x1DC50247
	nativeDecl void SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(Any p0, Any p1) { invoke<Void>(0x891BA8A4, p0, p1); } // 0x891BA8A4
	nativeDecl void _0xE4EF6514(Any p0, Any p1) { invoke<Void>(0xE4EF6514, p0, p1); } // 0xE4EF6514
	nativeDecl void SET_VEHICLE_DOORS_LOCKED_FOR_TEAM(Any p0, Any p1, Any p2) { invoke<Void>(0x4F85E783, p0, p1, p2); } // 0x4F85E783
	nativeDecl void EXPLODE_VEHICLE(Vehicle vehicle, BOOL b1, BOOL b2) { invoke<Void>(0xBEDEACEB, vehicle, b1, b2); } // 0xBEDEACEB
	nativeDecl void SET_VEHICLE_OUT_OF_CONTROL(Any p0, Any p1, Any p2) { invoke<Void>(0x3764D734, p0, p1, p2); } // 0x3764D734
	nativeDecl void SET_VEHICLE_TIMED_EXPLOSION(Any p0, Any p1, Any p2) { invoke<Void>(0xDB8CB8E2, p0, p1, p2); } // 0xDB8CB8E2
	nativeDecl void _0x811373DE(Any p0) { invoke<Void>(0x811373DE, p0); } // 0x811373DE
	nativeDecl Any _0xA4E69134() { return invoke<Any>(0xA4E69134); } // 0xA4E69134
	nativeDecl void _0x65255524() { invoke<Void>(0x65255524); } // 0x65255524
	nativeDecl Any _0xE39DAF36(Any p0) { return invoke<Any>(0xE39DAF36, p0); } // 0xE39DAF36
	nativeDecl void SET_TAXI_LIGHTS(Vehicle vehicle, BOOL state) { invoke<Void>(0x68639D85, vehicle, state); } // 0x68639D85
	nativeDecl BOOL IS_TAXI_LIGHT_ON(Vehicle vehicle) { return invoke<BOOL>(0x6FC4924A, vehicle); } // 0x6FC4924A
	nativeDecl BOOL IS_VEHICLE_IN_GARAGE_AREA(Any p0, Any p1) { return invoke<BOOL>(0xA90EC257, p0, p1); } // 0xA90EC257
	nativeDecl void SET_VEHICLE_COLOURS(Any p0, Any p1, Any p2) { invoke<Void>(0x57F24253, p0, p1, p2); } // 0x57F24253
	nativeDecl void SET_VEHICLE_FULLBEAM(Vehicle vehicle, BOOL state) { invoke<Void>(0x9C49CC15, vehicle, state); } // 0x9C49CC15
	nativeDecl void STEER_UNLOCK_BIAS(Any p0, Any p1) { invoke<Void>(0xA59E3DCD, p0, p1); } // 0xA59E3DCD
	nativeDecl void SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(Vehicle vehicle, int r, int g, int b) { invoke<Void>(0x8DF9F9BC, vehicle, r, g, b); } // 0x8DF9F9BC
	nativeDecl void GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(Vehicle vehicle, int r, int g, int b) { invoke<Void>(0x1C2B9FEF, vehicle, r, g, b); } // 0x1C2B9FEF
	nativeDecl void CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(Vehicle vehicle) { invoke<Void>(0x51E1E33D, vehicle); } // 0x51E1E33D
	nativeDecl BOOL GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(Vehicle vehicle) { return invoke<BOOL>(0xD7EC8760, vehicle); } // 0xD7EC8760
	nativeDecl void SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(Vehicle vehicle, int r, int g, int b) { invoke<Void>(0x9D77259E, vehicle, r, g, b); } // 0x9D77259E
	nativeDecl void GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x3FF247A2, p0, p1, p2, p3); } // 0x3FF247A2
	nativeDecl void CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(Vehicle vehicle) { invoke<Void>(0x7CE00B29, vehicle); } // 0x7CE00B29
	nativeDecl BOOL GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(Vehicle vehicle) { return invoke<BOOL>(0x288AD228, vehicle); } // 0x288AD228
	nativeDecl void _0x8332730C(Any p0, Any p1) { invoke<Void>(0x8332730C, p0, p1); } // 0x8332730C
	nativeDecl Any _0xD5F1EEE1(Any p0) { return invoke<Any>(0xD5F1EEE1, p0); } // 0xD5F1EEE1
	nativeDecl void SET_CAN_RESPRAY_VEHICLE(Vehicle vehicle, BOOL state) { invoke<Void>(0x37677590, vehicle, state); } // 0x37677590
	nativeDecl void _0x54E9EE75(Any p0, Any p1) { invoke<Void>(0x54E9EE75, p0, p1); } // 0x54E9EE75
	nativeDecl void _0x4A46E814(Vehicle vehicle, BOOL p1, float X, float Y, float z) { invoke<Void>(0x4A46E814, vehicle, p1, X, Y, z); } // 0x4A46E814
	nativeDecl void SET_BOAT_ANCHOR(Vehicle vehicle, BOOL p1) { invoke<Void>(0xA3906284, vehicle, p1); } // 0xA3906284
	nativeDecl void _0x0ED84792(Any p0, Any p1) { invoke<Void>(0x0ED84792, p0, p1); } // 0x0ED84792
	nativeDecl void _0xA739012A(Any p0, Any p1) { invoke<Void>(0xA739012A, p0, p1); } // 0xA739012A
	nativeDecl void _0x66FA450C(Any p0, Any p1) { invoke<Void>(0x66FA450C, p0, p1); } // 0x66FA450C
	nativeDecl void _0x35614622(Any p0, Any p1) { invoke<Void>(0x35614622, p0, p1); } // 0x35614622
	nativeDecl void SET_VEHICLE_SIREN(Vehicle vehicle, BOOL siren) { invoke<Void>(0x4AC1EFC7, vehicle, siren); } // 0x4AC1EFC7
	nativeDecl BOOL IS_VEHICLE_SIREN_ON(Vehicle vehicle) { return invoke<BOOL>(0x25EB5873, vehicle); } // 0x25EB5873
	nativeDecl void SET_VEHICLE_STRONG(Vehicle vehicle, BOOL p0) { invoke<Void>(0xC758D19F, vehicle, p0); } // 0xC758D19F
	nativeDecl void REMOVE_VEHICLE_STUCK_CHECK(Any p0) { invoke<Void>(0x81594917, p0); } // 0x81594917
	nativeDecl void GET_VEHICLE_COLOURS(Vehicle vehicle, int* col1, int* col2) { invoke<Void>(0x40D82D88, vehicle, col1, col2); } // 0x40D82D88
	nativeDecl BOOL IS_VEHICLE_SEAT_FREE(Vehicle vehicle, int seatIndex) { return invoke<BOOL>(0xDAF42B02, vehicle, seatIndex); } // 0xDAF42B02
	nativeDecl Ped GET_PED_IN_VEHICLE_SEAT(Vehicle vehicle, int index) { return invoke<Ped>(0x388FDE9A, vehicle, index); } // 0x388FDE9A
	nativeDecl Any _0xF7C6792D(Any p0, Any p1) { return invoke<Any>(0xF7C6792D, p0, p1); } // 0xF7C6792D
	nativeDecl Any GET_VEHICLE_LIGHTS_STATE(Any p0, Any p1, Any p2) { return invoke<Any>(0x7C278621, p0, p1, p2); } // 0x7C278621
	nativeDecl BOOL IS_VEHICLE_TYRE_BURST(Vehicle vehicle, int wheelID, Any p2) { return invoke<BOOL>(0x48C80210, vehicle, wheelID, p2); } // 0x48C80210
	nativeDecl void SET_VEHICLE_FORWARD_SPEED(Vehicle vehicle, float speed) { invoke<Void>(0x69880D14, vehicle, speed); } // 0x69880D14
	nativeDecl void _0xCBC7D3C8(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xCBC7D3C8, p0, p1, p2, p3); } // 0xCBC7D3C8
	nativeDecl void _0x943A6CFC(Any p0, Any p1) { invoke<Void>(0x943A6CFC, p0, p1); } // 0x943A6CFC
	nativeDecl Any SET_PED_ENABLED_BIKE_RINGTONE(Any p0, Any p1) { return invoke<Any>(0x7FB25568, p0, p1); } // 0x7FB25568
	nativeDecl Any _0x593143B9(Any p0) { return invoke<Any>(0x593143B9, p0); } // 0x593143B9
	nativeDecl Any _0x70DD5E25(Any p0) { return invoke<Any>(0x70DD5E25, p0); } // 0x70DD5E25
	nativeDecl Any _0xFBF5536A(Any p0, Any p1) { return invoke<Any>(0xFBF5536A, p0, p1); } // 0xFBF5536A
	nativeDecl void _0x20AB5783(Any p0, Any p1) { invoke<Void>(0x20AB5783, p0, p1); } // 0x20AB5783
	nativeDecl void _0x0F11D01F(Any p0) { invoke<Void>(0x0F11D01F, p0); } // 0x0F11D01F
	nativeDecl void _0xAE040377(Any p0, Any p1) { invoke<Void>(0xAE040377, p0, p1); } // 0xAE040377
	nativeDecl void _0x4C0E4031(Any p0, Any p1) { invoke<Void>(0x4C0E4031, p0, p1); } // 0x4C0E4031
	nativeDecl Any _0x6346B7CC(Any p0) { return invoke<Any>(0x6346B7CC, p0); } // 0x6346B7CC
	nativeDecl void _0xCCB41A55(Any p0, Any p1) { invoke<Void>(0xCCB41A55, p0, p1); } // 0xCCB41A55
	nativeDecl void SET_VEHICLE_TYRE_BURST(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x89D28068, p0, p1, p2, p3); } // 0x89D28068
	nativeDecl void SET_VEHICLE_DOORS_SHUT(Vehicle vehicle, int index) { invoke<Void>(0xBB1FF6E7, vehicle, index); } // 0xBB1FF6E7
	nativeDecl void SET_VEHICLE_TYRES_CAN_BURST(Vehicle vehicle, BOOL value) { invoke<Void>(0xA198DB54, vehicle, value); } // 0xA198DB54
	nativeDecl BOOL GET_VEHICLE_TYRES_CAN_BURST(Vehicle vehicle) { return invoke<BOOL>(0x4D76CD2F, vehicle); } // 0x4D76CD2F
	nativeDecl void SET_VEHICLE_WHEELS_CAN_BREAK(Vehicle vehicle, BOOL enabled) { invoke<Void>(0x829ED654, vehicle, enabled); } // 0x829ED654
	nativeDecl void SET_VEHICLE_DOOR_OPEN(Vehicle vehicle, int doorIndex, BOOL loose, BOOL openInstantly) { invoke<Void>(0xBB75D38B, vehicle, doorIndex, loose, openInstantly); } // 0xBB75D38B
	nativeDecl void REMOVE_VEHICLE_WINDOW(Vehicle vehicle, int windowIndex) { invoke<Void>(0xBB8104A3, vehicle, windowIndex); } // 0xBB8104A3
	nativeDecl void ROLL_DOWN_WINDOWS(Vehicle vehicle) { invoke<Void>(0x51A16DC6, vehicle); } // 0x51A16DC6
	nativeDecl void ROLL_DOWN_WINDOW(Vehicle vehicle, int windowIndex) { invoke<Void>(0xF840134C, vehicle, windowIndex); } // 0xF840134C
	nativeDecl void ROLL_UP_WINDOW(Vehicle vehicle, int windowIndex) { invoke<Void>(0x83B7E06A, vehicle, windowIndex); } // 0x83B7E06A
	nativeDecl void SMASH_VEHICLE_WINDOW(Vehicle vehicle, int index) { invoke<Void>(0xDDD9A8C2, vehicle, index); } // 0xDDD9A8C2
	nativeDecl void FIX_VEHICLE_WINDOW(Vehicle vehicle, int index) { invoke<Void>(0x6B8E990D, vehicle, index); } // 0x6B8E990D
	nativeDecl void _DETACH_VEHICLE_WINDSCREEN(Vehicle vehicleHandle) { invoke<Void>(0xCC95C96B, vehicleHandle); } // 0xCC95C96B
	nativeDecl void _0xFDA7B6CA(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xFDA7B6CA, p0, p1, p2, p3); } // 0xFDA7B6CA
	nativeDecl void SET_VEHICLE_LIGHTS(Any p0, Any p1) { invoke<Void>(0xE8930226, p0, p1); } // 0xE8930226
	nativeDecl void _0x4221E435(Any p0, Any p1) { invoke<Void>(0x4221E435, p0, p1); } // 0x4221E435
	nativeDecl void SET_VEHICLE_ALARM(Vehicle vehicle, BOOL state) { invoke<Void>(0x24877D84, vehicle, state); } // 0x24877D84
	nativeDecl void START_VEHICLE_ALARM(Vehicle vehicle) { invoke<Void>(0x5B451FF7, vehicle); } // 0x5B451FF7
	nativeDecl BOOL IS_VEHICLE_ALARM_ACTIVATED(Vehicle vehicle) { return invoke<BOOL>(0xF2630A4C, vehicle); } // 0xF2630A4C
	nativeDecl void SET_VEHICLE_INTERIORLIGHT(Vehicle vehicle, BOOL Toggle) { invoke<Void>(0x9AD1FE1E, vehicle, Toggle); } // 0x9AD1FE1E
	nativeDecl void SET_VEHICLE_LIGHT_MULTIPLIER(Vehicle vehicle, float multiplier) { invoke<Void>(0x48039D6A, vehicle, multiplier); } // 0x48039D6A
	nativeDecl void ATTACH_VEHICLE_TO_TRAILER(Any p0, Any p1, Any p2) { invoke<Void>(0x2133977F, p0, p1, p2); } // 0x2133977F
	nativeDecl void _0x12AC1A16(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { invoke<Void>(0x12AC1A16, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x12AC1A16
	nativeDecl void _0x40C4763F(Any p0, Any p1, Any p2) { invoke<Void>(0x40C4763F, p0, p1, p2); } // 0x40C4763F
	nativeDecl void DETACH_VEHICLE_FROM_TRAILER(Any p0) { invoke<Void>(0xB5DBF91D, p0); } // 0xB5DBF91D
	nativeDecl BOOL IS_VEHICLE_ATTACHED_TO_TRAILER(Vehicle vehicle) { return invoke<BOOL>(0xE142BBCC, vehicle); } // 0xE142BBCC
	nativeDecl void _0xE74E85CE(Any p0, Any p1) { invoke<Void>(0xE74E85CE, p0, p1); } // 0xE74E85CE
	nativeDecl void _0x06C47A6F(Any p0) { invoke<Void>(0x06C47A6F, p0); } // 0x06C47A6F
	nativeDecl void SET_VEHICLE_TYRE_FIXED(Vehicle vehicle, int tyreIndex) { invoke<Void>(0xA42EFA6B, vehicle, tyreIndex); } // 0xA42EFA6B
	nativeDecl void SET_VEHICLE_NUMBER_PLATE_TEXT(Vehicle vehicle, const char* plateText) { invoke<Void>(0x400F9556, vehicle, plateText); } // 0x400F9556
	nativeDecl const char* GET_VEHICLE_NUMBER_PLATE_TEXT(Vehicle vehicle) { return invoke<const char*>(0xE8522D58, vehicle); } // 0xE8522D58
	nativeDecl Any GET_NUMBER_OF_VEHICLE_NUMBER_PLATES() { return invoke<Any>(0xD24BC1AE); } // 0xD24BC1AE
	nativeDecl void SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(Vehicle vehicle, int PlateType) { invoke<Void>(0xA1A1890E, vehicle, PlateType); } // 0xA1A1890E
	nativeDecl int GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(Vehicle vehicle) { return invoke<int>(0x499747B6, vehicle); } // 0x499747B6
	nativeDecl void SET_RANDOM_TRAINS(Any p0) { invoke<Void>(0xD461CA7F, p0); } // 0xD461CA7F
	nativeDecl Any CREATE_MISSION_TRAIN(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0xD4C2EAFD, p0, p1, p2, p3, p4); } // 0xD4C2EAFD
	nativeDecl void SWITCH_TRAIN_TRACK(Any p0, Any p1) { invoke<Void>(0x68BFDD61, p0, p1); } // 0x68BFDD61
	nativeDecl void _0xD5774FB7(Any p0, Any p1) { invoke<Void>(0xD5774FB7, p0, p1); } // 0xD5774FB7
	nativeDecl void DELETE_ALL_TRAINS() { invoke<Void>(0x83DE7ABF); } // 0x83DE7ABF
	nativeDecl void SET_TRAIN_SPEED(Any p0, Any p1) { invoke<Void>(0xDFC35E4D, p0, p1); } // 0xDFC35E4D
	nativeDecl void SET_TRAIN_CRUISE_SPEED(Any p0, Any p1) { invoke<Void>(0xB507F51D, p0, p1); } // 0xB507F51D
	nativeDecl void SET_RANDOM_BOATS(Any p0) { invoke<Void>(0xB505BD89, p0); } // 0xB505BD89
	nativeDecl void SET_GARBAGE_TRUCKS(Any p0) { invoke<Void>(0xD9ABB0FF, p0); } // 0xD9ABB0FF
	nativeDecl BOOL DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(Any p0) { return invoke<BOOL>(0x5D91D9AC, p0); } // 0x5D91D9AC
	nativeDecl Any GET_VEHICLE_RECORDING_ID(Any p0, Any p1) { return invoke<Any>(0x328D601D, p0, p1); } // 0x328D601D
	nativeDecl void REQUEST_VEHICLE_RECORDING(Any p0, Any p1) { invoke<Void>(0x91AFEFD9, p0, p1); } // 0x91AFEFD9
	nativeDecl BOOL HAS_VEHICLE_RECORDING_BEEN_LOADED(Any p0, Any p1) { return invoke<BOOL>(0xF52CD7F5, p0, p1); } // 0xF52CD7F5
	nativeDecl void REMOVE_VEHICLE_RECORDING(Any p0, Any p1) { invoke<Void>(0xD3C05B00, p0, p1); } // 0xD3C05B00
	nativeDecl Vector3 _0xF31973BB(Any p0, Any p1) { return invoke<Vector3>(0xF31973BB, p0, p1); } // 0xF31973BB
	nativeDecl Vector3 GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(Any p0, Any p1, Any p2) { return invoke<Vector3>(0x7178558D, p0, p1, p2); } // 0x7178558D
	nativeDecl Vector3 _0x4D1C15C2(Any p0, Any p1) { return invoke<Vector3>(0x4D1C15C2, p0, p1); } // 0x4D1C15C2
	nativeDecl Vector3 GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(Any p0, Any p1, Any p2) { return invoke<Vector3>(0xD96DEC68, p0, p1, p2); } // 0xD96DEC68
	nativeDecl Any GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(Any p0) { return invoke<Any>(0x7116785E, p0); } // 0x7116785E
	nativeDecl Any GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(Any p0, Any p1) { return invoke<Any>(0x5B35EEB7, p0, p1); } // 0x5B35EEB7
	nativeDecl Any GET_POSITION_IN_RECORDING(Any p0) { return invoke<Any>(0x7DCD644C, p0); } // 0x7DCD644C
	nativeDecl Any GET_TIME_POSITION_IN_RECORDING(Any p0) { return invoke<Any>(0xF8C3E4A2, p0); } // 0xF8C3E4A2
	nativeDecl void START_PLAYBACK_RECORDED_VEHICLE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xCF614CA8, p0, p1, p2, p3); } // 0xCF614CA8
	nativeDecl void START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x4E721AD2, p0, p1, p2, p3, p4, p5); } // 0x4E721AD2
	nativeDecl void _0x01B91CD0(Any p0, Any p1) { invoke<Void>(0x01B91CD0, p0, p1); } // 0x01B91CD0
	nativeDecl void STOP_PLAYBACK_RECORDED_VEHICLE(Any p0) { invoke<Void>(0xAE99C57C, p0); } // 0xAE99C57C
	nativeDecl void PAUSE_PLAYBACK_RECORDED_VEHICLE(Any p0) { invoke<Void>(0xCCF54912, p0); } // 0xCCF54912
	nativeDecl void UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Any p0) { invoke<Void>(0x59060F75, p0); } // 0x59060F75
	nativeDecl BOOL IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Any p0) { return invoke<BOOL>(0x61F7650D, p0); } // 0x61F7650D
	nativeDecl BOOL IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(Any p0) { return invoke<BOOL>(0x63022C58, p0); } // 0x63022C58
	nativeDecl Any GET_CURRENT_PLAYBACK_FOR_VEHICLE(Any p0) { return invoke<Any>(0xA3F44390, p0); } // 0xA3F44390
	nativeDecl void SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(Any p0) { invoke<Void>(0x8DEA18C8, p0); } // 0x8DEA18C8
	nativeDecl void SET_PLAYBACK_SPEED(Any p0, float speed) { invoke<Void>(0x684E26E4, p0, speed); } // 0x684E26E4
	nativeDecl void START_PLAYBACK_RECORDED_VEHICLE_USING_AI(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x8DE8E24E, p0, p1, p2, p3, p4); } // 0x8DE8E24E
	nativeDecl void SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Any p0, Any p1) { invoke<Void>(0xCF3EFA4B, p0, p1); } // 0xCF3EFA4B
	nativeDecl void SET_PLAYBACK_TO_USE_AI(Any p0, Any p1) { invoke<Void>(0xB536CCD7, p0, p1); } // 0xB536CCD7
	nativeDecl void SET_PLAYBACK_TO_USE_AI_TRY_TO_REVERT_BACK_LATER(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x0C8ABAA4, p0, p1, p2, p3); } // 0x0C8ABAA4
	nativeDecl void _0x943A58EB(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x943A58EB, p0, p1, p2, p3, p4); } // 0x943A58EB
	nativeDecl void _0x5C9F477C(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x5C9F477C, p0, p1, p2, p3); } // 0x5C9F477C
	nativeDecl void _0xCD83C393(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xCD83C393, p0, p1, p2, p3); } // 0xCD83C393
	nativeDecl void _0x2EF8435C(Any p0, Any p1) { invoke<Void>(0x2EF8435C, p0, p1); } // 0x2EF8435C
	nativeDecl void EXPLODE_VEHICLE_IN_CUTSCENE(Any p0, Any p1) { invoke<Void>(0xA85207B5, p0, p1); } // 0xA85207B5
	nativeDecl void ADD_VEHICLE_STUCK_CHECK_WITH_WARP(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0xC8B789AD, p0, p1, p2, p3, p4, p5, p6); } // 0xC8B789AD
	nativeDecl void SET_VEHICLE_MODEL_IS_SUPPRESSED(Any p0, Any p1) { invoke<Void>(0x42A08C9B, p0, p1); } // 0x42A08C9B
	nativeDecl Entity GET_RANDOM_VEHICLE_IN_SPHERE(float p0, float p1, float p2, float p3, int p4, int p5) { return invoke<Entity>(0x57216D03, p0, p1, p2, p3, p4, p5); } // 0x57216D03
	nativeDecl Entity GET_RANDOM_VEHICLE_FRONT_BUMPER_IN_SPHERE(float p0, float p1, float p2, float p3, int p4, int p5, int p6) { return invoke<Entity>(0xDCADEB66, p0, p1, p2, p3, p4, p5, p6); } // 0xDCADEB66
	nativeDecl Entity GET_RANDOM_VEHICLE_BACK_BUMPER_IN_SPHERE(float p0, float p1, float p2, float p3, int p4, int p5, int p6) { return invoke<Entity>(0xD6343F6B, p0, p1, p2, p3, p4, p5, p6); } // 0xD6343F6B
	nativeDecl Vehicle GET_CLOSEST_VEHICLE(float x, float y, float z, float radius, Hash hash, int unk1) { return invoke<Vehicle>(0xD7E26B2C, x, y, z, radius, hash, unk1); } // 0xD7E26B2C
	nativeDecl Any GET_TRAIN_CARRIAGE(Any p0, Any p1) { return invoke<Any>(0x2544E7A6, p0, p1); } // 0x2544E7A6
	nativeDecl void DELETE_MISSION_TRAIN(Any p0) { invoke<Void>(0x86C9497D, p0); } // 0x86C9497D
	nativeDecl void SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(Any p0, Any p1) { invoke<Void>(0x19808560, p0, p1); } // 0x19808560
	nativeDecl void SET_MISSION_TRAIN_COORDS(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xD6D70803, p0, p1, p2, p3); } // 0xD6D70803
	nativeDecl BOOL IS_THIS_MODEL_A_BOAT(Hash model) { return invoke<BOOL>(0x10F6085C, model); } // 0x10F6085C
	nativeDecl BOOL IS_THIS_MODEL_A_PLANE(Hash model) { return invoke<BOOL>(0x3B3907BB, model); } // 0x3B3907BB
	nativeDecl BOOL IS_THIS_MODEL_A_HELI(Hash model) { return invoke<BOOL>(0x8AF7F568, model); } // 0x8AF7F568
	nativeDecl BOOL IS_THIS_MODEL_A_CAR(Hash model) { return invoke<BOOL>(0x60E4C22F, model); } // 0x60E4C22F
	nativeDecl BOOL IS_THIS_MODEL_A_TRAIN(Hash model) { return invoke<BOOL>(0xF87DCFFD, model); } // 0xF87DCFFD
	nativeDecl BOOL IS_THIS_MODEL_A_BIKE(Hash model) { return invoke<BOOL>(0x7E702CDD, model); } // 0x7E702CDD
	nativeDecl BOOL IS_THIS_MODEL_A_BICYCLE(Hash model) { return invoke<BOOL>(0x328E6FF5, model); } // 0x328E6FF5
	nativeDecl BOOL IS_THIS_MODEL_A_QUADBIKE(Hash model) { return invoke<BOOL>(0xC1625277, model); } // 0xC1625277
	nativeDecl void SET_HELI_BLADES_FULL_SPEED(Any p0) { invoke<Void>(0x033A9408, p0); } // 0x033A9408
	nativeDecl void SET_HELI_BLADES_SPEED(Vehicle vehicle, float speed) { invoke<Void>(0x5C7D4EA9, vehicle, speed); } // 0x5C7D4EA9
	nativeDecl void _0x1128A45B(Any p0, Any p1, Any p2) { invoke<Void>(0x1128A45B, p0, p1, p2); } // 0x1128A45B
	nativeDecl void SET_VEHICLE_CAN_BE_TARGETTED(Vehicle vehicle, BOOL state) { invoke<Void>(0x64B70B1D, vehicle, state); } // 0x64B70B1D
	nativeDecl void _0x486C1280(Any p0, Any p1) { invoke<Void>(0x486C1280, p0, p1); } // 0x486C1280
	nativeDecl void SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Vehicle vehicle, BOOL state) { invoke<Void>(0xC5D94017, vehicle, state); } // 0xC5D94017
	nativeDecl void _0x009AB49E(Any p0, Any p1) { invoke<Void>(0x009AB49E, p0, p1); } // 0x009AB49E
	nativeDecl void _0x758C5E2E(Any p0, Any p1) { invoke<Void>(0x758C5E2E, p0, p1); } // 0x758C5E2E
	nativeDecl float GET_VEHICLE_DIRT_LEVEL(Vehicle vehicle) { return invoke<float>(0xFD15C065, vehicle); } // 0xFD15C065
	nativeDecl void SET_VEHICLE_DIRT_LEVEL(Vehicle Vehicle, float DirtLVL) { invoke<Void>(0x2B39128B, Vehicle, DirtLVL); } // 0x2B39128B
	nativeDecl Any _0xDAC523BC(Any p0) { return invoke<Any>(0xDAC523BC, p0); } // 0xDAC523BC
	nativeDecl BOOL IS_VEHICLE_DOOR_FULLY_OPEN(Vehicle vehicle, int doorIndex) { return invoke<BOOL>(0xC2385B6F, vehicle, doorIndex); } // 0xC2385B6F
	nativeDecl void SET_VEHICLE_ENGINE_ON(Vehicle veh, BOOL engineState, BOOL p3) { invoke<Void>(0x7FBC86F1, veh, engineState, p3); } // 0x7FBC86F1
	nativeDecl void SET_VEHICLE_UNDRIVEABLE(Vehicle vehicle, BOOL state) { invoke<Void>(0x48D02A4E, vehicle, state); } // 0x48D02A4E
	nativeDecl void SET_VEHICLE_PROVIDES_COVER(Any p0, Any p1) { invoke<Void>(0xEFC01CA9, p0, p1); } // 0xEFC01CA9
	nativeDecl void SET_VEHICLE_DOOR_CONTROL(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x572DD360, p0, p1, p2, p3); } // 0x572DD360
	nativeDecl void SET_VEHICLE_DOOR_LATCHED(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x4EB7BBFC, p0, p1, p2, p3, p4); } // 0x4EB7BBFC
	nativeDecl Any GET_VEHICLE_DOOR_ANGLE_RATIO(Any p0, Any p1) { return invoke<Any>(0x0E399C26, p0, p1); } // 0x0E399C26
	nativeDecl void SET_VEHICLE_DOOR_SHUT(Vehicle vehicle, int doorIndex, BOOL closeInstantly) { invoke<Void>(0x142606BD, vehicle, doorIndex, closeInstantly); } // 0x142606BD
	nativeDecl void SET_VEHICLE_DOOR_BROKEN(Vehicle veh, int doorIndex, BOOL unk) { invoke<Void>(0x8147FEA7, veh, doorIndex, unk); } // 0x8147FEA7
	nativeDecl void SET_VEHICLE_CAN_BREAK(Vehicle vehicle, BOOL Toggle) { invoke<Void>(0x90A810D1, vehicle, Toggle); } // 0x90A810D1
	nativeDecl BOOL DOES_VEHICLE_HAVE_ROOF(Vehicle vehicle) { return invoke<BOOL>(0xDB817403, vehicle); } // 0xDB817403
	nativeDecl BOOL IS_BIG_VEHICLE(Vehicle vehicle) { return invoke<BOOL>(0x9CDBA8DE, vehicle); } // 0x9CDBA8DE
	nativeDecl Any GET_NUMBER_OF_VEHICLE_COLOURS(Any p0) { return invoke<Any>(0xF2442EE2, p0); } // 0xF2442EE2
	nativeDecl void SET_VEHICLE_COLOUR_COMBINATION(Any p0, Any p1) { invoke<Void>(0xA557AEAD, p0, p1); } // 0xA557AEAD
	nativeDecl Any GET_VEHICLE_COLOUR_COMBINATION(Any p0) { return invoke<Any>(0x77AC1B4C, p0); } // 0x77AC1B4C
	nativeDecl void SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Any p0, Any p1) { invoke<Void>(0x14413319, p0, p1); } // 0x14413319
	nativeDecl void _0xA6D8D7A5(Any p0, Any p1) { invoke<Void>(0xA6D8D7A5, p0, p1); } // 0xA6D8D7A5
	nativeDecl void _0xACAB8FF3(Any p0, Any p1) { invoke<Void>(0xACAB8FF3, p0, p1); } // 0xACAB8FF3
	nativeDecl void _0xF0E5C41D(Any p0, Any p1) { invoke<Void>(0xF0E5C41D, p0, p1); } // 0xF0E5C41D
	nativeDecl void _0x2F98B4B7(Any p0, Any p1) { invoke<Void>(0x2F98B4B7, p0, p1); } // 0x2F98B4B7
	nativeDecl void GET_RANDOM_VEHICLE_MODEL_IN_MEMORY(BOOL b0, Hash* p1, int* p2) { invoke<Void>(0xE2C45631, b0, p1, p2); } // 0xE2C45631
	nativeDecl Any GET_VEHICLE_DOOR_LOCK_STATUS(Any p0) { return invoke<Any>(0x0D72CEF2, p0); } // 0x0D72CEF2
	nativeDecl BOOL IS_VEHICLE_DOOR_DAMAGED(Vehicle veh, int doorID) { return invoke<BOOL>(0x4999E3C3, veh, doorID); } // 0x4999E3C3
	nativeDecl void _0x065B92B3(Any p0, Any p1, Any p2) { invoke<Void>(0x065B92B3, p0, p1, p2); } // 0x065B92B3
	nativeDecl Any _0xB3A2CC4F(Any p0, Any p1) { return invoke<Any>(0xB3A2CC4F, p0, p1); } // 0xB3A2CC4F
	nativeDecl BOOL IS_VEHICLE_BUMPER_BROKEN_OFF(Any p0, Any p1) { return invoke<BOOL>(0xAF25C027, p0, p1); } // 0xAF25C027
	nativeDecl BOOL IS_COP_VEHICLE_IN_AREA_3D(Any x1, Any x2, Any y1, Any y2, Any z1, Any z2) { return invoke<BOOL>(0xFB16C6D1, x1, x2, y1, y2, z1, z2); } // 0xFB16C6D1
	nativeDecl BOOL IS_VEHICLE_ON_ALL_WHEELS(Vehicle vehicle) { return invoke<BOOL>(0x10089F8E, vehicle); } // 0x10089F8E
	nativeDecl Any GET_VEHICLE_LAYOUT_HASH(Any p0) { return invoke<Any>(0xE0B35187, p0); } // 0xE0B35187
	nativeDecl void SET_RENDER_TRAIN_AS_DERAILED(Any p0, Any p1) { invoke<Void>(0x899D9092, p0, p1); } // 0x899D9092
	nativeDecl void SET_VEHICLE_EXTRA_COLOURS(Any p0, Any p1, Any p2) { invoke<Void>(0x515DB2A0, p0, p1, p2); } // 0x515DB2A0
	nativeDecl void GET_VEHICLE_EXTRA_COLOURS(int vehicle, int* pearl, int* wheelcolor) { invoke<Void>(0x80E4659B, vehicle, pearl, wheelcolor); } // 0x80E4659B
	nativeDecl void STOP_ALL_GARAGE_ACTIVITY() { invoke<Void>(0x17A0BCE5); } // 0x17A0BCE5
	nativeDecl void SET_VEHICLE_FIXED(Vehicle Vehicle) { invoke<Void>(0x17469AA1, Vehicle); } // 0x17469AA1
	nativeDecl void SET_VEHICLE_DEFORMATION_FIXED(Vehicle Vehicle) { invoke<Void>(0xDD2920C8, Vehicle); } // 0xDD2920C8
	nativeDecl void _0x88F0F7E7(Any p0, Any p1) { invoke<Void>(0x88F0F7E7, p0, p1); } // 0x88F0F7E7
	nativeDecl void _0x90D6EE57(Any p0, Any p1) { invoke<Void>(0x90D6EE57, p0, p1); } // 0x90D6EE57
	nativeDecl void _0xC40192B5(Any p0, Any p1) { invoke<Void>(0xC40192B5, p0, p1); } // 0xC40192B5
	nativeDecl void SET_DISABLE_VEHICLE_PETROL_TANK_DAMAGE(Any p0, Any p1) { invoke<Void>(0xAD3E05F2, p0, p1); } // 0xAD3E05F2
	nativeDecl void _0x1784BA1A(Any p0, Any p1) { invoke<Void>(0x1784BA1A, p0, p1); } // 0x1784BA1A
	nativeDecl void _0x40C323AE(Any p0, Any p1) { invoke<Void>(0x40C323AE, p0, p1); } // 0x40C323AE
	nativeDecl void _0x847F1304(Any p0, Any p1) { invoke<Void>(0x847F1304, p0, p1); } // 0x847F1304
	nativeDecl void _0xCBD98BA1(Any p0, Any p1) { invoke<Void>(0xCBD98BA1, p0, p1); } // 0xCBD98BA1
	nativeDecl void REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Any x1, Any x2, Any y1, Any y2, Any z1, Any z2) { invoke<Void>(0x42CC15E0, x1, x2, y1, y2, z1, z2); } // 0x42CC15E0
	nativeDecl void SET_VEHICLE_STEER_BIAS(Any p0, Any p1) { invoke<Void>(0x7357C1EB, p0, p1); } // 0x7357C1EB
	nativeDecl BOOL IS_VEHICLE_EXTRA_TURNED_ON(Any p0, Any p1) { return invoke<BOOL>(0x042098B5, p0, p1); } // 0x042098B5
	nativeDecl void SET_VEHICLE_EXTRA(Vehicle vehicle, int ExtraID, int Toggle) { invoke<Void>(0x642D065C, vehicle, ExtraID, Toggle); } // 0x642D065C
	nativeDecl BOOL DOES_EXTRA_EXIST(Any p0, Any p1) { return invoke<BOOL>(0x409411CC, p0, p1); } // 0x409411CC
	nativeDecl void SET_CONVERTIBLE_ROOF(Any p0, Any p1) { invoke<Void>(0xC87B6A51, p0, p1); } // 0xC87B6A51
	nativeDecl void LOWER_CONVERTIBLE_ROOF(Any p0, Any p1) { invoke<Void>(0xC5F72EAE, p0, p1); } // 0xC5F72EAE
	nativeDecl void RAISE_CONVERTIBLE_ROOF(Any p0, Any p1) { invoke<Void>(0xA4E4CBA3, p0, p1); } // 0xA4E4CBA3
	nativeDecl Any GET_CONVERTIBLE_ROOF_STATE(Any p0) { return invoke<Any>(0x1B09714D, p0); } // 0x1B09714D
	nativeDecl BOOL IS_VEHICLE_A_CONVERTIBLE(Any p0, Any p1) { return invoke<BOOL>(0x6EF54490, p0, p1); } // 0x6EF54490
	nativeDecl BOOL IS_VEHICLE_STOPPED_AT_TRAFFIC_LIGHTS(Any p0) { return invoke<BOOL>(0x69200FA4, p0); } // 0x69200FA4
	nativeDecl void SET_VEHICLE_DAMAGE(Any p0, float p1, float p2, float p3, float p4, float p5, Any p6) { invoke<Void>(0x21B458B2, p0, p1, p2, p3, p4, p5, p6); } // 0x21B458B2
	nativeDecl float GET_VEHICLE_ENGINE_HEALTH(Vehicle vehicle) { return invoke<float>(0x8880038A, vehicle); } // 0x8880038A
	nativeDecl void SET_VEHICLE_ENGINE_HEALTH(Vehicle vehicle, float health) { invoke<Void>(0x1B760FB5, vehicle, health); } // 0x1B760FB5
	nativeDecl float GET_VEHICLE_PETROL_TANK_HEALTH(Vehicle vehicle) { return invoke<float>(0xE41595CE, vehicle); } // 0xE41595CE
	nativeDecl void SET_VEHICLE_PETROL_TANK_HEALTH(Vehicle vehicle, float health) { invoke<Void>(0x660A3692, vehicle, health); } // 0x660A3692
	nativeDecl BOOL IS_VEHICLE_STUCK_TIMER_UP(Any p0, Any p1, Any p2) { return invoke<BOOL>(0x2FCF58C1, p0, p1, p2); } // 0x2FCF58C1
	nativeDecl void RESET_VEHICLE_STUCK_TIMER(Any p0, Any p1) { invoke<Void>(0xEF2A6016, p0, p1); } // 0xEF2A6016
	nativeDecl BOOL IS_VEHICLE_DRIVEABLE(Any p0, Any p1) { return invoke<BOOL>(0x41A7267A, p0, p1); } // 0x41A7267A
	nativeDecl void SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(Any p0, Any p1) { invoke<Void>(0xB4D3DBFB, p0, p1); } // 0xB4D3DBFB
	nativeDecl void SET_VEHICLE_NEEDS_TO_BE_HOTWIRED(Any p0, Any p1) { invoke<Void>(0xD8260751, p0, p1); } // 0xD8260751
	nativeDecl void START_VEHICLE_HORN(Vehicle p0, int p1, int p2, BOOL p3) { invoke<Void>(0x0DF5ADB3, p0, p1, p2, p3); } // 0x0DF5ADB3
	nativeDecl void _0x968E5770(Any p0, Any p1) { invoke<Void>(0x968E5770, p0, p1); } // 0x968E5770
	nativeDecl void SET_VEHICLE_HAS_STRONG_AXLES(Any p0, Any p1) { invoke<Void>(0x0D1CBC65, p0, p1); } // 0x0D1CBC65
	nativeDecl Any GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Any p0) { return invoke<Any>(0xEC86DF39, p0); } // 0xEC86DF39
	nativeDecl Vector3 GET_VEHICLE_DEFORMATION_AT_POS(Any p0, Any p1, Any p2, Any p3) { return invoke<Vector3>(0xABF02075, p0, p1, p2, p3); } // 0xABF02075
	nativeDecl void SET_VEHICLE_LIVERY(Vehicle vehicle, int LiveryIndex) { invoke<Void>(0x7AD87059, vehicle, LiveryIndex); } // 0x7AD87059
	nativeDecl Any GET_VEHICLE_LIVERY(Any p0) { return invoke<Any>(0xEC82A51D, p0); } // 0xEC82A51D
	nativeDecl Any GET_VEHICLE_LIVERY_COUNT(Any p0) { return invoke<Any>(0xFB0CA947, p0); } // 0xFB0CA947
	nativeDecl BOOL IS_VEHICLE_WINDOW_INTACT(Any p0, Any p1) { return invoke<BOOL>(0xAC4EF23D, p0, p1); } // 0xAC4EF23D
	nativeDecl Any _0xBB619744(Any p0) { return invoke<Any>(0xBB619744, p0); } // 0xBB619744
	nativeDecl Any _0x648E685A(Any p0) { return invoke<Any>(0x648E685A, p0); } // 0x648E685A
	nativeDecl void RESET_VEHICLE_WHEELS(Any p0, Any p1) { invoke<Void>(0xD5FFE779, p0, p1); } // 0xD5FFE779
	nativeDecl BOOL IS_HELI_PART_BROKEN(Any p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0xF4E4C439, p0, p1, p2, p3); } // 0xF4E4C439
	nativeDecl Any _0xF01E2AAB(Any p0) { return invoke<Any>(0xF01E2AAB, p0); } // 0xF01E2AAB
	nativeDecl Any _0xA41BC13D(Any p0) { return invoke<Any>(0xA41BC13D, p0); } // 0xA41BC13D
	nativeDecl Any _0x8A68388F(Any p0) { return invoke<Any>(0x8A68388F, p0); } // 0x8A68388F
	nativeDecl BOOL WAS_COUNTER_ACTIVATED(Any p0, Any p1) { return invoke<BOOL>(0x2916D69B, p0, p1); } // 0x2916D69B
	nativeDecl void SET_VEHICLE_NAME_DEBUG(Any p0, Any p1) { invoke<Void>(0xA712FF5C, p0, p1); } // 0xA712FF5C
	nativeDecl void SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(Any p0, Any p1) { invoke<Void>(0x38CC692B, p0, p1); } // 0x38CC692B
	nativeDecl void _0xC306A9A3(Any p0, Any p1) { invoke<Void>(0xC306A9A3, p0, p1); } // 0xC306A9A3
	nativeDecl void _0x95A9ACCB(Vehicle vehicle, BOOL p1) { invoke<Void>(0x95A9ACCB, vehicle, p1); } // 0x95A9ACCB
	nativeDecl void _0x24F873FB(Any p0, Any p1) { invoke<Void>(0x24F873FB, p0, p1); } // 0x24F873FB
	nativeDecl Any _0xA6F02670(Any p0) { return invoke<Any>(0xA6F02670, p0); } // 0xA6F02670
	nativeDecl BOOL IS_ANY_VEHICLE_NEAR_POINT(Any p0, Any x, Any y, Any z) { return invoke<BOOL>(0x2867A834, p0, x, y, z); } // 0x2867A834
	nativeDecl void REQUEST_VEHICLE_HIGH_DETAIL_MODEL(Any p0) { invoke<Void>(0x9DA21956, p0); } // 0x9DA21956
	nativeDecl void REMOVE_VEHICLE_HIGH_DETAIL_MODEL(Any p0) { invoke<Void>(0x382BE070, p0); } // 0x382BE070
	nativeDecl BOOL IS_VEHICLE_HIGH_DETAIL(Any p0) { return invoke<BOOL>(0x55D41928, p0); } // 0x55D41928
	nativeDecl void REQUEST_VEHICLE_ASSET(Hash VehicleHash, int p1) { invoke<Void>(0x902B4F06, VehicleHash, p1); } // 0x902B4F06
	nativeDecl BOOL HAS_VEHICLE_ASSET_LOADED(Any p0) { return invoke<BOOL>(0x8DAAC3CB, p0); } // 0x8DAAC3CB
	nativeDecl void REMOVE_VEHICLE_ASSET(Any p0) { invoke<Void>(0x9620E9C6, p0); } // 0x9620E9C6
	nativeDecl void _0x88236E22(Any p0, Any p1) { invoke<Void>(0x88236E22, p0, p1); } // 0x88236E22
	nativeDecl void ATTACH_VEHICLE_TO_TOW_TRUCK(Entity entity, Entity entity2, int instant, float x, float y, float z) { invoke<Void>(0x8151571A, entity, entity2, instant, x, y, z); } // 0x8151571A
	nativeDecl void DETACH_VEHICLE_FROM_TOW_TRUCK(Any p0, Any p1) { invoke<Void>(0xC666CF33, p0, p1); } // 0xC666CF33
	nativeDecl Any DETACH_VEHICLE_FROM_ANY_TOW_TRUCK(Any p0) { return invoke<Any>(0x3BF93651, p0); } // 0x3BF93651
	nativeDecl BOOL IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(Any p0, Any p1) { return invoke<BOOL>(0x9699CFDC, p0, p1); } // 0x9699CFDC
	nativeDecl Any GET_ENTITY_ATTACHED_TO_TOW_TRUCK(Any p0) { return invoke<Any>(0x11EC7844, p0); } // 0x11EC7844
	nativeDecl Any SET_VEHICLE_AUTOMATICALLY_ATTACHES(Any p0, Any p1, Any p2) { return invoke<Any>(0x4273A8D3, p0, p1, p2); } // 0x4273A8D3
	nativeDecl void _0xED23C8A3(Any p0, Any p1, Any p2) { invoke<Void>(0xED23C8A3, p0, p1, p2); } // 0xED23C8A3
	nativeDecl void _0xB1A52EF7(Any p0, Any p1, Any p2) { invoke<Void>(0xB1A52EF7, p0, p1, p2); } // 0xB1A52EF7
	nativeDecl void _0xF30C566F(Any p0, Any p1) { invoke<Void>(0xF30C566F, p0, p1); } // 0xF30C566F
	nativeDecl void _0xA7DF64D7(Any p0, Any p1) { invoke<Void>(0xA7DF64D7, p0, p1); } // 0xA7DF64D7
	nativeDecl void _0xDD7936F5(Any p0, Any p1) { invoke<Void>(0xDD7936F5, p0, p1); } // 0xDD7936F5
	nativeDecl Any _0x34E02FCD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoke<Any>(0x34E02FCD, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x34E02FCD
	nativeDecl void SET_VEHICLE_BURNOUT(Any p0, Any p1) { invoke<Void>(0x9B6EF0EA, p0, p1); } // 0x9B6EF0EA
	nativeDecl BOOL IS_VEHICLE_IN_BURNOUT(Vehicle vehicle) { return invoke<BOOL>(0x6632BC12, vehicle); } // 0x6632BC12
	nativeDecl void SET_VEHICLE_REDUCE_GRIP(Vehicle Vehicle, BOOL Toggle) { invoke<Void>(0x90D3A0D9, Vehicle, Toggle); } // 0x90D3A0D9
	nativeDecl void SET_VEHICLE_INDICATOR_LIGHTS(Vehicle vehicle, int turnSignal, BOOL Toggle) { invoke<Void>(0xA6073B5D, vehicle, turnSignal, Toggle); } // 0xA6073B5D
	nativeDecl void SET_VEHICLE_BRAKE_LIGHTS(Vehicle vehicle, BOOL Toggle) { invoke<Void>(0x6D9BA11E, vehicle, Toggle); } // 0x6D9BA11E
	nativeDecl void SET_VEHICLE_HANDBRAKE(Vehicle vehicle, BOOL Toggle) { invoke<Void>(0xBA729A25, vehicle, Toggle); } // 0xBA729A25
	nativeDecl void _0x37BC6ACB() { invoke<Void>(0x37BC6ACB); } // 0x37BC6ACB
	nativeDecl Any _0x71D898EF() { return invoke<Any>(0x71D898EF); } // 0x71D898EF
	nativeDecl void _0x0B0523B0(Any p0) { invoke<Void>(0x0B0523B0, p0); } // 0x0B0523B0
	nativeDecl Any GET_VEHICLE_TRAILER_VEHICLE(Any p0, Any p1) { return invoke<Any>(0xAE84D758, p0, p1); } // 0xAE84D758
	nativeDecl void _0x0B200CE2(Any p0, Any p1) { invoke<Void>(0x0B200CE2, p0, p1); } // 0x0B200CE2
	nativeDecl void SET_VEHICLE_RUDDER_BROKEN(Any p0, Any p1) { invoke<Void>(0x3FAC3CD4, p0, p1); } // 0x3FAC3CD4
	nativeDecl void _0x0858678C(Any p0, Any p1) { invoke<Void>(0x0858678C, p0, p1); } // 0x0858678C
	nativeDecl Any _0x7D1A0616(Any p0) { return invoke<Any>(0x7D1A0616, p0); } // 0x7D1A0616
	nativeDecl Any GET_VEHICLE_MAX_BRAKING(Any p0) { return invoke<Any>(0x03B926F6, p0); } // 0x03B926F6
	nativeDecl Any GET_VEHICLE_MAX_TRACTION(Any p0) { return invoke<Any>(0x7E5A1587, p0); } // 0x7E5A1587
	nativeDecl Any GET_VEHICLE_ACCELERATION(Any p0) { return invoke<Any>(0x00478321, p0); } // 0x00478321
	nativeDecl Any _0x8F291C4A(Any p0) { return invoke<Any>(0x8F291C4A, p0); } // 0x8F291C4A
	nativeDecl Any GET_VEHICLE_MODEL_MAX_BRAKING(Any p0) { return invoke<Any>(0x7EF02883, p0); } // 0x7EF02883
	nativeDecl Any _0xF3A7293F(Any p0) { return invoke<Any>(0xF3A7293F, p0); } // 0xF3A7293F
	nativeDecl Any GET_VEHICLE_MODEL_MAX_TRACTION(Any p0) { return invoke<Any>(0x7F985597, p0); } // 0x7F985597
	nativeDecl Any GET_VEHICLE_MODEL_ACCELERATION(Any p0) { return invoke<Any>(0x29CB3537, p0); } // 0x29CB3537
	nativeDecl Any _0x37FBA7BC(Any p0) { return invoke<Any>(0x37FBA7BC, p0); } // 0x37FBA7BC
	nativeDecl Any _0x95BB67EB(Any p0) { return invoke<Any>(0x95BB67EB, p0); } // 0x95BB67EB
	nativeDecl Any _0x87C5D271(Any p0) { return invoke<Any>(0x87C5D271, p0); } // 0x87C5D271
	nativeDecl Any _0xCE67162C(Any p0) { return invoke<Any>(0xCE67162C, p0); } // 0xCE67162C
	nativeDecl Any GET_VEHICLE_CLASS_MAX_TRACTION(Any p0) { return invoke<Any>(0x5B4FDC16, p0); } // 0x5B4FDC16
	nativeDecl Any GET_VEHICLE_CLASS_MAX_AGILITY(Any p0) { return invoke<Any>(0x45F2BD83, p0); } // 0x45F2BD83
	nativeDecl Any GET_VEHICLE_CLASS_MAX_ACCELERATION(Any p0) { return invoke<Any>(0x3E220A9B, p0); } // 0x3E220A9B
	nativeDecl Any GET_VEHICLE_CLASS_MAX_BRAKING(Any p0) { return invoke<Any>(0xD08CC1A5, p0); } // 0xD08CC1A5
	nativeDecl Any _0xD6685803(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0xD6685803, p0, p1, p2, p3, p4, p5); } // 0xD6685803
	nativeDecl Any _0x0C0332A6(Any p0) { return invoke<Any>(0x0C0332A6, p0); } // 0x0C0332A6
	nativeDecl void _0x6574041D(Any p0) { invoke<Void>(0x6574041D, p0); } // 0x6574041D
	nativeDecl void _0xF8EC5751(Any p0) { invoke<Void>(0xF8EC5751, p0); } // 0xF8EC5751
	nativeDecl BOOL IS_VEHICLE_SEARCHLIGHT_ON(Vehicle vehicle) { return invoke<BOOL>(0xADAF3513, vehicle); } // 0xADAF3513
	nativeDecl void SET_VEHICLE_SEARCHLIGHT(Any p0, Any p1, Any p2) { invoke<Void>(0xE2C0DD8A, p0, p1, p2); } // 0xE2C0DD8A
	nativeDecl Any _0xAB0E79EB(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0xAB0E79EB, p0, p1, p2, p3, p4); } // 0xAB0E79EB
	nativeDecl BOOL CAN_SHUFFLE_SEAT(Any p0, Any p1) { return invoke<BOOL>(0xB3EB01ED, p0, p1); } // 0xB3EB01ED
	nativeDecl Any GET_NUM_MOD_KITS(Any p0) { return invoke<Any>(0xE4903AA0, p0); } // 0xE4903AA0
	nativeDecl void SET_VEHICLE_MOD_KIT(Vehicle vehicle, int unknown) { invoke<Void>(0xB8132158, vehicle, unknown); } // 0xB8132158
	nativeDecl Any GET_VEHICLE_MOD_KIT(Any p0) { return invoke<Any>(0x9FE60927, p0); } // 0x9FE60927
	nativeDecl Any GET_VEHICLE_MOD_KIT_TYPE(Any p0) { return invoke<Any>(0xE5F76765, p0); } // 0xE5F76765
	nativeDecl int GET_VEHICLE_WHEEL_TYPE(Vehicle vehicle) { return invoke<int>(0xDA58D7AE, vehicle); } // 0xDA58D7AE
	nativeDecl void SET_VEHICLE_WHEEL_TYPE(Vehicle vehicle, int WheelType) { invoke<Void>(0x64BDAAAD, vehicle, WheelType); } // 0x64BDAAAD
	nativeDecl Any GET_NUM_MOD_COLORS(Any p0, Any p1) { return invoke<Any>(0x73722CD9, p0, p1); } // 0x73722CD9
	nativeDecl void SET_VEHICLE_MOD_COLOR_1(Vehicle vehicle, int r, int g, int b) { invoke<Void>(0xCBE9A54D, vehicle, r, g, b); } // 0xCBE9A54D
	nativeDecl void SET_VEHICLE_MOD_COLOR_2(Any p0, Any p1, Any p2) { invoke<Void>(0xC32613C2, p0, p1, p2); } // 0xC32613C2
	nativeDecl void GET_VEHICLE_MOD_COLOR_1(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE625510A, p0, p1, p2, p3); } // 0xE625510A
	nativeDecl void GET_VEHICLE_MOD_COLOR_2(Any p0, Any p1, Any p2) { invoke<Void>(0x9B76BB8E, p0, p1, p2); } // 0x9B76BB8E
	nativeDecl Any _0x9A0840FD(Any p0, Any p1) { return invoke<Any>(0x9A0840FD, p0, p1); } // 0x9A0840FD
	nativeDecl Any _0x9BDC0B49(Any p0) { return invoke<Any>(0x9BDC0B49, p0); } // 0x9BDC0B49
	nativeDecl Any _0x112D637A(Any p0) { return invoke<Any>(0x112D637A, p0); } // 0x112D637A
	nativeDecl void SET_VEHICLE_MOD(Vehicle vehicle, int ModType, int ModIndex, BOOL Variation) { invoke<Void>(0xB52E5ED5, vehicle, ModType, ModIndex, Variation); } // 0xB52E5ED5
	nativeDecl int GET_VEHICLE_MOD(Vehicle vehicle, int Modtype) { return invoke<int>(0xDC520069, vehicle, Modtype); } // 0xDC520069
	nativeDecl BOOL GET_VEHICLE_MOD_VARIATION(Vehicle vehicle, int ModType) { return invoke<BOOL>(0xC1B92003, vehicle, ModType); } // 0xC1B92003
	nativeDecl int GET_NUM_VEHICLE_MODS(Vehicle vehicle, int ModType) { return invoke<int>(0x8A814FF9, vehicle, ModType); } // 0x8A814FF9
	nativeDecl void REMOVE_VEHICLE_MOD(Any p0, Any p1) { invoke<Void>(0x9CC80A43, p0, p1); } // 0x9CC80A43
	nativeDecl void TOGGLE_VEHICLE_MOD(Vehicle vehicle, int Mod, BOOL Toggle) { invoke<Void>(0xD095F811, vehicle, Mod, Toggle); } // 0xD095F811
	nativeDecl BOOL IS_TOGGLE_MOD_ON(Any p0, Any p1) { return invoke<BOOL>(0xF0E1689F, p0, p1); } // 0xF0E1689F
	nativeDecl const char* GET_MOD_TEXT_LABEL(Vehicle vehicle, int ModType, int ModValue) { return invoke<const char*>(0x0BA39CA7, vehicle, ModType, ModValue); } // 0x0BA39CA7
	nativeDecl const char* GET_MOD_SLOT_NAME(Vehicle vehicle, int ModType) { return invoke<const char*>(0x5E113483, vehicle, ModType); } // 0x5E113483
	nativeDecl Any GET_LIVERY_NAME(Any p0, Any p1) { return invoke<Any>(0xED80B5BE, p0, p1); } // 0xED80B5BE
	nativeDecl Any GET_VEHICLE_MOD_MODIFIER_VALUE(Any p0, Any p1, Any p2) { return invoke<Any>(0x73AE5505, p0, p1, p2); } // 0x73AE5505
	nativeDecl Any _0x94850968(Any p0, Any p1, Any p2) { return invoke<Any>(0x94850968, p0, p1, p2); } // 0x94850968
	nativeDecl void PRELOAD_VEHICLE_MOD(Any p0, Any p1, Any p2) { invoke<Void>(0x6EA5F4A8, p0, p1, p2); } // 0x6EA5F4A8
	nativeDecl BOOL HAS_PRELOAD_MODS_FINISHED(Any p0) { return invoke<BOOL>(0xA8A0D246, p0); } // 0xA8A0D246
	nativeDecl void RELEASE_PRELOAD_MODS(Any p0) { invoke<Void>(0xD442521F, p0); } // 0xD442521F
	nativeDecl void SET_VEHICLE_TYRE_SMOKE_COLOR(Vehicle vehicle, int r, int g, int b) { invoke<Void>(0x3EDEC0DB, vehicle, r, g, b); } // 0x3EDEC0DB
	nativeDecl void GET_VEHICLE_TYRE_SMOKE_COLOR(Vehicle vehicle, int R, int G, int B) { invoke<Void>(0x75280015, vehicle, R, G, B); } // 0x75280015
	nativeDecl void SET_VEHICLE_WINDOW_TINT(Vehicle vehicle, int Tint) { invoke<Void>(0x497C8787, vehicle, Tint); } // 0x497C8787
	nativeDecl int GET_VEHICLE_WINDOW_TINT(Vehicle vehicle) { return invoke<int>(0x13D53892, vehicle); } // 0x13D53892
	nativeDecl Any GET_NUM_VEHICLE_WINDOW_TINTS() { return invoke<Any>(0x625C7B66); } // 0x625C7B66
	nativeDecl void GET_VEHICLE_COLOR(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x03BC8F1B, p0, p1, p2, p3); } // 0x03BC8F1B
	nativeDecl Any _0x749DEEA2(Any p0) { return invoke<Any>(0x749DEEA2, p0); } // 0x749DEEA2
	nativeDecl Any GET_VEHICLE_CAUSE_OF_DESTRUCTION(Any p0) { return invoke<Any>(0x7F8C20DD, p0); } // 0x7F8C20DD
	nativeDecl Any _0xA0777943(Any p0) { return invoke<Any>(0xA0777943, p0); } // 0xA0777943
	nativeDecl Any _0xF178390B(Any p0) { return invoke<Any>(0xF178390B, p0); } // 0xF178390B
	nativeDecl void _0xE943B09C(Vehicle vehicle, int multiplier) { invoke<Void>(0xE943B09C, vehicle, multiplier); } // 0xE943B09C
	nativeDecl void _0xDF594D8D(Any p0, Any p1) { invoke<Void>(0xDF594D8D, p0, p1); } // 0xDF594D8D
	nativeDecl void _0x4D840FC4(Any p0, Any p1) { invoke<Void>(0x4D840FC4, p0, p1); } // 0x4D840FC4
	nativeDecl Any _0x5AB26C2B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<Any>(0x5AB26C2B, p0, p1, p2, p3, p4, p5, p6); } // 0x5AB26C2B
	nativeDecl void _0xEF05F807(Any p0) { invoke<Void>(0xEF05F807, p0); } // 0xEF05F807
	nativeDecl Any _0xD656E7E5(Any p0) { return invoke<Any>(0xD656E7E5, p0); } // 0xD656E7E5
	nativeDecl void _0x642DA5AA(Vehicle vehicle, float p1) { invoke<Void>(0x642DA5AA, vehicle, p1); } // 0x642DA5AA
	nativeDecl void _0x04F5546C(Any p0, Any p1) { invoke<Void>(0x04F5546C, p0, p1); } // 0x04F5546C
	nativeDecl void SET_VEHICLE_IS_WANTED(Vehicle p0, BOOL p1) { invoke<Void>(0xDAA388E8, p0, p1); } // 0xDAA388E8
	nativeDecl void _0xA25CCB8C(Any p0, Any p1) { invoke<Void>(0xA25CCB8C, p0, p1); } // 0xA25CCB8C
	nativeDecl void _0x00966934(Any p0, Any p1) { invoke<Void>(0x00966934, p0, p1); } // 0x00966934
	nativeDecl void _0x113DF5FD(Any p0, Any p1) { invoke<Void>(0x113DF5FD, p0, p1); } // 0x113DF5FD
	nativeDecl Any _0x7C8D6464(Any p0) { return invoke<Any>(0x7C8D6464, p0); } // 0x7C8D6464
	nativeDecl void DISABLE_PLANE_AILERON(Any p0, Any p1, Any p2) { invoke<Void>(0x7E84C45C, p0, p1, p2); } // 0x7E84C45C
	nativeDecl Any _0x7DC6D022(Any p0) { return invoke<Any>(0x7DC6D022, p0); } // 0x7DC6D022
	nativeDecl void _0xA03E42DF(Any p0, Any p1) { invoke<Void>(0xA03E42DF, p0, p1); } // 0xA03E42DF
	nativeDecl void _0x15D40761(Any p0, Any p1, Any p2) { invoke<Void>(0x15D40761, p0, p1, p2); } // 0x15D40761
	nativeDecl void _0x1984F88D(Any p0, Any p1) { invoke<Void>(0x1984F88D, p0, p1); } // 0x1984F88D
	nativeDecl void _0x3FBE904F(Any p0) { invoke<Void>(0x3FBE904F, p0); } // 0x3FBE904F
	nativeDecl void _0xD1B71A25(Any p0) { invoke<Void>(0xD1B71A25, p0); } // 0xD1B71A25
	nativeDecl Any _0xFEB0C0C8() { return invoke<Any>(0xFEB0C0C8); } // 0xFEB0C0C8
	nativeDecl void _0x08CD58F9(Any p0, Any p1) { invoke<Void>(0x08CD58F9, p0, p1); } // 0x08CD58F9
	nativeDecl void _0x8C4B63E2(Any p0, Any p1) { invoke<Void>(0x8C4B63E2, p0, p1); } // 0x8C4B63E2
	nativeDecl void SET_VEHICLE_LOD_MULTIPLIER(Any p0, Any p1) { invoke<Void>(0x569E5AE3, p0, p1); } // 0x569E5AE3
	nativeDecl void _0x1604C2F5(Any p0, Any p1) { invoke<Void>(0x1604C2F5, p0, p1); } // 0x1604C2F5
	nativeDecl Any _0x8CDB0C09(Any p0) { return invoke<Any>(0x8CDB0C09, p0); } // 0x8CDB0C09
	nativeDecl Any _0xABC99E21(Any p0) { return invoke<Any>(0xABC99E21, p0); } // 0xABC99E21
	nativeDecl void _0x900C878C(Any p0, Any p1) { invoke<Void>(0x900C878C, p0, p1); } // 0x900C878C
	nativeDecl void _0xB3200F72(Any p0, Any p1) { invoke<Void>(0xB3200F72, p0, p1); } // 0xB3200F72
	nativeDecl void _0xBAE491C7(Any p0, Any p1) { invoke<Void>(0xBAE491C7, p0, p1); } // 0xBAE491C7
	nativeDecl void _0xF0E59BC1() { invoke<Void>(0xF0E59BC1); } // 0xF0E59BC1
	nativeDecl void _0x929801C6(Any p0) { invoke<Void>(0x929801C6, p0); } // 0x929801C6
	nativeDecl void SET_VEHICLE_SHOOT_AT_TARGET(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x2343FFDF, p0, p1, p2, p3, p4); } // 0x2343FFDF
	nativeDecl Any _0x4A557117(Any p0, Any p1) { return invoke<Any>(0x4A557117, p0, p1); } // 0x4A557117
	nativeDecl void _0xE0FC6A32(Any p0, Any p1) { invoke<Void>(0xE0FC6A32, p0, p1); } // 0xE0FC6A32
	nativeDecl void _0x7D0DE7EA(Any p0, Any p1) { invoke<Void>(0x7D0DE7EA, p0, p1); } // 0x7D0DE7EA
	nativeDecl Any GET_VEHICLE_PLATE_TYPE(Vehicle vehicle) { return invoke<Any>(0x65CA9286, vehicle); } // 0x65CA9286
	nativeDecl void TRACK_VEHICLE_VISIBILITY(Any p0) { invoke<Void>(0x78122DC1, p0); } // 0x78122DC1
	nativeDecl BOOL IS_VEHICLE_VISIBLE(Any p0) { return invoke<BOOL>(0x7E0D6056, p0); } // 0x7E0D6056
	nativeDecl void SET_VEHICLE_GRAVITY(Vehicle Vehicle, BOOL Toggle) { invoke<Void>(0x07B2A6DC, Vehicle, Toggle); } // 0x07B2A6DC
	nativeDecl void _0xD2B8ACBD(Any p0) { invoke<Void>(0xD2B8ACBD, p0); } // 0xD2B8ACBD
	nativeDecl Any _0xA4A75FCF(Any p0) { return invoke<Any>(0xA4A75FCF, p0); } // 0xA4A75FCF
	nativeDecl void _0x50F89338(Any p0, Any p1) { invoke<Void>(0x50F89338, p0, p1); } // 0x50F89338
	nativeDecl void _0xEB7D7C27(Any p0, Any p1) { invoke<Void>(0xEB7D7C27, p0, p1); } // 0xEB7D7C27
	nativeDecl Any _0x5EB00A6A(Any p0) { return invoke<Any>(0x5EB00A6A, p0); } // 0x5EB00A6A
	nativeDecl void SET_VEHICLE_ENGINE_CAN_DEGRADE(Any p0, Any p1) { invoke<Void>(0x081DAC12, p0, p1); } // 0x081DAC12
	nativeDecl void _0x5BD8D82D(Any p0, Any p1, Any p2) { invoke<Void>(0x5BD8D82D, p0, p1, p2); } // 0x5BD8D82D
	nativeDecl void _0x450AD03A(Any p0) { invoke<Void>(0x450AD03A, p0); } // 0x450AD03A
	nativeDecl Any _0xBD085DCA(Any p0) { return invoke<Any>(0xBD085DCA, p0); } // 0xBD085DCA
	nativeDecl Any _0xABBDD5C6(Any p0) { return invoke<Any>(0xABBDD5C6, p0); } // 0xABBDD5C6
	nativeDecl void _0x9B581DE7(Any p0, Any p1) { invoke<Void>(0x9B581DE7, p0, p1); } // 0x9B581DE7
	nativeDecl BOOL IS_VEHICLE_STOLEN(Vehicle p0) { return invoke<BOOL>(0x20B61DDE, p0); } // 0x20B61DDE
	nativeDecl void SET_VEHICLE_IS_STOLEN(Vehicle vehicle, BOOL isStolen) { invoke<Void>(0x70912E42, vehicle, isStolen); } // 0x70912E42
	nativeDecl void _0xED159AE6(Any p0, Any p1) { invoke<Void>(0xED159AE6, p0, p1); } // 0xED159AE6
	nativeDecl Any _0xAF8CB3DF(Any p0) { return invoke<Any>(0xAF8CB3DF, p0); } // 0xAF8CB3DF
	nativeDecl void _0x45F72495(Any p0) { invoke<Void>(0x45F72495, p0); } // 0x45F72495
	nativeDecl void DETACH_VEHICLE_FROM_CARGOBOB(Any p0, Any p1) { invoke<Void>(0x83D3D331, p0, p1); } // 0x83D3D331
	nativeDecl Any DETACH_VEHICLE_FROM_ANY_CARGOBOB(Any p0) { return invoke<Any>(0x50E0EABE, p0); } // 0x50E0EABE
	nativeDecl BOOL IS_VEHICLE_ATTACHED_TO_CARGOBOB(Any p0, Any p1) { return invoke<BOOL>(0x5DEEC76C, p0, p1); } // 0x5DEEC76C
	nativeDecl Any GET_VEHICLE_ATTACHED_TO_CARGOBOB(Any p0) { return invoke<Any>(0x301A1D24, p0); } // 0x301A1D24
	nativeDecl void ATTACH_VEHICLE_TO_CARGOBOB(Entity entity, Entity entity2, int instant, float X, float y, float z) { invoke<Void>(0x607DC9D5, entity, entity2, instant, X, y, z); } // 0x607DC9D5
	nativeDecl Any _0xAF769B81(Any p0) { return invoke<Any>(0xAF769B81, p0); } // 0xAF769B81
	nativeDecl void _0x4D3C9A99(Any p0) { invoke<Void>(0x4D3C9A99, p0); } // 0x4D3C9A99
	nativeDecl void GET_CLOSEST_VEHICLE_TURNING_BLOODSPRAY(Any p0) { invoke<Void>(0xA8211EE9, p0); } // 0xA8211EE9
	nativeDecl void GET_VEHICLE_HAS_BACK_RECURSIVE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x3A8AB081, p0, p1, p2, p3); } // 0x3A8AB081
	nativeDecl BOOL DOES_VEHICLE_HAVE_WEAPONS(Vehicle vehicle) { return invoke<BOOL>(0xB2E1E1FB, vehicle); } // 0xB2E1E1FB
	nativeDecl void _0x2EC19A8B(Any p0, Any p1) { invoke<Void>(0x2EC19A8B, p0, p1); } // 0x2EC19A8B
	nativeDecl void DISABLE_VEHICLE_WEAPON(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xA688B7D1, p0, p1, p2, p3); } // 0xA688B7D1
	nativeDecl void _0x123E5B90(Any p0, Any p1) { invoke<Void>(0x123E5B90, p0, p1); } // 0x123E5B90
	nativeDecl void _0xEBC225C1(Any p0, Any p1) { invoke<Void>(0xEBC225C1, p0, p1); } // 0xEBC225C1
	nativeDecl Any GET_VEHICLE_CLASS(Vehicle vehicle) { return invoke<Any>(0xC025338E, vehicle); } // 0xC025338E
	nativeDecl Any GET_VEHICLE_CLASS_FROM_NAME(Any p0) { return invoke<Any>(0xEA469980, p0); } // 0xEA469980
	nativeDecl void SET_PLAYERS_LAST_VEHICLE(Vehicle vehicle) { invoke<Void>(0xDE86447D, vehicle); } // 0xDE86447D
	nativeDecl void _0x5130DB1E(Any p0, Any p1) { invoke<Void>(0x5130DB1E, p0, p1); } // 0x5130DB1E
	nativeDecl void _0xB6BE07E0(Any p0, Any p1) { invoke<Void>(0xB6BE07E0, p0, p1); } // 0xB6BE07E0
	nativeDecl void _0x4BB5605D(Any p0, Any p1) { invoke<Void>(0x4BB5605D, p0, p1); } // 0x4BB5605D
	nativeDecl void _0x51E0064F(Any p0, Any p1) { invoke<Void>(0x51E0064F, p0, p1); } // 0x51E0064F
	nativeDecl void _0xAEF9611C(Any p0, Any p1) { invoke<Void>(0xAEF9611C, p0, p1); } // 0xAEF9611C
	nativeDecl void _0x585E49B6(Any p0, Any p1) { invoke<Void>(0x585E49B6, p0, p1); } // 0x585E49B6
	nativeDecl void _0x6E67FD35(Any p0, Any p1) { invoke<Void>(0x6E67FD35, p0, p1); } // 0x6E67FD35
	nativeDecl void SET_VEHICLE_FRICTION_OVERRIDE(Any p0, Any p1) { invoke<Void>(0x32AFD42E, p0, p1); } // 0x32AFD42E
	nativeDecl void SET_VEHICLE_MAX_STR_TRAP(Any p0, Any p1) { invoke<Void>(0x670913A4, p0, p1); } // 0x670913A4
	nativeDecl void GET_VEHICLE_DEFORMATION_GET_TREE(Any p0, Any p1) { invoke<Void>(0x98A10A86, p0, p1); } // 0x98A10A86
	nativeDecl void _0xBC649C49(Any p0, Any p1) { invoke<Void>(0xBC649C49, p0, p1); } // 0xBC649C49
	nativeDecl void _0x8DD9AA0C(Any p0) { invoke<Void>(0x8DD9AA0C, p0); } // 0x8DD9AA0C
	nativeDecl BOOL DOES_VEHICLE_EXIST_WITH_DECORATOR(Any p0) { return invoke<BOOL>(0x39E68EDD, p0); } // 0x39E68EDD
	nativeDecl void _0xAA8BD440(Any p0, Any p1) { invoke<Void>(0xAA8BD440, p0, p1); } // 0xAA8BD440
	nativeDecl void _0x004926A3(Any p0, Any p1) { invoke<Void>(0x004926A3, p0, p1); } // 0x004926A3
	nativeDecl void _0xC195803B(Any p0, Any p1) { invoke<Void>(0xC195803B, p0, p1); } // 0xC195803B
	nativeDecl void _0xB5CC548B(Any p0) { invoke<Void>(0xB5CC548B, p0); } // 0xB5CC548B
	nativeDecl Any _0x2B2FCC28(Any p0) { return invoke<Any>(0x2B2FCC28, p0); } // 0x2B2FCC28
	nativeDecl void _0x920C2517(Any p0, Any p1) { invoke<Void>(0x920C2517, p0, p1); } // 0x920C2517
	nativeDecl Any _0xB73A1486(Any p0) { return invoke<Any>(0xB73A1486, p0); } // 0xB73A1486
}

namespace OBJECT
{
	nativeDecl Any CREATE_OBJECT(Hash ObjectHash, float XCoord, float YCoord, float ZCoord, int p4, BOOL p5, BOOL dynamic) { return invoke<Any>(0x2F7AA05C, ObjectHash, XCoord, YCoord, ZCoord, p4, p5, dynamic); } // 0x2F7AA05C
	nativeDecl Any CREATE_OBJECT_2(Hash ObjectHash, float* coord) { return invoke<Any>(0x2F7AA05C, ObjectHash, coord); } // 0x2F7AA05C
	nativeDecl Any CREATE_OBJECT_NO_OFFSET(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<Any>(0x58040420, p0, p1, p2, p3, p4, p5, p6); } // 0x58040420
	nativeDecl void DELETE_OBJECT(Object* Object) { invoke<Void>(0xD6EF9DA7, Object); } // 0xD6EF9DA7
	nativeDecl Any PLACE_OBJECT_ON_GROUND_PROPERLY(Object Object) { return invoke<Any>(0x8F95A20B, Object); } // 0x8F95A20B
	nativeDecl Any SLIDE_OBJECT(Object object, float toX, float toY, float toZ, float speedX, float speedY, float speedZ, BOOL collisionCheck) { return invoke<Any>(0x63BFA7A0, object, toX, toY, toZ, speedX, speedY, speedZ, collisionCheck); } // 0x63BFA7A0
	nativeDecl void SET_OBJECT_TARGETTABLE(Object object, BOOL targettable) { invoke<Void>(0x3F88CD86, object, targettable); } // 0x3F88CD86
	nativeDecl void _0x483C5C88(Any p0, Any p1) { invoke<Void>(0x483C5C88, p0, p1); } // 0x483C5C88
	nativeDecl Object GET_CLOSEST_OBJECT_OF_TYPE(float x, float y, float z, float p3, Hash type, BOOL p5) { return invoke<Object>(0x45619B33, x, y, z, p3, type, p5); } // 0x45619B33
	nativeDecl BOOL HAS_OBJECT_BEEN_BROKEN(Any p0) { return invoke<BOOL>(0xFE21F891, p0); } // 0xFE21F891
	nativeDecl BOOL HAS_CLOSEST_OBJECT_OF_TYPE_BEEN_BROKEN(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<BOOL>(0x6FC0353D, p0, p1, p2, p3, p4, p5); } // 0x6FC0353D
	nativeDecl Any _0x7DB578DD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0x7DB578DD, p0, p1, p2, p3, p4, p5); } // 0x7DB578DD
	nativeDecl Vector3 _0x87A42A12(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<Vector3>(0x87A42A12, p0, p1, p2, p3, p4, p5, p6); } // 0x87A42A12
	nativeDecl Any _0x65213FC3(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoke<Any>(0x65213FC3, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x65213FC3
	nativeDecl void SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(Hash type, float x, float y, float z, BOOL locked, float heading, BOOL p6) { invoke<Void>(0x38C951A4, type, x, y, z, locked, heading, p6); } // 0x38C951A4
	nativeDecl void GET_STATE_OF_CLOSEST_DOOR_OF_TYPE(Hash type, float x, float y, float z, BOOL locked, float* heading) { invoke<Void>(0x4B44A83D, type, x, y, z, locked, heading); } // 0x4B44A83D
	nativeDecl void _0x4E0A260B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0x4E0A260B, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x4E0A260B
	nativeDecl void ADD_DOOR_TO_SYSTEM(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0x9D2D778D, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x9D2D778D
	nativeDecl void REMOVE_DOOR_FROM_SYSTEM(Object door) { invoke<Void>(0x00253286, door); } // 0x00253286
	nativeDecl void _0xDF83DB47(Any p0, float p1, BOOL p2, BOOL p3) { invoke<Void>(0xDF83DB47, p0, p1, p2, p3); } // 0xDF83DB47
	nativeDecl Any _0xD42A41C2(Any p0) { return invoke<Any>(0xD42A41C2, p0); } // 0xD42A41C2
	nativeDecl Any _0xD649B7E1(Any p0) { return invoke<Any>(0xD649B7E1, p0); } // 0xD649B7E1
	nativeDecl void _0x4F44AF21(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x4F44AF21, p0, p1, p2, p3); } // 0x4F44AF21
	nativeDecl void _0x47531446(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x47531446, p0, p1, p2, p3); } // 0x47531446
	nativeDecl void _0x34883DE3(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x34883DE3, p0, p1, p2, p3); } // 0x34883DE3
	nativeDecl Any _0xB74C3BD7(Any p0) { return invoke<Any>(0xB74C3BD7, p0); } // 0xB74C3BD7
	nativeDecl void _0xB4A9A558(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xB4A9A558, p0, p1, p2, p3); } // 0xB4A9A558
	nativeDecl void _0xECE58AE0(Any p0, Any p1) { invoke<Void>(0xECE58AE0, p0, p1); } // 0xECE58AE0
	nativeDecl void _0xF736227C(Any p0, Any p1) { invoke<Void>(0xF736227C, p0, p1); } // 0xF736227C
	nativeDecl Any _0x5AFCD8A1(Any p0) { return invoke<Any>(0x5AFCD8A1, p0); } // 0x5AFCD8A1
	nativeDecl BOOL IS_DOOR_CLOSED(Object door) { return invoke<BOOL>(0x48659CD7, door); } // 0x48659CD7
	nativeDecl void _0x9BF33E41(Any p0) { invoke<Void>(0x9BF33E41, p0); } // 0x9BF33E41
	nativeDecl void _0xF592AD10() { invoke<Void>(0xF592AD10); } // 0xF592AD10
	nativeDecl Any _0x17FF9393(Any p0) { return invoke<Any>(0x17FF9393, p0); } // 0x17FF9393
	nativeDecl Any _0xE9AE494F(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0xE9AE494F, p0, p1, p2, p3, p4); } // 0xE9AE494F
	nativeDecl BOOL IS_GARAGE_EMPTY(Any p0, Any p1, Any p2) { return invoke<BOOL>(0xA8B37DEA, p0, p1, p2); } // 0xA8B37DEA
	nativeDecl Any _0xC33ED360(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0xC33ED360, p0, p1, p2, p3); } // 0xC33ED360
	nativeDecl Any _0x41924877(Any p0, Any p1, Any p2) { return invoke<Any>(0x41924877, p0, p1, p2); } // 0x41924877
	nativeDecl Any _0x4BD59750(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x4BD59750, p0, p1, p2, p3, p4); } // 0x4BD59750
	nativeDecl Any _0x7B44D659(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x7B44D659, p0, p1, p2, p3, p4); } // 0x7B44D659
	nativeDecl Any _0x142C8F76(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x142C8F76, p0, p1, p2, p3); } // 0x142C8F76
	nativeDecl Any _0x95A9AB2B(Any p0, Any p1, Any p2) { return invoke<Any>(0x95A9AB2B, p0, p1, p2); } // 0x95A9AB2B
	nativeDecl void _0xA565E27E(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xA565E27E, p0, p1, p2, p3, p4); } // 0xA565E27E
	nativeDecl void _0x43BB7E48(Any p0, Any p1) { invoke<Void>(0x43BB7E48, p0, p1); } // 0x43BB7E48
	nativeDecl void _0x6158959E() { invoke<Void>(0x6158959E); } // 0x6158959E
	nativeDecl BOOL DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<BOOL>(0x23FF2BA4, p0, p1, p2, p3, p4, p5); } // 0x23FF2BA4
	nativeDecl BOOL IS_POINT_IN_ANGLED_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { return invoke<BOOL>(0x73BCFFDC, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x73BCFFDC
	nativeDecl void _0x19B17769(Any p0, Any p1) { invoke<Void>(0x19B17769, p0, p1); } // 0x19B17769
	nativeDecl void SET_OBJECT_PHYSICS_PARAMS(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { invoke<Void>(0xE8D11C58, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0xE8D11C58
	nativeDecl Any GET_OBJECT_FRAGMENT_DAMAGE_HEALTH(Any p0, Any p1) { return invoke<Any>(0xF0B330AD, p0, p1); } // 0xF0B330AD
	nativeDecl void SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(Any p0, Any p1) { invoke<Void>(0x3E263AE1, p0, p1); } // 0x3E263AE1
	nativeDecl BOOL IS_ANY_OBJECT_NEAR_POINT(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<BOOL>(0xE9E46941, p0, p1, p2, p3, p4); } // 0xE9E46941
	nativeDecl BOOL IS_OBJECT_NEAR_POINT(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<BOOL>(0x50A62C43, p0, p1, p2, p3, p4); } // 0x50A62C43
	nativeDecl void _0xE3261B35(Any p0) { invoke<Void>(0xE3261B35, p0); } // 0xE3261B35
	nativeDecl void _0x1E82C2AE(Any p0, Any p1, Any p2) { invoke<Void>(0x1E82C2AE, p0, p1, p2); } // 0x1E82C2AE
	nativeDecl void TRACK_OBJECT_VISIBILITY(Any p0) { invoke<Void>(0x46D06B9A, p0); } // 0x46D06B9A
	nativeDecl BOOL IS_OBJECT_VISIBLE(Any p0) { return invoke<BOOL>(0xF4FD8AE4, p0); } // 0xF4FD8AE4
	nativeDecl void _0xF4A1A14A(Any p0, Any p1) { invoke<Void>(0xF4A1A14A, p0, p1); } // 0xF4A1A14A
	nativeDecl void _0xAF016CC1(Any p0, Any p1) { invoke<Void>(0xAF016CC1, p0, p1); } // 0xAF016CC1
	nativeDecl void _0x3A68AA46(Any p0, Any p1) { invoke<Void>(0x3A68AA46, p0, p1); } // 0x3A68AA46
	nativeDecl Any _0xA286DE96(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0xA286DE96, p0, p1, p2, p3, p4); } // 0xA286DE96
	nativeDecl void _0x21F51560(Any p0, Any p1) { invoke<Void>(0x21F51560, p0, p1); } // 0x21F51560
	nativeDecl Any _0xF1B8817A(Any p0) { return invoke<Any>(0xF1B8817A, p0); } // 0xF1B8817A
	nativeDecl Any _0xE08C834D(Any p0) { return invoke<Any>(0xE08C834D, p0); } // 0xE08C834D
	nativeDecl Any _0x020497DE(Any p0) { return invoke<Any>(0x020497DE, p0); } // 0x020497DE
	nativeDecl Any CREATE_PICKUP(Hash typeHash, float posX, float posY, float posZ, int p4, int amount, BOOL p6, Hash customModelHash) { return invoke<Any>(0x5E14DF68, typeHash, posX, posY, posZ, p4, amount, p6, customModelHash); } // 0x5E14DF68
	nativeDecl Any CREATE_PICKUP_ROTATE(Hash typeHash, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, int p7, int amount, Any p9, Any p10, Hash customModelHash) { return invoke<Any>(0xF015BFE2, typeHash, posX, posY, posZ, rotX, rotY, rotZ, p7, amount, p9, p10, customModelHash); } // 0xF015BFE2
	nativeDecl Any CREATE_AMBIENT_PICKUP(Hash AmbientHash, float XCoord, float YCoord, float ZCoord, int p4, int amount, int modelHash, BOOL p7, BOOL p8) { return invoke<Any>(0x17B99CE7, AmbientHash, XCoord, YCoord, ZCoord, p4, amount, modelHash, p7, p8); } // 0x17B99CE7
	nativeDecl Any CREATE_PORTABLE_PICKUP(unsigned int p0, float p1, float p2, float p3, bool p4, unsigned int p5) { return invoke<Any>(0x8C886BE5, p0, p1, p2, p3, p4, p5); } // 0x8C886BE5
	nativeDecl Any _0x56A02502(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0x56A02502, p0, p1, p2, p3, p4, p5); } // 0x56A02502
	nativeDecl void ATTACH_PORTABLE_PICKUP_TO_PED(Any p0, Any p1) { invoke<Void>(0x184F6AB3, p0, p1); } // 0x184F6AB3
	nativeDecl void DETACH_PORTABLE_PICKUP_FROM_PED(Any p0) { invoke<Void>(0x1D094562, p0); } // 0x1D094562
	nativeDecl void _0x7EFBA039(Any p0, Any p1) { invoke<Void>(0x7EFBA039, p0, p1); } // 0x7EFBA039
	nativeDecl void _0xA3CDF152(Any p0) { invoke<Void>(0xA3CDF152, p0); } // 0xA3CDF152
	nativeDecl Vector3 GET_SAFE_PICKUP_COORDS(Any X, Any Y, Any Z, Any p3, Any p4) { return invoke<Vector3>(0x618B5F67, X, Y, Z, p3, p4); } // 0x618B5F67
	nativeDecl Vector3 GET_PICKUP_COORDS(Any p0) { return invoke<Vector3>(0xC2E1E2C5, p0); } // 0xC2E1E2C5
	nativeDecl void REMOVE_ALL_PICKUPS_OF_TYPE(Any p0) { invoke<Void>(0x40062C53, p0); } // 0x40062C53
	nativeDecl BOOL HAS_PICKUP_BEEN_COLLECTED(Any p0) { return invoke<BOOL>(0x0BE5CCED, p0); } // 0x0BE5CCED
	nativeDecl void REMOVE_PICKUP(Any p0) { invoke<Void>(0x64A7A0E0, p0); } // 0x64A7A0E0
	nativeDecl void CREATE_MONEY_PICKUPS(float* XCoord, float* YCoord, float* ZCoord, int Vaule, Any p4, Any p5) { invoke<Void>(0x36C9A5EA, XCoord, YCoord, ZCoord, Vaule, p4, p5); } // 0x36C9A5EA
	nativeDecl BOOL DOES_PICKUP_EXIST(Any p0) { return invoke<BOOL>(0x9C6DA0B3, p0); } // 0x9C6DA0B3
	nativeDecl BOOL DOES_PICKUP_OBJECT_EXIST(Any p0) { return invoke<BOOL>(0xE0B32108, p0); } // 0xE0B32108
	nativeDecl Any _0x6052E62E(Any p0) { return invoke<Any>(0x6052E62E, p0); } // 0x6052E62E
	nativeDecl Any _0xF139681B(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0xF139681B, p0, p1, p2, p3, p4); } // 0xF139681B
	nativeDecl void SET_PICKUP_REGENERATION_TIME(Any p0, Any p1) { invoke<Void>(0xAB11267D, p0, p1); } // 0xAB11267D
	nativeDecl void _0x7FADB4B9(Any p0, Any p1, Any p2) { invoke<Void>(0x7FADB4B9, p0, p1, p2); } // 0x7FADB4B9
	nativeDecl void _0x3A8F1BF7(Any p0, Any p1) { invoke<Void>(0x3A8F1BF7, p0, p1); } // 0x3A8F1BF7
	nativeDecl void SET_TEAM_PICKUP_OBJECT(Any p0, Any p1, Any p2) { invoke<Void>(0x77687DC5, p0, p1, p2); } // 0x77687DC5
	nativeDecl void _0xCBB5F9B6(Any p0, Any p1, Any p2) { invoke<Void>(0xCBB5F9B6, p0, p1, p2); } // 0xCBB5F9B6
	nativeDecl void _0x276A7807(Any p0, Any p1, Any p2) { invoke<Void>(0x276A7807, p0, p1, p2); } // 0x276A7807
	nativeDecl Any _0x000E92DC(Any p0) { return invoke<Any>(0x000E92DC, p0); } // 0x000E92DC
	nativeDecl void _0x9879AC51(Any p0) { invoke<Void>(0x9879AC51, p0); } // 0x9879AC51
	nativeDecl void _0xDB18FA01(Any p0) { invoke<Void>(0xDB18FA01, p0); } // 0xDB18FA01
	nativeDecl void _0xA7E936FD(Any p0, Any p1) { invoke<Void>(0xA7E936FD, p0, p1); } // 0xA7E936FD
	nativeDecl void _0xB241806C() { invoke<Void>(0xB241806C); } // 0xB241806C
	nativeDecl void _0xD1BAAFB7(Any p0) { invoke<Void>(0xD1BAAFB7, p0); } // 0xD1BAAFB7
	nativeDecl void _0x63B02FAD(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x63B02FAD, p0, p1, p2, p3); } // 0x63B02FAD
	nativeDecl void _0x132B6D92(Any p0, Any p1) { invoke<Void>(0x132B6D92, p0, p1); } // 0x132B6D92
	nativeDecl Any _0xEDD01937(Any p0) { return invoke<Any>(0xEDD01937, p0); } // 0xEDD01937
	nativeDecl Any _0x6AE36192(Any p0) { return invoke<Any>(0x6AE36192, p0); } // 0x6AE36192
	nativeDecl void SET_FORCE_OBJECT_THIS_FRAME(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x3DA41C1A, p0, p1, p2, p3); } // 0x3DA41C1A
	nativeDecl void _0x2048A7DD(Any p0) { invoke<Void>(0x2048A7DD, p0); } // 0x2048A7DD
}

namespace AI
{
	nativeDecl void TASK_PAUSE(Any p0, Any p1) { invoke<Void>(0x17A64668, p0, p1); } // 0x17A64668
	nativeDecl void TASK_STAND_STILL(Any p0, Any p1) { invoke<Void>(0x6F80965D, p0, p1); } // 0x6F80965D
	nativeDecl void TASK_JUMP(Ped pedHandle, BOOL p1) { invoke<Void>(0x0356E3CE, pedHandle, p1); } // 0x0356E3CE
	nativeDecl void TASK_COWER(Ped pedHandle, int time) { invoke<Void>(0x9CF1C19B, pedHandle, time); } // 0x9CF1C19B
	nativeDecl void TASK_HANDS_UP(Ped pedHandle, int time, Any p2, Any p3, Any p4) { invoke<Void>(0x8DCC19C5, pedHandle, time, p2, p3, p4); } // 0x8DCC19C5
	nativeDecl void _0x3AA39BE9(Any p0, Any p1) { invoke<Void>(0x3AA39BE9, p0, p1); } // 0x3AA39BE9
	nativeDecl void TASK_OPEN_VEHICLE_DOOR(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x8EE06BF4, p0, p1, p2, p3, p4); } // 0x8EE06BF4
	nativeDecl void TASK_ENTER_VEHICLE(Ped pedHandle, Vehicle vehicleHandle, int timeout, int seat, float p4, Any p5, Any p6) { invoke<Void>(0xB8689B4E, pedHandle, vehicleHandle, timeout, seat, p4, p5, p6); } // 0xB8689B4E
	nativeDecl void TASK_LEAVE_VEHICLE(Ped pedHandle, Vehicle vehicleHandle, int flags) { invoke<Void>(0x7B1141C6, pedHandle, vehicleHandle, flags); } // 0x7B1141C6
	nativeDecl void TASK_SKY_DIVE(Any p0) { invoke<Void>(0xD3874AFA, p0); } // 0xD3874AFA
	nativeDecl void TASK_PARACHUTE(Any p0, Any p1) { invoke<Void>(0xEC3060A2, p0, p1); } // 0xEC3060A2
	nativeDecl void TASK_PARACHUTE_TO_TARGET(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE0104D6C, p0, p1, p2, p3); } // 0xE0104D6C
	nativeDecl void SET_PARACHUTE_TASK_TARGET(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x6ED3AD81, p0, p1, p2, p3); } // 0x6ED3AD81
	nativeDecl void SET_PARACHUTE_TASK_THRUST(Any p0, Any p1) { invoke<Void>(0xD07C8AAA, p0, p1); } // 0xD07C8AAA
	nativeDecl void TASK_RAPPEL_FROM_HELI(Any p0, Any p1) { invoke<Void>(0x2C7ADB93, p0, p1); } // 0x2C7ADB93
	nativeDecl void TASK_VEHICLE_DRIVE_TO_COORD(Ped pedHandle, Vehicle vehicleHandle, float x, float y, float z, float speed, Any p6, Hash vehicleModel, int drivingMode, Any p9, Any p10) { invoke<Void>(0xE4AC0387, pedHandle, vehicleHandle, x, y, z, speed, p6, vehicleModel, drivingMode, p9, p10); } // 0xE4AC0387
	nativeDecl void TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(Ped driver, Vehicle vehicle, float x, float y, float z, float speed, int driving_mode, int stop_range) { invoke<Void>(0x1490182A, driver, vehicle, x, y, z, speed, driving_mode, stop_range); } // 0x1490182A
	nativeDecl void TASK_VEHICLE_DRIVE_WANDER(Ped driver, Vehicle vehicle, float unk1, Any unk2) { invoke<Void>(0x36EC0EB0, driver, vehicle, unk1, unk2); } // 0x36EC0EB0
	nativeDecl void TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0x2DF5A6AC, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x2DF5A6AC
	nativeDecl void TASK_GO_STRAIGHT_TO_COORD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0x80A9E7A7, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x80A9E7A7
	nativeDecl void TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_ENTITY(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0xD26CAC68, p0, p1, p2, p3, p4, p5, p6); } // 0xD26CAC68
	nativeDecl void TASK_ACHIEVE_HEADING(Any p0, Any p1, Any p2) { invoke<Void>(0x0A0E9B42, p0, p1, p2); } // 0x0A0E9B42
	nativeDecl void TASK_FLUSH_ROUTE() { invoke<Void>(0x34219154); } // 0x34219154
	nativeDecl void TASK_EXTEND_ROUTE(Any p0, Any p1, Any p2) { invoke<Void>(0x43271F69, p0, p1, p2); } // 0x43271F69
	nativeDecl void TASK_FOLLOW_POINT_ROUTE(Any p0, Any p1, Any p2) { invoke<Void>(0xB837C816, p0, p1, p2); } // 0xB837C816
	nativeDecl void TASK_GO_TO_ENTITY(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x374827C2, p0, p1, p2, p3, p4, p5, p6); } // 0x374827C2
	nativeDecl void TASK_SMART_FLEE_COORD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0xB2E686FC, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xB2E686FC
	nativeDecl void TASK_SMART_FLEE_PED(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0xE52EB560, p0, p1, p2, p3, p4, p5); } // 0xE52EB560
	nativeDecl void TASK_REACT_AND_FLEE_PED(Any p0, Any p1) { invoke<Void>(0x8A632BD8, p0, p1); } // 0x8A632BD8
	nativeDecl void TASK_SHOCKING_EVENT_REACT(Any p0, Any p1) { invoke<Void>(0x9BD00ACF, p0, p1); } // 0x9BD00ACF
	nativeDecl void TASK_WANDER_IN_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0xC6981FB9, p0, p1, p2, p3, p4, p5, p6); } // 0xC6981FB9
	nativeDecl void TASK_WANDER_STANDARD(Ped pedHandle, int p1, int p2) { invoke<Void>(0xAF59151A, pedHandle, p1, p2); } // 0xAF59151A
	nativeDecl void TASK_VEHICLE_PARK(Ped pedHandle, Vehicle vehicleHandle, float x, float y, float z, float heading, Any p6, Any p7, Any p8) { invoke<Void>(0x5C85FF90, pedHandle, vehicleHandle, x, y, z, heading, p6, p7, p8); } // 0x5C85FF90
	nativeDecl void TASK_STEALTH_KILL(Ped killer, Ped target, Hash killType, float p3, BOOL p4) { invoke<Void>(0x0D64C2FA, killer, target, killType, p3, p4); } // 0x0D64C2FA
	nativeDecl void TASK_PLANT_BOMB(int p0, float x, float y, float z, float degreeAngle) { invoke<Void>(0x33457535, p0, x, y, z, degreeAngle); } // 0x33457535
	nativeDecl void TASK_FOLLOW_NAV_MESH_TO_COORD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0xFE4A10D9, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xFE4A10D9
	nativeDecl void SET_PED_PATH_CAN_USE_CLIMBOVERS(Ped ped, BOOL Toggle) { invoke<Void>(0xB7B7D442, ped, Toggle); } // 0xB7B7D442
	nativeDecl void SET_PED_PATH_CAN_USE_LADDERS(Ped ped, BOOL Toggle) { invoke<Void>(0x53A879EE, ped, Toggle); } // 0x53A879EE
	nativeDecl void SET_PED_PATH_CAN_DROP_FROM_HEIGHT(int ped, BOOL Toggle) { invoke<Void>(0x394B7AC9, ped, Toggle); } // 0x394B7AC9
	nativeDecl void _0x55E06443(Ped p0, float p1) { invoke<Void>(0x55E06443, p0, p1); } // 0x55E06443
	nativeDecl void SET_PED_PATHS_WIDTH_PLANT(Any p0, Any p1) { invoke<Void>(0x9C606EE3, p0, p1); } // 0x9C606EE3
	nativeDecl void SET_PED_PATH_PREFER_TO_AVOID_WATER(Any p0, Any p1) { invoke<Void>(0x0EA39A29, p0, p1); } // 0x0EA39A29
	nativeDecl void SET_PED_PATH_AVOID_FIRE(Any p0, Any p1) { invoke<Void>(0xDCC5B934, p0, p1); } // 0xDCC5B934
	nativeDecl void _0x2AFB14B8(Any p0) { invoke<Void>(0x2AFB14B8, p0); } // 0x2AFB14B8
	nativeDecl Any GET_NAVMESH_ROUTE_DISTANCE_REMAINING(Any p0, Any p1, Any p2) { return invoke<Any>(0xD9281778, p0, p1, p2); } // 0xD9281778
	nativeDecl Any GET_NAVMESH_ROUTE_RESULT(Any p0) { return invoke<Any>(0x96491602, p0); } // 0x96491602
	nativeDecl void TASK_GO_TO_COORD_ANY_MEANS(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0xF91DF93B, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xF91DF93B
	nativeDecl void _0x094B75EF(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { invoke<Void>(0x094B75EF, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x094B75EF
	nativeDecl void _0x86DC03F9(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12) { invoke<Void>(0x86DC03F9, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0x86DC03F9
	nativeDecl void TASK_PLAY_ANIM(Ped PedHandle, const char* AnimSet, const char* AnimationName, float Speed, float unk, int Loop, int LastAnimation, float PlaybackRate, BOOL xLock, BOOL yLock, BOOL zLock) { invoke<Void>(0x5AB552C6, PedHandle, AnimSet, AnimationName, Speed, unk, Loop, LastAnimation, PlaybackRate, xLock, yLock, zLock); } // 0x5AB552C6
	nativeDecl void _0x3DDEB0E6(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15) { invoke<Void>(0x3DDEB0E6, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15); } // 0x3DDEB0E6
	nativeDecl void STOP_ANIM_TASK(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x2B520A57, p0, p1, p2, p3); } // 0x2B520A57
	nativeDecl void TASK_SCRIPTED_ANIMATION(int p0, Any* p1, Any* p2, Any* p3, float p4, float p5) { invoke<Void>(0xFC2DCF47, p0, p1, p2, p3, p4, p5); } // 0xFC2DCF47
	nativeDecl void PLAY_ENTITY_SCRIPTED_ANIM(int p0, const char* p1, const char* p2, const char* p3, float p4, float p5) { invoke<Void>(0x02F72AE5, p0, p1, p2, p3, p4, p5); } // 0x02F72AE5
	nativeDecl void STOP_ANIM_PLAYBACK(Any p0, Any p1, Any p2) { invoke<Void>(0xE5F16398, p0, p1, p2); } // 0xE5F16398
	nativeDecl void SET_ANIM_WEIGHT(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x17229D98, p0, p1, p2, p3, p4); } // 0x17229D98
	nativeDecl void SET_ANIM_RATE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x6DB46584, p0, p1, p2, p3); } // 0x6DB46584
	nativeDecl void SET_ANIM_LOOPED(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x095D61A4, p0, p1, p2, p3); } // 0x095D61A4
	nativeDecl void _0x1582162C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0x1582162C, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x1582162C
	nativeDecl Any _0x500B6805(Any p0) { return invoke<Any>(0x500B6805, p0); } // 0x500B6805
	nativeDecl Any _0x7B72AFD1(Any p0) { return invoke<Any>(0x7B72AFD1, p0); } // 0x7B72AFD1
	nativeDecl Any _0xEF8C3959(Any p0) { return invoke<Any>(0xEF8C3959, p0); } // 0xEF8C3959
	nativeDecl void TASK_VEHICLE_PLAY_ANIM(Any p0, Any p1, Any p2) { invoke<Void>(0x2B28F598, p0, p1, p2); } // 0x2B28F598
	nativeDecl void TASK_LOOK_AT_COORD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x7B784DD8, p0, p1, p2, p3, p4, p5, p6); } // 0x7B784DD8
	nativeDecl void TASK_LOOK_AT_ENTITY(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x991D6619, p0, p1, p2, p3, p4); } // 0x991D6619
	nativeDecl void TASK_CLEAR_LOOK_AT(Any p0) { invoke<Void>(0x60EB4054, p0); } // 0x60EB4054
	nativeDecl void OPEN_SEQUENCE_TASK(Object* taskSequence) { invoke<Void>(0xABA6923E, taskSequence); } // 0xABA6923E
	nativeDecl void CLOSE_SEQUENCE_TASK(Object taskSequence) { invoke<Void>(0x1A7CEBD0, taskSequence); } // 0x1A7CEBD0
	nativeDecl void TASK_PERFORM_SEQUENCE(Ped ped, Object taskSequence) { invoke<Void>(0x4D9FBD11, ped, taskSequence); } // 0x4D9FBD11
	nativeDecl void CLEAR_SEQUENCE_TASK(Object* taskSequence) { invoke<Void>(0x47ED03CE, taskSequence); } // 0x47ED03CE
	nativeDecl void SET_SEQUENCE_TO_REPEAT(Any p0, Any p1) { invoke<Void>(0xCDDF1508, p0, p1); } // 0xCDDF1508
	nativeDecl Any GET_SEQUENCE_PROGRESS(Any p0) { return invoke<Any>(0xA3419909, p0); } // 0xA3419909
	nativeDecl Any GET_IS_TASK_ACTIVE(Any p0, Any p1) { return invoke<Any>(0x86FDDF55, p0, p1); } // 0x86FDDF55
	nativeDecl Any GET_SCRIPT_TASK_STATUS(Any p0, Any p1) { return invoke<Any>(0xB2477B23, p0, p1); } // 0xB2477B23
	nativeDecl Any _0xAFA914EF(Any p0) { return invoke<Any>(0xAFA914EF, p0); } // 0xAFA914EF
	nativeDecl void TASK_LEAVE_ANY_VEHICLE(Any p0, Any p1, Any p2) { invoke<Void>(0xDBDD79FA, p0, p1, p2); } // 0xDBDD79FA
	nativeDecl void TASK_AIM_GUN_SCRIPTED(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x9D296BCD, p0, p1, p2, p3); } // 0x9D296BCD
	nativeDecl void TASK_AIM_GUN_SCRIPTED_WITH_TARGET(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0xFD517CE3, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xFD517CE3
	nativeDecl void _0x67E73525(Ped p0, Ped p1, float p2, float p3, float p4, BOOL p5) { invoke<Void>(0x67E73525, p0, p1, p2, p3, p4, p5); } // 0x67E73525
	nativeDecl Any _0x249EB4EB(Any p0) { return invoke<Any>(0x249EB4EB, p0); } // 0x249EB4EB
	nativeDecl void TASK_AIM_GUN_AT_ENTITY(Ped pedHandle, Entity entityHandle, int duration, BOOL unknown) { invoke<Void>(0xBE32B3B6, pedHandle, entityHandle, duration, unknown); } // 0xBE32B3B6
	nativeDecl void TASK_TURN_PED_TO_FACE_ENTITY(Ped pedHandle, Entity entityHandle, int duration) { invoke<Void>(0x3C37C767, pedHandle, entityHandle, duration); } // 0x3C37C767
	nativeDecl void TASK_AIM_GUN_AT_COORD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0xFBF44AD3, p0, p1, p2, p3, p4, p5, p6); } // 0xFBF44AD3
	nativeDecl void TASK_SHOOT_AT_COORD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x601C22E3, p0, p1, p2, p3, p4, p5); } // 0x601C22E3
	nativeDecl void TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(Any p0, Any p1) { invoke<Void>(0xBEAF8F67, p0, p1); } // 0xBEAF8F67
	nativeDecl void CLEAR_PED_TASKS(Ped pedHandle) { invoke<Void>(0xDE3316AB, pedHandle); } // 0xDE3316AB
	nativeDecl void CLEAR_PED_SECONDARY_TASK(Ped pedHandle) { invoke<Void>(0xA635F451, pedHandle); } // 0xA635F451
	nativeDecl void TASK_EVERYONE_LEAVE_VEHICLE(Any p0) { invoke<Void>(0xC1971F30, p0); } // 0xC1971F30
	nativeDecl void TASK_GOTO_ENTITY_OFFSET(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x1A17A85E, p0, p1, p2, p3, p4, p5, p6); } // 0x1A17A85E
	nativeDecl void TASK_GOTO_ENTITY_OFFSET_XY(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0xBC1E3D0A, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xBC1E3D0A
	nativeDecl void TASK_TURN_PED_TO_FACE_COORD(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x30463D73, p0, p1, p2, p3, p4); } // 0x30463D73
	nativeDecl void TASK_VEHICLE_TEMP_ACTION(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x0679DFB8, p0, p1, p2, p3); } // 0x0679DFB8
	nativeDecl void TASK_VEHICLE_MISSION(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0x20609E56, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x20609E56
	nativeDecl void TASK_VEHICLE_MISSION_PED_TARGET(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0xC81C4677, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xC81C4677
	nativeDecl void TASK_VEHICLE_MISSION_COORS_TARGET(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { invoke<Void>(0x6719C109, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x6719C109
	nativeDecl void TASK_VEHICLE_ESCORT(Ped pedHandle, Vehicle vehicle, Vehicle targetVehicle, int p3, float speed, Any p5, float minDistance, int p7, float p8) { invoke<Void>(0x9FDCB250, pedHandle, vehicle, targetVehicle, p3, speed, p5, minDistance, p7, p8); } // 0x9FDCB250
	nativeDecl void TASK_VEHICLE_CHASE(Ped pedHandle, Ped targetEntHandle) { invoke<Void>(0x55634798, pedHandle, targetEntHandle); } // 0x55634798
	nativeDecl void TASK_VEHICLE_HELI_PROTECT(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0x0CB415EE, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x0CB415EE
	nativeDecl void _0x2A83083F(Any p0, Any p1, Any p2) { invoke<Void>(0x2A83083F, p0, p1, p2); } // 0x2A83083F
	nativeDecl void _0x04FD3EE7(Any p0, Any p1) { invoke<Void>(0x04FD3EE7, p0, p1); } // 0x04FD3EE7
	nativeDecl void TASK_HELI_CHASE(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xAC290A21, p0, p1, p2, p3, p4); } // 0xAC290A21
	nativeDecl void TASK_PLANE_CHASE(Any p0, Any p1, float p2, float p3, float p4) { invoke<Void>(0x12FA1C28, p0, p1, p2, p3, p4); } // 0x12FA1C28
	nativeDecl void TASK_PLANE_LAND(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0x5F7E23EA, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x5F7E23EA
	nativeDecl void TASK_HELI_MISSION(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14) { invoke<Void>(0x0C143E97, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); } // 0x0C143E97
	nativeDecl void TASK_PLANE_MISSION(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12) { invoke<Void>(0x1D007E65, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0x1D007E65
	nativeDecl void TASK_BOAT_MISSION(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { invoke<Void>(0x5865B031, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x5865B031
	nativeDecl void TASK_DRIVE_BY(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoke<Void>(0x2B84D1C4, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x2B84D1C4
	nativeDecl void SET_DRIVEBY_TASK_TARGET(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0xDA6A6FC1, p0, p1, p2, p3, p4, p5); } // 0xDA6A6FC1
	nativeDecl void _0x9B76F7E6(Ped ped) { invoke<Void>(0x9B76F7E6, ped); } // 0x9B76F7E6
	nativeDecl Any _0xB23F46E6(Ped ped) { return invoke<Any>(0xB23F46E6, ped); } // 0xB23F46E6
	nativeDecl Any _0x500D9244(Any p0) { return invoke<Any>(0x500D9244, p0); } // 0x500D9244
	nativeDecl void _0x98713C68(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x98713C68, p0, p1, p2, p3, p4, p5); } // 0x98713C68
	nativeDecl Any _0x291E938C(Any p0) { return invoke<Any>(0x291E938C, p0); } // 0x291E938C
	nativeDecl void TASK_USE_MOBILE_PHONE(Any p0, Any p1) { invoke<Void>(0x225A38C8, p0, p1); } // 0x225A38C8
	nativeDecl void TASK_USE_MOBILE_PHONE_TIMED(Any p0, Any p1) { invoke<Void>(0xC99C19F5, p0, p1); } // 0xC99C19F5
	nativeDecl void TASK_CHAT_TO_PED(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0xA2BE1821, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xA2BE1821
	nativeDecl void ADD_FOLLOW_NAVMESH_TO_PHONE_TASK(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x00D7303F, p0, p1, p2, p3, p4); } // 0x00D7303F
	nativeDecl void TASK_WARP_PED_INTO_VEHICLE(Any p0, Any p1, Any p2) { invoke<Void>(0x65D4A35D, p0, p1, p2); } // 0x65D4A35D
	nativeDecl void TASK_SHOOT_AT_ENTITY(int p0, Entity Entity, Any p2, Any p3) { invoke<Void>(0xAC0631C9, p0, Entity, p2, p3); } // 0xAC0631C9
	nativeDecl void TASK_CLIMB(Any p0, Any p1) { invoke<Void>(0x90847790, p0, p1); } // 0x90847790
	nativeDecl void TASK_CLIMB_LADDER(Any p0, Any p1) { invoke<Void>(0x35BB4EE0, p0, p1); } // 0x35BB4EE0
	nativeDecl void CLEAR_PED_TASKS_IMMEDIATELY(Ped PedHandle) { invoke<Void>(0xBC045625, PedHandle); } // 0xBC045625
	nativeDecl void TASK_PERFORM_SEQUENCE_FROM_PROGRESS(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xFA60601B, p0, p1, p2, p3); } // 0xFA60601B
	nativeDecl void SET_NEXT_DESIRED_MOVE_STATE(Any p0) { invoke<Void>(0x4E937D57, p0); } // 0x4E937D57
	nativeDecl void SET_PED_DESIRED_MOVE_BLEND_RATIO(Any p0, Any p1) { invoke<Void>(0xC65FC712, p0, p1); } // 0xC65FC712
	nativeDecl Any GET_PED_DESIRED_MOVE_BLEND_RATIO(Any p0) { return invoke<Any>(0x5FEFAB72, p0); } // 0x5FEFAB72
	nativeDecl void TASK_GOTO_ENTITY_AIMING(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF1C493CF, p0, p1, p2, p3); } // 0xF1C493CF
	nativeDecl void TASK_SET_DECISION_MAKER(Any p0, Any p1) { invoke<Void>(0x830AD50C, p0, p1); } // 0x830AD50C
	nativeDecl void TASK_SET_SPHERE_DEFENSIVE_AREA(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x9F3C5D6A, p0, p1, p2, p3, p4); } // 0x9F3C5D6A
	nativeDecl void TASK_CLEAR_DEFENSIVE_AREA(Any p0) { invoke<Void>(0x7A05BF0D, p0); } // 0x7A05BF0D
	nativeDecl void TASK_PED_SLIDE_TO_COORD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x225380EF, p0, p1, p2, p3, p4, p5); } // 0x225380EF
	nativeDecl void TASK_PED_SLIDE_TO_COORD_HDG_RATE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x38A995C1, p0, p1, p2, p3, p4, p5, p6); } // 0x38A995C1
	nativeDecl Any ADD_COVER_POINT(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoke<Any>(0xA0AF0B98, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xA0AF0B98
	nativeDecl void REMOVE_COVER_POINT(Any p0) { invoke<Void>(0x0776888B, p0); } // 0x0776888B
	nativeDecl BOOL _IS_COVER_POINT_AT_COORDS(float x, float y, float z) { return invoke<BOOL>(0x29F97A71, x, y, z); } // 0x29F97A71
	nativeDecl Vector3 _0xC6B6CCC1(Any p0) { return invoke<Vector3>(0xC6B6CCC1, p0); } // 0xC6B6CCC1
	nativeDecl void TASK_COMBAT_PED(Ped pedHandle, Player p1, Any p2, Any p3) { invoke<Void>(0xCB0D8932, pedHandle, p1, p2, p3); } // 0xCB0D8932
	nativeDecl void TASK_COMBAT_PED_TIMED(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF5CA2A45, p0, p1, p2, p3); } // 0xF5CA2A45
	nativeDecl void TASK_SEEK_COVER_FROM_POS(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x83F18EE9, p0, p1, p2, p3, p4, p5); } // 0x83F18EE9
	nativeDecl void TASK_SEEK_COVER_FROM_PED(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xC1EC907E, p0, p1, p2, p3); } // 0xC1EC907E
	nativeDecl void TASK_SEEK_COVER_TO_COVER_POINT(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x3D026B29, p0, p1, p2, p3, p4, p5, p6); } // 0x3D026B29
	nativeDecl void TASK_SEEK_COVER_TO_COORDS(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0xFFFE754E, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xFFFE754E
	nativeDecl void TASK_PUT_PED_DIRECTLY_INTO_COVER(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { invoke<Void>(0xC9F00E68, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0xC9F00E68
	nativeDecl void TASK_EXIT_COVER(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xC829FAC9, p0, p1, p2, p3, p4); } // 0xC829FAC9
	nativeDecl void TASK_PUT_PED_DIRECTLY_INTO_MELEE(Any p0, Any p1, float p2, float p3, float p4, Any p5) { invoke<Void>(0x79E1D27D, p0, p1, p2, p3, p4, p5); } // 0x79E1D27D
	nativeDecl void TASK_TOGGLE_DUCK(Any p0, Any p1) { invoke<Void>(0x61CFBCBF, p0, p1); } // 0x61CFBCBF
	nativeDecl void TASK_GUARD_CURRENT_POSITION(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x2FB099E9, p0, p1, p2, p3); } // 0x2FB099E9
	nativeDecl void _0x7AF0133D(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x7AF0133D, p0, p1, p2, p3, p4, p5, p6); } // 0x7AF0133D
	nativeDecl void TASK_GUARD_SPHERE_DEFENSIVE_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { invoke<Void>(0x86B76CB7, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x86B76CB7
	nativeDecl void TASK_STAND_GUARD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0xD130F636, p0, p1, p2, p3, p4, p5); } // 0xD130F636
	nativeDecl void SET_DRIVE_TASK_CRUISE_SPEED(Any p0, Any p1) { invoke<Void>(0x3CEC07B1, p0, p1); } // 0x3CEC07B1
	nativeDecl void SET_DRIVE_TASK_MAX_CRUISE_SPEED(Any p0, Any p1) { invoke<Void>(0x7FDF6131, p0, p1); } // 0x7FDF6131
	nativeDecl void SET_DRIVE_TASK_DRIVING_STYLE(Any DRIVER_PED, Any DRIVING_STYLE) { invoke<Void>(0x59C5FAD7, DRIVER_PED, DRIVING_STYLE); } // 0x59C5FAD7
	nativeDecl void ADD_COVER_BLOCKING_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoke<Void>(0x3536946F, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x3536946F
	nativeDecl void REMOVE_ALL_COVER_BLOCKING_AREAS() { invoke<Void>(0xCF9221A7); } // 0xCF9221A7
	nativeDecl void TASK_START_SCENARIO_IN_PLACE(Any p0, const char* p1, Any p2, Any p3) { invoke<Void>(0xE50D6DDE, p0, p1, p2, p3); } // 0xE50D6DDE
	nativeDecl void TASK_START_SCENARIO_AT_POSITION(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0xAA2C4AC2, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xAA2C4AC2
	nativeDecl void TASK_USE_NEAREST_SCENARIO_TO_COORD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x9C50FBF0, p0, p1, p2, p3, p4, p5); } // 0x9C50FBF0
	nativeDecl void TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x1BE9D65C, p0, p1, p2, p3, p4, p5); } // 0x1BE9D65C
	nativeDecl void TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0xE32FFB22, p0, p1, p2, p3, p4, p5); } // 0xE32FFB22
	nativeDecl void TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD_WARP(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0xBAB4C0AE, p0, p1, p2, p3, p4, p5); } // 0xBAB4C0AE
	nativeDecl BOOL DOES_SCENARIO_EXIST_IN_AREA(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<BOOL>(0xFA7F5047, p0, p1, p2, p3, p4); } // 0xFA7F5047
	nativeDecl Any _0x0FB138A5(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0x0FB138A5, p0, p1, p2, p3, p4, p5); } // 0x0FB138A5
	nativeDecl BOOL IS_SCENARIO_OCCUPIED(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<BOOL>(0x697FC008, p0, p1, p2, p3, p4); } // 0x697FC008
	nativeDecl Any _0x9BE9C691(Any p0) { return invoke<Any>(0x9BE9C691, p0); } // 0x9BE9C691
	nativeDecl void _0x1984A5D1(Any p0, Any p1, Any p2) { invoke<Void>(0x1984A5D1, p0, p1, p2); } // 0x1984A5D1
	nativeDecl BOOL DOES_SCENARIO_GROUP_EXIST(Any p0) { return invoke<BOOL>(0x5F072EB9, p0); } // 0x5F072EB9
	nativeDecl BOOL IS_SCENARIO_GROUP_ENABLED(Any p0) { return invoke<BOOL>(0x90991122, p0); } // 0x90991122
	nativeDecl void SET_SCENARIO_GROUP_ENABLED(Any p0, Any p1) { invoke<Void>(0x116997B1, p0, p1); } // 0x116997B1
	nativeDecl void _0xBF55025D() { invoke<Void>(0xBF55025D); } // 0xBF55025D
	nativeDecl void SET_EXCLUSIVE_SCENARIO_GROUP(Any p0) { invoke<Void>(0x59DB8F26, p0); } // 0x59DB8F26
	nativeDecl void RESET_EXCLUSIVE_SCENARIO_GROUP() { invoke<Void>(0x17F9DFE8); } // 0x17F9DFE8
	nativeDecl BOOL IS_SCENARIO_TYPE_ENABLED(Any p0) { return invoke<BOOL>(0xAE37E969, p0); } // 0xAE37E969
	nativeDecl void SET_SCENARIO_TYPE_ENABLED(Any p0, Any p1) { invoke<Void>(0xDB18E5DE, p0, p1); } // 0xDB18E5DE
	nativeDecl void _0xF58FDEB4() { invoke<Void>(0xF58FDEB4); } // 0xF58FDEB4
	nativeDecl BOOL IS_PED_ACTIVE_IN_SCENARIO(Any p0) { return invoke<BOOL>(0x05038F1A, p0); } // 0x05038F1A
	nativeDecl void TASK_COMBAT_HATED_TARGETS_IN_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0xDF099E18, p0, p1, p2, p3, p4, p5); } // 0xDF099E18
	nativeDecl void TASK_COMBAT_HATED_TARGETS_AROUND_PED(Player p0, float AreaToAttack, Any p2) { invoke<Void>(0x2E7064E4, p0, AreaToAttack, p2); } // 0x2E7064E4
	nativeDecl void TASK_COMBAT_HATED_TARGETS_AROUND_PED_TIMED(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF127AD6A, p0, p1, p2, p3); } // 0xF127AD6A
	nativeDecl void TASK_THROW_PROJECTILE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF65C20A7, p0, p1, p2, p3); } // 0xF65C20A7
	nativeDecl void TASK_SWAP_WEAPON(Any p0, Any p1) { invoke<Void>(0xDAF4F8FC, p0, p1); } // 0xDAF4F8FC
	nativeDecl void TASK_RELOAD_WEAPON(Any p0, Any p1) { invoke<Void>(0xCA6E91FD, p0, p1); } // 0xCA6E91FD
	nativeDecl BOOL IS_PED_GETTING_UP(Any p0) { return invoke<BOOL>(0x320813E6, p0); } // 0x320813E6
	nativeDecl void TASK_WRITHE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x0FDC54FC, p0, p1, p2, p3); } // 0x0FDC54FC
	nativeDecl BOOL IS_PED_IN_WRITHE(Any p0) { return invoke<BOOL>(0x09E61921, p0); } // 0x09E61921
	nativeDecl void OPEN_PATROL_ROUTE(Any p0) { invoke<Void>(0xF33F83CA, p0); } // 0xF33F83CA
	nativeDecl void CLOSE_PATROL_ROUTE() { invoke<Void>(0x67305E59); } // 0x67305E59
	nativeDecl void ADD_PATROL_ROUTE_NODE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0x21B48F10, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x21B48F10
	nativeDecl void ADD_PATROL_ROUTE_LINK(Any p0, Any p1) { invoke<Void>(0xD8761BB3, p0, p1); } // 0xD8761BB3
	nativeDecl void CREATE_PATROL_ROUTE() { invoke<Void>(0x0A6C7864); } // 0x0A6C7864
	nativeDecl void DELETE_PATROL_ROUTE(Any p0) { invoke<Void>(0x2A4E6706, p0); } // 0x2A4E6706
	nativeDecl void TASK_PATROL(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xB92E5AF6, p0, p1, p2, p3, p4); } // 0xB92E5AF6
	nativeDecl void TASK_STAY_IN_COVER(Any p0) { invoke<Void>(0xA27A9413, p0); } // 0xA27A9413
	nativeDecl void _0x50779A2C(Ped ped, float x, float y, float z) { invoke<Void>(0x50779A2C, ped, x, y, z); } // 0x50779A2C
	nativeDecl void ADD_VEHICLE_SUBTASK_ATTACK_PED(Any p0, Any p1) { invoke<Void>(0x80461113, p0, p1); } // 0x80461113
	nativeDecl void TASK_VEHICLE_SHOOT_AT_PED(Any p0, Any p1, Any p2) { invoke<Void>(0x59677BA0, p0, p1, p2); } // 0x59677BA0
	nativeDecl void TASK_VEHICLE_AIM_AT_PED(Any p0, Any p1) { invoke<Void>(0x920AE6DB, p0, p1); } // 0x920AE6DB
	nativeDecl void TASK_VEHICLE_SHOOT_AT_COORD(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xA7AAA4D6, p0, p1, p2, p3, p4); } // 0xA7AAA4D6
	nativeDecl void TASK_VEHICLE_AIM_AT_COORD(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x010F47CE, p0, p1, p2, p3); } // 0x010F47CE
	nativeDecl void TASK_VEHICLE_GOTO_NAVMESH(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0x55CF3BCD, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x55CF3BCD
	nativeDecl void TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14) { invoke<Void>(0x1552DC91, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); } // 0x1552DC91
	nativeDecl void TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13) { invoke<Void>(0x9BD52ABD, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); } // 0x9BD52ABD
	nativeDecl void TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14) { invoke<Void>(0x3F91358E, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); } // 0x3F91358E
	nativeDecl void TASK_GO_TO_ENTITY_WHILE_AIMING_AT_COORD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { invoke<Void>(0xD896CD82, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0xD896CD82
	nativeDecl void TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoke<Void>(0x68E36B7A, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x68E36B7A
	nativeDecl void SET_HIGH_FALL_TASK(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xBBB26172, p0, p1, p2, p3); } // 0xBBB26172
	nativeDecl void REQUEST_WAYPOINT_RECORDING(Any p0) { invoke<Void>(0xAFABFB5D, p0); } // 0xAFABFB5D
	nativeDecl Any _0x87125F5D(Any p0) { return invoke<Any>(0x87125F5D, p0); } // 0x87125F5D
	nativeDecl void REMOVE_WAYPOINT_RECORDING(Any p0) { invoke<Void>(0x624530B0, p0); } // 0x624530B0
	nativeDecl Any _0xF5F9B71E(Any p0, Any p1) { return invoke<Any>(0xF5F9B71E, p0, p1); } // 0xF5F9B71E
	nativeDecl Any _0x19266913(Any p0, Any p1, Any p2) { return invoke<Any>(0x19266913, p0, p1, p2); } // 0x19266913
	nativeDecl Any _0xC765633A(Any p0, Any p1) { return invoke<Any>(0xC765633A, p0, p1); } // 0xC765633A
	nativeDecl Any _0xC4CD35AF(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0xC4CD35AF, p0, p1, p2, p3, p4); } // 0xC4CD35AF
	nativeDecl void TASK_FOLLOW_WAYPOINT_RECORDING(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xADF9904D, p0, p1, p2, p3, p4); } // 0xADF9904D
	nativeDecl BOOL IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Any p0) { return invoke<BOOL>(0x85B7725F, p0); } // 0x85B7725F
	nativeDecl Any GET_PED_WAYPOINT_PROGRESS(Any p0) { return invoke<Any>(0x3595B104, p0); } // 0x3595B104
	nativeDecl Any GET_PED_WAYPOINT_DISTANCE(Any p0) { return invoke<Any>(0x084B35B0, p0); } // 0x084B35B0
	nativeDecl Any SET_PED_WAYPOINT_ROUTE_OFFSET(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0xF867F747, p0, p1, p2, p3); } // 0xF867F747
	nativeDecl Any _0xE8422AC4(Any p0, Any p1) { return invoke<Any>(0xE8422AC4, p0, p1); } // 0xE8422AC4
	nativeDecl Any WAYPOINT_PLAYBACK_GET_IS_PAUSED(Any p0) { return invoke<Any>(0xA6BB5717, p0); } // 0xA6BB5717
	nativeDecl void WAYPOINT_PLAYBACK_PAUSE(Any p0, Any p1, Any p2) { invoke<Void>(0xFE39ECF8, p0, p1, p2); } // 0xFE39ECF8
	nativeDecl void WAYPOINT_PLAYBACK_RESUME(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x50F392EF, p0, p1, p2, p3); } // 0x50F392EF
	nativeDecl void WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Any p0, Any p1, Any p2) { invoke<Void>(0x23E6BA96, p0, p1, p2); } // 0x23E6BA96
	nativeDecl void WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(Any p0) { invoke<Void>(0x1BBB2CAC, p0); } // 0x1BBB2CAC
	nativeDecl void _0x4DFD5FEC(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x4DFD5FEC, p0, p1, p2, p3); } // 0x4DFD5FEC
	nativeDecl void WAYPOINT_PLAYBACK_START_AIMING_AT_PED(Any p0, Any p1, Any p2) { invoke<Void>(0x75E60CF6, p0, p1, p2); } // 0x75E60CF6
	nativeDecl void WAYPOINT_PLAYBACK_START_AIMING_AT_COORD(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xF120A34E, p0, p1, p2, p3, p4); } // 0xF120A34E
	nativeDecl void WAYPOINT_PLAYBACK_START_SHOOTING_AT_PED(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xBD5F0EB8, p0, p1, p2, p3); } // 0xBD5F0EB8
	nativeDecl void WAYPOINT_PLAYBACK_START_SHOOTING_AT_COORD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0xCDDB44D5, p0, p1, p2, p3, p4, p5); } // 0xCDDB44D5
	nativeDecl void WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING(Any p0) { invoke<Void>(0x6D7CF40C, p0); } // 0x6D7CF40C
	nativeDecl void ASSISTED_MOVEMENT_REQUEST_ROUTE(const char* route) { invoke<Void>(0x48262EDA, route); } // 0x48262EDA
	nativeDecl void ASSISTED_MOVEMENT_REMOVE_ROUTE(Any p0) { invoke<Void>(0xB3CEC06F, p0); } // 0xB3CEC06F
	nativeDecl Any _0x79B067AF(Any p0) { return invoke<Any>(0x79B067AF, p0); } // 0x79B067AF
	nativeDecl void _0x01CAAFCC(Any p0, Any p1) { invoke<Void>(0x01CAAFCC, p0, p1); } // 0x01CAAFCC
	nativeDecl void _0x8FB923EC(Any p0) { invoke<Void>(0x8FB923EC, p0); } // 0x8FB923EC
	nativeDecl void TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoke<Void>(0x959818B6, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x959818B6
	nativeDecl BOOL IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Any p0) { return invoke<BOOL>(0x80DD15DB, p0); } // 0x80DD15DB
	nativeDecl Any GET_VEHICLE_WAYPOINT_PROGRESS(Any p0) { return invoke<Any>(0xD3CCF64E, p0); } // 0xD3CCF64E
	nativeDecl Any GET_VEHICLE_WAYPOINT_TARGET_POINT(Any p0) { return invoke<Any>(0x81049608, p0); } // 0x81049608
	nativeDecl void VEHICLE_WAYPOINT_PLAYBACK_PAUSE(Any p0) { invoke<Void>(0x7C00B415, p0); } // 0x7C00B415
	nativeDecl void VEHICLE_WAYPOINT_PLAYBACK_RESUME(Any p0) { invoke<Void>(0xBEB14C82, p0); } // 0xBEB14C82
	nativeDecl void VEHICLE_WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(Any p0) { invoke<Void>(0x923C3AA4, p0); } // 0x923C3AA4
	nativeDecl void VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Any p0, Any p1) { invoke<Void>(0xBE1E7BB4, p0, p1); } // 0xBE1E7BB4
	nativeDecl void TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Any p0, Any p1) { invoke<Void>(0x1B54FB6B, p0, p1); } // 0x1B54FB6B
	nativeDecl void TASK_FORCE_MOTION_STATE(Any p0, Any p1, Any p2) { invoke<Void>(0xCAD2EF77, p0, p1, p2); } // 0xCAD2EF77
	nativeDecl void _0x6F5D215F(Any p0, const char* p1, float p2, Any p3, const char* p4, Any p5) { invoke<Void>(0x6F5D215F, p0, p1, p2, p3, p4, p5); } // 0x6F5D215F
	nativeDecl void _0x71A5C5DB(int ped, const char* anim, float x, float y, float z, float rotx, float roty, float rotz, int unknown1, float multiplier, bool unknown2, const char* dict, int flags) { invoke<Void>(0x71A5C5DB, ped, anim, x, y, z, rotx, roty, rotz, unknown1, multiplier, unknown2, dict, flags); } // 0x71A5C5DB
	nativeDecl Any _0x902656EB(Any p0) { return invoke<Any>(0x902656EB, p0); } // 0x902656EB
	nativeDecl Any _0x92FDBAE6(Any p0) { return invoke<Any>(0x92FDBAE6, p0); } // 0x92FDBAE6
	nativeDecl Any _0x885724DE(Any p0, Any p1) { return invoke<Any>(0x885724DE, p0, p1); } // 0x885724DE
	nativeDecl Any _0x96C0277B(Any p0) { return invoke<Any>(0x96C0277B, p0); } // 0x96C0277B
	nativeDecl void _0xA79BE783(Any p0, Any p1, Any p2) { invoke<Void>(0xA79BE783, p0, p1, p2); } // 0xA79BE783
	nativeDecl void _0xF3538041(Any p0, Any p1, Any p2) { invoke<Void>(0xF3538041, p0, p1, p2); } // 0xF3538041
	nativeDecl Any _0x1EBB6F3D(Any p0, Any p1) { return invoke<Any>(0x1EBB6F3D, p0, p1); } // 0x1EBB6F3D
	nativeDecl Any _0x72FA5EF2(Any p0, Any p1) { return invoke<Any>(0x72FA5EF2, p0, p1); } // 0x72FA5EF2
	nativeDecl Any _0xE9DAF877(Any p0) { return invoke<Any>(0xE9DAF877, p0); } // 0xE9DAF877
	nativeDecl Any _0xD21639A8(Any p0) { return invoke<Any>(0xD21639A8, p0); } // 0xD21639A8
	nativeDecl Any _0xE76A2353(Any p0) { return invoke<Any>(0xE76A2353, p0); } // 0xE76A2353
	nativeDecl Any _0xDD616893(Any p0) { return invoke<Any>(0xDD616893, p0); } // 0xDD616893
	nativeDecl BOOL IS_PED_STILL(Any p0) { return invoke<BOOL>(0x09E3418D, p0); } // 0x09E3418D
	nativeDecl BOOL IS_PED_WALKING(Any p0) { return invoke<BOOL>(0x4B865C4A, p0); } // 0x4B865C4A
	nativeDecl BOOL IS_PED_RUNNING(Any p0) { return invoke<BOOL>(0xE9A5578F, p0); } // 0xE9A5578F
	nativeDecl BOOL IS_PED_SPRINTING(Any p0) { return invoke<BOOL>(0x4F3E0633, p0); } // 0x4F3E0633
	nativeDecl BOOL IS_PED_STRAFING(Any p0) { return invoke<BOOL>(0xEFEED13C, p0); } // 0xEFEED13C
	nativeDecl void TASK_SYNCHRONIZED_SCENE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoke<Void>(0x4F217E7B, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x4F217E7B
	nativeDecl void _0x4D210467(Ped ped, const char* anim, const char* p2, const char* p3, const char* p4, int p5, Vehicle vehicle, Any p7, Any p8) { invoke<Void>(0x4D210467, ped, anim, p2, p3, p4, p5, vehicle, p7, p8); } // 0x4D210467
	nativeDecl void _0xF65F0F4F(Ped ped, Vehicle vehicle) { invoke<Void>(0xF65F0F4F, ped, vehicle); } // 0xF65F0F4F
	nativeDecl void _0x1683FE66(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { invoke<Void>(0x1683FE66, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x1683FE66
	nativeDecl void _0x6345EC80(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x6345EC80, p0, p1, p2, p3); } // 0x6345EC80
	nativeDecl void TASK_ARREST_PED(Any p0, Any p1) { invoke<Void>(0xBC0F153D, p0, p1); } // 0xBC0F153D
	nativeDecl BOOL IS_PED_RUNNING_ARREST_TASK(Any p0) { return invoke<BOOL>(0x6942DB7A, p0); } // 0x6942DB7A
	nativeDecl BOOL IS_PED_BEING_ARRESTED(Any p0) { return invoke<BOOL>(0x5FF6C2ED, p0); } // 0x5FF6C2ED
	nativeDecl void UNCUFF_PED(Any p0) { invoke<Void>(0xA23A1D61, p0); } // 0xA23A1D61
	nativeDecl BOOL IS_PED_CUFFED(Any p0) { return invoke<BOOL>(0x511CE741, p0); } // 0x511CE741
}

namespace MISC
{
	nativeDecl int GET_ALLOCATED_STACK_SIZE() { return invoke<int>(0x4E9CA30A); } // 0x4E9CA30A
	nativeDecl BOOL _SET_ALLOCATED_STACK_SIZE(int StackSize) { return invoke<BOOL>(0x11A178B8, StackSize); } // 0x11A178B8
	nativeDecl void SET_RANDOM_SEED(Any p0) { invoke<Void>(0xDB3FEB5C, p0); } // 0xDB3FEB5C
	nativeDecl void SET_TIME_SCALE(float Time) { invoke<Void>(0xA7F84694, Time); } // 0xA7F84694
	nativeDecl void SET_MISSION_FLAG(Any p0) { invoke<Void>(0x57592D52, p0); } // 0x57592D52
	nativeDecl Any GET_MISSION_FLAG() { return invoke<Any>(0x95115F97); } // 0x95115F97
	nativeDecl void SET_RANDOM_EVENT_FLAG(Any p0) { invoke<Void>(0xA77F31E8, p0); } // 0xA77F31E8
	nativeDecl Any GET_RANDOM_EVENT_FLAG() { return invoke<Any>(0x794CC92C); } // 0x794CC92C
	nativeDecl void _0x8B2DE971(Any p0) { invoke<Void>(0x8B2DE971, p0); } // 0x8B2DE971
	nativeDecl void _0xE77199F7(Any p0) { invoke<Void>(0xE77199F7, p0); } // 0xE77199F7
	nativeDecl Any _0xA8171E9E() { return invoke<Any>(0xA8171E9E); } // 0xA8171E9E
	nativeDecl Any _0x353E8056() { return invoke<Any>(0x353E8056); } // 0x353E8056
	nativeDecl BOOL IS_PREV_WEATHER_TYPE(Any p0) { return invoke<BOOL>(0x250ADA61, p0); } // 0x250ADA61
	nativeDecl BOOL IS_NEXT_WEATHER_TYPE(Any p0) { return invoke<BOOL>(0x99CB167F, p0); } // 0x99CB167F
	nativeDecl void SET_WEATHER_TYPE_PERSIST(const char* WeatherType) { invoke<Void>(0xC6C04C75, WeatherType); } // 0xC6C04C75
	nativeDecl void SET_WEATHER_TYPE_NOW_PERSIST(const char* WeatherType) { invoke<Void>(0xC869FE97, WeatherType); } // 0xC869FE97
	nativeDecl void SET_WEATHER_TYPE_NOW(const char* WeatherType) { invoke<Void>(0x361E9EAC, WeatherType); } // 0x361E9EAC
	nativeDecl void _SET_WEATHER_TYPE_OVER_TIME(const char* WeatherType, float Time) { invoke<Void>(0x386F0D25, WeatherType, Time); } // 0x386F0D25
	nativeDecl void SET_RANDOM_WEATHER_TYPE() { invoke<Void>(0xE7AA1BC9); } // 0xE7AA1BC9
	nativeDecl void CLEAR_WEATHER_TYPE_PERSIST() { invoke<Void>(0x6AB757D8); } // 0x6AB757D8
	nativeDecl void _0x9A5C1D56(Any p0, Any p1, Any p2) { invoke<Void>(0x9A5C1D56, p0, p1, p2); } // 0x9A5C1D56
	nativeDecl void _0x5CA74040(Any p0, Any p1, Any p2) { invoke<Void>(0x5CA74040, p0, p1, p2); } // 0x5CA74040
	nativeDecl void SET_OVERRIDE_WEATHER(const char* WeatherType) { invoke<Void>(0xD9082BB5, WeatherType); } // 0xD9082BB5
	nativeDecl void CLEAR_OVERRIDE_WEATHER() { invoke<Void>(0x7740EA4E); } // 0x7740EA4E
	nativeDecl void _0x625181DC(Any p0) { invoke<Void>(0x625181DC, p0); } // 0x625181DC
	nativeDecl void _0xBEBBFDC8(Any p0) { invoke<Void>(0xBEBBFDC8, p0); } // 0xBEBBFDC8
	nativeDecl void _0x6926AB03(Any p0) { invoke<Void>(0x6926AB03, p0); } // 0x6926AB03
	nativeDecl void _0xD447439D(Any p0) { invoke<Void>(0xD447439D, p0); } // 0xD447439D
	nativeDecl void _0x584E9C59(Any p0) { invoke<Void>(0x584E9C59, p0); } // 0x584E9C59
	nativeDecl void _0x5656D578(Any p0) { invoke<Void>(0x5656D578, p0); } // 0x5656D578
	nativeDecl void _0x0DE40C28(Any p0) { invoke<Void>(0x0DE40C28, p0); } // 0x0DE40C28
	nativeDecl void _0x98C9138B(Any p0) { invoke<Void>(0x98C9138B, p0); } // 0x98C9138B
	nativeDecl void _0xFB1A9CDE(Any p0) { invoke<Void>(0xFB1A9CDE, p0); } // 0xFB1A9CDE
	nativeDecl void _0x1C0CAE89(Any p0) { invoke<Void>(0x1C0CAE89, p0); } // 0x1C0CAE89
	nativeDecl void _0x4671AC2E(Any p0) { invoke<Void>(0x4671AC2E, p0); } // 0x4671AC2E
	nativeDecl void _0xDA02F415(float p0) { invoke<Void>(0xDA02F415, p0); } // 0xDA02F415
	nativeDecl void _0x5F3DDEC0(Any p0) { invoke<Void>(0x5F3DDEC0, p0); } // 0x5F3DDEC0
	nativeDecl void _0x63A89684(Any p0) { invoke<Void>(0x63A89684, p0); } // 0x63A89684
	nativeDecl void SET_WIND(Any p0) { invoke<Void>(0xC6294698, p0); } // 0xC6294698
	nativeDecl void SET_WIND_SPEED(float Speed) { invoke<Void>(0x45705F94, Speed); } // 0x45705F94
	nativeDecl Any GET_WIND_SPEED() { return invoke<Any>(0x098F0F3C); } // 0x098F0F3C
	nativeDecl void SET_WIND_DIRECTION(Any p0) { invoke<Void>(0x381AEEE9, p0); } // 0x381AEEE9
	nativeDecl Vector3 GET_WIND_DIRECTION() { return invoke<Vector3>(0x89499A0D); } // 0x89499A0D
	nativeDecl Any GET_RAIN_LEVEL() { return invoke<Any>(0xC9F67F28); } // 0xC9F67F28
	nativeDecl Any GET_SNOW_LEVEL() { return invoke<Any>(0x1B09184F); } // 0x1B09184F
	nativeDecl void _0xDF38165E() { invoke<Void>(0xDF38165E); } // 0xDF38165E
	nativeDecl void _0x8727A4C5(Any p0) { invoke<Void>(0x8727A4C5, p0); } // 0x8727A4C5
	nativeDecl void _0x96B2FD08(Any p0) { invoke<Void>(0x96B2FD08, p0); } // 0x96B2FD08
	nativeDecl void _0xED88FC61(const char* p0, float p1) { invoke<Void>(0xED88FC61, p0, p1); } // 0xED88FC61
	nativeDecl void _0xC9FA6E07(Any p0, Any p1) { invoke<Void>(0xC9FA6E07, p0, p1); } // 0xC9FA6E07
	nativeDecl void _0x2D7787BC() { invoke<Void>(0x2D7787BC); } // 0x2D7787BC
	nativeDecl int GET_GAME_TIMER() { return invoke<int>(0xA4EA0691); } // 0xA4EA0691
	nativeDecl float GET_FRAME_TIME() { return invoke<float>(0x96374262); } // 0x96374262
	nativeDecl int GET_FRAME_COUNT() { return invoke<int>(0xB477A015); } // 0xB477A015
	nativeDecl float GET_RANDOM_FLOAT_IN_RANGE(float p0, float p1) { return invoke<float>(0x0562C4D0, p0, p1); } // 0x0562C4D0
	nativeDecl int GET_RANDOM_INT_IN_RANGE(int StartRange, int EndRange) { return invoke<int>(0x4051115B, StartRange, EndRange); } // 0x4051115B
	nativeDecl Any GET_GROUND_Z_FOR_3D_COORD(float x, float y, float z, float* groundZ) { return invoke<Any>(0xA1BFD5E0, x, y, z, groundZ); } // 0xA1BFD5E0
	nativeDecl Any _0x64D91CED(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x64D91CED, p0, p1, p2, p3, p4); } // 0x64D91CED
	nativeDecl float ASIN(float p0) { return invoke<float>(0x998E5CAD, p0); } // 0x998E5CAD
	nativeDecl float ACOS(float p0) { return invoke<float>(0xF4038776, p0); } // 0xF4038776
	nativeDecl float TAN(float p0) { return invoke<float>(0xD320CE5E, p0); } // 0xD320CE5E
	nativeDecl float ATAN(float p0) { return invoke<float>(0x7A03CC8E, p0); } // 0x7A03CC8E
	nativeDecl float ATAN2(float p0, float p1) { return invoke<float>(0x2508AC81, p0, p1); } // 0x2508AC81   returns degrees
	nativeDecl Any GET_DISTANCE_BETWEEN_COORDS(float x1, float y1, float z1, float x2, float y2, float z2, BOOL unknown) { return invoke<Any>(0xF698765E, x1, y1, z1, x2, y2, z2, unknown); } // 0xF698765E
	nativeDecl Any GET_ANGLE_BETWEEN_2D_VECTORS(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0xDBF75E58, p0, p1, p2, p3); } // 0xDBF75E58
	nativeDecl Any GET_HEADING_FROM_VECTOR_2D(Any p0, Any p1) { return invoke<Any>(0xD209D52B, p0, p1); } // 0xD209D52B
	nativeDecl Any _0x89459F0A(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return invoke<Any>(0x89459F0A, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x89459F0A
	nativeDecl Vector3 _0xCAECF37E(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return invoke<Vector3>(0xCAECF37E, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0xCAECF37E
	nativeDecl Any _0xC6CC812C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12) { return invoke<Any>(0xC6CC812C, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0xC6CC812C
	nativeDecl void SET_BIT(int* var, int bit) { invoke<Void>(0x4EFE7E6B, var, bit); } // 0x4EFE7E6B
	nativeDecl void CLEAR_BIT(int* var, int bit) { invoke<Void>(0x8BC9E618, var, bit); } // 0x8BC9E618
	nativeDecl int GET_HASH_KEY(const char* ToHash) { return invoke<int>(0x98EFF6F1, ToHash); } // 0x98EFF6F1
	nativeDecl void _0x87B92190(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12) { invoke<Void>(0x87B92190, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0x87B92190
	nativeDecl BOOL IS_AREA_OCCUPIED(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12) { return invoke<BOOL>(0xC013972F, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0xC013972F
	nativeDecl BOOL IS_POSITION_OCCUPIED(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { return invoke<BOOL>(0x452E8D9E, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x452E8D9E
	nativeDecl BOOL IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<BOOL>(0xC161558D, p0, p1, p2, p3, p4, p5, p6); } // 0xC161558D
	nativeDecl void CLEAR_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0x854E9AB8, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x854E9AB8
	//nativeDecl void _0x20E4FFD9(float *p0, float p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0x20E4FFD9, p0, p3, p4, p5, p6, p7); } // 0x20E4FFD9
	nativeDecl void _CLEAR_AREA_OF_EVERYTHING(float x, float y, float z, float radius, BOOL p4, BOOL p5, BOOL p6, BOOL p7) { invoke<Void>(0x20E4FFD9, x, y, z, radius, p4, p5, p6, p7); } // 0x20E4FFD9
	nativeDecl void CLEAR_AREA_OF_VEHICLES(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0x63320F3C, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x63320F3C
	nativeDecl void CLEAR_ANGLED_AREA_OF_VEHICLES(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { invoke<Void>(0xF11A3018, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0xF11A3018
	nativeDecl void CLEAR_AREA_OF_OBJECTS(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xBB720FE7, p0, p1, p2, p3, p4); } // 0xBB720FE7
	nativeDecl void CLEAR_AREA_OF_PEDS(float* XCoord, float* YCoord, float* zCoord, float Area, Any p4) { invoke<Void>(0x25BE7FA8, XCoord, YCoord, zCoord, Area, p4); } // 0x25BE7FA8
	nativeDecl void CLEAR_AREA_OF_COPS(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x95C53824, p0, p1, p2, p3, p4); } // 0x95C53824
	nativeDecl void CLEAR_AREA_OF_PROJECTILES(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x18DB5434, p0, p1, p2, p3, p4); } // 0x18DB5434
	nativeDecl void SET_SAVE_MENU_ACTIVE(Any p0) { invoke<Void>(0xF5CCF164, p0); } // 0xF5CCF164
	nativeDecl Any _0x39771F21() { return invoke<Any>(0x39771F21); } // 0x39771F21
	nativeDecl void SET_CREDITS_ACTIVE(Any p0) { invoke<Void>(0xEC2A0ECF, p0); } // 0xEC2A0ECF
	nativeDecl void _0x75B06B5A(Any p0) { invoke<Void>(0x75B06B5A, p0); } // 0x75B06B5A
	nativeDecl Any _0x2569C9A7() { return invoke<Any>(0x2569C9A7); } // 0x2569C9A7
	nativeDecl void TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME(const char* ScriptName) { invoke<Void>(0x9F861FD4, ScriptName); } // 0x9F861FD4
	nativeDecl void NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME() { invoke<Void>(0x878486CE); } // 0x878486CE
	nativeDecl Any ADD_HOSPITAL_RESTART(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x4F3E3104, p0, p1, p2, p3, p4); } // 0x4F3E3104
	nativeDecl void DISABLE_HOSPITAL_RESTART(Any p0, Any p1) { invoke<Void>(0x09F49C72, p0, p1); } // 0x09F49C72
	nativeDecl Any ADD_POLICE_RESTART(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0xE96C29FE, p0, p1, p2, p3, p4); } // 0xE96C29FE
	nativeDecl void DISABLE_POLICE_RESTART(Any p0, Any p1) { invoke<Void>(0x0A280324, p0, p1); } // 0x0A280324
	nativeDecl void _0x296574AE(Any p0) { invoke<Void>(0x296574AE, p0); } // 0x296574AE
	nativeDecl void IGNORE_NEXT_RESTART(Any p0) { invoke<Void>(0xDA13A4B6, p0); } // 0xDA13A4B6
	nativeDecl void _0xC9F6F0BC(Any p0) { invoke<Void>(0xC9F6F0BC, p0); } // 0xC9F6F0BC
	nativeDecl void _0xCB074B9D(Any p0) { invoke<Void>(0xCB074B9D, p0); } // 0xCB074B9D
	nativeDecl void SET_FADE_IN_AFTER_DEATH_ARREST(Any p0) { invoke<Void>(0xACDE6985, p0); } // 0xACDE6985
	nativeDecl void SET_FADE_IN_AFTER_LOAD(Any p0) { invoke<Void>(0x6E00EB0B, p0); } // 0x6E00EB0B
	nativeDecl Any REGISTER_SAVE_HOUSE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<Any>(0x39C1849A, p0, p1, p2, p3, p4, p5, p6); } // 0x39C1849A
	nativeDecl void SET_SAVE_HOUSE(Any p0, Any p1, Any p2) { invoke<Void>(0xC3240BB4, p0, p1, p2); } // 0xC3240BB4
	nativeDecl Any OVERRIDE_SAVE_HOUSE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoke<Any>(0x47436C12, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x47436C12
	nativeDecl Any _0xC4D71AB4(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0xC4D71AB4, p0, p1, p2, p3); } // 0xC4D71AB4
	nativeDecl void DO_AUTO_SAVE() { invoke<Void>(0x54C44B1A); } // 0x54C44B1A
	nativeDecl Any _0xA8546914() { return invoke<Any>(0xA8546914); } // 0xA8546914
	nativeDecl BOOL IS_AUTO_SAVE_IN_PROGRESS() { return invoke<BOOL>(0x36F75399); } // 0x36F75399
	nativeDecl Any _0x78350773() { return invoke<Any>(0x78350773); } // 0x78350773
	nativeDecl void _0x5A45B11A() { invoke<Void>(0x5A45B11A); } // 0x5A45B11A
	nativeDecl void BEGIN_REPLAY_STATS(Any p0, Any p1) { invoke<Void>(0x17F4F44D, p0, p1); } // 0x17F4F44D
	nativeDecl void _0x81216EE0(Any p0) { invoke<Void>(0x81216EE0, p0); } // 0x81216EE0
	nativeDecl void END_REPLAY_STATS() { invoke<Void>(0xCB570185); } // 0xCB570185
	nativeDecl Any _0xC58250F1() { return invoke<Any>(0xC58250F1); } // 0xC58250F1
	nativeDecl Any _0x50C39926() { return invoke<Any>(0x50C39926); } // 0x50C39926
	nativeDecl Any _0x710E5D1E() { return invoke<Any>(0x710E5D1E); } // 0x710E5D1E
	nativeDecl Any _0xC7BD1AF0() { return invoke<Any>(0xC7BD1AF0); } // 0xC7BD1AF0
	nativeDecl Any _0x22BE2423(Any p0) { return invoke<Any>(0x22BE2423, p0); } // 0x22BE2423
	nativeDecl void CLEAR_REPLAY_STATS() { invoke<Void>(0xC47DFF02); } // 0xC47DFF02
	nativeDecl Any _0xF62B3C48() { return invoke<Any>(0xF62B3C48); } // 0xF62B3C48
	nativeDecl Any _0x3589452B() { return invoke<Any>(0x3589452B); } // 0x3589452B
	nativeDecl Any _0x144AAF22() { return invoke<Any>(0x144AAF22); } // 0x144AAF22
	nativeDecl BOOL IS_MEMORY_CARD_IN_USE() { return invoke<BOOL>(0x40CE4DFD); } // 0x40CE4DFD
	nativeDecl void SHOOT_SINGLE_BULLET_BETWEEN_COORDS(float* StartPositionX, float* StartPositionY, float* StartPositionZ, float* HitPositionX, float* HitPositionY, float* HitPositionZ, Any p6, Any p7, Hash WeaponHash, Ped PedHandle, Any p10, Any p11, float Speed) { invoke<Void>(0xCB7415AC, StartPositionX, StartPositionY, StartPositionZ, HitPositionX, HitPositionY, HitPositionZ, p6, p7, WeaponHash, PedHandle, p10, p11, Speed); } // 0xCB7415AC
	nativeDecl void _0x52ACCB7B(float x1, float y1, float z1, float x2, float y2, float z2, int damage, BOOL p7, Hash weaponHash, Ped ownerPed, BOOL isNotAudible, BOOL isInVisible, float speed, Entity entity) { invoke<Void>(0x52ACCB7B, x1, y1, z1, x2, y2, z2, damage, p7, weaponHash, ownerPed, isNotAudible, isInVisible, speed, entity); } // 0x52ACCB7B
	nativeDecl void GET_MODEL_DIMENSIONS(Entity Entity, float* Minimum, float* Maximum) { invoke<Void>(0x91ABB8E0, Entity, Minimum, Maximum); } // 0x91ABB8E0
	nativeDecl void SET_FAKE_WANTED_LEVEL(Any p0) { invoke<Void>(0x85B1C9FA, p0); } // 0x85B1C9FA
	nativeDecl Any _0x0022A430() { return invoke<Any>(0x0022A430); } // 0x0022A430
	nativeDecl BOOL IS_BIT_SET(int var, int bit) { return invoke<BOOL>(0x902E26AC, var, bit); } // 0x902E26AC
	nativeDecl void USING_MISSION_CREATOR(Any p0) { invoke<Void>(0x20AB0B6B, p0); } // 0x20AB0B6B
	nativeDecl void _0x082BA6F2(Any p0) { invoke<Void>(0x082BA6F2, p0); } // 0x082BA6F2
	nativeDecl void SET_MINIGAME_IN_PROGRESS(Any p0) { invoke<Void>(0x348B9046, p0); } // 0x348B9046
	nativeDecl BOOL IS_MINIGAME_IN_PROGRESS() { return invoke<BOOL>(0x53A95E13); } // 0x53A95E13
	nativeDecl BOOL IS_THIS_A_MINIGAME_SCRIPT() { return invoke<BOOL>(0x7605EF6F); } // 0x7605EF6F
	nativeDecl BOOL IS_SNIPER_INVERTED() { return invoke<BOOL>(0x5C3BF51B); } // 0x5C3BF51B
	nativeDecl Any GET_CURRENT_LANGUAGE() { return invoke<Any>(0x761BE00B); } // 0x761BE00B
	nativeDecl Any _0xBAF17315() { return invoke<Any>(0xBAF17315); } // 0xBAF17315
	nativeDecl Any GET_PROFILE_SETTING(int p0) { return invoke<Any>(0xD374BEBC, p0); } // 0xD374BEBC
	nativeDecl BOOL ARE_STRINGS_EQUAL(const char* string1, const char* string2) { return invoke<BOOL>(0x877C0BC5, string1, string2); } // 0x877C0BC5
	nativeDecl Any COMPARE_STRINGS(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0xFE25A58F, p0, p1, p2, p3); } // 0xFE25A58F
	nativeDecl Any ABSI(Any p0) { return invoke<Any>(0xB44677C5, p0); } // 0xB44677C5
	nativeDecl float ABSF(float p0) { return invoke<float>(0xAF6F6E0B, p0); } // 0xAF6F6E0B
	nativeDecl BOOL IS_SNIPER_BULLET_IN_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<BOOL>(0x0483715C, p0, p1, p2, p3, p4, p5); } // 0x0483715C
	nativeDecl BOOL IS_PROJECTILE_IN_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<BOOL>(0x78E1A557, p0, p1, p2, p3, p4, p5, p6); } // 0x78E1A557
	nativeDecl BOOL IS_PROJECTILE_TYPE_IN_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoke<BOOL>(0x2B73BCF6, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x2B73BCF6
	nativeDecl BOOL IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoke<BOOL>(0xD1AE2681, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xD1AE2681
	nativeDecl Any _0xBE81F1E2(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0xBE81F1E2, p0, p1, p2, p3, p4, p5); } // 0xBE81F1E2
	nativeDecl Any _0x1A40454B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoke<Any>(0x1A40454B, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x1A40454B
	nativeDecl Any _0x6BDE5CE4(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x6BDE5CE4, p0, p1, p2, p3, p4); } // 0x6BDE5CE4
	nativeDecl BOOL _GET_PROJECTILE_NEAR_PED(Ped ped, Hash projHash, float radius, Vector3* projPos, Entity* projEnt, BOOL ownedByPlayer) { return invoke<Any>(0x507BC6F7, ped, projHash, radius, projPos, projEnt, ownedByPlayer); } // 0x507BC6F7
	nativeDecl BOOL IS_BULLET_IN_ANGLED_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoke<BOOL>(0xE2DB58F7, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xE2DB58F7
	nativeDecl BOOL IS_BULLET_IN_AREA(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<BOOL>(0xB54F46CA, p0, p1, p2, p3, p4); } // 0xB54F46CA
	nativeDecl BOOL IS_BULLET_IN_BOX(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<BOOL>(0xAB73ED26, p0, p1, p2, p3, p4, p5, p6); } // 0xAB73ED26
	nativeDecl BOOL HAS_BULLET_IMPACTED_IN_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<BOOL>(0x902BC7D9, p0, p1, p2, p3, p4, p5); } // 0x902BC7D9
	nativeDecl BOOL HAS_BULLET_IMPACTED_IN_BOX(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoke<BOOL>(0x2C2618CC, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x2C2618CC
	nativeDecl BOOL IS_ORBIS_VERSION() { return invoke<BOOL>(0x40282018); } // 0x40282018
	nativeDecl BOOL IS_DURANGO_VERSION() { return invoke<BOOL>(0x46FB06A5); } // 0x46FB06A5
	nativeDecl BOOL IS_XBOX360_VERSION() { return invoke<BOOL>(0x24005CC8); } // 0x24005CC8
	nativeDecl BOOL IS_PS3_VERSION() { return invoke<BOOL>(0x4C0D5303); } // 0x4C0D5303
	nativeDecl BOOL IS_PC_VERSION() { return invoke<BOOL>(0x4D5D9EE3); } // 0x4D5D9EE3
	nativeDecl BOOL IS_AUSSIE_VERSION() { return invoke<BOOL>(0x944BA1DC); } // 0x944BA1DC
	nativeDecl BOOL IS_STRING_NULL(Any p0) { return invoke<BOOL>(0x8E71E00F, p0); } // 0x8E71E00F
	nativeDecl BOOL IS_STRING_NULL_OR_EMPTY(const char* string) { return invoke<BOOL>(0x42E9F2CA, string); } // 0x42E9F2CA
	nativeDecl BOOL STRING_TO_INT(const char* string, int* ToStore) { return invoke<BOOL>(0x590A8160, string, ToStore); } // 0x590A8160
	nativeDecl void SET_BITS_IN_RANGE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x32094719, p0, p1, p2, p3); } // 0x32094719
	nativeDecl Any GET_BITS_IN_RANGE(Any p0, Any p1, Any p2) { return invoke<Any>(0xCA03A1E5, p0, p1, p2); } // 0xCA03A1E5
	nativeDecl Any ADD_STUNT_JUMP(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15, Any p16) { return invoke<Any>(0xB630E5FF, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16); } // 0xB630E5FF
	nativeDecl Any ADD_STUNT_JUMP_ANGLED(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15, Any p16, Any p17, Any p18) { return invoke<Any>(0xB9B7E777, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18); } // 0xB9B7E777
	nativeDecl void DELETE_STUNT_JUMP(Any p0) { invoke<Void>(0x840CB5DA, p0); } // 0x840CB5DA
	nativeDecl void ENABLE_STUNT_JUMP_SET(Any p0) { invoke<Void>(0x9D1E7785, p0); } // 0x9D1E7785
	nativeDecl void DISABLE_STUNT_JUMP_SET(Any p0) { invoke<Void>(0x644C9FA4, p0); } // 0x644C9FA4
	nativeDecl void _0x3C806A2D(Any p0) { invoke<Void>(0x3C806A2D, p0); } // 0x3C806A2D
	nativeDecl BOOL IS_STUNT_JUMP_IN_PROGRESS() { return invoke<BOOL>(0xF477D0B1); } // 0xF477D0B1
	nativeDecl Any _0x021636EE() { return invoke<Any>(0x021636EE); } // 0x021636EE
	nativeDecl Any _0x006F9BA2() { return invoke<Any>(0x006F9BA2); } // 0x006F9BA2
	nativeDecl void CANCEL_STUNT_JUMP() { invoke<Void>(0xF43D9821); } // 0xF43D9821
	nativeDecl void SET_GAME_PAUSED(BOOL Paused) { invoke<Void>(0x8230FF6C, Paused); } // 0x8230FF6C
	nativeDecl void SET_THIS_SCRIPT_CAN_BE_PAUSED(Any p0) { invoke<Void>(0xA0C3CE29, p0); } // 0xA0C3CE29
	nativeDecl void SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(Any p0) { invoke<Void>(0xD06F1720, p0); } // 0xD06F1720
	nativeDecl Any _0xFF6191E1(Any p0, Any p1) { return invoke<Any>(0xFF6191E1, p0, p1); } // 0xFF6191E1
	nativeDecl void _0x721B2492(Any p0) { invoke<Void>(0x721B2492, p0); } // 0x721B2492
	nativeDecl void _0xE202879D(Any p0) { invoke<Void>(0xE202879D, p0); } // 0xE202879D
	nativeDecl BOOL IS_FRONTEND_FADING() { return invoke<BOOL>(0x8FF6232C); } // 0x8FF6232C
	nativeDecl void POPULATE_NOW() { invoke<Void>(0x72C20700); } // 0x72C20700
	nativeDecl Any GET_INDEX_OF_CURRENT_LEVEL() { return invoke<Any>(0x6F203C6E); } // 0x6F203C6E
	nativeDecl void SET_GRAVITY_LEVEL(Any p0) { invoke<Void>(0x2D833F4A, p0); } // 0x2D833F4A
	nativeDecl void START_SAVE_DATA(Any p0, Any p1, Any p2) { invoke<Void>(0x881A694D, p0, p1, p2); } // 0x881A694D
	nativeDecl void STOP_SAVE_DATA() { invoke<Void>(0x3B1C07C8); } // 0x3B1C07C8
	nativeDecl Any _0x9EF0BC64(Any p0) { return invoke<Any>(0x9EF0BC64, p0); } // 0x9EF0BC64
	nativeDecl void REGISTER_INT_TO_SAVE(Any p0, Any p1) { invoke<Void>(0xB930956F, p0, p1); } // 0xB930956F
	nativeDecl void _0x9B38374A(Any p0, Any p1) { invoke<Void>(0x9B38374A, p0, p1); } // 0x9B38374A
	nativeDecl void REGISTER_FLOAT_TO_SAVE(Any p0, Any p1) { invoke<Void>(0xDB06F7AD, p0, p1); } // 0xDB06F7AD
	nativeDecl void REGISTER_BOOL_TO_SAVE(Any p0, Any p1) { invoke<Void>(0x5417E0E0, p0, p1); } // 0x5417E0E0
	nativeDecl void REGISTER_TEXT_LABEL_TO_SAVE(Any p0, Any p1) { invoke<Void>(0x284352C4, p0, p1); } // 0x284352C4
	nativeDecl void _0xE2089749(Any p0, Any p1) { invoke<Void>(0xE2089749, p0, p1); } // 0xE2089749
	nativeDecl void _0xF91B8C33(Any p0, Any p1) { invoke<Void>(0xF91B8C33, p0, p1); } // 0xF91B8C33
	nativeDecl void _0x74E8FAD9(Any p0, Any p1) { invoke<Void>(0x74E8FAD9, p0, p1); } // 0x74E8FAD9
	nativeDecl void _0x6B4335DD(Any p0, Any p1) { invoke<Void>(0x6B4335DD, p0, p1); } // 0x6B4335DD
	nativeDecl void _0xFB45728E(Any p0, Any p1, Any p2) { invoke<Void>(0xFB45728E, p0, p1, p2); } // 0xFB45728E
	nativeDecl void STOP_SAVE_STRUCT() { invoke<Void>(0xC2624A28); } // 0xC2624A28
	nativeDecl void _0x893A342C(Any p0, Any p1, Any p2) { invoke<Void>(0x893A342C, p0, p1, p2); } // 0x893A342C
	nativeDecl void STOP_SAVE_ARRAY() { invoke<Void>(0x0CAD8217); } // 0x0CAD8217
	nativeDecl void _0x0B710A51(Any p0, Any p1) { invoke<Void>(0x0B710A51, p0, p1); } // 0x0B710A51
	nativeDecl void _0xE0F0684F(Any p0, Any p1) { invoke<Void>(0xE0F0684F, p0, p1); } // 0xE0F0684F
	nativeDecl Any _0x3CE5BF6B(Any p0) { return invoke<Any>(0x3CE5BF6B, p0); } // 0x3CE5BF6B
	nativeDecl Any CREATE_INCIDENT(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<Any>(0xFC5FF7B3, p0, p1, p2, p3, p4, p5, p6); } // 0xFC5FF7B3
	nativeDecl Any CREATE_INCIDENT_WITH_ENTITY(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0xBBC35B03, p0, p1, p2, p3, p4); } // 0xBBC35B03
	nativeDecl void DELETE_INCIDENT(Any p0) { invoke<Void>(0x212BD0DC, p0); } // 0x212BD0DC
	nativeDecl BOOL IS_INCIDENT_VALID(Any p0) { return invoke<BOOL>(0x31FD0BA4, p0); } // 0x31FD0BA4
	nativeDecl void _0x0242D88E(Any p0, Any p1, Any p2) { invoke<Void>(0x0242D88E, p0, p1, p2); } // 0x0242D88E
	nativeDecl void _0x1F38102E(Any p0, Any p1) { invoke<Void>(0x1F38102E, p0, p1); } // 0x1F38102E
	nativeDecl Any FIND_SPAWN_POINT_IN_DIRECTION(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoke<Any>(0x71AEFD77, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x71AEFD77
	nativeDecl Any _0x42BF09B3(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoke<Any>(0x42BF09B3, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x42BF09B3
	nativeDecl void _0xFBDBE374(Any p0, Any p1) { invoke<Void>(0xFBDBE374, p0, p1); } // 0xFBDBE374
	nativeDecl void ENABLE_TENNIS_MODE(Any p0, Any p1, Any p2) { invoke<Void>(0x0BD3F9EC, p0, p1, p2); } // 0x0BD3F9EC
	nativeDecl BOOL IS_TENNIS_MODE(Any p0) { return invoke<BOOL>(0x04A947BA, p0); } // 0x04A947BA
	nativeDecl void _0xC20A7D2B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0xC20A7D2B, p0, p1, p2, p3, p4, p5); } // 0xC20A7D2B
	nativeDecl Any _0x8501E727(Any p0) { return invoke<Any>(0x8501E727, p0); } // 0x8501E727
	nativeDecl Any _0x1A332D2D(Any p0) { return invoke<Any>(0x1A332D2D, p0); } // 0x1A332D2D
	nativeDecl void _0x0C8865DF(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x0C8865DF, p0, p1, p2, p3, p4, p5); } // 0x0C8865DF
	nativeDecl void _0x49F977A9(Any p0, Any p1, Any p2) { invoke<Void>(0x49F977A9, p0, p1, p2); } // 0x49F977A9
	nativeDecl void _0x6F009E33(Any p0, Any p1, Any p2) { invoke<Void>(0x6F009E33, p0, p1, p2); } // 0x6F009E33
	nativeDecl void RESET_DISPATCH_IDEAL_SPAWN_DISTANCE() { invoke<Void>(0xDA65ECAA); } // 0xDA65ECAA
	nativeDecl void SET_DISPATCH_IDEAL_SPAWN_DISTANCE(Any p0) { invoke<Void>(0x6283BE32, p0); } // 0x6283BE32
	nativeDecl void RESET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS(Any p0) { invoke<Void>(0x1479E85A, p0); } // 0x1479E85A
	nativeDecl void SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS(Any p0, Any p1) { invoke<Void>(0xABADB709, p0, p1); } // 0xABADB709
	nativeDecl void SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS_MULTIPLIER(Any p0, Any p1) { invoke<Void>(0x1C996BCD, p0, p1); } // 0x1C996BCD
	nativeDecl Any _0xF557BAF9(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<Any>(0xF557BAF9, p0, p1, p2, p3, p4, p5, p6); } // 0xF557BAF9
	nativeDecl void REMOVE_DISPATCH_SPAWN_BLOCKING_AREA(Any p0) { invoke<Void>(0xA8D2FB92, p0); } // 0xA8D2FB92
	nativeDecl void RESET_DISPATCH_SPAWN_BLOCKING_AREAS() { invoke<Void>(0x9A17F835); } // 0x9A17F835
	nativeDecl void _0xE0C9307E() { invoke<Void>(0xE0C9307E); } // 0xE0C9307E
	nativeDecl void _0xA0D8C749(Any p0, Any p1) { invoke<Void>(0xA0D8C749, p0, p1); } // 0xA0D8C749
	nativeDecl void _0x24A4E0B2(Any p0, Any p1, Any p2) { invoke<Void>(0x24A4E0B2, p0, p1, p2); } // 0x24A4E0B2
	nativeDecl void _0x66C3C59C() { invoke<Void>(0x66C3C59C); } // 0x66C3C59C
	nativeDecl void _0xD9660339(Any p0) { invoke<Void>(0xD9660339, p0); } // 0xD9660339
	nativeDecl void _0xD2688412(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { invoke<Void>(0xD2688412, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0xD2688412
	nativeDecl void DISPLAY_ONSCREEN_KEYBOARD(BOOL p0, const char* windowTitle, const char* p2, const char* defaultText, const char* defaultConcat1, const char* defaultConcat2, const char* defaultConcat3, int maxInputLength) { invoke<Void>(0xAD99F2CE, p0, windowTitle, p2, defaultText, defaultConcat1, defaultConcat2, defaultConcat3, maxInputLength); } // 0xAD99F2CE
	nativeDecl int UPDATE_ONSCREEN_KEYBOARD() { return invoke<int>(0x23D0A1CE); } // 0x23D0A1CE
	nativeDecl const char* GET_ONSCREEN_KEYBOARD_RESULT() { return invoke<const char*>(0x44828FB3); } // 0x44828FB3
	nativeDecl void _0x3301EA47(Any p0) { invoke<Void>(0x3301EA47, p0); } // 0x3301EA47
	nativeDecl void _0x42B484ED(Any p0, Any p1) { invoke<Void>(0x42B484ED, p0, p1); } // 0x42B484ED
	nativeDecl void _0x8F60366E(Any p0, Any p1) { invoke<Void>(0x8F60366E, p0, p1); } // 0x8F60366E
	nativeDecl void SET_EXPLOSIVE_AMMO_THIS_FRAME(Player player) { invoke<Void>(0x2EAFA1D1, player); } // 0x2EAFA1D1
	nativeDecl void SET_FIRE_AMMO_THIS_FRAME(Player player) { invoke<Void>(0x7C18FC8A, player); } // 0x7C18FC8A
	nativeDecl void SET_EXPLOSIVE_MELEE_THIS_FRAME(Player player) { invoke<Void>(0x96663D56, player); } // 0x96663D56
	nativeDecl void SET_SUPER_JUMP_THIS_FRAME(Player player) { invoke<Void>(0x86745EF3, player); } // 0x86745EF3
	nativeDecl Any _0xC3C10FCC() { return invoke<Any>(0xC3C10FCC); } // 0xC3C10FCC
	nativeDecl void _0x054EC103() { invoke<Void>(0x054EC103); } // 0x054EC103
	nativeDecl Any _0x46B5A15C() { return invoke<Any>(0x46B5A15C); } // 0x46B5A15C
	nativeDecl void _0x5D209F25() { invoke<Void>(0x5D209F25); } // 0x5D209F25
	nativeDecl void _0x2D33F15A(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x2D33F15A, p0, p1, p2, p3); } // 0x2D33F15A
	nativeDecl void _0xDF99925C() { invoke<Void>(0xDF99925C); } // 0xDF99925C
	nativeDecl void _0xA27F4472(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xA27F4472, p0, p1, p2, p3); } // 0xA27F4472
	nativeDecl Any _0x07FF553F(Any p0, Any p1, Any p2) { return invoke<Any>(0x07FF553F, p0, p1, p2); } // 0x07FF553F
}

namespace AUDIO
{
	nativeDecl void PLAY_PED_RINGTONE(Any p0, Any p1, Any p2) { invoke<Void>(0x1D530E47, p0, p1, p2); } // 0x1D530E47
	nativeDecl BOOL IS_PED_RINGTONE_PLAYING(Any p0) { return invoke<BOOL>(0xFE576EE4, p0); } // 0xFE576EE4
	nativeDecl void STOP_PED_RINGTONE(Any p0) { invoke<Void>(0xFEEA107C, p0); } // 0xFEEA107C
	nativeDecl BOOL IS_MOBILE_PHONE_CALL_ONGOING() { return invoke<BOOL>(0x4ED1400A); } // 0x4ED1400A
	nativeDecl Any _0x16FB88B5() { return invoke<Any>(0x16FB88B5); } // 0x16FB88B5
	nativeDecl void CREATE_NEW_SCRIPTED_CONVERSATION() { invoke<Void>(0xB2BC25F8); } // 0xB2BC25F8
	nativeDecl void ADD_LINE_TO_CONVERSATION(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { invoke<Void>(0x96CD0513, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x96CD0513
	nativeDecl void ADD_PED_TO_CONVERSATION(Any p0, Any p1, Any p2) { invoke<Void>(0xF8D5EB86, p0, p1, p2); } // 0xF8D5EB86
	nativeDecl void _0x73C6F979(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x73C6F979, p0, p1, p2, p3); } // 0x73C6F979
	nativeDecl void _0x88203DDA(Any p0, Any p1) { invoke<Void>(0x88203DDA, p0, p1); } // 0x88203DDA
	nativeDecl void SET_MICROPHONE_POSITION(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoke<Void>(0xAD7BB191, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0xAD7BB191
	nativeDecl void _0x1193ED6E(Any p0) { invoke<Void>(0x1193ED6E, p0); } // 0x1193ED6E
	nativeDecl void START_SCRIPT_PHONE_CONVERSATION(Any p0, Any p1) { invoke<Void>(0x38E42D07, p0, p1); } // 0x38E42D07
	nativeDecl void PRELOAD_SCRIPT_PHONE_CONVERSATION(Any p0, Any p1) { invoke<Void>(0x9ACB213A, p0, p1); } // 0x9ACB213A
	nativeDecl void START_SCRIPT_CONVERSATION(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE5DE7D9D, p0, p1, p2, p3); } // 0xE5DE7D9D
	nativeDecl void PRELOAD_SCRIPT_CONVERSATION(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xDDF5C579, p0, p1, p2, p3); } // 0xDDF5C579
	nativeDecl void START_PRELOADED_CONVERSATION() { invoke<Void>(0xA170261B); } // 0xA170261B
	nativeDecl Any _0x336F3D35() { return invoke<Any>(0x336F3D35); } // 0x336F3D35
	nativeDecl BOOL IS_SCRIPTED_CONVERSATION_ONGOING() { return invoke<BOOL>(0xCB8FD96F); } // 0xCB8FD96F
	nativeDecl BOOL IS_SCRIPTED_CONVERSATION_LOADED() { return invoke<BOOL>(0xE1870EA9); } // 0xE1870EA9
	nativeDecl Any GET_CURRENT_SCRIPTED_CONVERSATION_LINE() { return invoke<Any>(0x9620E41F); } // 0x9620E41F
	nativeDecl void PAUSE_SCRIPTED_CONVERSATION(Any p0) { invoke<Void>(0xE2C9C6F8, p0); } // 0xE2C9C6F8
	nativeDecl void RESTART_SCRIPTED_CONVERSATION() { invoke<Void>(0x6CB24B56); } // 0x6CB24B56
	nativeDecl Any STOP_SCRIPTED_CONVERSATION(Any p0) { return invoke<Any>(0xAB77DA7D, p0); } // 0xAB77DA7D
	nativeDecl void SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE() { invoke<Void>(0x85C98304); } // 0x85C98304
	nativeDecl void INTERRUPT_CONVERSATION(Any p0, Any p1, Any p2) { invoke<Void>(0xF3A67AF3, p0, p1, p2); } // 0xF3A67AF3
	nativeDecl Any _0xB58B8FF3(Any p0) { return invoke<Any>(0xB58B8FF3, p0); } // 0xB58B8FF3
	nativeDecl void _0x789D8C6C(Any p0) { invoke<Void>(0x789D8C6C, p0); } // 0x789D8C6C
	nativeDecl void REGISTER_SCRIPT_WITH_AUDIO(Any p0) { invoke<Void>(0xA6203643, p0); } // 0xA6203643
	nativeDecl void UNREGISTER_SCRIPT_WITH_AUDIO() { invoke<Void>(0x66728EFE); } // 0x66728EFE
	nativeDecl Any REQUEST_MISSION_AUDIO_BANK(Any p0, Any p1) { return invoke<Any>(0x916E37CA, p0, p1); } // 0x916E37CA
	nativeDecl Any REQUEST_AMBIENT_AUDIO_BANK(Any p0, Any p1) { return invoke<Any>(0x23C88BC7, p0, p1); } // 0x23C88BC7
	nativeDecl Any REQUEST_SCRIPT_AUDIO_BANK(Any p0, Any p1) { return invoke<Any>(0x21322887, p0, p1); } // 0x21322887
	nativeDecl Any HINT_AMBIENT_AUDIO_BANK(Any p0, Any p1) { return invoke<Any>(0xF1850DDC, p0, p1); } // 0xF1850DDC
	nativeDecl Any HINT_SCRIPT_AUDIO_BANK(Any p0, Any p1) { return invoke<Any>(0x41FA0E51, p0, p1); } // 0x41FA0E51
	nativeDecl void RELEASE_MISSION_AUDIO_BANK() { invoke<Void>(0x8E8824C7); } // 0x8E8824C7
	nativeDecl void RELEASE_AMBIENT_AUDIO_BANK() { invoke<Void>(0x8C938784); } // 0x8C938784
	nativeDecl void RELEASE_NAMED_SCRIPT_AUDIO_BANK(Any p0) { invoke<Void>(0x16707ABC, p0); } // 0x16707ABC
	nativeDecl void RELEASE_SCRIPT_AUDIO_BANK() { invoke<Void>(0x22F865E5); } // 0x22F865E5
	nativeDecl void _0xA58BBF4F() { invoke<Void>(0xA58BBF4F); } // 0xA58BBF4F
	nativeDecl Any GET_SOUND_ID() { return invoke<Any>(0x6AE0AD56); } // 0x6AE0AD56
	nativeDecl void RELEASE_SOUND_ID(Any p0) { invoke<Void>(0x9C080899, p0); } // 0x9C080899
	nativeDecl void PLAY_SOUND(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xB6E1917F, p0, p1, p2, p3, p4); } // 0xB6E1917F
	nativeDecl void PLAY_SOUND_FRONTEND(int p0, const char* SoundFrom, const char* SoundSet) { invoke<Void>(0x2E458F74, p0, SoundFrom, SoundSet); } // 0x2E458F74
	nativeDecl void _0xC70E6CFA(Any p0, Any p1) { invoke<Void>(0xC70E6CFA, p0, p1); } // 0xC70E6CFA
	nativeDecl void PLAY_SOUND_FROM_ENTITY(int p0, const char* p1, Entity entity, const char* p3, Any p4, Any p5) { invoke<Void>(0x95AE00F8, p0, p1, entity, p3, p4, p5); } // 0x95AE00F8
	nativeDecl void PLAY_SOUND_FROM_COORD(Any p0, const char* p1, float p2, float p3, float p4, const char* p5, Any p6, Any p7, Any p8) { invoke<Void>(0xCAD3E2D5, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xCAD3E2D5
	nativeDecl void STOP_SOUND(Any p0) { invoke<Void>(0xCD7F4030, p0); } // 0xCD7F4030
	nativeDecl Any GET_NETWORK_ID_FROM_SOUND_ID(Any p0) { return invoke<Any>(0x2576F610, p0); } // 0x2576F610
	nativeDecl Any _0xD064D4DC(Any p0) { return invoke<Any>(0xD064D4DC, p0); } // 0xD064D4DC
	nativeDecl void SET_VARIABLE_ON_SOUND(Any p0, Any p1, Any p2) { invoke<Void>(0x606EE5FA, p0, p1, p2); } // 0x606EE5FA
	nativeDecl void SET_VARIABLE_ON_STREAM(Any p0, Any p1) { invoke<Void>(0xF67BB44C, p0, p1); } // 0xF67BB44C
	nativeDecl void OVERRIDE_UNDERWATER_STREAM(Any p0, Any p1) { invoke<Void>(0x9A083B7E, p0, p1); } // 0x9A083B7E
	nativeDecl void _0x62D026BE(Any p0, Any p1) { invoke<Void>(0x62D026BE, p0, p1); } // 0x62D026BE
	nativeDecl BOOL HAS_SOUND_FINISHED(Any p0) { return invoke<BOOL>(0xE85AEC2E, p0); } // 0xE85AEC2E
	nativeDecl void _PLAY_AMBIENT_SPEECH1(Ped pedHandle, const char* speechName, const char* speechParam) { invoke<Void>(0x5C57B85D, pedHandle, speechName, speechParam); } // 0x5C57B85D
	nativeDecl void _PLAY_AMBIENT_SPEECH2(Ped pedHandle, const char* speechName, const char* speechParam) { invoke<Void>(0x444180DB, pedHandle, speechName, speechParam); } // 0x444180DB
	nativeDecl void _0x8386AE28(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x8386AE28, p0, p1, p2, p3, p4); } // 0x8386AE28
	nativeDecl void _0xA1A1402E(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0xA1A1402E, p0, p1, p2, p3, p4, p5); } // 0xA1A1402E
	nativeDecl void OVERRIDE_TREVOR_RAGE(Any p0) { invoke<Void>(0x05B9B5CF, p0); } // 0x05B9B5CF
	nativeDecl void RESET_TREVOR_RAGE() { invoke<Void>(0xE80CF0D4); } // 0xE80CF0D4
	nativeDecl void SET_PLAYER_ANGRY(Any p0, Any p1) { invoke<Void>(0x782CA58D, p0, p1); } // 0x782CA58D
	nativeDecl void PLAY_PAIN(Any p0, Any p1, Any p2) { invoke<Void>(0x874BD6CB, p0, p1, p2); } // 0x874BD6CB
	nativeDecl void RELEASE_WEAPON_AUDIO() { invoke<Void>(0x6096504C); } // 0x6096504C
	nativeDecl void _0x59A3A17D(Any p0) { invoke<Void>(0x59A3A17D, p0); } // 0x59A3A17D
	nativeDecl void _0x0E387BFE(Any p0) { invoke<Void>(0x0E387BFE, p0); } // 0x0E387BFE
	nativeDecl void SET_AMBIENT_VOICE_NAME(Any p0, const char* p1) { invoke<Void>(0xBD2EA1A1, p0, p1); } // 0xBD2EA1A1
	nativeDecl void STOP_CURRENT_PLAYING_AMBIENT_SPEECH(Any p0) { invoke<Void>(0xBB8E64BF, p0); } // 0xBB8E64BF
	nativeDecl BOOL IS_AMBIENT_SPEECH_PLAYING(Any p0) { return invoke<BOOL>(0x1972E8AA, p0); } // 0x1972E8AA
	nativeDecl BOOL IS_SCRIPTED_SPEECH_PLAYING(Any p0) { return invoke<BOOL>(0x2C653904, p0); } // 0x2C653904
	nativeDecl BOOL IS_ANY_SPEECH_PLAYING(Any p0) { return invoke<BOOL>(0x2B74A6D6, p0); } // 0x2B74A6D6
	nativeDecl Any _0x8BD5F11E(Any p0, Any p1, Any p2) { return invoke<Any>(0x8BD5F11E, p0, p1, p2); } // 0x8BD5F11E
	nativeDecl BOOL IS_PED_IN_CURRENT_CONVERSATION(Any p0) { return invoke<BOOL>(0x7B2F0743, p0); } // 0x7B2F0743
	nativeDecl void SET_PED_IS_DRUNK(Any p0, Any p1) { invoke<Void>(0xD2EA77A3, p0, p1); } // 0xD2EA77A3
	nativeDecl void _0x498849F3(Any p0, Any p1, Any p2) { invoke<Void>(0x498849F3, p0, p1, p2); } // 0x498849F3
	nativeDecl Any _0x0CBAF2EF(Any p0) { return invoke<Any>(0x0CBAF2EF, p0); } // 0x0CBAF2EF
	nativeDecl void SET_ANIMAL_MOOD(Any p0, Any p1) { invoke<Void>(0x3EA7C6CB, p0, p1); } // 0x3EA7C6CB
	nativeDecl BOOL IS_MOBILE_PHONE_RADIO_ACTIVE() { return invoke<BOOL>(0x6E502A5B); } // 0x6E502A5B
	nativeDecl void SET_MOBILE_PHONE_RADIO_STATE(Any p0) { invoke<Void>(0xE1E0ED34, p0); } // 0xE1E0ED34
	nativeDecl Any GET_PLAYER_RADIO_STATION_INDEX() { return invoke<Any>(0x1C4946AC); } // 0x1C4946AC
	nativeDecl Any GET_PLAYER_RADIO_STATION_NAME() { return invoke<Any>(0xD909C107); } // 0xD909C107
	nativeDecl Any GET_RADIO_STATION_NAME(int radioStation) { return invoke<Any>(0x3DF493BC, radioStation); } // 0x3DF493BC
	nativeDecl Any GET_PLAYER_RADIO_STATION_GENRE() { return invoke<Any>(0x872CF0EA); } // 0x872CF0EA
	nativeDecl BOOL IS_RADIO_RETUNING() { return invoke<BOOL>(0xCF29097B); } // 0xCF29097B
	nativeDecl void _0x53DB6994() { invoke<Void>(0x53DB6994); } // 0x53DB6994
	nativeDecl void _0xD70ECC80() { invoke<Void>(0xD70ECC80); } // 0xD70ECC80
	nativeDecl void SET_RADIO_TO_STATION_NAME(const char* radioStation) { invoke<Void>(0x7B36E35E, radioStation); } // 0x7B36E35E
	nativeDecl void SET_VEH_RADIO_STATION(Object hVehicle, const char* radioStation) { invoke<Void>(0xE391F55F, hVehicle, radioStation); } // 0xE391F55F
	nativeDecl void _0x7ABB89D2(Any p0) { invoke<Void>(0x7ABB89D2, p0); } // 0x7ABB89D2
	nativeDecl void SET_EMITTER_RADIO_STATION(Any p0, Any p1) { invoke<Void>(0x87431585, p0, p1); } // 0x87431585
	nativeDecl void SET_STATIC_EMITTER_ENABLED(Any p0, Any p1) { invoke<Void>(0x91F72E92, p0, p1); } // 0x91F72E92
	nativeDecl void SET_RADIO_TO_STATION_INDEX(Any p0) { invoke<Void>(0x1D82766D, p0); } // 0x1D82766D
	nativeDecl void SET_FRONTEND_RADIO_ACTIVE(Any p0) { invoke<Void>(0xB1172075, p0); } // 0xB1172075
	nativeDecl void UNLOCK_MISSION_NEWS_STORY(Any p0) { invoke<Void>(0xCCD9ABE4, p0); } // 0xCCD9ABE4
	nativeDecl Any GET_NUMBER_OF_PASSENGER_VOICE_VARIATIONS(Any p0) { return invoke<Any>(0x27305D37, p0); } // 0x27305D37
	nativeDecl Any GET_AUDIBLE_MUSIC_TRACK_TEXT_ID() { return invoke<Any>(0xA2B88CA7); } // 0xA2B88CA7
	nativeDecl void PLAY_END_CREDITS_MUSIC(Any p0) { invoke<Void>(0x8E88B3CC, p0); } // 0x8E88B3CC
	nativeDecl void SKIP_RADIO_FORWARD() { invoke<Void>(0x10D36630); } // 0x10D36630
	nativeDecl void FREEZE_RADIO_STATION(Any p0) { invoke<Void>(0x286BF543, p0); } // 0x286BF543
	nativeDecl void UNFREEZE_RADIO_STATION(Any p0) { invoke<Void>(0x4D46202C, p0); } // 0x4D46202C
	nativeDecl void SET_RADIO_AUTO_UNFREEZE(Any p0) { invoke<Void>(0xA40196BF, p0); } // 0xA40196BF
	nativeDecl void SET_INITIAL_PLAYER_STATION(Any p0) { invoke<Void>(0x9B069233, p0); } // 0x9B069233
	nativeDecl void SET_USER_RADIO_CONTROL_ENABLED(Any p0) { invoke<Void>(0x52E054CE, p0); } // 0x52E054CE
	nativeDecl void SET_RADIO_TRACK(Any p0, Any p1) { invoke<Void>(0x76E96212, p0, p1); } // 0x76E96212
	nativeDecl void SET_VEHICLE_RADIO_LOUD(Any p0, BOOL p1) { invoke<Void>(0x8D9EDD99, p0, p1); } // 0x8D9EDD99
	nativeDecl Any _0xCBA99F4A(Any p0) { return invoke<Any>(0xCBA99F4A, p0); } // 0xCBA99F4A
	nativeDecl void SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY(BOOL Toggle) { invoke<Void>(0x990085F0, Toggle); } // 0x990085F0
	nativeDecl Any _0x46B0C696() { return invoke<Any>(0x46B0C696); } // 0x46B0C696
	nativeDecl Any _0x2A3E5E8B() { return invoke<Any>(0x2A3E5E8B); } // 0x2A3E5E8B
	nativeDecl void SET_VEHICLE_RADIO_ENABLED(Any p0, Any p1) { invoke<Void>(0x6F812CAB, p0, p1); } // 0x6F812CAB
	nativeDecl void _0x128C3873(Any p0, Any p1, Any p2) { invoke<Void>(0x128C3873, p0, p1, p2); } // 0x128C3873

	//nativeDecl void _0x128C3873(char *radioStation, char *p1, BOOL p2) { invoke<Void>(0x128C3873, radioStation, p1, p2); } // 0x128C3873

	nativeDecl void _0x1D766976(Any p0) { invoke<Void>(0x1D766976, p0); } // 0x1D766976
	nativeDecl Any _0xCC91FCF5() { return invoke<Any>(0xCC91FCF5); } // 0xCC91FCF5
	nativeDecl Any FIND_RADIO_STATION_INDEX(Any p0) { return invoke<Any>(0xECA1512F, p0); } // 0xECA1512F
	nativeDecl void _0xB1FF7137(Any p0, Any p1) { invoke<Void>(0xB1FF7137, p0, p1); } // 0xB1FF7137
	nativeDecl void _0xC8B514E2(Any p0) { invoke<Void>(0xC8B514E2, p0); } // 0xC8B514E2
	nativeDecl void _0xBE998184(Any p0, Any p1) { invoke<Void>(0xBE998184, p0, p1); } // 0xBE998184
	nativeDecl void _0x8AFC488D(Any p0, Any p1) { invoke<Void>(0x8AFC488D, p0, p1); } // 0x8AFC488D
	nativeDecl void SET_AMBIENT_ZONE_STATE(Any p0, Any p1, Any p2) { invoke<Void>(0x2849CAC9, p0, p1, p2); } // 0x2849CAC9
	nativeDecl void CLEAR_AMBIENT_ZONE_STATE(Any p0, Any p1) { invoke<Void>(0xCDFF3C82, p0, p1); } // 0xCDFF3C82
	nativeDecl void SET_AMBIENT_ZONE_LIST_STATE(Any p0, Any p1, Any p2) { invoke<Void>(0xBF80B412, p0, p1, p2); } // 0xBF80B412
	nativeDecl void CLEAR_AMBIENT_ZONE_LIST_STATE(Any p0, Any p1) { invoke<Void>(0x38B9B8D4, p0, p1); } // 0x38B9B8D4
	nativeDecl void SET_AMBIENT_ZONE_STATE_PERSISTENT(Any p0, Any p1, Any p2) { invoke<Void>(0xC1FFB672, p0, p1, p2); } // 0xC1FFB672
	nativeDecl void SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT(Any p0, Any p1, Any p2) { invoke<Void>(0x5F5A2605, p0, p1, p2); } // 0x5F5A2605
	nativeDecl BOOL IS_AMBIENT_ZONE_ENABLED(Any p0) { return invoke<BOOL>(0xBFABD872, p0); } // 0xBFABD872
	nativeDecl void SET_CUTSCENE_AUDIO_OVERRIDE(Any p0) { invoke<Void>(0xCE1332B7, p0); } // 0xCE1332B7
	nativeDecl void GET_PLAYER_HEADSET_SOUND_ALTERNATE(Any p0, Any p1) { invoke<Void>(0xD63CF33A, p0, p1); } // 0xD63CF33A
	nativeDecl Any PLAY_POLICE_REPORT(const char* p0, float p1) { return invoke<Any>(0x3F277B62, p0, p1); } // 0x3F277B62
	nativeDecl void BLIP_SIREN(Any p0) { invoke<Void>(0xC0EB6924, p0); } // 0xC0EB6924
	nativeDecl void OVERRIDE_VEH_HORN(Vehicle p0, BOOL p1, int p2) { invoke<Void>(0x2ACAB783, p0, p1, p2); } // 0x2ACAB783
	nativeDecl BOOL IS_HORN_ACTIVE(Any p0) { return invoke<BOOL>(0x20E2BDD0, p0); } // 0x20E2BDD0
	nativeDecl void SET_AGGRESSIVE_HORNS(int p0) { invoke<Void>(0x01D6EABE, p0); } // 0x01D6EABE
	nativeDecl void _0x3C395AEE(Any p0) { invoke<Void>(0x3C395AEE, p0); } // 0x3C395AEE
	nativeDecl void _0x8CE63FA1(Any p0, Any p1) { invoke<Void>(0x8CE63FA1, p0, p1); } // 0x8CE63FA1
	nativeDecl BOOL IS_STREAM_PLAYING() { return invoke<BOOL>(0xF1F51A14); } // 0xF1F51A14
	nativeDecl Any GET_STREAM_PLAY_TIME() { return invoke<Any>(0xB4F0AD56); } // 0xB4F0AD56
	nativeDecl Any LOAD_STREAM(Any p0, Any p1) { return invoke<Any>(0x0D89599D, p0, p1); } // 0x0D89599D
	nativeDecl Any LOAD_STREAM_WITH_START_OFFSET(Any p0, Any p1, Any p2) { return invoke<Any>(0xE5B5745C, p0, p1, p2); } // 0xE5B5745C
	nativeDecl void _0xA1D7FABE(Any p0) { invoke<Void>(0xA1D7FABE, p0); } // 0xA1D7FABE
	nativeDecl void PLAY_STREAM_FROM_VEHICLE(Any p0) { invoke<Void>(0xF8E4BDA2, p0); } // 0xF8E4BDA2
	nativeDecl void PLAY_STREAM_FROM_OBJECT(Any p0) { invoke<Void>(0xC5266BF7, p0); } // 0xC5266BF7
	nativeDecl void PLAY_STREAM_FRONTEND() { invoke<Void>(0x2C2A16BC); } // 0x2C2A16BC
	nativeDecl void SPECIAL_FRONTEND_EQUAL(Any p0, Any p1, Any p2) { invoke<Void>(0x6FE5D865, p0, p1, p2); } // 0x6FE5D865
	nativeDecl void STOP_STREAM() { invoke<Void>(0xD1E364DE); } // 0xD1E364DE
	nativeDecl void STOP_PED_SPEAKING(Any p0, Any p1) { invoke<Void>(0xFF92B49D, p0, p1); } // 0xFF92B49D
	nativeDecl void DISABLE_PED_PAIN_AUDIO(Any p0, Any p1) { invoke<Void>(0x3B8E2D5F, p0, p1); } // 0x3B8E2D5F
	nativeDecl BOOL IS_AMBIENT_SPEECH_DISABLED(Any p0) { return invoke<BOOL>(0x109D1F89, p0); } // 0x109D1F89
	nativeDecl void SET_SIREN_WITH_NO_DRIVER(Any p0, Any p1) { invoke<Void>(0x77182D58, p0, p1); } // 0x77182D58
	nativeDecl void _0xDE8BA3CD(Any p0) { invoke<Void>(0xDE8BA3CD, p0); } // 0xDE8BA3CD
	nativeDecl void SET_HORN_ENABLED(Any p0, Any p1) { invoke<Void>(0x6EB92D05, p0, p1); } // 0x6EB92D05
	nativeDecl void SET_AUDIO_VEHICLE_PRIORITY(Any p0, Any p1) { invoke<Void>(0x271A9766, p0, p1); } // 0x271A9766
	nativeDecl void _0x2F0A16D1(Any p0, Any p1) { invoke<Void>(0x2F0A16D1, p0, p1); } // 0x2F0A16D1
	nativeDecl void USE_SIREN_AS_HORN(Any p0, Any p1) { invoke<Void>(0xC6BC16F3, p0, p1); } // 0xC6BC16F3
	nativeDecl void _0x33B0B007(Any p0, Any p1) { invoke<Void>(0x33B0B007, p0, p1); } // 0x33B0B007
	nativeDecl void _0x1C0C5E4C(Any p0, Any p1, Any p2) { invoke<Void>(0x1C0C5E4C, p0, p1, p2); } // 0x1C0C5E4C
	nativeDecl Any _0x6E660D3F(Any p0) { return invoke<Any>(0x6E660D3F, p0); } // 0x6E660D3F
	nativeDecl void _0x23BE6432(Any p0, Any p1) { invoke<Void>(0x23BE6432, p0, p1); } // 0x23BE6432
	nativeDecl void _0xE81FAC68(Any p0, Any p1) { invoke<Void>(0xE81FAC68, p0, p1); } // 0xE81FAC68
	nativeDecl void _0x9365E042(Any p0, Any p1) { invoke<Void>(0x9365E042, p0, p1); } // 0x9365E042
	nativeDecl void _0x2A60A90E(Any p0, Any p1) { invoke<Void>(0x2A60A90E, p0, p1); } // 0x2A60A90E
	nativeDecl void SET_VEHICLE_BOOST_ACTIVE(Vehicle vehicle, BOOL Toggle) { invoke<Void>(0x072F15F2, vehicle, Toggle); } // 0x072F15F2
	nativeDecl void _0x934BE749(Any p0, Any p1) { invoke<Void>(0x934BE749, p0, p1); } // 0x934BE749
	nativeDecl void _0xE61110A2(Any p0, Any p1) { invoke<Void>(0xE61110A2, p0, p1); } // 0xE61110A2
	nativeDecl void PLAY_VEHICLE_DOOR_OPEN_SOUND(Any p0, Any p1) { invoke<Void>(0x84930330, p0, p1); } // 0x84930330
	nativeDecl void PLAY_VEHICLE_DOOR_CLOSE_SOUND(Any p0, Any p1) { invoke<Void>(0xBA2CF407, p0, p1); } // 0xBA2CF407
	nativeDecl void _0x563B635D(Any p0, Any p1) { invoke<Void>(0x563B635D, p0, p1); } // 0x563B635D
	nativeDecl BOOL IS_GAME_IN_CONTROL_OF_MUSIC() { return invoke<BOOL>(0x7643170D); } // 0x7643170D
	nativeDecl void SET_GPS_ACTIVE(Any p0) { invoke<Void>(0x0FC3379A, p0); } // 0x0FC3379A
	nativeDecl void PLAY_MISSION_COMPLETE_AUDIO(const char* p0) { invoke<Void>(0x3033EA1D, p0); } // 0x3033EA1D
	nativeDecl BOOL IS_MISSION_COMPLETE_PLAYING() { return invoke<BOOL>(0x939982A1); } // 0x939982A1
	nativeDecl Any _0xCBE09AEC() { return invoke<Any>(0xCBE09AEC); } // 0xCBE09AEC
	nativeDecl void _0xD2858D8A(Any p0) { invoke<Void>(0xD2858D8A, p0); } // 0xD2858D8A
	nativeDecl Any START_AUDIO_SCENE(Any p0) { return invoke<Any>(0xE48D757B, p0); } // 0xE48D757B
	nativeDecl void STOP_AUDIO_SCENE(Any p0) { invoke<Void>(0xA08D8C58, p0); } // 0xA08D8C58
	nativeDecl void STOP_AUDIO_SCENES() { invoke<Void>(0xF6C7342A); } // 0xF6C7342A
	nativeDecl BOOL IS_AUDIO_SCENE_ACTIVE(Any p0) { return invoke<BOOL>(0xACBED05C, p0); } // 0xACBED05C
	nativeDecl void SET_AUDIO_SCENE_VARIABLE(Any p0, Any p1, Any p2) { invoke<Void>(0x19BB3CE8, p0, p1, p2); } // 0x19BB3CE8
	nativeDecl void _0xE812925D(Any p0) { invoke<Void>(0xE812925D, p0); } // 0xE812925D
	nativeDecl void _0x2BC93264(Any p0, Any p1, Any p2) { invoke<Void>(0x2BC93264, p0, p1, p2); } // 0x2BC93264
	nativeDecl void _0x308ED0EC(Any p0, Any p1) { invoke<Void>(0x308ED0EC, p0, p1); } // 0x308ED0EC
	nativeDecl Any AUDIO_IS_SCRIPTED_MUSIC_PLAYING() { return invoke<Any>(0x86E995D1); } // 0x86E995D1
	nativeDecl Any PREPARE_MUSIC_EVENT(Any p0) { return invoke<Any>(0x534A5C1C, p0); } // 0x534A5C1C
	nativeDecl Any CANCEL_MUSIC_EVENT(Any p0) { return invoke<Any>(0x89FF942D, p0); } // 0x89FF942D
	nativeDecl Any TRIGGER_MUSIC_EVENT(Any p0) { return invoke<Any>(0xB6094948, p0); } // 0xB6094948
	nativeDecl Any _0x2705C4D5() { return invoke<Any>(0x2705C4D5); } // 0x2705C4D5
	nativeDecl Any GET_MUSIC_PLAYTIME() { return invoke<Any>(0xD633C809); } // 0xD633C809
	nativeDecl void _0x53FC3FEC(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x53FC3FEC, p0, p1, p2, p3); } // 0x53FC3FEC
	nativeDecl void CLEAR_ALL_BROKEN_GLASS() { invoke<Void>(0xE6B033BF); } // 0xE6B033BF
	nativeDecl void _0x95050CAD(Any p0, Any p1) { invoke<Void>(0x95050CAD, p0, p1); } // 0x95050CAD
	nativeDecl void _0xE64F97A0(Any p0, Any p1) { invoke<Void>(0xE64F97A0, p0, p1); } // 0xE64F97A0
	nativeDecl void _0xD87AF337() { invoke<Void>(0xD87AF337); } // 0xD87AF337
	nativeDecl Any PREPARE_ALARM(Any p0) { return invoke<Any>(0x084932E8, p0); } // 0x084932E8
	nativeDecl void START_ALARM(Any p0, Any p1) { invoke<Void>(0x703F524B, p0, p1); } // 0x703F524B
	nativeDecl void STOP_ALARM(Any p0, Any p1) { invoke<Void>(0xF987BE8C, p0, p1); } // 0xF987BE8C
	nativeDecl void STOP_ALL_ALARMS(Any p0) { invoke<Void>(0xC3CB9DC6, p0); } // 0xC3CB9DC6
	nativeDecl BOOL IS_ALARM_PLAYING(Any p0) { return invoke<BOOL>(0x9D8E1D23, p0); } // 0x9D8E1D23
	nativeDecl Any GET_VEHICLE_DEFAULT_HORN(Any p0) { return invoke<Any>(0xE84ABC19, p0); } // 0xE84ABC19
	nativeDecl Any _0xFD4B5B3B(Any p0) { return invoke<Any>(0xFD4B5B3B, p0); } // 0xFD4B5B3B
	nativeDecl void RESET_PED_AUDIO_FLAGS(Any p0) { invoke<Void>(0xDF720C86, p0); } // 0xDF720C86
	nativeDecl void _0xC307D531(Any p0, Any p1) { invoke<Void>(0xC307D531, p0, p1); } // 0xC307D531
	nativeDecl void _0x13EB5861(Any p0) { invoke<Void>(0x13EB5861, p0); } // 0x13EB5861
	nativeDecl void _0x7BED1872(Any p0, Any p1) { invoke<Void>(0x7BED1872, p0, p1); } // 0x7BED1872
	nativeDecl void SET_AUDIO_FLAG(Any p0, Any p1) { invoke<Void>(0x1C09C9E0, p0, p1); } // 0x1C09C9E0
	nativeDecl Any PREPARE_SYNCHRONIZED_AUDIO_EVENT(Any p0, Any p1) { return invoke<Any>(0xE1D91FD0, p0, p1); } // 0xE1D91FD0
	nativeDecl Any PREPARE_SYNCHRONIZED_AUDIO_EVENT_FOR_SCENE(Any p0, Any p1) { return invoke<Any>(0x7652DD49, p0, p1); } // 0x7652DD49
	nativeDecl Any PLAY_SYNCHRONIZED_AUDIO_EVENT(Any p0) { return invoke<Any>(0x507F3241, p0); } // 0x507F3241
	nativeDecl Any STOP_SYNCHRONIZED_AUDIO_EVENT(Any p0) { return invoke<Any>(0xADEED2B4, p0); } // 0xADEED2B4
	nativeDecl void _0x55A21772(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x55A21772, p0, p1, p2, p3); } // 0x55A21772
	nativeDecl void _0xA17F9AB0(Any p0, Any p1) { invoke<Void>(0xA17F9AB0, p0, p1); } // 0xA17F9AB0
	nativeDecl void _0x62B43677(Any p0) { invoke<Void>(0x62B43677, p0); } // 0x62B43677
	nativeDecl void _0x8AD670EC(Any p0, Any p1) { invoke<Void>(0x8AD670EC, p0, p1); } // 0x8AD670EC
	nativeDecl void _0xD24B4D0C(Any p0) { invoke<Void>(0xD24B4D0C, p0); } // 0xD24B4D0C
	nativeDecl void _0x7262B5BA() { invoke<Void>(0x7262B5BA); } // 0x7262B5BA
	nativeDecl Any _0x93A44A1F() { return invoke<Any>(0x93A44A1F); } // 0x93A44A1F
	nativeDecl void _0x13777A0B(Any p0) { invoke<Void>(0x13777A0B, p0); } // 0x13777A0B
	nativeDecl void _0x1134F68B() { invoke<Void>(0x1134F68B); } // 0x1134F68B
	nativeDecl void _0xE0047BFD(Any p0) { invoke<Void>(0xE0047BFD, p0); } // 0xE0047BFD
}

namespace CUTSCENE
{
	nativeDecl void REQUEST_CUTSCENE(const char* CutsceneName, int p1) { invoke<Void>(0xB5977853, CutsceneName, p1); } // 0xB5977853
	nativeDecl void _0xD98F656A(Any p0, Any p1, Any p2) { invoke<Void>(0xD98F656A, p0, p1, p2); } // 0xD98F656A
	nativeDecl void REMOVE_CUTSCENE() { invoke<Void>(0x8052F533); } // 0x8052F533
	nativeDecl BOOL HAS_CUTSCENE_LOADED() { return invoke<BOOL>(0xF9998582); } // 0xF9998582
	nativeDecl BOOL HAS_THIS_CUTSCENE_LOADED(Any p0) { return invoke<BOOL>(0x3C5619F2, p0); } // 0x3C5619F2
	nativeDecl void _0x25A2CABC(Any p0) { invoke<Void>(0x25A2CABC, p0); } // 0x25A2CABC
	nativeDecl Any _0xDD8878E9() { return invoke<Any>(0xDD8878E9); } // 0xDD8878E9
	nativeDecl Any _0x7B93CDAA(Any p0) { return invoke<Any>(0x7B93CDAA, p0); } // 0x7B93CDAA
	nativeDecl void _0x47DB08A9(Any p0, Any p1, Any p2) { invoke<Void>(0x47DB08A9, p0, p1, p2); } // 0x47DB08A9
	nativeDecl void START_CUTSCENE(Any p0) { invoke<Void>(0x210106F6, p0); } // 0x210106F6
	nativeDecl void START_CUTSCENE_AT_COORDS(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x58BEA436, p0, p1, p2, p3); } // 0x58BEA436
	nativeDecl void STOP_CUTSCENE(Any p0) { invoke<Void>(0x5EE84DC7, p0); } // 0x5EE84DC7
	nativeDecl void STOP_CUTSCENE_IMMEDIATELY() { invoke<Void>(0xF528A2AD); } // 0xF528A2AD
	nativeDecl void SET_CUTSCENE_ORIGIN(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xB0AD7792, p0, p1, p2, p3, p4); } // 0xB0AD7792
	nativeDecl Any GET_CUTSCENE_TIME() { return invoke<Any>(0x53F5B5AB); } // 0x53F5B5AB
	nativeDecl Any GET_CUTSCENE_TOTAL_DURATION() { return invoke<Any>(0x0824EBE8); } // 0x0824EBE8
	nativeDecl BOOL WAS_CUTSCENE_SKIPPED() { return invoke<BOOL>(0xC9B6949D); } // 0xC9B6949D
	nativeDecl BOOL HAS_CUTSCENE_FINISHED() { return invoke<BOOL>(0x5DED14B4); } // 0x5DED14B4
	nativeDecl BOOL IS_CUTSCENE_ACTIVE() { return invoke<BOOL>(0xCCE2FE9D); } // 0xCCE2FE9D
	nativeDecl BOOL IS_CUTSCENE_PLAYING() { return invoke<BOOL>(0xA3A78392); } // 0xA3A78392
	nativeDecl Any GET_CUTSCENE_SECTION_PLAYING() { return invoke<Any>(0x1026F0D6); } // 0x1026F0D6
	nativeDecl Any GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY(Any p0, Any p1) { return invoke<Any>(0x1D09ABC7, p0, p1); } // 0x1D09ABC7
	nativeDecl Any _0x5AE68AE6() { return invoke<Any>(0x5AE68AE6); } // 0x5AE68AE6
	nativeDecl void REGISTER_ENTITY_FOR_CUTSCENE(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x7CBC3EC7, p0, p1, p2, p3, p4); } // 0x7CBC3EC7
	nativeDecl Any GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(Any p0, Any p1) { return invoke<Any>(0x46D18755, p0, p1); } // 0x46D18755
	nativeDecl void SET_CUTSCENE_TRIGGER_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x9D76D9DE, p0, p1, p2, p3, p4, p5); } // 0x9D76D9DE
	nativeDecl BOOL CAN_SET_ENTER_STATE_FOR_REGISTERED_ENTITY(Any p0, Any p1) { return invoke<BOOL>(0x55C30B26, p0, p1); } // 0x55C30B26
	nativeDecl BOOL CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(Any p0, Any p1) { return invoke<BOOL>(0x8FF5D3C4, p0, p1); } // 0x8FF5D3C4
	nativeDecl BOOL CAN_SET_EXIT_STATE_FOR_CAMERA(Any p0) { return invoke<BOOL>(0xEDAE6C02, p0); } // 0xEDAE6C02
	nativeDecl void _0x35721A08(Any p0) { invoke<Void>(0x35721A08, p0); } // 0x35721A08
	nativeDecl void SET_CUTSCENE_FADE_VALUES(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xD19EF0DD, p0, p1, p2, p3); } // 0xD19EF0DD
	nativeDecl void _0x8338DA1D(Any p0) { invoke<Void>(0x8338DA1D, p0); } // 0x8338DA1D
	nativeDecl void _0x04377C10(Any p0) { invoke<Void>(0x04377C10, p0); } // 0x04377C10
	nativeDecl Any _0xDBD88708() { return invoke<Any>(0xDBD88708); } // 0xDBD88708
	nativeDecl void _0x28D54A7F(Any p0) { invoke<Void>(0x28D54A7F, p0); } // 0x28D54A7F
	nativeDecl void REGISTER_SYNCHRONISED_SCRIPT_SPEECH() { invoke<Void>(0xB60CFBB9); } // 0xB60CFBB9
	nativeDecl void SET_CUTSCENE_PED_COMPONENT_VARIATION(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x6AF994A1, p0, p1, p2, p3, p4); } // 0x6AF994A1
	nativeDecl void _0x1E7DA95E(Any p0, Any p1, Any p2) { invoke<Void>(0x1E7DA95E, p0, p1, p2); } // 0x1E7DA95E
	nativeDecl BOOL DOES_CUTSCENE_ENTITY_EXIST(Any p0, Any p1) { return invoke<BOOL>(0x58E67409, p0, p1); } // 0x58E67409
	nativeDecl void _0x22E9A9DE(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x22E9A9DE, p0, p1, p2, p3, p4); } // 0x22E9A9DE
	nativeDecl Any _0x4315A7C5() { return invoke<Any>(0x4315A7C5); } // 0x4315A7C5
}

namespace INTERIOR
{
	nativeDecl Any GET_INTERIOR_GROUP_ID(Any p0) { return invoke<Any>(0x09D6376F, p0); } // 0x09D6376F
	nativeDecl Vector3 GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS(Any p0, Any p1, Any p2, Any p3) { return invoke<Vector3>(0x7D8F26A1, p0, p1, p2, p3); } // 0x7D8F26A1
	nativeDecl BOOL IS_INTERIOR_SCENE() { return invoke<BOOL>(0x55226C13); } // 0x55226C13
	nativeDecl BOOL IS_VALID_INTERIOR(Any p0) { return invoke<BOOL>(0x39C0B635, p0); } // 0x39C0B635
	nativeDecl void CLEAR_ROOM_FOR_ENTITY(Any p0) { invoke<Void>(0x7DDADB92, p0); } // 0x7DDADB92
	nativeDecl void FORCE_ROOM_FOR_ENTITY(Any p0, Any p1, Any p2) { invoke<Void>(0x10BD4435, p0, p1, p2); } // 0x10BD4435
	nativeDecl Any GET_ROOM_KEY_FROM_ENTITY(Any p0) { return invoke<Any>(0xE4ACF8C3, p0); } // 0xE4ACF8C3
	nativeDecl Any GET_KEY_FOR_ENTITY_IN_ROOM(Any p0) { return invoke<Any>(0x91EA80EF, p0); } // 0x91EA80EF
	nativeDecl Any GET_INTERIOR_FROM_ENTITY(Any p0) { return invoke<Any>(0x5C644614, p0); } // 0x5C644614
	nativeDecl void _0xE645E162(Any p0, Any p1) { invoke<Void>(0xE645E162, p0, p1); } // 0xE645E162
	nativeDecl void _0xD79803B5(Any p0, Any p1) { invoke<Void>(0xD79803B5, p0, p1); } // 0xD79803B5
	nativeDecl void _0x1F6B4B13(Any p0) { invoke<Void>(0x1F6B4B13, p0); } // 0x1F6B4B13
	nativeDecl void _0x0E9529CC(Any p0) { invoke<Void>(0x0E9529CC, p0); } // 0x0E9529CC
	nativeDecl Any _0x4FF3D3F5() { return invoke<Any>(0x4FF3D3F5); } // 0x4FF3D3F5
	nativeDecl void _0x617DC75D() { invoke<Void>(0x617DC75D); } // 0x617DC75D
	nativeDecl int GET_INTERIOR_AT_COORDS(float x, float y, float z) { return invoke<Any>(0xA17FBF37, x, y, z); } // 0xA17FBF37
	nativeDecl void ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(Any p0, Any p1) { invoke<Void>(0xA2A73564, p0, p1); } // 0xA2A73564
	nativeDecl void _0x3ADA414E(Any p0) { invoke<Void>(0x3ADA414E, p0); } // 0x3ADA414E
	nativeDecl void UNPIN_INTERIOR(Any p0) { invoke<Void>(0xFCFF792A, p0); } // 0xFCFF792A
	nativeDecl BOOL IS_INTERIOR_READY(Any p0) { return invoke<BOOL>(0xE1EF6450, p0); } // 0xE1EF6450
	nativeDecl int _0x96525B06(float x, float y, float z, const char* interior) { return invoke<int>(0x96525B06, x, y, z, interior); } // 0x96525B06
	nativeDecl Any _0x7762249C(Any p0, Any p1, Any p2) { return invoke<Any>(0x7762249C, p0, p1, p2); } // 0x7762249C
	nativeDecl Any GET_INTERIOR_FROM_COLLISION(Any p0, Any p1, Any p2) { return invoke<Any>(0x7ED33DC1, p0, p1, p2); } // 0x7ED33DC1
	nativeDecl void _0xC80A5DDF(Any p0, Any p1) { invoke<Void>(0xC80A5DDF, p0, p1); } // 0xC80A5DDF
	nativeDecl void _0xDBA768A1(Any p0, Any p1) { invoke<Void>(0xDBA768A1, p0, p1); } // 0xDBA768A1
	nativeDecl Any _0x39A3CC6F(Any p0, Any p1) { return invoke<Any>(0x39A3CC6F, p0, p1); } // 0x39A3CC6F
	nativeDecl void REFRESH_INTERIOR(Any p0) { invoke<Void>(0x9A29ACE6, p0); } // 0x9A29ACE6
	nativeDecl void _0x1F375B4C(Any p0) { invoke<Void>(0x1F375B4C, p0); } // 0x1F375B4C
	nativeDecl void DISABLE_INTERIOR(Any p0, Any p1) { invoke<Void>(0x093ADEA5, p0, p1); } // 0x093ADEA5
	nativeDecl BOOL IS_INTERIOR_DISABLED(Any p0) { return invoke<BOOL>(0x81F34C71, p0); } // 0x81F34C71
	nativeDecl void CAP_INTERIOR(Any p0, Any p1) { invoke<Void>(0x34E735A6, p0, p1); } // 0x34E735A6
	nativeDecl BOOL IS_INTERIOR_CAPPED(Any p0) { return invoke<BOOL>(0x18B17C80, p0); } // 0x18B17C80
	nativeDecl void _0x5EF9C5C2(Any p0) { invoke<Void>(0x5EF9C5C2, p0); } // 0x5EF9C5C2
}

namespace CAM
{
	nativeDecl Vector3 _GET_GAMEPLAY_CAM_ROT(int p0) { return invoke<Vector3>(0x1FFBEFC5, p0); } // 0x1FFBEFC5
	nativeDecl void RENDER_SCRIPT_CAMS(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x74337969, p0, p1, p2, p3, p4); } // 0x74337969
	nativeDecl void _0xD3C08183(Any p0, Any p1, Any p2) { invoke<Void>(0xD3C08183, p0, p1, p2); } // 0xD3C08183
	nativeDecl Any CREATE_CAM(const char* camName, Any p1) { return invoke<Any>(0xE9BF2A7D, camName, p1); } // 0xE9BF2A7D
	nativeDecl Any CREATE_CAM_WITH_PARAMS1(const char* camName, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float fov, BOOL p8, int p9) { return invoke<Any>(0x23B02F15, camName, posX, posY, posZ, rotX, rotY, rotZ, fov, p8, p9); } // 0x23B02F15 0x23B02F15
	nativeDecl Any CREATE_CAM_WITH_PARAMS(const char* camName, float* posX, float* posY, float* posZ, float* rotX, float* rotY, float* rotZ, float fov, int p8, int p9) { return invoke<Any>(0x23B02F15, camName, posX, posY, posZ, rotX, rotY, rotZ, fov, p8, p9); } // 0x23B02F15
	nativeDecl Any CREATE_CAMERA(Any p0, Any p1) { return invoke<Any>(0x5D6739AE, p0, p1); } // 0x5D6739AE
	nativeDecl Any CREATE_CAMERA_WITH_PARAMS(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return invoke<Any>(0x0688BE9A, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x0688BE9A
	nativeDecl void DESTROY_CAM(Any p0, Any p1) { invoke<Void>(0xC39302BD, p0, p1); } // 0xC39302BD
	nativeDecl void DESTROY_ALL_CAMS(Any p0) { invoke<Void>(0x10C151CE, p0); } // 0x10C151CE
	nativeDecl BOOL DOES_CAM_EXIST(Any p0) { return invoke<BOOL>(0x1EF89DC0, p0); } // 0x1EF89DC0
	nativeDecl void SET_CAM_ACTIVE(Any p0, Any p1) { invoke<Void>(0x064659C2, p0, p1); } // 0x064659C2
	nativeDecl BOOL IS_CAM_ACTIVE(Any p0) { return invoke<BOOL>(0x4B58F177, p0); } // 0x4B58F177
	nativeDecl BOOL IS_CAM_RENDERING(Any p0) { return invoke<BOOL>(0x6EC6B5B2, p0); } // 0x6EC6B5B2
	nativeDecl Any GET_RENDERING_CAM() { return invoke<Any>(0x0FCF4DF1); } // 0x0FCF4DF1
	nativeDecl Vector3 GET_CAM_COORD(Any p0) { return invoke<Vector3>(0x7C40F09C, p0); } // 0x7C40F09C
	nativeDecl Vector3 GET_CAM_ROT(Any p0, Any p1) { return invoke<Vector3>(0xDAC84C9F, p0, p1); } // 0xDAC84C9F
	nativeDecl Any GET_CAM_FOV(ScrHandle Camera_handle) { return invoke<Any>(0xD6E9FCF5, Camera_handle); } // 0xD6E9FCF5
	nativeDecl Any GET_CAM_NEAR_CLIP(Any p0) { return invoke<Any>(0xCFCD35EE, p0); } // 0xCFCD35EE
	nativeDecl Any GET_CAM_FAR_CLIP(Any p0) { return invoke<Any>(0x09F119B8, p0); } // 0x09F119B8
	nativeDecl Any GET_CAM_FAR_DOF(Any p0) { return invoke<Any>(0x98C5CCE9, p0); } // 0x98C5CCE9
	nativeDecl void SET_CAM_PARAMS(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { invoke<Void>(0x2167CEBF, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x2167CEBF
	nativeDecl void SET_CAM_COORD(int p0, float p1, float p2, float p3) { invoke<Void>(0x7A8053AF, p0, p1, p2, p3); } // 0x7A8053AF
	nativeDecl void SET_CAM_ROT(Any p0, Vector3 v1, Any p4) { invoke<Void>(0xEE38B3C1, p0, v1, p4); } // 0xEE38B3C1
	nativeDecl void SET_CAM_FOV(const char* camName, float FovVaule) { invoke<Void>(0xD3D5D74F, camName, FovVaule); } // 0xD3D5D74F
	nativeDecl void SET_CAM_NEAR_CLIP(Any p0, Any p1) { invoke<Void>(0x46DB13B1, p0, p1); } // 0x46DB13B1
	nativeDecl void SET_CAM_FAR_CLIP(Any p0, Any p1) { invoke<Void>(0x0D23E381, p0, p1); } // 0x0D23E381
	nativeDecl void SET_CAM_NEAR_DOF(Any p0, Any p1) { invoke<Void>(0xF28254DF, p0, p1); } // 0xF28254DF
	nativeDecl void SET_CAM_FAR_DOF(Any p0, Any p1) { invoke<Void>(0x58515E8E, p0, p1); } // 0x58515E8E
	nativeDecl void SET_CAM_DOF_STRENGTH(Any p0, Any p1) { invoke<Void>(0x3CC4EB3F, p0, p1); } // 0x3CC4EB3F
	nativeDecl void SET_CAM_DOF_PLANES(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xAD6C2B8F, p0, p1, p2, p3, p4); } // 0xAD6C2B8F
	nativeDecl void _0x8306C256(Any p0, Any p1) { invoke<Void>(0x8306C256, p0, p1); } // 0x8306C256
	nativeDecl void SET_CAM_MOTION_BLUR_STRENGTH(Any p0, float p1) { invoke<Void>(0xFD6E0D67, p0, p1); } // 0xFD6E0D67
	nativeDecl void _0x8BBF2950() { invoke<Void>(0x8BBF2950); } // 0x8BBF2950
	nativeDecl void ATTACH_CAM_TO_ENTITY(Any p0, Any p1, float p2, float p3, float p4, Any p5) { invoke<Void>(0xAD7C45F6, p0, p1, p2, p3, p4, p5); } // 0xAD7C45F6
	nativeDecl void ATTACH_CAM_TO_PED_BONE(int CameraHandle, Ped PedHandle, int BoneIndex, float X, float Y, float Z, float Heading) { invoke<Void>(0x506BB35C, CameraHandle, PedHandle, BoneIndex, X, Y, Z, Heading); } // 0x506BB35C
	nativeDecl void DETACH_CAM(const char* camName) { invoke<Void>(0xF4FBF14A, camName); } // 0xF4FBF14A
	nativeDecl void SET_CAM_INHERIT_ROLL_VEHICLE(Any p0, Any p1) { invoke<Void>(0xE4BD5342, p0, p1); } // 0xE4BD5342
	nativeDecl void POINT_CAM_AT_COORD(int p0, float p1, float p2, float p3) { invoke<Void>(0x914BC21A, p0, p1, p2, p3); } // 0x914BC21A
	nativeDecl void POINT_CAM_AT_ENTITY(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x7597A0F7, p0, p1, p2, p3, p4, p5); } // 0x7597A0F7
	nativeDecl void POINT_CAM_AT_PED_BONE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x09F47049, p0, p1, p2, p3, p4, p5, p6); } // 0x09F47049
	nativeDecl void STOP_CAM_POINTING(Any p0) { invoke<Void>(0x5435F6A5, p0); } // 0x5435F6A5
	nativeDecl void _0x0C74F9AF(Any p0, Any p1) { invoke<Void>(0x0C74F9AF, p0, p1); } // 0x0C74F9AF
	nativeDecl void _0xE1A0B2F1(Any p0, Any p1) { invoke<Void>(0xE1A0B2F1, p0, p1); } // 0xE1A0B2F1
	nativeDecl void _0x43220969(Any p0, Any p1) { invoke<Void>(0x43220969, p0, p1); } // 0x43220969
	nativeDecl void SET_CAM_DEBUG_NAME(Any p0, Any p1) { invoke<Void>(0x9B00DF3F, p0, p1); } // 0x9B00DF3F
	nativeDecl void ADD_CAM_SPLINE_NODE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoke<Void>(0xAD3C7EAA, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0xAD3C7EAA
	nativeDecl void _0x30510511(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x30510511, p0, p1, p2, p3); } // 0x30510511
	nativeDecl void _0xBA6C085B(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xBA6C085B, p0, p1, p2, p3); } // 0xBA6C085B
	nativeDecl void _0xB4737F03(Any p0, Any p1, Any p2) { invoke<Void>(0xB4737F03, p0, p1, p2); } // 0xB4737F03
	nativeDecl void SET_CAM_SPLINE_PHASE(Any p0, Any p1) { invoke<Void>(0xF0AED233, p0, p1); } // 0xF0AED233
	nativeDecl Any GET_CAM_SPLINE_PHASE(Any p0) { return invoke<Any>(0x39784DD9, p0); } // 0x39784DD9
	nativeDecl Any GET_CAM_SPLINE_NODE_PHASE(Any p0) { return invoke<Any>(0x7B9522F6, p0); } // 0x7B9522F6
	nativeDecl void SET_CAM_SPLINE_DURATION(Any p0, Any p1) { invoke<Void>(0x3E91FC8A, p0, p1); } // 0x3E91FC8A
	nativeDecl void _0x15E141CE(Any p0, Any p1) { invoke<Void>(0x15E141CE, p0, p1); } // 0x15E141CE
	nativeDecl Any GET_CAM_SPLINE_NODE_INDEX(Any p0) { return invoke<Any>(0xF8AEB6BD, p0); } // 0xF8AEB6BD
	nativeDecl void _0x21D275DA(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x21D275DA, p0, p1, p2, p3); } // 0x21D275DA
	nativeDecl void _0xA3BD9E94(Any p0, Any p1, Any p2) { invoke<Void>(0xA3BD9E94, p0, p1, p2); } // 0xA3BD9E94
	nativeDecl void OVERRIDE_CAM_SPLINE_VELOCITY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x326A17E2, p0, p1, p2, p3); } // 0x326A17E2
	nativeDecl void OVERRIDE_CAM_SPLINE_MOTION_BLUR(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x633179E6, p0, p1, p2, p3); } // 0x633179E6
	nativeDecl void _0xC90B2DDC(Any p0, Any p1, Any p2) { invoke<Void>(0xC90B2DDC, p0, p1, p2); } // 0xC90B2DDC
	nativeDecl BOOL IS_CAM_SPLINE_PAUSED(Any p0) { return invoke<BOOL>(0x60B34FF5, p0); } // 0x60B34FF5
	nativeDecl void SET_CAM_ACTIVE_WITH_INTERP(int camTo, int camFrom, int duration, Any unk0, Any unk1) { invoke<Void>(0x7983E7F0, camTo, camFrom, duration, unk0, unk1); } // 0x7983E7F0
	nativeDecl BOOL IS_CAM_INTERPOLATING(Any p0) { return invoke<BOOL>(0x7159CB5D, p0); } // 0x7159CB5D
	nativeDecl void SHAKE_CAM(Any p0, Any p1, Any p2) { invoke<Void>(0x1D4211B0, p0, p1, p2); } // 0x1D4211B0
	nativeDecl void ANIMATED_SHAKE_CAM(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xE1168767, p0, p1, p2, p3, p4); } // 0xE1168767
	nativeDecl BOOL IS_CAM_SHAKING(Any p0) { return invoke<BOOL>(0x0961FD9B, p0); } // 0x0961FD9B
	nativeDecl void SET_CAM_SHAKE_AMPLITUDE(Any p0, Any p1) { invoke<Void>(0x60FF6382, p0, p1); } // 0x60FF6382
	nativeDecl void STOP_CAM_SHAKING(Any p0, Any p1) { invoke<Void>(0x40D0EB87, p0, p1); } // 0x40D0EB87
	nativeDecl void _0x2B0F05CD(Any p0, Any p1) { invoke<Void>(0x2B0F05CD, p0, p1); } // 0x2B0F05CD
	nativeDecl void _0xCB75BD9C(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xCB75BD9C, p0, p1, p2, p3); } // 0xCB75BD9C
	nativeDecl Any _0x6AEFE6A5() { return invoke<Any>(0x6AEFE6A5); } // 0x6AEFE6A5
	nativeDecl void _0x26FCFB96(Any p0) { invoke<Void>(0x26FCFB96, p0); } // 0x26FCFB96
	nativeDecl Any PLAY_CAM_ANIM(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { return invoke<Any>(0xBCEFB87E, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0xBCEFB87E
	nativeDecl BOOL IS_CAM_PLAYING_ANIM(Any p0, Any p1, Any p2) { return invoke<BOOL>(0xB998CB49, p0, p1, p2); } // 0xB998CB49
	nativeDecl void SET_CAM_ANIM_CURRENT_PHASE(Any p0, Any p1) { invoke<Void>(0x3CB1D17F, p0, p1); } // 0x3CB1D17F
	nativeDecl Any GET_CAM_ANIM_CURRENT_PHASE(Any p0) { return invoke<Any>(0x345F72D0, p0); } // 0x345F72D0
	nativeDecl Any PLAY_SYNCHRONIZED_CAM_ANIM(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x9458459E, p0, p1, p2, p3); } // 0x9458459E
	nativeDecl void _0x56F9ED27(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x56F9ED27, p0, p1, p2, p3); } // 0x56F9ED27
	nativeDecl void _0x71570DBA(Any p0, Any p1) { invoke<Void>(0x71570DBA, p0, p1); } // 0x71570DBA
	nativeDecl void _0x60B345DE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x60B345DE, p0, p1, p2, p3); } // 0x60B345DE
	nativeDecl void _0x44473EFC(Any p0) { invoke<Void>(0x44473EFC, p0); } // 0x44473EFC
	nativeDecl Any _0xDA931D65(Any p0) { return invoke<Any>(0xDA931D65, p0); } // 0xDA931D65
	nativeDecl BOOL IS_SCREEN_FADED_OUT() { return invoke<BOOL>(0x9CAA05FA); } // 0x9CAA05FA
	nativeDecl BOOL IS_SCREEN_FADED_IN() { return invoke<BOOL>(0x4F37276D); } // 0x4F37276D
	nativeDecl BOOL IS_SCREEN_FADING_OUT() { return invoke<BOOL>(0x79275A57); } // 0x79275A57
	nativeDecl BOOL IS_SCREEN_FADING_IN() { return invoke<BOOL>(0xC7C82800); } // 0xC7C82800
	nativeDecl void DO_SCREEN_FADE_IN(int ticks) { invoke<Void>(0x66C1BDEE, ticks); } // 0x66C1BDEE
	nativeDecl void DO_SCREEN_FADE_OUT(int ticks) { invoke<Void>(0x89D01805, ticks); } // 0x89D01805
	nativeDecl void SET_WIDESCREEN_BORDERS(int p0, int p1) { invoke<Void>(0x1A75DC9A, p0, p1); } // 0x1A75DC9A
	nativeDecl Vector3 GET_GAMEPLAY_CAM_COORD() { return invoke<Vector3>(0x9388CF79); } // 0x9388CF79
	nativeDecl Vector3 GET_GAMEPLAY_CAM_ROT(Any p0) { return invoke<Vector3>(0x13A010B5, p0); } // 0x13A010B5
	nativeDecl Any GET_GAMEPLAY_CAM_FOV() { return invoke<Any>(0x4D6B3BFA); } // 0x4D6B3BFA
	nativeDecl void _0xA6E73135(Any p0) { invoke<Void>(0xA6E73135, p0); } // 0xA6E73135
	nativeDecl void _0x1126E37C(Any p0) { invoke<Void>(0x1126E37C, p0); } // 0x1126E37C
	nativeDecl Any GET_GAMEPLAY_CAM_RELATIVE_HEADING() { return invoke<Any>(0xCAF839C2); } // 0xCAF839C2
	nativeDecl void SET_GAMEPLAY_CAM_RELATIVE_HEADING(float heading) { invoke<Void>(0x20C6217C, heading); } // 0x20C6217C
	nativeDecl Any GET_GAMEPLAY_CAM_RELATIVE_PITCH() { return invoke<Any>(0xFC5A4946); } // 0xFC5A4946
	nativeDecl void SET_GAMEPLAY_CAM_RELATIVE_PITCH(float x, float Value2) { invoke<Void>(0x6381B963, x, Value2); } // 0x6381B963
	nativeDecl void SHAKE_GAMEPLAY_CAM(Any p0, Any p1) { invoke<Void>(0xF2EFE660, p0, p1); } // 0xF2EFE660
	nativeDecl BOOL IS_GAMEPLAY_CAM_SHAKING() { return invoke<BOOL>(0x3457D681); } // 0x3457D681
	nativeDecl void SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(Any p0) { invoke<Void>(0x9219D44A, p0); } // 0x9219D44A
	nativeDecl void STOP_GAMEPLAY_CAM_SHAKING(Any p0) { invoke<Void>(0xFD569E4E, p0); } // 0xFD569E4E
	nativeDecl void _0x7D3007A2(Any p0) { invoke<Void>(0x7D3007A2, p0); } // 0x7D3007A2
	nativeDecl BOOL IS_GAMEPLAY_CAM_RENDERING() { return invoke<BOOL>(0x0EF276DA); } // 0x0EF276DA
	nativeDecl Any _0xC0B00C20() { return invoke<Any>(0xC0B00C20); } // 0xC0B00C20
	nativeDecl Any _0x60C23785() { return invoke<Any>(0x60C23785); } // 0x60C23785
	nativeDecl void _0x20BFF6E5(Any p0) { invoke<Void>(0x20BFF6E5, p0); } // 0x20BFF6E5
	nativeDecl void _0xA61FF9AC() { invoke<Void>(0xA61FF9AC); } // 0xA61FF9AC
	nativeDecl BOOL IS_GAMEPLAY_CAM_LOOKING_BEHIND() { return invoke<BOOL>(0x33C83F17); } // 0x33C83F17
	nativeDecl void _0x2701A9AD(Any p0) { invoke<Void>(0x2701A9AD, p0); } // 0x2701A9AD
	nativeDecl void _0xC4736ED3(Any p0) { invoke<Void>(0xC4736ED3, p0); } // 0xC4736ED3
	nativeDecl void _0x6B0E9D57() { invoke<Void>(0x6B0E9D57); } // 0x6B0E9D57
	nativeDecl BOOL IS_SPHERE_VISIBLE(Any p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0xDD1329E2, p0, p1, p2, p3); } // 0xDD1329E2
	nativeDecl BOOL IS_FOLLOW_PED_CAM_ACTIVE() { return invoke<BOOL>(0x9F9E856C); } // 0x9F9E856C
	nativeDecl Any SET_FOLLOW_PED_CAM_CUTSCENE_CHAT(Any p0, Any p1) { return invoke<Any>(0x1425F6AC, p0, p1); } // 0x1425F6AC
	nativeDecl void _0x8DC53629(Any p0, Any p1) { invoke<Void>(0x8DC53629, p0, p1); } // 0x8DC53629
	nativeDecl void _0x1F9DE6E4() { invoke<Void>(0x1F9DE6E4); } // 0x1F9DE6E4
	nativeDecl void _CLAMP_GAMEPLAY_CAM_YAW(float minimum, float maximum) { invoke<Void>(0x749909AC, minimum, maximum); } // 0x749909AC
	nativeDecl void _CLAMP_GAMEPLAY_CAM_PITCH(float minimum, float maximum) { invoke<Void>(0xFA3A16E7, minimum, maximum); } // 0xFA3A16E7
	nativeDecl void _ANIMATE_GAMEPLAY_CAM_ZOOM(float p0, float _distance) { invoke<Void>(0x77340650, p0, _distance); } // 0x77340650
	nativeDecl void _0x4B22C5CB(Vehicle p0, int p1) { invoke<Void>(0x4B22C5CB, p0, p1); } // 0x4B22C5CB
	nativeDecl Any GET_FOLLOW_PED_CAM_ZOOM_LEVEL() { return invoke<Any>(0x57583DF1); } // 0x57583DF1
	nativeDecl Any GET_FOLLOW_PED_CAM_VIEW_MODE() { return invoke<Any>(0xA65FF946); } // 0xA65FF946
	nativeDecl void SET_FOLLOW_PED_CAM_VIEW_MODE(Any p0) { invoke<Void>(0x495DBE8D, p0); } // 0x495DBE8D
	nativeDecl BOOL IS_FOLLOW_VEHICLE_CAM_ACTIVE() { return invoke<BOOL>(0x8DD49B77); } // 0x8DD49B77
	nativeDecl void _0x9DB5D391(Any p0) { invoke<Void>(0x9DB5D391, p0); } // 0x9DB5D391
	nativeDecl void _0x92302899(Any p0, Any p1) { invoke<Void>(0x92302899, p0, p1); } // 0x92302899
	nativeDecl Any GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL() { return invoke<Any>(0x8CD67DE3); } // 0x8CD67DE3
	nativeDecl void SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(Any p0) { invoke<Void>(0x8F55EBBE, p0); } // 0x8F55EBBE
	nativeDecl Any GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() { return invoke<Any>(0xA4B4DB03); } // 0xA4B4DB03
	nativeDecl void SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(Any p0) { invoke<Void>(0xC4FBBBD3, p0); } // 0xC4FBBBD3
	nativeDecl Any _0xF3B148A6(Any p0) { return invoke<Any>(0xF3B148A6, p0); } // 0xF3B148A6
	nativeDecl void _0x1DEBCB45(Any p0, Any p1) { invoke<Void>(0x1DEBCB45, p0, p1); } // 0x1DEBCB45
	nativeDecl BOOL IS_AIM_CAM_ACTIVE() { return invoke<BOOL>(0xC24B4F6F); } // 0xC24B4F6F
	nativeDecl Any _0x8F320DE4() { return invoke<Any>(0x8F320DE4); } // 0x8F320DE4
	nativeDecl BOOL IS_FIRST_PERSON_AIM_CAM_ACTIVE() { return invoke<BOOL>(0xD6280468); } // 0xD6280468
	nativeDecl void _0x1BAA7182() { invoke<Void>(0x1BAA7182); } // 0x1BAA7182
	nativeDecl Any _0x33951005() { return invoke<Any>(0x33951005); } // 0x33951005
	nativeDecl void _0x9F4AF763(float p0) { invoke<Void>(0x9F4AF763, p0); } // 0x9F4AF763
	nativeDecl void _0x68BA0730(Any p0, Any p1) { invoke<Void>(0x68BA0730, p0, p1); } // 0x68BA0730
	nativeDecl void _0x2F29F0D5(Any p0, Any p1) { invoke<Void>(0x2F29F0D5, p0, p1); } // 0x2F29F0D5
	nativeDecl void _0x76DAC96C(Any p0, Any p1) { invoke<Void>(0x76DAC96C, p0, p1); } // 0x76DAC96C
	nativeDecl void _0x0E21069D(Any p0) { invoke<Void>(0x0E21069D, p0); } // 0x0E21069D
	nativeDecl void _0x71E9C63E(Any p0) { invoke<Void>(0x71E9C63E, p0); } // 0x71E9C63E
	nativeDecl void _0xD1EEBC45(Any p0) { invoke<Void>(0xD1EEBC45, p0); } // 0xD1EEBC45
	nativeDecl Vector3 _0x9C84BDA0() { return invoke<Vector3>(0x9C84BDA0); } // 0x9C84BDA0
	nativeDecl Vector3 _0x1FFBEFC5(Any p0) { return invoke<Vector3>(0x1FFBEFC5, p0); } // 0x1FFBEFC5
	nativeDecl Vector3 _0xACADF916(Any p0, Any p1) { return invoke<Vector3>(0xACADF916, p0, p1); } // 0xACADF916
	nativeDecl Any _0x721B763B() { return invoke<Any>(0x721B763B); } // 0x721B763B
	nativeDecl Any _0x23E3F106(Any p0) { return invoke<Any>(0x23E3F106, p0); } // 0x23E3F106
	nativeDecl Any _0x457AE195() { return invoke<Any>(0x457AE195); } // 0x457AE195
	nativeDecl Any _0x46CB3A49() { return invoke<Any>(0x46CB3A49); } // 0x46CB3A49
	nativeDecl Any _0x19297A7A() { return invoke<Any>(0x19297A7A); } // 0x19297A7A
	nativeDecl Any _0xF24777CA() { return invoke<Any>(0xF24777CA); } // 0xF24777CA
	nativeDecl Any _0x38992E83() { return invoke<Any>(0x38992E83); } // 0x38992E83
	nativeDecl void SET_GAMEPLAY_COORD_HINT(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0xF27483C9, p0, p1, p2, p3, p4, p5, p6); } // 0xF27483C9
	nativeDecl void SET_GAMEPLAY_PED_HINT(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0x7C27343E, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x7C27343E
	nativeDecl void SET_GAMEPLAY_VEHICLE_HINT(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0x2C9A11D8, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x2C9A11D8
	nativeDecl void _0x2ED5E2F8(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0x2ED5E2F8, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x2ED5E2F8
	nativeDecl void SET_GAMEPLAY_ENTITY_HINT(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0x66C32306, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x66C32306
	nativeDecl BOOL IS_GAMEPLAY_HINT_ACTIVE() { return invoke<BOOL>(0xAD8DA205); } // 0xAD8DA205
	nativeDecl void STOP_GAMEPLAY_HINT(Any p0) { invoke<Void>(0x1BC28B7B, p0); } // 0x1BC28B7B
	nativeDecl void _0xCAFEE798(Any p0) { invoke<Void>(0xCAFEE798, p0); } // 0xCAFEE798
	nativeDecl void SET_GAMEPLAY_HINT_FOV(Any p0) { invoke<Void>(0x96FD173B, p0); } // 0x96FD173B
	nativeDecl void _0x72E8CD3A(Any p0) { invoke<Void>(0x72E8CD3A, p0); } // 0x72E8CD3A
	nativeDecl void _0x79472AE3(Any p0) { invoke<Void>(0x79472AE3, p0); } // 0x79472AE3
	nativeDecl void _0xFC7464A0(Any p0) { invoke<Void>(0xFC7464A0, p0); } // 0xFC7464A0
	nativeDecl void _0x3554AA0E(Any p0) { invoke<Void>(0x3554AA0E, p0); } // 0x3554AA0E
	nativeDecl void GET_IS_MULTIPLAYER_BRIEF(Any p0) { invoke<Void>(0x2F0CE859, p0); } // 0x2F0CE859
	nativeDecl void SET_CINEMATIC_BUTTON_ACTIVE(Any p0) { invoke<Void>(0x3FBC5D00, p0); } // 0x3FBC5D00
	nativeDecl BOOL IS_CINEMATIC_CAM_RENDERING() { return invoke<BOOL>(0x80471AD9); } // 0x80471AD9
	nativeDecl void SHAKE_CINEMATIC_CAM(Any p0, Any p1) { invoke<Void>(0x61815F31, p0, p1); } // 0x61815F31
	nativeDecl BOOL IS_CINEMATIC_CAM_SHAKING() { return invoke<BOOL>(0x8376D939); } // 0x8376D939
	nativeDecl void SET_CINEMATIC_CAM_SHAKE_AMPLITUDE(Any p0) { invoke<Void>(0x67510C4B, p0); } // 0x67510C4B
	nativeDecl void STOP_CINEMATIC_CAM_SHAKING(Any p0) { invoke<Void>(0x71C12904, p0); } // 0x71C12904
	nativeDecl void _0x5AC6DAC9() { invoke<Void>(0x5AC6DAC9); } // 0x5AC6DAC9
	nativeDecl void _0x837F8581() { invoke<Void>(0x837F8581); } // 0x837F8581
	nativeDecl void _0x65DDE8AF() { invoke<Void>(0x65DDE8AF); } // 0x65DDE8AF
	nativeDecl void _0xD75CDD75() { invoke<Void>(0xD75CDD75); } // 0xD75CDD75
	nativeDecl Any _0x96A07066() { return invoke<Any>(0x96A07066); } // 0x96A07066
	nativeDecl void CREATE_CINEMATIC_SHOT(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xAC494E35, p0, p1, p2, p3); } // 0xAC494E35
	nativeDecl BOOL IS_CINEMATIC_SHOT_ACTIVE(Any p0) { return invoke<BOOL>(0xA4049042, p0); } // 0xA4049042
	nativeDecl void STOP_CINEMATIC_SHOT(Any p0) { invoke<Void>(0xD78358C5, p0); } // 0xD78358C5
	nativeDecl void _0xFBB85E02(Any p0) { invoke<Void>(0xFBB85E02, p0); } // 0xFBB85E02
	nativeDecl void _0x4938C82F() { invoke<Void>(0x4938C82F); } // 0x4938C82F
	nativeDecl void SET_CINEMATIC_MODE_ACTIVE(Any p0) { invoke<Void>(0x2009E747, p0); } // 0x2009E747
	nativeDecl Any _0x6739AD55() { return invoke<Any>(0x6739AD55); } // 0x6739AD55
	nativeDecl void STOP_CUTSCENE_CAM_SHAKING(Any p0) { invoke<Void>(0xF07D603D, p0); } // 0xF07D603D
	nativeDecl void _0x067BA6F5(Any p0) { invoke<Void>(0x067BA6F5, p0); } // 0x067BA6F5
	nativeDecl Any _0xFD99BE2B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoke<Any>(0xFD99BE2B, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xFD99BE2B
	nativeDecl void _0xE206C450() { invoke<Void>(0xE206C450); } // 0xE206C450
	nativeDecl void _0xB06CCD38(Any p0) { invoke<Void>(0xB06CCD38, p0); } // 0xB06CCD38
}

namespace WEAPON
{
	nativeDecl void ENABLE_LASER_SIGHT_RENDERING(Any p0) { invoke<Void>(0xE3438955, p0); } // 0xE3438955
	nativeDecl Any _0x324FA47A(Any p0) { return invoke<Any>(0x324FA47A, p0); } // 0x324FA47A
	nativeDecl Any GET_WEAPONTYPE_MODEL(Any p0) { return invoke<Any>(0x44E1C269, p0); } // 0x44E1C269
	nativeDecl Any GET_WEAPONTYPE_SLOT(Any p0) { return invoke<Any>(0x2E3759AF, p0); } // 0x2E3759AF
	nativeDecl Any GET_WEAPONTYPE_GROUP(Any p0) { return invoke<Any>(0x5F2DE833, p0); } // 0x5F2DE833
	nativeDecl void SET_CURRENT_PED_WEAPON(Ped PedHandle, Hash WeaponHash, BOOL EquipNow) { invoke<Void>(0xB8278882, PedHandle, WeaponHash, EquipNow); } // 0xB8278882
	nativeDecl Any GET_CURRENT_PED_WEAPON(Ped ped, unsigned int* weapHash, BOOL p2) { return invoke<Any>(0xB0237302, ped, weapHash, p2); } // 0xB0237302
	nativeDecl Any _0x5D73CD20(Any p0) { return invoke<Any>(0x5D73CD20, p0); } // 0x5D73CD20
	nativeDecl Any GET_BEST_PED_WEAPON(Any p0, Any p1) { return invoke<Any>(0xB998D444, p0, p1); } // 0xB998D444
	nativeDecl Any SET_CURRENT_PED_VEHICLE_WEAPON(Any p0, Any p1) { return invoke<Any>(0x8E6F2AF1, p0, p1); } // 0x8E6F2AF1
	nativeDecl Any GET_CURRENT_PED_VEHICLE_WEAPON(Any p0, Any p1) { return invoke<Any>(0xF26C5D65, p0, p1); } // 0xF26C5D65
	nativeDecl BOOL IS_PED_ARMED(Any p0, Any p1) { return invoke<BOOL>(0x0BFC892C, p0, p1); } // 0x0BFC892C
	nativeDecl BOOL IS_WEAPON_VALID(Hash WeapHash) { return invoke<BOOL>(0x38CA2954, WeapHash); } // 0x38CA2954
	nativeDecl BOOL HAS_PED_GOT_WEAPON(Any p0, Any p1, Any p2) { return invoke<BOOL>(0x43D2FA82, p0, p1, p2); } // 0x43D2FA82
	nativeDecl Any _0x02A32CB0(Any p0) { return invoke<Any>(0x02A32CB0, p0); } // 0x02A32CB0
	nativeDecl Any GET_PED_WEAPONTYPE_IN_SLOT(Any p0, Any p1) { return invoke<Any>(0x9BC64E16, p0, p1); } // 0x9BC64E16
	nativeDecl Any GET_AMMO_IN_PED_WEAPON(Any p0, Any p1) { return invoke<Any>(0x0C755733, p0, p1); } // 0x0C755733
	nativeDecl void ADD_AMMO_TO_PED(Ped handle, Hash weaponHash, int ammo) { invoke<Void>(0x7F0580C7, handle, weaponHash, ammo); } // 0x7F0580C7
	nativeDecl void SET_PED_AMMO(Ped PedHandle, Hash WeaponHash, int ammo) { invoke<Void>(0xBF90DF1A, PedHandle, WeaponHash, ammo); } // 0xBF90DF1A
	nativeDecl void SET_PED_INFINITE_AMMO(Ped Handle, BOOL Toggle, Hash WeaponHash) { invoke<Void>(0x9CB8D278, Handle, Toggle, WeaponHash); } // 0x9CB8D278
	nativeDecl void SET_PED_INFINITE_AMMO_CLIP(Ped PedHandle, BOOL Toggle) { invoke<Void>(0x5A5E3B67, PedHandle, Toggle); } // 0x5A5E3B67
	nativeDecl void GIVE_WEAPON_TO_PED(int pedHandle, Hash weaponAssetHash, int ammoCount, BOOL equipNow, BOOL isAmmoLoaded) { invoke<Void>(0xC4D88A85, pedHandle, weaponAssetHash, ammoCount, equipNow, isAmmoLoaded); } // 0xC4D88A85
	nativeDecl void GIVE_DELAYED_WEAPON_TO_PED(Ped pedHandle, Hash weaponHash, int time, BOOL p3) { invoke<Void>(0x5868D20D, pedHandle, weaponHash, time, p3); } // 0x5868D20D
	nativeDecl void REMOVE_ALL_PED_WEAPONS(Ped PedHandle, BOOL Toggle) { invoke<Void>(0xA44CE817, PedHandle, Toggle); } // 0xA44CE817
	nativeDecl void REMOVE_WEAPON_FROM_PED(Ped Handle, Hash WeaponHash) { invoke<Void>(0x9C37F220, Handle, WeaponHash); } // 0x9C37F220
	nativeDecl void HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(Player PedHandle, BOOL Toggle) { invoke<Void>(0x00CFD6E9, PedHandle, Toggle); } // 0x00CFD6E9
	nativeDecl void SET_PED_CURRENT_WEAPON_VISIBLE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x00BECD77, p0, p1, p2, p3); } // 0x00BECD77
	nativeDecl void SET_PED_DROPS_WEAPONS_WHEN_DEAD(Any p0, Any p1) { invoke<Void>(0x8A444056, p0, p1); } // 0x8A444056
	nativeDecl BOOL HAS_PED_BEEN_DAMAGED_BY_WEAPON(Any p0, Any p1, Any p2) { return invoke<BOOL>(0xCDFBBCC6, p0, p1, p2); } // 0xCDFBBCC6
	nativeDecl void CLEAR_PED_LAST_WEAPON_DAMAGE(Ped PedHandle) { invoke<Void>(0x52C68832, PedHandle); } // 0x52C68832
	nativeDecl BOOL HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Any p0, Any p1, Any p2) { return invoke<BOOL>(0x6DAABB39, p0, p1, p2); } // 0x6DAABB39
	nativeDecl void CLEAR_ENTITY_LAST_WEAPON_DAMAGE(Any p0) { invoke<Void>(0xCEC2732B, p0); } // 0xCEC2732B
	nativeDecl void SET_PED_DROPS_WEAPON(Any p0) { invoke<Void>(0x3D3329FA, p0); } // 0x3D3329FA
	nativeDecl void SET_PED_DROPS_INVENTORY_WEAPON(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x81FFB874, p0, p1, p2, p3, p4, p5); } // 0x81FFB874
	nativeDecl Any GET_MAX_AMMO_IN_CLIP(Ped ped, Hash WeapHash, BOOL p2) { return invoke<Any>(0x6961E2A4, ped, WeapHash, p2); } // 0x6961E2A4
	nativeDecl Any GET_AMMO_IN_CLIP(Ped Handle, Hash WeaponHash, BOOL p2) { return invoke<Any>(0x73C100C3, Handle, WeaponHash, p2); } // 0x73C100C3
	nativeDecl Any SET_AMMO_IN_CLIP(Ped Handle, Hash WeaponHash, int ammo) { return invoke<Any>(0xA54B0B10, Handle, WeaponHash, ammo); } // 0xA54B0B10
	nativeDecl Any GET_MAX_AMMO(Ped ped, Hash WeapHash, int* ammo) { return invoke<Any>(0x0B294796, ped, WeapHash, ammo); } // 0x0B294796
	nativeDecl void SET_PED_AMMO_BY_TYPE(Any p0, Any p1, Any p2) { invoke<Void>(0x311C52BB, p0, p1, p2); } // 0x311C52BB
	nativeDecl Any GET_PED_AMMO_BY_TYPE(Any p0, Any p1) { return invoke<Any>(0x54077C4D, p0, p1); } // 0x54077C4D
	nativeDecl void SET_PED_AMMO_TO_DROP(Any p0, Any p1) { invoke<Void>(0x2386A307, p0, p1); } // 0x2386A307
	nativeDecl void _0xD6460EA2(Any p0) { invoke<Void>(0xD6460EA2, p0); } // 0xD6460EA2
	nativeDecl Any _0x09337863(Any p0, Any p1) { return invoke<Any>(0x09337863, p0, p1); } // 0x09337863
	nativeDecl Any GET_PED_LAST_WEAPON_IMPACT_COORD(Ped Handle, float* Coords) { return invoke<Any>(0x9B266079, Handle, Coords); } // 0x9B266079
	nativeDecl void SET_PED_GADGET(Any p0, Any p1, Any p2) { invoke<Void>(0x8A256D0A, p0, p1, p2); } // 0x8A256D0A
	nativeDecl Any _0x8DDD0B5B(Any p0, Any p1) { return invoke<Any>(0x8DDD0B5B, p0, p1); } // 0x8DDD0B5B
	nativeDecl Any GET_SELECTED_PED_WEAPON(Any p0) { return invoke<Any>(0xD240123E, p0); } // 0xD240123E
	nativeDecl void EXPLODE_PROJECTILES(Any p0, Any p1, Any p2) { invoke<Void>(0x35A0B955, p0, p1, p2); } // 0x35A0B955
	nativeDecl void REMOVE_ALL_PROJECTILES_OF_TYPE(Any p0, Any p1) { invoke<Void>(0xA5F89919, p0, p1); } // 0xA5F89919
	nativeDecl Any _0x3612110D(Any p0) { return invoke<Any>(0x3612110D, p0); } // 0x3612110D
	nativeDecl Any _0xB2B2BBAA(Any p0) { return invoke<Any>(0xB2B2BBAA, p0); } // 0xB2B2BBAA
	nativeDecl BOOL HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(Any p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0xA57E2E80, p0, p1, p2, p3); } // 0xA57E2E80
	nativeDecl void GIVE_WEAPON_COMPONENT_TO_PED(Any p0, Any p1, Any p2) { invoke<Void>(0x3E1E286D, p0, p1, p2); } // 0x3E1E286D
	nativeDecl void REMOVE_WEAPON_COMPONENT_FROM_PED(Any p0, Any p1, Any p2) { invoke<Void>(0x412AA00D, p0, p1, p2); } // 0x412AA00D
	nativeDecl BOOL HAS_PED_GOT_WEAPON_COMPONENT(Any p0, Any p1, Any p2) { return invoke<BOOL>(0xDC0FC145, p0, p1, p2); } // 0xDC0FC145
	nativeDecl BOOL IS_PED_WEAPON_COMPONENT_ACTIVE(Any p0, Any p1, Any p2) { return invoke<BOOL>(0x7565FB19, p0, p1, p2); } // 0x7565FB19
	nativeDecl Any _0x82EEAF0F(Any p0) { return invoke<Any>(0x82EEAF0F, p0); } // 0x82EEAF0F
	nativeDecl Any MAKE_PED_RELOAD(Any p0) { return invoke<Any>(0x515292C2, p0); } // 0x515292C2
	nativeDecl void REQUEST_WEAPON_ASSET(Any p0, Any p1, Any p2) { invoke<Void>(0x65D139A5, p0, p1, p2); } // 0x65D139A5
	nativeDecl BOOL HAS_WEAPON_ASSET_LOADED(Any p0) { return invoke<BOOL>(0x1891D5BB, p0); } // 0x1891D5BB
	nativeDecl void REMOVE_WEAPON_ASSET(Any p0) { invoke<Void>(0x2C0DFE3C, p0); } // 0x2C0DFE3C
	nativeDecl Any CREATE_WEAPON_OBJECT(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<Any>(0x62F5987F, p0, p1, p2, p3, p4, p5, p6); } // 0x62F5987F
	nativeDecl void GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(Any p0, Any p1) { invoke<Void>(0xF7612A37, p0, p1); } // 0xF7612A37
	nativeDecl void REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(Any p0, Any p1) { invoke<Void>(0xA6E7ED3C, p0, p1); } // 0xA6E7ED3C
	nativeDecl BOOL HAS_WEAPON_GOT_WEAPON_COMPONENT(Any p0, Any p1) { return invoke<BOOL>(0x1D368510, p0, p1); } // 0x1D368510
	nativeDecl void GIVE_WEAPON_OBJECT_TO_PED(Any p0, Any p1) { invoke<Void>(0x639AF3EF, p0, p1); } // 0x639AF3EF
	nativeDecl Any _0xB1817BAA(Any p0, Any p1) { return invoke<Any>(0xB1817BAA, p0, p1); } // 0xB1817BAA
	nativeDecl Any GET_WEAPON_OBJECT_FROM_PED(Any p0) { return invoke<Any>(0xDF939A38, p0); } // 0xDF939A38
	nativeDecl void SET_PED_WEAPON_TINT_INDEX(Ped PedHandle, Hash WeaponHash, int ColorIndex) { invoke<Void>(0xEB2A7B23, PedHandle, WeaponHash, ColorIndex); } // 0xEB2A7B23
	nativeDecl Any GET_PED_WEAPON_TINT_INDEX(Any p0, Any p1) { return invoke<Any>(0x3F9C90A7, p0, p1); } // 0x3F9C90A7
	nativeDecl void SET_WEAPON_OBJECT_TINT_INDEX(Any p0, Any p1) { invoke<Void>(0x44ACC1DA, p0, p1); } // 0x44ACC1DA
	nativeDecl Any GET_WEAPON_OBJECT_TINT_INDEX(Any p0) { return invoke<Any>(0xD91D9576, p0); } // 0xD91D9576
	nativeDecl Any GET_WEAPON_TINT_COUNT(Any p0) { return invoke<Any>(0x99E4EAAB, p0); } // 0x99E4EAAB
	nativeDecl Any GET_WEAPON_HUD_STATS(Any p0, Any p1) { return invoke<Any>(0xA9AD3D98, p0, p1); } // 0xA9AD3D98
	nativeDecl Any GET_WEAPON_COMPONENT_HUD_STATS(Any p0, Any p1) { return invoke<Any>(0xBB5498F4, p0, p1); } // 0xBB5498F4
	nativeDecl Any GET_WEAPON_CLIP_SIZE(Any p0) { return invoke<Any>(0x8D515E66, p0); } // 0x8D515E66
	nativeDecl void _0xB4F44C6E(Any p0, Any p1, Any p2) { invoke<Void>(0xB4F44C6E, p0, p1, p2); } // 0xB4F44C6E
	nativeDecl Any _0xEC2E5304(Any p0, Any p1) { return invoke<Any>(0xEC2E5304, p0, p1); } // 0xEC2E5304
	nativeDecl void _0xE3BD00F9(Any p0) { invoke<Void>(0xE3BD00F9, p0); } // 0xE3BD00F9
	nativeDecl Any _0xBAF7BFBE(Any p0) { return invoke<Any>(0xBAF7BFBE, p0); } // 0xBAF7BFBE
	nativeDecl Any SET_WEAPON_SMOKEGRENADE_ASSIGNED(Any p0) { return invoke<Any>(0x76876154, p0); } // 0x76876154
	nativeDecl Any _0xB0127EA7(Any p0) { return invoke<Any>(0xB0127EA7, p0); } // 0xB0127EA7
	nativeDecl void SET_WEAPON_ANIMATION_OVERRIDE(Any p0, Any p1) { invoke<Void>(0xA5DF7484, p0, p1); } // 0xA5DF7484
	nativeDecl Any GET_WEAPON_DAMAGE_TYPE(Any p0) { return invoke<Any>(0x013AFC13, p0); } // 0x013AFC13
	nativeDecl void _0x64646F1D(Any p0) { invoke<Void>(0x64646F1D, p0); } // 0x64646F1D
	nativeDecl Any _0x135E7AD4(Any p0) { return invoke<Any>(0x135E7AD4, p0); } // 0x135E7AD4
}

namespace ITEMSET
{
	nativeDecl Any CREATE_ITEMSET(Any p0) { return invoke<Any>(0x0A113B2C, p0); } // 0x0A113B2C
	nativeDecl void DESTROY_ITEMSET(Any p0) { invoke<Void>(0x83CE1A4C, p0); } // 0x83CE1A4C
	nativeDecl BOOL IS_ITEMSET_VALID(Any p0) { return invoke<BOOL>(0xD201FC29, p0); } // 0xD201FC29
	nativeDecl Any ADD_TO_ITEMSET(Any p0, Any p1) { return invoke<Any>(0x6B0FE61B, p0, p1); } // 0x6B0FE61B
	nativeDecl void REMOVE_FROM_ITEMSET(Any p0, Any p1) { invoke<Void>(0xA9565228, p0, p1); } // 0xA9565228
	nativeDecl Any GET_ITEMSET_SIZE(Any p0) { return invoke<Any>(0x2B31F41A, p0); } // 0x2B31F41A
	nativeDecl Any GET_INDEXED_ITEM_IN_ITEMSET(Any p0, Any p1) { return invoke<Any>(0x3F712874, p0, p1); } // 0x3F712874
	nativeDecl BOOL IS_IN_ITEMSET(Any p0, Any p1) { return invoke<BOOL>(0x0D4B9730, p0, p1); } // 0x0D4B9730
	nativeDecl void CLEAN_ITEMSET(Any p0) { invoke<Void>(0x919A4858, p0); } // 0x919A4858
}

namespace STREAMING
{
	nativeDecl void LOAD_ALL_OBJECTS_NOW() { invoke<Void>(0xC9DBDA90); } // 0xC9DBDA90
	nativeDecl void LOAD_SCENE(float p0, float p1, float p2) { invoke<Void>(0xB72403F5, p0, p1, p2); } // 0xB72403F5
	nativeDecl Any NETWORK_UPDATE_LOAD_SCENE() { return invoke<Any>(0xC76E023C); } // 0xC76E023C
	nativeDecl void NETWORK_STOP_LOAD_SCENE() { invoke<Void>(0x24857907); } // 0x24857907
	nativeDecl BOOL IS_NETWORK_LOADING_SCENE() { return invoke<BOOL>(0x6DCFC021); } // 0x6DCFC021
	nativeDecl void SET_INTERIOR_ACTIVE(Any p0, Any p1) { invoke<Void>(0xE1013910, p0, p1); } // 0xE1013910
	nativeDecl void REQUEST_MODEL(Hash model) { invoke<Void>(0xFFF1B500, model); } // 0xFFF1B500
	nativeDecl void _0x48CEB6B4(Any p0) { invoke<Void>(0x48CEB6B4, p0); } // 0x48CEB6B4
	nativeDecl BOOL HAS_MODEL_LOADED(Hash model) { return invoke<BOOL>(0x62BFDB37, model); } // 0x62BFDB37
	nativeDecl void _0x939243FB(Any p0, Any p1) { invoke<Void>(0x939243FB, p0, p1); } // 0x939243FB
	nativeDecl void SET_MODEL_AS_NO_LONGER_NEEDED(Hash Model) { invoke<Void>(0xAE0F069E, Model); } // 0xAE0F069E
	nativeDecl BOOL IS_MODEL_IN_CDIMAGE(Any p0) { return invoke<BOOL>(0x1094782F, p0); } // 0x1094782F
	nativeDecl BOOL IS_MODEL_VALID(Any p0) { return invoke<BOOL>(0xAF8F8E9D, p0); } // 0xAF8F8E9D
	nativeDecl BOOL IS_MODEL_A_VEHICLE(Any p0) { return invoke<BOOL>(0xFFFC85D4, p0); } // 0xFFFC85D4
	nativeDecl void REQUEST_COLLISION_AT_COORD(float x, float y, float z) { invoke<Void>(0xCD9805E7, x, y, z); } // 0xCD9805E7
	nativeDecl void REQUEST_COLLISION_FOR_MODEL(Hash vehicleHash) { invoke<Void>(0x3930C042, vehicleHash); } // 0x3930C042
	nativeDecl BOOL HAS_COLLISION_FOR_MODEL_LOADED(Any p0) { return invoke<BOOL>(0x41A094F8, p0); } // 0x41A094F8
	nativeDecl void REQUEST_ADDITIONAL_COLLISION_AT_COORD(Any p0, Any p1, Any p2) { invoke<Void>(0xC2CC1DF2, p0, p1, p2); } // 0xC2CC1DF2
	nativeDecl Any _0xCD31C872(Any p0) { return invoke<Any>(0xCD31C872, p0); } // 0xCD31C872
	nativeDecl void REQUEST_ANIM_DICT(const char* AminSet) { invoke<Void>(0xDCA96950, AminSet); } // 0xDCA96950
	nativeDecl BOOL HAS_ANIM_DICT_LOADED(const char* AminSet) { return invoke<BOOL>(0x05E6763C, AminSet); } // 0x05E6763C
	nativeDecl void REMOVE_ANIM_DICT(Any p0) { invoke<Void>(0x0AE050B5, p0); } // 0x0AE050B5
	nativeDecl void REQUEST_ANIM_SET(Any p0) { invoke<Void>(0x2988B3FC, p0); } // 0x2988B3FC
	nativeDecl BOOL HAS_ANIM_SET_LOADED(Any p0) { return invoke<BOOL>(0x4FFF397D, p0); } // 0x4FFF397D
	nativeDecl void REMOVE_ANIM_SET(Any p0) { invoke<Void>(0xD04A817A, p0); } // 0xD04A817A
	nativeDecl void REQUEST_CLIP_SET(const char* p0) { invoke<Void>(0x546C627A, p0); } // 0x546C627A
	nativeDecl BOOL HAS_CLIP_SET_LOADED(const char* p0) { return invoke<BOOL>(0x230D5455, p0); } // 0x230D5455
	nativeDecl void REMOVE_CLIP_SET(const char* p0) { invoke<Void>(0x1E21F7AA, p0); } // 0x1E21F7AA
	nativeDecl void REQUEST_IPL(const char* iplName) { invoke<Void>(0x3B70D1DB, iplName); } // 0x3B70D1DB
	nativeDecl void REMOVE_IPL(const char* iplName) { invoke<Void>(0xDF7CBD36, iplName); } // 0xDF7CBD36
	nativeDecl BOOL IS_IPL_ACTIVE(const char* iplName) { return invoke<BOOL>(0xB2C33714, iplName); } // 0xB2C33714
	nativeDecl void SET_STREAMING(Any p0) { invoke<Void>(0x27EF6CB2, p0); } // 0x27EF6CB2
	nativeDecl void SET_GAME_PAUSES_FOR_STREAMING(Any p0) { invoke<Void>(0x9211A28A, p0); } // 0x9211A28A
	nativeDecl void SET_REDUCE_PED_MODEL_BUDGET(Any p0) { invoke<Void>(0xAFCB2B86, p0); } // 0xAFCB2B86
	nativeDecl void SET_REDUCE_VEHICLE_MODEL_BUDGET(Any p0) { invoke<Void>(0xCDB4FB7E, p0); } // 0xCDB4FB7E
	nativeDecl void SET_DITCH_POLICE_MODELS(Any p0) { invoke<Void>(0x3EA7FCE4, p0); } // 0x3EA7FCE4
	nativeDecl Any GET_NUMBER_OF_STREAMING_REQUESTS() { return invoke<Any>(0xC2EE9A02); } // 0xC2EE9A02
	nativeDecl void REQUEST_PTFX_ASSET() { invoke<Void>(0x2C649263); } // 0x2C649263
	nativeDecl BOOL HAS_PTFX_ASSET_LOADED() { return invoke<BOOL>(0x3EFF96BE); } // 0x3EFF96BE
	nativeDecl void REMOVE_PTFX_ASSET() { invoke<Void>(0xC10F178C); } // 0xC10F178C
	nativeDecl void _REQUEST_DLC_PTFX_ASSET(const char* FX) { invoke<Void>(0xCFEA19A9, FX); } // 0xCFEA19A9
	nativeDecl Any _HAS_DLC_PTFX_LOADED(const char* FX) { return invoke<Any>(0x9ACC6446, FX); } // 0x9ACC6446
	nativeDecl void _REMOVE_DLC_PTFX_ASSET(const char* FX) { invoke<Void>(0xC44762A1, FX); } // 0xC44762A1
	nativeDecl void SET_VEHICLE_POPULATION_BUDGET(Any p0) { invoke<Void>(0x1D56993C, p0); } // 0x1D56993C
	nativeDecl void SET_PED_POPULATION_BUDGET(Any p0) { invoke<Void>(0xD2D026CD, p0); } // 0xD2D026CD
	nativeDecl void CLEAR_FOCUS() { invoke<Void>(0x34D91E7A); } // 0x34D91E7A
	nativeDecl void _0x14680A60(float p0, float p1, float p2, float p3, float p4, float p5) { invoke<Void>(0x14680A60, p0, p1, p2, p3, p4, p5); } // 0x14680A60
	nativeDecl void SET_FOCUS_ENTITY(Any p0) { invoke<Void>(0x18DB04AC, p0); } // 0x18DB04AC
	nativeDecl BOOL IS_ENTITY_FOCUS(Any p0) { return invoke<BOOL>(0xB456D707, p0); } // 0xB456D707
	nativeDecl void _0x403CD434(Any p0, Any p1) { invoke<Void>(0x403CD434, p0, p1); } // 0x403CD434
	nativeDecl void _0xA07BAEB9(Any p0) { invoke<Void>(0xA07BAEB9, p0); } // 0xA07BAEB9
	nativeDecl Any _0x10B6AB36(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0x10B6AB36, p0, p1, p2, p3, p4, p5); } // 0x10B6AB36
	nativeDecl Any _0x72344191(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoke<Any>(0x72344191, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x72344191
	nativeDecl Any _0xC0157255(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<Any>(0xC0157255, p0, p1, p2, p3, p4, p5, p6); } // 0xC0157255
	nativeDecl void _0xE80F8ABE(Any p0) { invoke<Void>(0xE80F8ABE, p0); } // 0xE80F8ABE
	nativeDecl Any _0x1B3521F4(Any p0) { return invoke<Any>(0x1B3521F4, p0); } // 0x1B3521F4
	nativeDecl Any _0x42CFE9C0(Any p0) { return invoke<Any>(0x42CFE9C0, p0); } // 0x42CFE9C0
	nativeDecl Any _0x56253356() { return invoke<Any>(0x56253356); } // 0x56253356
	nativeDecl Any NEW_LOAD_SCENE_START(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoke<Any>(0xDF9C38B6, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xDF9C38B6
	nativeDecl Any _0xFA037FEB(float p0, float p1, float p2, float p3, Any p4) { return invoke<Any>(0xFA037FEB, p0, p1, p2, p3, p4); } // 0xFA037FEB
	nativeDecl void NEW_LOAD_SCENE_STOP() { invoke<Void>(0x7C05B1F6); } // 0x7C05B1F6
	nativeDecl BOOL IS_NEW_LOAD_SCENE_ACTIVE() { return invoke<BOOL>(0xAD234B7F); } // 0xAD234B7F
	nativeDecl BOOL IS_NEW_LOAD_SCENE_LOADED() { return invoke<BOOL>(0x3ECD839F); } // 0x3ECD839F
	nativeDecl Any _0xEAA51103() { return invoke<Any>(0xEAA51103); } // 0xEAA51103
	nativeDecl void START_PLAYER_SWITCH(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x0829E975, p0, p1, p2, p3); } // 0x0829E975
	nativeDecl void STOP_PLAYER_SWITCH() { invoke<Void>(0x2832C010); } // 0x2832C010
	nativeDecl Any STOP_PLAYER_REMAIN_ARCADE() { return invoke<Any>(0x56135ACC); } // 0x56135ACC
	nativeDecl Any GET_PLAYER_SWITCH_TYPE() { return invoke<Any>(0x280DC015); } // 0x280DC015
	nativeDecl Any GET_IDEAL_PLAYER_SWITCH_TYPE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0xD5A450F1, p0, p1, p2, p3, p4, p5); } // 0xD5A450F1
	nativeDecl Any GET_PLAYER_SWITCH_STATE() { return invoke<Any>(0x39A0E1F2); } // 0x39A0E1F2
	nativeDecl Any GET_PLAYER_SHORT_SWITCH_STATE() { return invoke<Any>(0x9B7BA38F); } // 0x9B7BA38F
	nativeDecl void _0xF0BD420D(Any p0) { invoke<Void>(0xF0BD420D, p0); } // 0xF0BD420D
	nativeDecl Any _0x02BA7AC2() { return invoke<Any>(0x02BA7AC2); } // 0x02BA7AC2
	nativeDecl void _0x47352E14(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0x47352E14, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x47352E14
	nativeDecl void _0x279077B0(Any p0) { invoke<Void>(0x279077B0, p0); } // 0x279077B0
	nativeDecl void _0x55CB21F9() { invoke<Void>(0x55CB21F9); } // 0x55CB21F9
	nativeDecl void _0x1084F2F4() { invoke<Void>(0x1084F2F4); } // 0x1084F2F4
	nativeDecl void _0x5B1E995D() { invoke<Void>(0x5B1E995D); } // 0x5B1E995D
	nativeDecl void _0x4B4B9A13() { invoke<Void>(0x4B4B9A13); } // 0x4B4B9A13
	nativeDecl Any _0x408F7148() { return invoke<Any>(0x408F7148); } // 0x408F7148
	nativeDecl void _0xFB4D062D(Any p0, Any p1, Any p2) { invoke<Void>(0xFB4D062D, p0, p1, p2); } // 0xFB4D062D
	nativeDecl void _0x2349373B(Any p0) { invoke<Void>(0x2349373B, p0); } // 0x2349373B
	nativeDecl Any _0x74C16879() { return invoke<Any>(0x74C16879); } // 0x74C16879
	nativeDecl Any SET_PLAYER_INVERTED_UP() { return invoke<Any>(0x569847E3); } // 0x569847E3
	nativeDecl Any _0xC7A3D279() { return invoke<Any>(0xC7A3D279); } // 0xC7A3D279
	nativeDecl Any DESTROY_PLAYER_IN_PAUSE_MENU() { return invoke<Any>(0x90F64284); } // 0x90F64284
	nativeDecl Any _0x7154B6FD() { return invoke<Any>(0x7154B6FD); } // 0x7154B6FD
	nativeDecl void _0xE5612C1A(Any p0) { invoke<Void>(0xE5612C1A, p0); } // 0xE5612C1A
	nativeDecl void _0x9CD6A451(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x9CD6A451, p0, p1, p2, p3); } // 0x9CD6A451
	nativeDecl void _0x4267DA87() { invoke<Void>(0x4267DA87); } // 0x4267DA87
	nativeDecl void _0x9FA4AF99(Any p0) { invoke<Void>(0x9FA4AF99, p0); } // 0x9FA4AF99
	nativeDecl void _0x9EF0A9CF(Any p0, Any p1) { invoke<Void>(0x9EF0A9CF, p0, p1); } // 0x9EF0A9CF
	nativeDecl void _0xF2CDD6A8() { invoke<Void>(0xF2CDD6A8); } // 0xF2CDD6A8
	nativeDecl Any _0x17B0A1CD() { return invoke<Any>(0x17B0A1CD); } // 0x17B0A1CD
	nativeDecl void _0x3DA7AA5D() { invoke<Void>(0x3DA7AA5D); } // 0x3DA7AA5D
	nativeDecl Any _0xDAB4BAC0() { return invoke<Any>(0xDAB4BAC0); } // 0xDAB4BAC0
	nativeDecl void PREFETCH_SRL(Any p0) { invoke<Void>(0x37BE2FBB, p0); } // 0x37BE2FBB
	nativeDecl BOOL IS_SRL_LOADED() { return invoke<BOOL>(0x670FA2A6); } // 0x670FA2A6
	nativeDecl void BEGIN_SRL() { invoke<Void>(0x24F49427); } // 0x24F49427
	nativeDecl void END_SRL() { invoke<Void>(0x1977C56A); } // 0x1977C56A
	nativeDecl void SET_SRL_TIME(Any p0) { invoke<Void>(0x30F8A487, p0); } // 0x30F8A487
	nativeDecl void _0x814D0752(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x814D0752, p0, p1, p2, p3, p4, p5); } // 0x814D0752
	nativeDecl void _0x62F02485(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x62F02485, p0, p1, p2, p3); } // 0x62F02485
	nativeDecl void _0xA6459CAA(Any p0) { invoke<Void>(0xA6459CAA, p0); } // 0xA6459CAA
	nativeDecl void _0xF8F515E4(Any p0) { invoke<Void>(0xF8F515E4, p0); } // 0xF8F515E4
	nativeDecl void SET_HD_AREA(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x80BAA035, p0, p1, p2, p3); } // 0x80BAA035
	nativeDecl void CLEAR_HD_AREA() { invoke<Void>(0x7CAC6FA0); } // 0x7CAC6FA0
	nativeDecl void _0xE243B2AF() { invoke<Void>(0xE243B2AF); } // 0xE243B2AF
	nativeDecl void _0x897A510F() { invoke<Void>(0x897A510F); } // 0x897A510F
	nativeDecl Any _0xC0E83320(Any p0) { return invoke<Any>(0xC0E83320, p0); } // 0xC0E83320
	nativeDecl void _0x1C576388(Any p0) { invoke<Void>(0x1C576388, p0); } // 0x1C576388
	nativeDecl Any _0x3E9C4CBE() { return invoke<Any>(0x3E9C4CBE); } // 0x3E9C4CBE
}

namespace SCRIPT
{
	nativeDecl void REQUEST_SCRIPT(const char* scriptName) { invoke<Void>(0xE26B2666, scriptName); } // 0xE26B2666
	nativeDecl void SET_SCRIPT_AS_NO_LONGER_NEEDED(const char* scriptName) { invoke<Void>(0x6FCB7795, scriptName); } // 0x6FCB7795
	nativeDecl BOOL HAS_SCRIPT_LOADED(const char* scriptName) { return invoke<BOOL>(0x5D67F751, scriptName); } // 0x5D67F751
	nativeDecl BOOL DOES_SCRIPT_EXIST(const char* scriptName) { return invoke<BOOL>(0xDEAB87AB, scriptName); } // 0xDEAB87AB
	nativeDecl void REQUEST_SCRIPT_WITH_NAME_HASH(Hash scriptHash) { invoke<Void>(0x1C68D9DC, scriptHash); } // 0x1C68D9DC
	nativeDecl void SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(Hash scriptHash) { invoke<Void>(0x96C26F66, scriptHash); } // 0x96C26F66
	nativeDecl BOOL HAS_SCRIPT_WITH_NAME_HASH_LOADED(Any scriptHash) { return invoke<BOOL>(0x06674818, scriptHash); } // 0x06674818
	nativeDecl void TERMINATE_THREAD(int threadId) { invoke<Void>(0x253FD520, threadId); } // 0x253FD520
	nativeDecl BOOL IS_THREAD_ACTIVE(int threadId) { return invoke<BOOL>(0x78D7A5A0, threadId); } // 0x78D7A5A0
	nativeDecl const char* _GET_THREAD_NAME(int threadId) { return invoke<const char*>(0xBE7ACD89, threadId); } // 0xBE7ACD89
	nativeDecl void SCRIPT_THREAD_ITERATOR_RESET() { invoke<Void>(0xBB4E2F66); } // 0xBB4E2F66
	nativeDecl Any SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID() { return invoke<Any>(0x1E28B28F); } // 0x1E28B28F
	nativeDecl int GET_ID_OF_THIS_THREAD() { return invoke<int>(0xDE524830); } // 0xDE524830
	nativeDecl void TERMINATE_THIS_THREAD() { invoke<Void>(0x3CD9CBB7); } // 0x3CD9CBB7
	nativeDecl int GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Hash ScriptHash) { return invoke<int>(0x029D3841, ScriptHash); } // 0x029D3841
	nativeDecl const char* GET_THIS_SCRIPT_NAME() { return invoke<const char*>(0xA40FD5D9); } // 0xA40FD5D9
	nativeDecl Hash GET_HASH_OF_THIS_SCRIPT_NAME() { return invoke<Hash>(0x2BEE1F45); } // 0x2BEE1F45
	nativeDecl int GET_NUMBER_OF_EVENTS(int eventGroup) { return invoke<Any>(0xA3525D60, eventGroup); } // 0xA3525D60
	nativeDecl BOOL GET_EVENT_EXISTS(int eventGroup, int eventIndex) { return invoke<BOOL>(0xA1B447B5, eventGroup, eventIndex); } // 0xA1B447B5
	nativeDecl int GET_EVENT_AT_INDEX(int eventGroup, int eventIndex) { return invoke<int>(0xB49C1442, eventGroupint, eventIndex); } // 0xB49C1442
	nativeDecl BOOL GET_EVENT_DATA(int eventGroup, int eventIndex, Any* eventData, int eventDataSize) { return invoke<BOOL>(0x4280F92F, eventGroup, eventIndex, eventData, eventDataSize); } // 0x4280F92F
	nativeDecl void TRIGGER_SCRIPT_EVENT(int always1, Any* argsStruct, int argsStructCount, int playerbitset) { invoke<Void>(0x54763B35, always1, argsStruct, argsStructCount, playerbitset); } // 0x54763B35
	nativeDecl void SHUTDOWN_LOADING_SCREEN() { invoke<Void>(0xA2826D17); } // 0xA2826D17
	nativeDecl void SET_NO_LOADING_SCREEN(BOOL toggle) { invoke<Void>(0xC8055034, toggle); } // 0xC8055034
	nativeDecl void COMMIT_TO_LOADINGSCREEN_SELCTION() { invoke<Void>(0xB03BCCDF); } // 0xB03BCCDF
}

namespace UI
{
	nativeDecl void _SET_HUD_COLOUR(int hudIndex, int r, int g, int b, int a) { invoke<Void>(0xF6E7E92B, hudIndex, r, g, b, a); } // 0xF6E7E92B
	nativeDecl void _0xCB7C8994(const char* p0) { invoke<Void>(0xCB7C8994, p0); } // 0xCB7C8994
	nativeDecl void _0x903F5EE4(int p0) { invoke<Void>(0x903F5EE4, p0); } // 0x903F5EE4
	nativeDecl void _0x94119534() { invoke<Void>(0x94119534); } // 0x94119534
	nativeDecl void _0x71077FBD() { invoke<Void>(0x71077FBD); } // 0x71077FBD
	nativeDecl Any _0xB8B3A5D0() { return invoke<Any>(0xB8B3A5D0); } // 0xB8B3A5D0
	nativeDecl void _0xA7C8594B(Any p0) { invoke<Void>(0xA7C8594B, p0); } // 0xA7C8594B
	nativeDecl void _0x1DA7E41A(Any p0) { invoke<Void>(0x1DA7E41A, p0); } // 0x1DA7E41A
	nativeDecl void _0x1E63088A() { invoke<Void>(0x1E63088A); } // 0x1E63088A
	nativeDecl void _0x5205C6F5() { invoke<Void>(0x5205C6F5); } // 0x5205C6F5
	nativeDecl void _0xECA8ACB9(Any p0) { invoke<Void>(0xECA8ACB9, p0); } // 0xECA8ACB9
	nativeDecl void _0x520FCB6D() { invoke<Void>(0x520FCB6D); } // 0x520FCB6D
	nativeDecl void _0xC8BAB2F2() { invoke<Void>(0xC8BAB2F2); } // 0xC8BAB2F2
	nativeDecl void _0x4D0449C6() { invoke<Void>(0x4D0449C6); } // 0x4D0449C6
	nativeDecl void _0xD3F40140() { invoke<Void>(0xD3F40140); } // 0xD3F40140
	nativeDecl Any _0xC5223796() { return invoke<Any>(0xC5223796); } // 0xC5223796
	nativeDecl void _0x709B4BCB() { invoke<Void>(0x709B4BCB); } // 0x709B4BCB
	nativeDecl void _0x4A4A40A4() { invoke<Void>(0x4A4A40A4); } // 0x4A4A40A4
	nativeDecl Any _0x294405D4() { return invoke<Any>(0x294405D4); } // 0x294405D4
	nativeDecl void _0xF881AB87() { invoke<Void>(0xF881AB87); } // 0xF881AB87
	nativeDecl void _0x1D6859CA() { invoke<Void>(0x1D6859CA); } // 0x1D6859CA
	nativeDecl void _0xCF14D7F2(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xCF14D7F2, p0, p1, p2, p3); } // 0xCF14D7F2
	nativeDecl void _0x24A97AF8(Any p0) { invoke<Void>(0x24A97AF8, p0); } // 0x24A97AF8
	nativeDecl void _0x44018EDB(Any p0) { invoke<Void>(0x44018EDB, p0); } // 0x44018EDB
	nativeDecl void _0xA4524B23() { invoke<Void>(0xA4524B23); } // 0xA4524B23
	nativeDecl void _0xAFA1148B() { invoke<Void>(0xAFA1148B); } // 0xAFA1148B
	nativeDecl void _0x3CD4307C() { invoke<Void>(0x3CD4307C); } // 0x3CD4307C
	nativeDecl void _0x574EE85C(const char* type) { invoke<Void>(0x574EE85C, type); } // 0x574EE85C
	nativeDecl Any _0xED130FA1(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<Any>(0xED130FA1, p0, p1, p2, p3, p4, p5, p6); } // 0xED130FA1
	nativeDecl int _SET_NOTIFICATION_MESSAGE(const char* picName1, const char* picName2, BOOL flash, int iconType, const char* sender, const char* subject) { return invoke<Any>(0xE7E3C98B, picName1, picName2, flash, iconType, sender, subject); } // 0xE7E3C98B
	nativeDecl Any _0x0EB382B7(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<Any>(0x0EB382B7, p0, p1, p2, p3, p4, p5, p6); } // 0x0EB382B7
	nativeDecl Any _0x3E807FE3(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoke<Any>(0x3E807FE3, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x3E807FE3
	nativeDecl Any _0xDEB491C8(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoke<Any>(0xDEB491C8, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xDEB491C8
	nativeDecl int _DRAW_NOTIFICATION(BOOL blink, BOOL p1) { return invoke<int>(0x08F7AF78, blink, p1); } // 0x08F7AF78
	nativeDecl Any _0x57B8D0D4(Any p0, Any p1) { return invoke<Any>(0x57B8D0D4, p0, p1); } // 0x57B8D0D4
	nativeDecl Any _0x02BCAF9B(Any p0, Any p1) { return invoke<Any>(0x02BCAF9B, p0, p1); } // 0x02BCAF9B
	nativeDecl Any _0x02DED2B8(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x02DED2B8, p0, p1, p2, p3, p4); } // 0x02DED2B8
	nativeDecl Any _0xA9CCEF66(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return invoke<Any>(0xA9CCEF66, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0xA9CCEF66
	nativeDecl Any _0x88B9B909(Any p0, Any p1, int* p2, Any p3, Any p4, Any p5, Any p6, const char* p7, Any p8, Any p9, Any p10) { return invoke<Any>(0x88B9B909, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x88B9B909
	nativeDecl Any _0xE05E7052(Any p0, Any p1, Any p2) { return invoke<Any>(0xE05E7052, p0, p1, p2); } // 0xE05E7052
	nativeDecl Any _0x4FA43BA4(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x4FA43BA4, p0, p1, p2, p3); } // 0x4FA43BA4
	nativeDecl Any _0x8C90D22F(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0x8C90D22F, p0, p1, p2, p3, p4, p5); } // 0x8C90D22F
	nativeDecl Any _0x8E319AB8(Any p0, Any p1) { return invoke<Any>(0x8E319AB8, p0, p1); } // 0x8E319AB8
	nativeDecl Any _0x76FB0F21(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x76FB0F21, p0, p1, p2, p3); } // 0x76FB0F21
	nativeDecl Any _0x5E93FBFA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0x5E93FBFA, p0, p1, p2, p3, p4, p5); } // 0x5E93FBFA
	nativeDecl void _0xF42C43C7(const char* type) { invoke<Void>(0xF42C43C7, type); } // 0xF42C43C7
	nativeDecl void _0x38F82261(int Time, int unk) { invoke<Void>(0x38F82261, Time, unk); } // 0x38F82261
	nativeDecl void _0xDD524A11(Any p0) { invoke<Void>(0xDD524A11, p0); } // 0xDD524A11
	nativeDecl Any _0x672EFB45() { return invoke<Any>(0x672EFB45); } // 0x672EFB45
	nativeDecl void BEGIN_TEXT_COMMAND_DISPLAY_TEXT(const char* text) { invoke<Void>(0x3E35563E, text); } // 0x3E35563E BEGIN_TEXT_COMMAND_DISPLAY_TEXT
	nativeDecl void END_TEXT_COMMAND_DISPLAY_TEXT(float x, float y) { invoke<Void>(0x6F8350CE, x, y); } // 0x6F8350CE
	nativeDecl void BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(const char* text) { invoke<Void>(0x51E7A037, text); } // 0x51E7A037
	nativeDecl float END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(BOOL p0) { return invoke<float>(0xD12A643A, p0); } // 0xD12A643A
	nativeDecl void BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(const char* text) { invoke<Void>(0x94B82066, text); } // 0x94B82066
	nativeDecl int END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(float x, float y) { return invoke<int>(0xAA318785, x, y); } // 0xAA318785
	nativeDecl void _SET_TEXT_COMPONENT_FORMAT(const char* p0) { invoke<Void>(0xB245FC10, p0); } // 0xB245FC10
	nativeDecl void _0xB59B530D(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xB59B530D, p0, p1, p2, p3); } // 0xB59B530D
	nativeDecl void _0x00E20F2D(Any p0) { invoke<Void>(0x00E20F2D, p0); } // 0x00E20F2D
	nativeDecl Any _0xF63A13EC(Any p0) { return invoke<Any>(0xF63A13EC, p0); } // 0xF63A13EC
	nativeDecl void _0xF4C211F6(Any p0) { invoke<Void>(0xF4C211F6, p0); } // 0xF4C211F6
	nativeDecl void _0xE8E59820(Any p0) { invoke<Void>(0xE8E59820, p0); } // 0xE8E59820
	nativeDecl void _0x0E103475(Any p0) { invoke<Void>(0x0E103475, p0); } // 0x0E103475
	nativeDecl void _0x2944A6C5(Any p0) { invoke<Void>(0x2944A6C5, p0); } // 0x2944A6C5
	nativeDecl void _0x550665AE(Any p0) { invoke<Void>(0x550665AE, p0); } // 0x550665AE
	nativeDecl void _0x67785AF2() { invoke<Void>(0x67785AF2); } // 0x67785AF2
	nativeDecl void _0xBF855650(Any p0) { invoke<Void>(0xBF855650, p0); } // 0xBF855650
	nativeDecl void _0x6E7FDA1C(Any p0) { invoke<Void>(0x6E7FDA1C, p0); } // 0x6E7FDA1C
	nativeDecl void ADD_TEXT_COMPONENT_INTEGER(int text) { invoke<Void>(0xFE272A57, text); } // 0xFE272A57
	nativeDecl void ADD_TEXT_COMPONENT_FLOAT(float text, float DecimalPlaces) { invoke<Void>(0x24D78013, text, DecimalPlaces); } // 0x24D78013
	nativeDecl void _ADD_TEXT_COMPONENT_ITEM_STRING(const char* p0) { invoke<Void>(0xDCE05406, p0); } // 0xDCE05406
	nativeDecl void _0x150E03B6(Any p0) { invoke<Void>(0x150E03B6, p0); } // 0x150E03B6
	nativeDecl void _0x5DE98F0A(Any p0) { invoke<Void>(0x5DE98F0A, p0); } // 0x5DE98F0A
	nativeDecl void ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(const char* text) { invoke<Void>(0x27A244D8, text); } // 0x27A244D8
	nativeDecl void ADD_TEXT_COMPONENT_SUBSTRING_TIME(Any p0, Any p1) { invoke<Void>(0x135B3CD0, p0, p1); } // 0x135B3CD0
	nativeDecl void _0x12929BDF(Any p0, Any p1) { invoke<Void>(0x12929BDF, p0, p1); } // 0x12929BDF
	nativeDecl void _0x65E1D404(Any p0, Any p1) { invoke<Void>(0x65E1D404, p0, p1); } // 0x65E1D404
	nativeDecl void ADD_TEXT_COMPONENT_SUBSTRING_WEBSITE(const char* text) { invoke<Void>(0xC736999E, text); } // 0xC736999E
	nativeDecl void ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(const char* text) { invoke<Void>(0x0829A799, text); } // 0x0829A799
	nativeDecl void _0x6F1A1901(Any p0) { invoke<Void>(0x6F1A1901, p0); } // 0x6F1A1901
	nativeDecl const char* _0x34A396EE(const char* text, int position, int length) { return invoke<const char*>(0x34A396EE, text, position, length); } // 0x34A396EE
	nativeDecl Any _0x0183A66C(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x0183A66C, p0, p1, p2, p3); } // 0x0183A66C
	nativeDecl Any _0xFA6373BB(Any p0, Any p1, Any p2) { return invoke<Any>(0xFA6373BB, p0, p1, p2); } // 0xFA6373BB
	nativeDecl const char* _0x95C4B5AD(const char* p0) { return invoke<const char*>(0x95C4B5AD, p0); } // 0x95C4B5AD
	nativeDecl void CLEAR_PRINTS() { invoke<Void>(0x216CB1C5); } // 0x216CB1C5
	nativeDecl void CLEAR_BRIEF() { invoke<Void>(0x9F75A929); } // 0x9F75A929
	nativeDecl void CLEAR_ALL_HELP_MESSAGES() { invoke<Void>(0x9E5D9198); } // 0x9E5D9198
	nativeDecl void CLEAR_THIS_PRINT(Any p0) { invoke<Void>(0x06878327, p0); } // 0x06878327
	nativeDecl void CLEAR_SMALL_PRINTS() { invoke<Void>(0xA869A238); } // 0xA869A238
	nativeDecl BOOL DOES_TEXT_BLOCK_EXIST(Any p0) { return invoke<BOOL>(0x96F74838, p0); } // 0x96F74838
	nativeDecl void REQUEST_ADDITIONAL_TEXT(const char* gxt, int slot) { invoke<Void>(0x9FA9175B, gxt, slot); } // 0x9FA9175B
	nativeDecl void _0xF4D27EBE(Any p0, Any p1) { invoke<Void>(0xF4D27EBE, p0, p1); } // 0xF4D27EBE
	nativeDecl BOOL HAS_ADDITIONAL_TEXT_LOADED(Any p0) { return invoke<BOOL>(0xB0E56045, p0); } // 0xB0E56045
	nativeDecl void CLEAR_ADDITIONAL_TEXT(Any p0, Any p1) { invoke<Void>(0x518141E0, p0, p1); } // 0x518141E0
	nativeDecl BOOL IS_STREAMING_ADDITIONAL_TEXT(Any p0) { return invoke<BOOL>(0xF079E4EB, p0); } // 0xF079E4EB
	nativeDecl BOOL HAS_THIS_ADDITIONAL_TEXT_LOADED(Any p0, Any p1) { return invoke<BOOL>(0x80A52040, p0, p1); } // 0x80A52040
	nativeDecl BOOL IS_MESSAGE_BEING_DISPLAYED() { return invoke<BOOL>(0x6A77FE8D); } // 0x6A77FE8D
	nativeDecl BOOL DOES_TEXT_LABEL_EXIST(Any p0) { return invoke<BOOL>(0x6ECAE560, p0); } // 0x6ECAE560
	nativeDecl Any GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL(Any p0) { return invoke<Any>(0xA4CA7BE5, p0); } // 0xA4CA7BE5
	nativeDecl int GET_LENGTH_OF_LITERAL_STRING(const char* string) { return invoke<int>(0x99379D55, string); } // 0x99379D55
	nativeDecl Any _0x7DBC0764(Any p0) { return invoke<Any>(0x7DBC0764, p0); } // 0x7DBC0764
	nativeDecl Any GET_STREET_NAME_FROM_HASH_KEY(Any p0) { return invoke<Any>(0x1E8E310C, p0); } // 0x1E8E310C
	nativeDecl BOOL IS_HUD_PREFERENCE_SWITCHED_ON() { return invoke<BOOL>(0xC3BC1B4F); } // 0xC3BC1B4F
	nativeDecl BOOL IS_RADAR_PREFERENCE_SWITCHED_ON() { return invoke<BOOL>(0x14AEAA28); } // 0x14AEAA28
	nativeDecl BOOL IS_SUBTITLE_PREFERENCE_SWITCHED_ON() { return invoke<BOOL>(0x63BA19F5); } // 0x63BA19F5
	nativeDecl void DISPLAY_HUD(BOOL Toggle) { invoke<Void>(0xD10E4E31, Toggle); } // 0xD10E4E31
	nativeDecl void _0xC380AC85() { invoke<Void>(0xC380AC85); } // 0xC380AC85
	nativeDecl void DISPLAY_HUD_WHEN_PAUSED_THIS_FRAME() { invoke<Void>(0xC47AB1B0); } // 0xC47AB1B0
	nativeDecl void DISPLAY_RADAR(BOOL Toggle) { invoke<Void>(0x52816BD4, Toggle); } // 0x52816BD4
	nativeDecl BOOL IS_HUD_HIDDEN() { return invoke<BOOL>(0x40BADA1D); } // 0x40BADA1D
	nativeDecl BOOL IS_RADAR_HIDDEN() { return invoke<BOOL>(0x1AB3B954); } // 0x1AB3B954
	nativeDecl void SET_BLIP_ROUTE(Object blip, int enabled) { invoke<Void>(0x3E160C90, blip, enabled); } // 0x3E160C90
	nativeDecl void SET_BLIP_ROUTE_COLOUR(Any p0, Any p1) { invoke<Void>(0xDDE7C65C, p0, p1); } // 0xDDE7C65C
	nativeDecl void ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(Any p0) { invoke<Void>(0xB58B25BD, p0); } // 0xB58B25BD
	nativeDecl void _0x9854485F(Any p0) { invoke<Void>(0x9854485F, p0); } // 0x9854485F
	nativeDecl void RESPONDING_AS_TEMP(Any p0) { invoke<Void>(0xDCA3F423, p0); } // 0xDCA3F423
	nativeDecl void SET_RADAR_ZOOM(int p0) { invoke<Void>(0x2A50D1A6, p0); } // 0x2A50D1A6
	nativeDecl void _0x25EC28C0(Any p0, Any p1) { invoke<Void>(0x25EC28C0, p0, p1); } // 0x25EC28C0
	nativeDecl void _0x09CF1CE5(Any p0) { invoke<Void>(0x09CF1CE5, p0); } // 0x09CF1CE5
	nativeDecl void _0xE8D3A910() { invoke<Void>(0xE8D3A910); } // 0xE8D3A910
	nativeDecl void GET_HUD_COLOUR(int p0, int* p1, int* p2, int* p3, int* p4) { invoke<Void>(0x63F66A0B, p0, p1, p2, p3, p4); } // 0x63F66A0B
	nativeDecl void _0x0E41E45C(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x0E41E45C, p0, p1, p2, p3); } // 0x0E41E45C
	nativeDecl void _0x6BE3ACA8(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x6BE3ACA8, p0, p1, p2, p3); } // 0x6BE3ACA8
	nativeDecl void _0x3B216749(Any p0, Any p1) { invoke<Void>(0x3B216749, p0, p1); } // 0x3B216749
	nativeDecl void _0xF6E7E92B(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xF6E7E92B, p0, p1, p2, p3, p4); } // 0xF6E7E92B
	nativeDecl void FLASH_ABILITY_BAR(Any p0) { invoke<Void>(0x3648960D, p0); } // 0x3648960D
	nativeDecl void SET_ABILITY_BAR_VALUE(Any p0, Any p1) { invoke<Void>(0x24E53FD8, p0, p1); } // 0x24E53FD8
	nativeDecl void FLASH_WANTED_DISPLAY(BOOL p0) { invoke<Void>(0x629F866B, p0); } // 0x629F866B
	nativeDecl float GET_RENDERED_CHARACTER_HEIGHT(float size, int font) { return invoke<float>(0x3330175B, size, font); } // 0x3330175B
	nativeDecl void SET_TEXT_SCALE(float p0, float p1) { invoke<Void>(0xB6E15B23, p0, p1); } // 0xB6E15B23
	nativeDecl void SET_TEXT_COLOUR(int R, int G, int B, int A) { invoke<Void>(0xE54DD2C8, R, G, B, A); } // 0xE54DD2C8
	nativeDecl void SET_TEXT_CENTRE(Any p0) { invoke<Void>(0xE26D39A1, p0); } // 0xE26D39A1
	nativeDecl void SET_TEXT_RIGHT_JUSTIFY(bool right) { invoke<Void>(0x45B60520, right); } // 0x45B60520
	nativeDecl void _0x68CDFA60(Any p0) { invoke<Void>(0x68CDFA60, p0); } // 0x68CDFA60
	nativeDecl void SET_TEXT_WRAP(float p0, float p1) { invoke<Void>(0x6F60AB54, p0, p1); } // 0x6F60AB54
	nativeDecl void SET_TEXT_LEADING(Any p0) { invoke<Void>(0x98CE21D4, p0); } // 0x98CE21D4
	nativeDecl void SET_TEXT_PROPORTIONAL(Any p0) { invoke<Void>(0xF49D8A08, p0); } // 0xF49D8A08
	nativeDecl void SET_TEXT_FONT(Any p0) { invoke<Void>(0x80BC530D, p0); } // 0x80BC530D
	nativeDecl void SET_TEXT_DROP_SHADOW() { invoke<Void>(0xE2A11511); } // 0xE2A11511
	nativeDecl void SET_TEXT_DROPSHADOW(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xE6587517, p0, p1, p2, p3, p4); } // 0xE6587517
	nativeDecl void SET_TEXT_OUTLINE() { invoke<Void>(0xC753412F); } // 0xC753412F
	nativeDecl void SET_TEXT_EDGE(int p0, int p1, int p2, int p3, int p4) { invoke<Void>(0x3F1A5DAB, p0, p1, p2, p3, p4); } // 0x3F1A5DAB
	nativeDecl void SET_TEXT_RENDER_ID(Any p0) { invoke<Void>(0xC5C3B7F3, p0); } // 0xC5C3B7F3
	nativeDecl Any GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID() { return invoke<Any>(0x8188935F); } // 0x8188935F
	nativeDecl Any REGISTER_NAMED_RENDERTARGET(Any p0, Any p1) { return invoke<Any>(0xFAE5D6F0, p0, p1); } // 0xFAE5D6F0
	nativeDecl BOOL IS_NAMED_RENDERTARGET_REGISTERED(Any p0) { return invoke<BOOL>(0x284057F5, p0); } // 0x284057F5
	nativeDecl Any RELEASE_NAMED_RENDERTARGET(Any p0) { return invoke<Any>(0xD3F6C892, p0); } // 0xD3F6C892
	nativeDecl void LINK_NAMED_RENDERTARGET(Any p0) { invoke<Void>(0x6844C4B9, p0); } // 0x6844C4B9
	nativeDecl Any GET_NAMED_RENDERTARGET_RENDER_ID(Any p0) { return invoke<Any>(0xF9D7A401, p0); } // 0xF9D7A401
	nativeDecl BOOL IS_NAMED_RENDERTARGET_LINKED(Any p0) { return invoke<BOOL>(0x8B52601F, p0); } // 0x8B52601F
	nativeDecl void CLEAR_HELP(int Enable) { invoke<Void>(0xE6D85741, Enable); } // 0xE6D85741
	nativeDecl BOOL IS_HELP_MESSAGE_ON_SCREEN() { return invoke<BOOL>(0x4B3C9CA9); } // 0x4B3C9CA9
	nativeDecl Any _0x812CBE0E() { return invoke<Any>(0x812CBE0E); } // 0x812CBE0E
	nativeDecl BOOL IS_HELP_MESSAGE_BEING_DISPLAYED() { return invoke<BOOL>(0xA65F262A); } // 0xA65F262A
	nativeDecl BOOL IS_HELP_MESSAGE_FADING_OUT() { return invoke<BOOL>(0x3E50AE92); } // 0x3E50AE92
	nativeDecl Any _0x87871CE0() { return invoke<Any>(0x87871CE0); } // 0x87871CE0
	nativeDecl Any _GET_BLIP_INFO_ID_ITERATOR() { return invoke<Any>(0xB9827942); } // 0xB9827942
	nativeDecl Any GET_NUMBER_OF_ACTIVE_BLIPS() { return invoke<Any>(0x144020FA); } // 0x144020FA
	nativeDecl Any GET_NEXT_BLIP_INFO_ID(Any p0) { return invoke<Any>(0x9356E92F, p0); } // 0x9356E92F
	nativeDecl Any GET_FIRST_BLIP_INFO_ID(Any p0) { return invoke<Any>(0x64C0273D, p0); } // 0x64C0273D
	nativeDecl Vector3 GET_BLIP_INFO_ID_COORD(Any p0) { return invoke<Vector3>(0xB7374A66, p0); } // 0xB7374A66
	nativeDecl Any GET_BLIP_INFO_ID_DISPLAY(Any p0) { return invoke<Any>(0xD0FC19F4, p0); } // 0xD0FC19F4
	nativeDecl Any GET_BLIP_INFO_ID_TYPE(Any p0) { return invoke<Any>(0x501D7B4E, p0); } // 0x501D7B4E
	nativeDecl Any GET_BLIP_INFO_ID_ENTITY_INDEX(Any p0) { return invoke<Any>(0xA068C40B, p0); } // 0xA068C40B
	nativeDecl Any GET_BLIP_INFO_ID_PICKUP_INDEX(Any p0) { return invoke<Any>(0x86913D37, p0); } // 0x86913D37
	nativeDecl Object GET_BLIP_FROM_ENTITY(Entity entity) { return invoke<Object>(0x005A2A47, entity); } // 0x005A2A47
	nativeDecl Any ADD_BLIP_FOR_RADIUS(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x4626756C, p0, p1, p2, p3); } // 0x4626756C
	nativeDecl Any ADD_BLIP_FOR_ENTITY(Entity entity) { return invoke<Any>(0x30822554, entity); } // 0x30822554
	nativeDecl Any ADD_BLIP_FOR_PICKUP(Any p0) { return invoke<Any>(0x16693C3A, p0); } // 0x16693C3A
	nativeDecl Any ADD_BLIP_FOR_COORD(float x, float y, float z) { return invoke<Any>(0xC6F43D0E, x, y, z); } // 0xC6F43D0E
	nativeDecl void _0xBF25E7B2(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xBF25E7B2, p0, p1, p2, p3, p4); } // 0xBF25E7B2
	nativeDecl void _0xE7E1E32B(Any p0) { invoke<Void>(0xE7E1E32B, p0); } // 0xE7E1E32B
	nativeDecl void SET_BLIP_COORDS(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x680A34D4, p0, p1, p2, p3); } // 0x680A34D4
	nativeDecl Vector3 GET_BLIP_COORDS(Any p0) { return invoke<Vector3>(0xEF6FF47B, p0); } // 0xEF6FF47B
	nativeDecl void SET_BLIP_SPRITE(Object blip, int spriteId) { invoke<Void>(0x8DBBB0B9, blip, spriteId); } // 0x8DBBB0B9
	nativeDecl Any GET_BLIP_SPRITE(Any p0) { return invoke<Any>(0x72FF2E73, p0); } // 0x72FF2E73
	nativeDecl void SET_BLIP_NAME_FROM_TEXT_FILE(int BlipID, const char* blipname) { invoke<Void>(0xAC8A5461, BlipID, blipname); } // 0xAC8A5461
	nativeDecl void SET_BLIP_NAME_TO_PLAYER_NAME(Any p0, Any p1) { invoke<Void>(0x03A0B8F9, p0, p1); } // 0x03A0B8F9
	nativeDecl void SET_BLIP_ALPHA(Any p0, Any p1) { invoke<Void>(0xA791FCCD, p0, p1); } // 0xA791FCCD
	nativeDecl Any GET_BLIP_ALPHA(Any p0) { return invoke<Any>(0x297AF6C8, p0); } // 0x297AF6C8
	nativeDecl void SET_BLIP_FADE(Any p0, Any p1, Any p2) { invoke<Void>(0xA5999031, p0, p1, p2); } // 0xA5999031
	nativeDecl void SET_BLIP_ROTATION(Any p0, Any p1) { invoke<Void>(0x6B8F44FE, p0, p1); } // 0x6B8F44FE
	nativeDecl void SET_BLIP_FLASH_TIMER(Any p0, Any p1) { invoke<Void>(0x8D5DF611, p0, p1); } // 0x8D5DF611
	nativeDecl void SET_BLIP_FLASH_INTERVAL(Any p0, Any p1) { invoke<Void>(0xEAF67377, p0, p1); } // 0xEAF67377
	nativeDecl void SET_BLIP_COLOUR(int BlipID, int Color) { invoke<Void>(0xBB3C5A41, BlipID, Color); } // 0xBB3C5A41
	nativeDecl void SET_BLIP_SECONDARY_COLOUR(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xC6384D32, p0, p1, p2, p3); } // 0xC6384D32
	nativeDecl Any GET_BLIP_COLOUR(Any p0) { return invoke<Any>(0xDD6A1E54, p0); } // 0xDD6A1E54
	nativeDecl Any GET_BLIP_HUD_COLOUR(Any p0) { return invoke<Any>(0xE88B4BC2, p0); } // 0xE88B4BC2
	nativeDecl BOOL IS_BLIP_SHORT_RANGE(Any p0) { return invoke<BOOL>(0x1226765A, p0); } // 0x1226765A
	nativeDecl BOOL IS_BLIP_ON_MINIMAP(Any p0) { return invoke<BOOL>(0x258CBA3A, p0); } // 0x258CBA3A
	nativeDecl Any _0x3E47F357(Any p0) { return invoke<Any>(0x3E47F357, p0); } // 0x3E47F357
	nativeDecl void _0x43996428(Any p0, Any p1) { invoke<Void>(0x43996428, p0, p1); } // 0x43996428
	nativeDecl void SET_BLIP_HIGH_DETAIL(Any p0, Any p1) { invoke<Void>(0xD5842BFF, p0, p1); } // 0xD5842BFF
	nativeDecl void SET_BLIP_AS_MISSION_CREATOR_BLIP(Any p0, Any p1) { invoke<Void>(0x802FB686, p0, p1); } // 0x802FB686
	nativeDecl BOOL IS_MISSION_CREATOR_BLIP(Any p0) { return invoke<BOOL>(0x24ACC4E9, p0); } // 0x24ACC4E9
	nativeDecl Any DISABLE_BLIP_NAME_FOR_VAR() { return invoke<Any>(0xFFD7476C); } // 0xFFD7476C
	nativeDecl Any _0xC5EB849A() { return invoke<Any>(0xC5EB849A); } // 0xC5EB849A
	nativeDecl void _0xA2CAAB4F(Any p0) { invoke<Void>(0xA2CAAB4F, p0); } // 0xA2CAAB4F
	nativeDecl void SET_BLIP_FLASHES(Any p0, Any p1) { invoke<Void>(0xC0047F15, p0, p1); } // 0xC0047F15
	nativeDecl void SET_BLIP_FLASHES_ALTERNATE(int BlipID, BOOL p1) { invoke<Void>(0x1A81202B, BlipID, p1); } // 0x1A81202B
	nativeDecl BOOL IS_BLIP_FLASHING(Any p0) { return invoke<BOOL>(0x52E111D7, p0); } // 0x52E111D7
	nativeDecl void SET_BLIP_AS_SHORT_RANGE(Any p0, Any p1) { invoke<Void>(0x5C67725E, p0, p1); } // 0x5C67725E
	nativeDecl void SET_BLIP_SCALE(int BlipID, float Scale) { invoke<Void>(0x1E6EC434, BlipID, Scale); } // 0x1E6EC434
	nativeDecl void SET_BLIP_PRIORITY(Any p0, Any p1) { invoke<Void>(0xCE87DA6F, p0, p1); } // 0xCE87DA6F
	nativeDecl void SET_BLIP_DISPLAY(Object blip, Any p1) { invoke<Void>(0x2B521F91, blip, p1); } // 0x2B521F91
	nativeDecl void SET_BLIP_CATEGORY(Any p0, Any p1) { invoke<Void>(0xEF72F533, p0, p1); } // 0xEF72F533
	nativeDecl void REMOVE_BLIP(int BlipID) { invoke<Void>(0xD8C3C1CD, BlipID); } // 0xD8C3C1CD
	nativeDecl void SET_BLIP_AS_FRIENDLY(int BlipID, BOOL toggle) { invoke<Void>(0xF290CFD8, BlipID, toggle); } // 0xF290CFD8
	nativeDecl void PULSE_BLIP(Any p0) { invoke<Void>(0x44253855, p0); } // 0x44253855
	nativeDecl void SHOW_NUMBER_ON_BLIP(Any p0, Any p1) { invoke<Void>(0x7BFC66C6, p0, p1); } // 0x7BFC66C6
	nativeDecl void HIDE_NUMBER_ON_BLIP(Any p0) { invoke<Void>(0x0B6D610D, p0); } // 0x0B6D610D
	nativeDecl void _0x1D99F676(Any p0, Any p1) { invoke<Void>(0x1D99F676, p0, p1); } // 0x1D99F676
	nativeDecl void _0x3DCF0092(Any p0, Any p1) { invoke<Void>(0x3DCF0092, p0, p1); } // 0x3DCF0092
	nativeDecl void _0xD1C3D71B(Any p0, Any p1) { invoke<Void>(0xD1C3D71B, p0, p1); } // 0xD1C3D71B
	nativeDecl void _0x8DE82C15(Any p0, Any p1) { invoke<Void>(0x8DE82C15, p0, p1); } // 0x8DE82C15
	nativeDecl void _0x4C8F02B4(Any p0, Any p1) { invoke<Void>(0x4C8F02B4, p0, p1); } // 0x4C8F02B4
	nativeDecl void _0xABBE1E45(Any p0, Any p1) { invoke<Void>(0xABBE1E45, p0, p1); } // 0xABBE1E45
	nativeDecl void _0x6AA6A1CC(Any p0, Any p1) { invoke<Void>(0x6AA6A1CC, p0, p1); } // 0x6AA6A1CC
	nativeDecl void _0xC575F0BC(Any p0, Any p1) { invoke<Void>(0xC575F0BC, p0, p1); } // 0xC575F0BC
	nativeDecl void _0x40E25DB8(Any p0, Any p1) { invoke<Void>(0x40E25DB8, p0, p1); } // 0x40E25DB8
	nativeDecl BOOL DOES_BLIP_EXIST(Any p0) { return invoke<BOOL>(0xAE92DD96, p0); } // 0xAE92DD96
	nativeDecl void SET_WAYPOINT_OFF() { invoke<Void>(0xB3496E1B); } // 0xB3496E1B
	nativeDecl void _0x62BABF2C() { invoke<Void>(0x62BABF2C); } // 0x62BABF2C
	nativeDecl void REFRESH_WAYPOINT() { invoke<Void>(0xB395D753); } // 0xB395D753
	nativeDecl BOOL IS_WAYPOINT_ACTIVE() { return invoke<BOOL>(0x5E4DF47B); } // 0x5E4DF47B
	nativeDecl void SET_NEW_WAYPOINT(Any p0, Any p1) { invoke<Void>(0x8444E1F0, p0, p1); } // 0x8444E1F0
	nativeDecl void SET_BLIP_BRIGHT(Any p0, Any p1) { invoke<Void>(0x72BEE6DF, p0, p1); } // 0x72BEE6DF
	nativeDecl void SET_BLIP_SHOW_CONE(Any p0, Any p1) { invoke<Void>(0xFF545AD8, p0, p1); } // 0xFF545AD8
	nativeDecl void _0x41B0D022(Any p0) { invoke<Void>(0x41B0D022, p0); } // 0x41B0D022
	nativeDecl Any SET_MINIMAP_COMPONENT(Any p0, Any p1) { return invoke<Any>(0x419DCDC4, p0, p1); } // 0x419DCDC4
	nativeDecl Any GET_MAIN_PLAYER_BLIP_ID() { return invoke<Any>(0xAB93F020); } // 0xAB93F020
	nativeDecl void HIDE_LOADING_ON_FADE_THIS_FRAME() { invoke<Void>(0x35087963); } // 0x35087963
	nativeDecl void SET_RADAR_AS_INTERIOR_THIS_FRAME(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x6F2626E1, p0, p1, p2, p3, p4); } // 0x6F2626E1
	nativeDecl void SET_RADAR_AS_EXTERIOR_THIS_FRAME() { invoke<Void>(0x39ABB10E); } // 0x39ABB10E
	nativeDecl void _0x54E75C7D(Any p0, Any p1) { invoke<Void>(0x54E75C7D, p0, p1); } // 0x54E75C7D
	nativeDecl Any _0x199DED14() { return invoke<Any>(0x199DED14); } // 0x199DED14
	nativeDecl void _0x1A4318F7() { invoke<Void>(0x1A4318F7); } // 0x1A4318F7
	nativeDecl void _0xCE36E3FE() { invoke<Void>(0xCE36E3FE); } // 0xCE36E3FE
	nativeDecl void _0x334EFD46() { invoke<Void>(0x334EFD46); } // 0x334EFD46
	nativeDecl void SET_WIDESCREEN_FORMAT(Any p0) { invoke<Void>(0xF016E08F, p0); } // 0xF016E08F
	nativeDecl void DISPLAY_AREA_NAME(Any p0) { invoke<Void>(0x489FDD41, p0); } // 0x489FDD41
	nativeDecl void DISPLAY_CASH(Any p0) { invoke<Void>(0x0049DF83, p0); } // 0x0049DF83
	nativeDecl void DISPLAY_AMMO_THIS_FRAME(Any p0) { invoke<Void>(0x60693CEE, p0); } // 0x60693CEE
	nativeDecl void DISPLAY_SNIPER_SCOPE_THIS_FRAME() { invoke<Void>(0xBC6C73CB); } // 0xBC6C73CB
	nativeDecl void HIDE_HUD_AND_RADAR_THIS_FRAME() { invoke<Void>(0xB75D4AD2); } // 0xB75D4AD2
	nativeDecl void _0x5476B9FD(Any p0) { invoke<Void>(0x5476B9FD, p0); } // 0x5476B9FD
	nativeDecl void _0xF4F3C796() { invoke<Void>(0xF4F3C796); } // 0xF4F3C796
	nativeDecl void _0x7BFFE82F() { invoke<Void>(0x7BFFE82F); } // 0x7BFFE82F
	nativeDecl void SET_MULTIPLAYER_BANK_CASH() { invoke<Void>(0x2C842D03); } // 0x2C842D03
	nativeDecl void REMOVE_MULTIPLAYER_BANK_CASH() { invoke<Void>(0x728B4EF4); } // 0x728B4EF4
	nativeDecl void SET_MULTIPLAYER_HUD_CASH(Any p0, Any p1) { invoke<Void>(0xA8DB435E, p0, p1); } // 0xA8DB435E
	nativeDecl void REMOVE_MULTIPLAYER_HUD_CASH() { invoke<Void>(0x07BF4A7D); } // 0x07BF4A7D
	nativeDecl void HIDE_HELP_TEXT_THIS_FRAME() { invoke<Void>(0xF3807BED); } // 0xF3807BED
	nativeDecl void DISPLAY_HELP_TEXT_THIS_FRAME(const char* p0, Any p1) { invoke<Void>(0x18E3360A, p0, p1); } // 0x18E3360A
	nativeDecl void _0x1EFFB02A(BOOL forcedShow) { invoke<Void>(0x1EFFB02A, forcedShow); } // 0x1EFFB02A
	nativeDecl void _0xB26FED2B() { invoke<Void>(0xB26FED2B); } // 0xB26FED2B
	nativeDecl Any _0x22E9F555() { return invoke<Any>(0x22E9F555); } // 0x22E9F555
	nativeDecl void _0x83B608A0(Any p0) { invoke<Void>(0x83B608A0, p0); } // 0x83B608A0
	nativeDecl void _0xE70D1F43(Any p0) { invoke<Void>(0xE70D1F43, p0); } // 0xE70D1F43
	nativeDecl void SET_GPS_FLAGS(Any p0, Any p1) { invoke<Void>(0x60539BAB, p0, p1); } // 0x60539BAB
	nativeDecl void CLEAR_GPS_FLAGS() { invoke<Void>(0x056AFCE6); } // 0x056AFCE6
	nativeDecl void _0xFB9BABF5(Any p0) { invoke<Void>(0xFB9BABF5, p0); } // 0xFB9BABF5
	nativeDecl void CLEAR_GPS_RACE_TRACK() { invoke<Void>(0x40C59829); } // 0x40C59829
	nativeDecl void _0x7F93799B(Any p0, Any p1, Any p2) { invoke<Void>(0x7F93799B, p0, p1, p2); } // 0x7F93799B
	nativeDecl void _0xEEBDFE55(Any p0, Any p1, Any p2) { invoke<Void>(0xEEBDFE55, p0, p1, p2); } // 0xEEBDFE55
	nativeDecl void _0xDA0AF00E(Any p0, Any p1, Any p2) { invoke<Void>(0xDA0AF00E, p0, p1, p2); } // 0xDA0AF00E
	nativeDecl void _0xCF2E3E24() { invoke<Void>(0xCF2E3E24); } // 0xCF2E3E24
	nativeDecl void _0xC3DCBEDB(Any p0, Any p1, Any p2) { invoke<Void>(0xC3DCBEDB, p0, p1, p2); } // 0xC3DCBEDB
	nativeDecl void _0xFE485135(Any p0, Any p1, Any p2) { invoke<Void>(0xFE485135, p0, p1, p2); } // 0xFE485135
	nativeDecl void _0xE87CBE4C(Any p0) { invoke<Void>(0xE87CBE4C, p0); } // 0xE87CBE4C
	nativeDecl void _0x0D9969E4() { invoke<Void>(0x0D9969E4); } // 0x0D9969E4
	nativeDecl void CLEAR_GPS_PLAYER_WAYPOINT() { invoke<Void>(0x0B9C7FC2); } // 0x0B9C7FC2
	nativeDecl void SET_GPS_FLASHES(Any p0) { invoke<Void>(0xE991F733, p0); } // 0xE991F733
	nativeDecl void FLASH_MINIMAP_DISPLAY() { invoke<Void>(0xB8359952); } // 0xB8359952
	nativeDecl void _0x79A6CAF6(Any p0) { invoke<Void>(0x79A6CAF6, p0); } // 0x79A6CAF6
	nativeDecl void TOGGLE_STEALTH_RADAR(Any p0) { invoke<Void>(0xC68D47C4, p0); } // 0xC68D47C4
	nativeDecl void KEY_HUD_COLOUR(Any p0, Any p1) { invoke<Void>(0xD5BFCADB, p0, p1); } // 0xD5BFCADB
	nativeDecl void SET_MISSION_NAME(Any p0, Any p1) { invoke<Void>(0x68DCAE10, p0, p1); } // 0x68DCAE10
	nativeDecl void _0x8D9A1734(Any p0, Any p1) { invoke<Void>(0x8D9A1734, p0, p1); } // 0x8D9A1734
	nativeDecl void _0xD2161E77(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0xD2161E77, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xD2161E77
	nativeDecl void SET_MINIMAP_BLOCK_WAYPOINT(Any p0) { invoke<Void>(0xA41C3B62, p0); } // 0xA41C3B62
	nativeDecl void _0x02F5F1D1(Any p0) { invoke<Void>(0x02F5F1D1, p0); } // 0x02F5F1D1
	nativeDecl void _0xD8D77733(Any p0) { invoke<Void>(0xD8D77733, p0); } // 0xD8D77733
	nativeDecl Any _0xA4098ACC() { return invoke<Any>(0xA4098ACC); } // 0xA4098ACC
	nativeDecl Any _0x65B705F6(Any p0, Any p1, Any p2) { return invoke<Any>(0x65B705F6, p0, p1, p2); } // 0x65B705F6
	nativeDecl void _0xE010F081(Any p0, Any p1, Any p2) { invoke<Void>(0xE010F081, p0, p1, p2); } // 0xE010F081
	nativeDecl void _0x5133A750(Any p0) { invoke<Void>(0x5133A750, p0); } // 0x5133A750
	nativeDecl void _0x20FD3E87() { invoke<Void>(0x20FD3E87); } // 0x20FD3E87
	nativeDecl void LOCK_MINIMAP_ANGLE(Any p0) { invoke<Void>(0xDEC733E4, p0); } // 0xDEC733E4
	nativeDecl void UNLOCK_MINIMAP_ANGLE() { invoke<Void>(0x742043F9); } // 0x742043F9
	nativeDecl void LOCK_MINIMAP_POSITION(Any p0, Any p1) { invoke<Void>(0xB9632A91, p0, p1); } // 0xB9632A91
	nativeDecl void UNLOCK_MINIMAP_POSITION() { invoke<Void>(0x5E8E6F54); } // 0x5E8E6F54
	nativeDecl void _0x0308EDF6(Any p0) { invoke<Void>(0x0308EDF6, p0); } // 0x0308EDF6
	nativeDecl void _0x7FB6FB2A(Any p0, Any p1, Any p2) { invoke<Void>(0x7FB6FB2A, p0, p1, p2); } // 0x7FB6FB2A
	nativeDecl void _0xF07D8CEF(Any p0) { invoke<Void>(0xF07D8CEF, p0); } // 0xF07D8CEF
	nativeDecl void _0x827F14DE(Any p0) { invoke<Void>(0x827F14DE, p0); } // 0x827F14DE
	nativeDecl void _0x08EB83D2(Any p0, Any p1) { invoke<Void>(0x08EB83D2, p0, p1); } // 0x08EB83D2
	nativeDecl BOOL IS_HUD_COMPONENT_ACTIVE(int p0) { return invoke<BOOL>(0x6214631F, p0); } // 0x6214631F
	nativeDecl BOOL IS_SCRIPTED_HUD_COMPONENT_ACTIVE(Any p0) { return invoke<BOOL>(0x2B86F382, p0); } // 0x2B86F382
	nativeDecl void HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(Any p0) { invoke<Void>(0x31ABA127, p0); } // 0x31ABA127
	nativeDecl Any _0xE8C8E535(Any p0) { return invoke<Any>(0xE8C8E535, p0); } // 0xE8C8E535
	nativeDecl void HIDE_HUD_COMPONENT_THIS_FRAME(Any p0) { invoke<Void>(0xDB2D0762, p0); } // 0xDB2D0762
	nativeDecl void SHOW_HUD_COMPONENT_THIS_FRAME(Any p0) { invoke<Void>(0x95E1546E, p0); } // 0x95E1546E
	nativeDecl void _0x52746FE1() { invoke<Void>(0x52746FE1); } // 0x52746FE1
	nativeDecl void RESET_RETICULE_VALUES() { invoke<Void>(0xBE27AA3F); } // 0xBE27AA3F
	nativeDecl void RESET_HUD_COMPONENT_VALUES(Any p0) { invoke<Void>(0xD15B46DA, p0); } // 0xD15B46DA
	nativeDecl void SET_HUD_COMPONENT_POSITION(Any p0, Any p1, Any p2) { invoke<Void>(0x2F3A0D15, p0, p1, p2); } // 0x2F3A0D15
	nativeDecl Vector3 GET_HUD_COMPONENT_POSITION(Any p0) { return invoke<Vector3>(0x080DCED6, p0); } // 0x080DCED6
	nativeDecl void _0x5BBCC934() { invoke<Void>(0x5BBCC934); } // 0x5BBCC934
	nativeDecl Any _GET_SCREEN_COORD_FROM_WORLD_COORD(float p0, float p1, float p2, float* p3, float* p4) { return invoke<Any>(0xFE9A39F8, p0, p1, p2, p3, p4); } // 0xFE9A39F8
	nativeDecl void _0x10DE5150() { invoke<Void>(0x10DE5150); } // 0x10DE5150
	nativeDecl void _0x67649EE0() { invoke<Void>(0x67649EE0); } // 0x67649EE0
	nativeDecl Any _0x9D2C94FA() { return invoke<Any>(0x9D2C94FA); } // 0x9D2C94FA
	nativeDecl Any _0x45472FD5(Any p0) { return invoke<Any>(0x45472FD5, p0); } // 0x45472FD5
	nativeDecl void _0x198F32D7(Any p0, Any p1, Any p2) { invoke<Void>(0x198F32D7, p0, p1, p2); } // 0x198F32D7
	nativeDecl void _0x93045157(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x93045157, p0, p1, p2, p3); } // 0x93045157
	nativeDecl void _0x18B012B7(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x18B012B7, p0, p1, p2, p3); } // 0x18B012B7
	nativeDecl void _0x97852A82(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x97852A82, p0, p1, p2, p3, p4, p5); } // 0x97852A82
	nativeDecl void CLEAR_FLOATING_HELP(Any p0, Any p1) { invoke<Void>(0xB181F88F, p0, p1); } // 0xB181F88F
	nativeDecl void _0xC969F2D0(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0xC969F2D0, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xC969F2D0
	nativeDecl Any _0xEFD2564A() { return invoke<Any>(0xEFD2564A); } // 0xEFD2564A
	nativeDecl Any _0xF5CD2AA4(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0xF5CD2AA4, p0, p1, p2, p3, p4, p5); } // 0xF5CD2AA4
	nativeDecl void _0x3D081FE4(Any p0) { invoke<Void>(0x3D081FE4, p0); } // 0x3D081FE4
	nativeDecl Any _0x60118951(Any p0) { return invoke<Any>(0x60118951, p0); } // 0x60118951
	nativeDecl Any ADD_TREVOR_RANDOM_MODIFIER(Any p0) { return invoke<Any>(0x63959059, p0); } // 0x63959059
	nativeDecl void _0xD41DF479(Any p0, Any p1, Any p2) { invoke<Void>(0xD41DF479, p0, p1, p2); } // 0xD41DF479
	nativeDecl void _0x767DED29(Any p0, Any p1) { invoke<Void>(0x767DED29, p0, p1); } // 0x767DED29
	nativeDecl void _0xB01A5434(Any p0, Any p1) { invoke<Void>(0xB01A5434, p0, p1); } // 0xB01A5434
	nativeDecl void _0x7E3AA40A(Any p0, Any p1, Any p2) { invoke<Void>(0x7E3AA40A, p0, p1, p2); } // 0x7E3AA40A
	nativeDecl void _0x5777EC77(Any p0, Any p1) { invoke<Void>(0x5777EC77, p0, p1); } // 0x5777EC77
	nativeDecl void _0xF4418611(Any p0, Any p1, Any p2) { invoke<Void>(0xF4418611, p0, p1, p2); } // 0xF4418611
	nativeDecl void _0x0EBB003F(Any p0, Any p1) { invoke<Void>(0x0EBB003F, p0, p1); } // 0x0EBB003F
	nativeDecl void _0x627A559B(Any p0, Any p1) { invoke<Void>(0x627A559B, p0, p1); } // 0x627A559B
	nativeDecl Any _0xF11414C4(Any p0) { return invoke<Any>(0xF11414C4, p0); } // 0xF11414C4
	nativeDecl void _0x939218AB(Any p0, Any p1) { invoke<Void>(0x939218AB, p0, p1); } // 0x939218AB
	nativeDecl Any _0xAB5B7C18() { return invoke<Any>(0xAB5B7C18); } // 0xAB5B7C18
	nativeDecl Any GET_CURRENT_WEBSITE_ID() { return invoke<Any>(0x42A55B14); } // 0x42A55B14
	nativeDecl Any _0xD217EE7E(Any p0) { return invoke<Any>(0xD217EE7E, p0); } // 0xD217EE7E
	nativeDecl void SET_WARNING_MESSAGE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0xBE699BDE, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xBE699BDE
	nativeDecl void _0x2DB9EAB5(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0x2DB9EAB5, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x2DB9EAB5
	nativeDecl void SET_DANCE_MAPPERS(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoke<Void>(0x749929D3, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x749929D3
	nativeDecl Any _0x94C834AD() { return invoke<Any>(0x94C834AD); } // 0x94C834AD
	nativeDecl void _0x2F9A309C() { invoke<Void>(0x2F9A309C); } // 0x2F9A309C
	nativeDecl void _0xE4FD20D8(Any p0) { invoke<Void>(0xE4FD20D8, p0); } // 0xE4FD20D8
	nativeDecl void _0x13E7A5A9(Any p0) { invoke<Void>(0x13E7A5A9, p0); } // 0x13E7A5A9
	nativeDecl Any _0x786CA0A2(Any p0, Any p1, Any p2) { return invoke<Any>(0x786CA0A2, p0, p1, p2); } // 0x786CA0A2
	nativeDecl void _0xCBEC9369() { invoke<Void>(0xCBEC9369); } // 0xCBEC9369
	nativeDecl Any _0x3F4AFB13() { return invoke<Any>(0x3F4AFB13); } // 0x3F4AFB13
	nativeDecl void _0x2F28F0A6(Any p0) { invoke<Void>(0x2F28F0A6, p0); } // 0x2F28F0A6
	nativeDecl void _0x801D0D86() { invoke<Void>(0x801D0D86); } // 0x801D0D86
	nativeDecl void _0x317775DF() { invoke<Void>(0x317775DF); } // 0x317775DF
	nativeDecl void ACTIVATE_FRONTEND_MENU(Any p0, Any p1, Any p2) { invoke<Void>(0x01D83872, p0, p1, p2); } // 0x01D83872
	nativeDecl void RESTART_FRONTEND_MENU(Any p0, Any p1) { invoke<Void>(0xB07DAF98, p0, p1); } // 0xB07DAF98
	nativeDecl Any _0x33D6868F() { return invoke<Any>(0x33D6868F); } // 0x33D6868F
	nativeDecl void SET_PAUSE_MENU_ACTIVE(Any p0) { invoke<Void>(0x1DCD878E, p0); } // 0x1DCD878E
	nativeDecl void DISABLE_FRONTEND_THIS_FRAME() { invoke<Void>(0xD86A029E); } // 0xD86A029E
	nativeDecl void _0x7F349900() { invoke<Void>(0x7F349900); } // 0x7F349900
	nativeDecl void _0x630CD8EE() { invoke<Void>(0x630CD8EE); } // 0x630CD8EE
	nativeDecl void SET_FRONTEND_ACTIVE(Any p0) { invoke<Void>(0x81E1AD32, p0); } // 0x81E1AD32
	nativeDecl BOOL IS_PAUSE_MENU_ACTIVE() { return invoke<BOOL>(0xD3600591); } // 0xD3600591
	nativeDecl Any _0xC85C4487() { return invoke<Any>(0xC85C4487); } // 0xC85C4487
	nativeDecl Any GET_PAUSE_MENU_STATE() { return invoke<Any>(0x92F50134); } // 0x92F50134
	nativeDecl BOOL IS_PAUSE_MENU_RESTARTING() { return invoke<BOOL>(0x3C4CF4D9); } // 0x3C4CF4D9
	nativeDecl void _0x2DFD35C7(Any p0) { invoke<Void>(0x2DFD35C7, p0); } // 0x2DFD35C7
	nativeDecl void _0x0A89336C(Any p0) { invoke<Void>(0x0A89336C, p0); } // 0x0A89336C
	nativeDecl void _0xC84BE309() { invoke<Void>(0xC84BE309); } // 0xC84BE309
	nativeDecl void _0x9FE8FD5E(Any p0) { invoke<Void>(0x9FE8FD5E, p0); } // 0x9FE8FD5E
	nativeDecl void OBJECT_DECAL_TOGGLE(Any p0) { invoke<Void>(0x0029046E, p0); } // 0x0029046E
	nativeDecl Any _0xC51BC42F(Any p0) { return invoke<Any>(0xC51BC42F, p0); } // 0xC51BC42F
	nativeDecl Any _0x016D7AF9() { return invoke<Any>(0x016D7AF9); } // 0x016D7AF9
	nativeDecl void ENABLE_DEATHBLOOD_SEETHROUGH(Any p0) { invoke<Void>(0x15B24768, p0); } // 0x15B24768
	nativeDecl void _0x6C67131A(Any p0, Any p1, Any p2) { invoke<Void>(0x6C67131A, p0, p1, p2); } // 0x6C67131A
	nativeDecl void _0x11D09737(Any p0) { invoke<Void>(0x11D09737, p0); } // 0x11D09737
	nativeDecl Any _0xD3BF3ABD() { return invoke<Any>(0xD3BF3ABD); } // 0xD3BF3ABD
	nativeDecl void _0xC06B763D() { invoke<Void>(0xC06B763D); } // 0xC06B763D
	nativeDecl void _0xB9392CE7() { invoke<Void>(0xB9392CE7); } // 0xB9392CE7
	nativeDecl Any _0x92DAFA78() { return invoke<Any>(0x92DAFA78); } // 0x92DAFA78
	nativeDecl Any _0x22CA9F2A() { return invoke<Any>(0x22CA9F2A); } // 0x22CA9F2A
	nativeDecl Any _0xDA7951A2() { return invoke<Any>(0xDA7951A2); } // 0xDA7951A2
	nativeDecl Any _0x7D95AFFF() { return invoke<Any>(0x7D95AFFF); } // 0x7D95AFFF
	nativeDecl Any _0x96863460() { return invoke<Any>(0x96863460); } // 0x96863460
	nativeDecl void _0x8543AAC8(Any p0, Any p1) { invoke<Void>(0x8543AAC8, p0, p1); } // 0x8543AAC8
	nativeDecl void _0x6025AA2F(Any p0, Any p1, Any p2) { invoke<Void>(0x6025AA2F, p0, p1, p2); } // 0x6025AA2F
	nativeDecl void _0x30D72A4B(Any p0, Any p1) { invoke<Void>(0x30D72A4B, p0, p1); } // 0x30D72A4B
	nativeDecl Any _0x46794EB2(Any p0, Any p1, Any p2) { return invoke<Any>(0x46794EB2, p0, p1, p2); } // 0x46794EB2
	nativeDecl Any SET_USERIDS_UIHIDDEN(Any p0, Any p1) { return invoke<Any>(0x4370999E, p0, p1); } // 0x4370999E
	nativeDecl Any _0xD6CC4766(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0xD6CC4766, p0, p1, p2, p3); } // 0xD6CC4766
	nativeDecl Any _0x51972B04(Any p0, Any p1) { return invoke<Any>(0x51972B04, p0, p1); } // 0x51972B04
	nativeDecl Any _0xD43BB56D(Any p0, Any p1) { return invoke<Any>(0xD43BB56D, p0, p1); } // 0xD43BB56D
	nativeDecl void CLEAR_PED_IN_PAUSE_MENU() { invoke<Void>(0x28058ACF); } // 0x28058ACF
	nativeDecl void GIVE_PED_TO_PAUSE_MENU(Any p0, Any p1) { invoke<Void>(0x2AD2C9CE, p0, p1); } // 0x2AD2C9CE
	nativeDecl void _0x127310EB(Any p0) { invoke<Void>(0x127310EB, p0); } // 0x127310EB
	nativeDecl void SET_PAUSE_MENU_PED_SLEEP_STATE(BOOL state) { invoke<Void>(0x8F45D327, state); } // 0x8F45D327
	nativeDecl void OPEN_ONLINE_POLICIES_MENU() { invoke<Void>(0x19FCBBB2); } // 0x19FCBBB2
	nativeDecl BOOL ARE_ONLINE_POLICIES_UP_TO_DATE() { return invoke<BOOL>(0x850690FF); } // 0x850690FF
	nativeDecl BOOL IS_ONLINE_POLICIES_MENU_ACTIVE() { return invoke<BOOL>(0x9D4934F4); } // 0x9D4934F4
	nativeDecl void OPEN_SOCIAL_CLUB_MENU() { invoke<Void>(0x57218529); } // 0x57218529
	nativeDecl void CLOSE_SOCIAL_CLUB_MENU() { invoke<Void>(0x5F86AA39); } // 0x5F86AA39
	nativeDecl void SET_SOCIAL_CLUB_TOUR(const char* name) { invoke<Void>(0x7AD67C95, name); } // 0x7AD67C95
	nativeDecl BOOL IS_SOCIAL_CLUB_ACTIVE() { return invoke<BOOL>(0xD4DA14EF); } // 0xD4DA14EF
	nativeDecl void FLAG_PLAYER_CONTEXT_IN_TOURNAMENT(BOOL toggle) { invoke<Void>(0xFF06772A, toggle); } // 0xFF06772A
	nativeDecl void SET_PED_HAS_AI_BLIP(Ped ped, BOOL hasCone) { invoke<Void>(0x96C4C4DD, ped, hasCone); } // 0x96C4C4DD
	nativeDecl BOOL DOES_PED_HAVE_AI_BLIP(Ped ped) { return invoke<BOOL>(0x3BE1257F, ped); } // 0x3BE1257F
	nativeDecl void SET_PED_AI_BLIP_GANG_ID(Ped ped, int gangId) { invoke<Void>(0xD8E31B1A, ped, gangId); } // 0xD8E31B1A
	nativeDecl void HIDE_SPECIAL_ABILITY_LOCKON_OPERATION(Ped ped, BOOL toggle) { invoke<Void>(0x872C2CFB, ped, toggle); } // 0x872C2CFB
	nativeDecl void SET_PED_AI_BLIP_FORCED_ON(Ped ped, BOOL toggle) { invoke<Void>(0xFFDF46F0, ped, toggle); } // 0xFFDF46F0
	nativeDecl void SET_PED_AI_BLIP_NOTICE_RANGE(Ped ped, float range) { invoke<Void>(0xF9DC2AF7, ped, range); } // 0xF9DC2AF7
	nativeDecl Blip GET_AI_PED_PED_BLIP_INDEX(Ped ped) { return invoke<Blip>(0x06349065, ped); } // 0x06349065
	nativeDecl Blip GET_AI_PED_VEHICLE_BLIP_INDEX(Ped ped) { return invoke<Blip>(0xCA52CF43, ped); } // 0xCA52CF43
}

namespace GRAPHICS
{
	nativeDecl BOOL _PUSH_SCALEFORM_MOVIE_FUNCTION(int scaleform, const char* functionName) { return invoke<BOOL>(0x215ABBE8, scaleform, functionName); } // 0x633F8C48
	nativeDecl void _PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(float value) { invoke<Void>(0x9A01FFDA, value); } // 0x9A01FFDA
	nativeDecl void _POP_SCALEFORM_MOVIE_FUNCTION_VOID() { invoke<Void>(0x02DBF2D7); } // 0x02DBF2D7
	nativeDecl void SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(BOOL enabled) { invoke<Void>(0x1418CA37, enabled); } // 0x1418CA37
	nativeDecl void DRAW_DEBUG_LINE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoke<Void>(0xABF783AB, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0xABF783AB
	nativeDecl void DRAW_DEBUG_LINE_WITH_TWO_COLOURS(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13) { invoke<Void>(0xE8BFF632, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); } // 0xE8BFF632
	nativeDecl void DRAW_DEBUG_SPHERE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0x304D0EEF, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x304D0EEF
	nativeDecl void DRAW_DEBUG_BOX(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoke<Void>(0x8524A848, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x8524A848
	nativeDecl void _0xB6DF3709(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0xB6DF3709, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xB6DF3709
	nativeDecl void DRAW_DEBUG_TEXT(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0x269B006F, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x269B006F
	nativeDecl void DRAW_DEBUG_TEXT_2D(const char* Text, float posX, float posY, float posZ, int R, int G, int B, int A) { invoke<Void>(0x528B973B, Text, posX, posY, posZ, R, G, B, A); } // 0x528B973B
	nativeDecl void DRAW_LINE(float posX1, float posY1, float posZ1, float posX2, float posY2, float posZ2, int R, int G, int B, int A) { invoke<Void>(0xB3426BCC, posX1, posY1, posZ1, posX2, posY2, posZ2, R, G, B, A); } // 0xB3426BCC
	nativeDecl void DRAW_POLY(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12) { invoke<Void>(0xABD19253, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0xABD19253
	nativeDecl void _0xCD4D9DD5(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoke<Void>(0xCD4D9DD5, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0xCD4D9DD5
	nativeDecl void _0xC44C2F44(Any p0) { invoke<Void>(0xC44C2F44, p0); } // 0xC44C2F44
	nativeDecl Any _0xBA9AD458() { return invoke<Any>(0xBA9AD458); } // 0xBA9AD458
	nativeDecl Any _0xADBBA287() { return invoke<Any>(0xADBBA287); } // 0xADBBA287
	nativeDecl void _0x9E553002() { invoke<Void>(0x9E553002); } // 0x9E553002
	nativeDecl Any _0x56C1E488(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x56C1E488, p0, p1, p2, p3); } // 0x56C1E488
	nativeDecl Any _0x226B08EA(Any p0) { return invoke<Any>(0x226B08EA, p0); } // 0x226B08EA
	nativeDecl Any _0x1F3CADB0() { return invoke<Any>(0x1F3CADB0); } // 0x1F3CADB0
	nativeDecl Any _0xA9DC8558() { return invoke<Any>(0xA9DC8558); } // 0xA9DC8558
	nativeDecl void _0x88EAF398() { invoke<Void>(0x88EAF398); } // 0x88EAF398
	nativeDecl Any _0x47B0C137() { return invoke<Any>(0x47B0C137); } // 0x47B0C137
	nativeDecl Any MELEE_SEETHROUGH_SKIPPED() { return invoke<Any>(0x65376C9B); } // 0x65376C9B
	nativeDecl void _0x9CBA682A() { invoke<Void>(0x9CBA682A); } // 0x9CBA682A
	nativeDecl Any _0x3B15D33C(Any p0) { return invoke<Any>(0x3B15D33C, p0); } // 0x3B15D33C
	nativeDecl Any _0xEC5D0317() { return invoke<Any>(0xEC5D0317); } // 0xEC5D0317
	nativeDecl Any _0x25D569EB(Any p0) { return invoke<Any>(0x25D569EB, p0); } // 0x25D569EB
	nativeDecl Any _0xCFCDC518(Any p0) { return invoke<Any>(0xCFCDC518, p0); } // 0xCFCDC518
	nativeDecl void _0x108F36CC() { invoke<Void>(0x108F36CC); } // 0x108F36CC
	nativeDecl void _0xE9F2B68F(Any p0, Any p1) { invoke<Void>(0xE9F2B68F, p0, p1); } // 0xE9F2B68F
	nativeDecl Any GET_MAXIMUM_NUMBER_OF_PHOTOS() { return invoke<Any>(0x727AA63F); } // 0x727AA63F
	nativeDecl Any _0x239272BD() { return invoke<Any>(0x239272BD); } // 0x239272BD
	nativeDecl Any _0x21DBF0C9() { return invoke<Any>(0x21DBF0C9); } // 0x21DBF0C9
	nativeDecl Any _0x199FABF0(Any p0) { return invoke<Any>(0x199FABF0, p0); } // 0x199FABF0
	nativeDecl Any _0x596B900D(Any p0) { return invoke<Any>(0x596B900D, p0); } // 0x596B900D
	nativeDecl void _0xC9EF81ED() { invoke<Void>(0xC9EF81ED); } // 0xC9EF81ED
	nativeDecl Any _0x9D84554C(Any p0) { return invoke<Any>(0x9D84554C, p0); } // 0x9D84554C
	nativeDecl Any _0x9C106AD9(Any p0) { return invoke<Any>(0x9C106AD9, p0); } // 0x9C106AD9
	nativeDecl Any _0x762E5C5F(Any p0) { return invoke<Any>(0x762E5C5F, p0); } // 0x762E5C5F
	nativeDecl void DRAW_LIGHT_WITH_RANGE(float* XCoord, float* YCoord, float* ZCoord, int Red, int Green, int Blue, float Width, float Height) { invoke<Void>(0x6A396E9A, XCoord, YCoord, ZCoord, Red, Green, Blue, Width, Height); } // 0x6A396E9A
	nativeDecl void DRAW_SPOT_LIGHT(float x, float y, float z, float dir_x, float dir_y, float dir_z, int r, int g, int b, float distance, float falloff, float p11, float radius, float p13) { invoke<Void>(0xBDBC410C, x, y, z, dir_x, dir_y, dir_z, r, g, b, distance, falloff, p11, radius, p13); } // 0xBDBC410C
	nativeDecl void _0x32BF9598(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14) { invoke<Void>(0x32BF9598, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); } // 0x32BF9598
	nativeDecl void _0x93628786(Any p0) { invoke<Void>(0x93628786, p0); } // 0x93628786
	nativeDecl void DRAW_MARKER(int type, float x, float y, float z, float dirX, float dirY, float dirZ, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ, Any colorR, Any colorG, Any colorB, int alpha, BOOL bobUpAndDown, BOOL faceCamera, int p19, BOOL rotate, const char* textureDict, const char* textureName, BOOL drawOnEnts) { invoke<Void>(0x48D84A02, type, x, y, z, dirX, dirY, dirZ, rotX, rotY, rotZ, scaleX, scaleY, scaleZ, colorR, colorG, colorB, alpha, bobUpAndDown, faceCamera, p19, rotate, textureDict, textureName, drawOnEnts); }
	nativeDecl Any CREATE_CHECKPOINT(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12) { return invoke<Any>(0xF541B690, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0xF541B690
	nativeDecl void _0x80151CCF(Any p0, Any p1) { invoke<Void>(0x80151CCF, p0, p1); } // 0x80151CCF
	nativeDecl void SET_CHECKPOINT_CYLINDER_HEIGHT(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xFF0F9B22, p0, p1, p2, p3); } // 0xFF0F9B22
	nativeDecl void SET_CHECKPOINT_RGBA(Any p0, Any colorR, Any colorG, Any colorB, Any colorA) { invoke<Void>(0xEF9C8CB3, p0, colorR, colorG, colorB, colorA); } // 0xEF9C8CB3
	nativeDecl void _0xA5456DBB(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xA5456DBB, p0, p1, p2, p3, p4); } // 0xA5456DBB
	nativeDecl void _0x20EABD0F(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x20EABD0F, p0, p1, p2, p3, p4, p5, p6); } // 0x20EABD0F
	nativeDecl void _0x1E3A3126(Any p0) { invoke<Void>(0x1E3A3126, p0); } // 0x1E3A3126
	nativeDecl void DELETE_CHECKPOINT(Any p0) { invoke<Void>(0xB66CF3CA, p0); } // 0xB66CF3CA
	nativeDecl void _0x932FDB81(Any p0) { invoke<Void>(0x932FDB81, p0); } // 0x932FDB81
	nativeDecl void FORCE_RENDER_IN_GAME_UI(BOOL toggle) { invoke<Void>(0x7E946E87, toggle); } // 0x7E946E87
	nativeDecl void REQUEST_STREAMED_TEXTURE_DICT(const char* Type, BOOL Toggle) { invoke<Void>(0x4C9B035F, Type, Toggle); } // 0x4C9B035F
	nativeDecl BOOL HAS_STREAMED_TEXTURE_DICT_LOADED(const char* Type) { return invoke<BOOL>(0x3F436EEF, Type); } // 0x3F436EEF
	nativeDecl void SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(const char* Type) { invoke<Void>(0xF07DDA38, Type); } // 0xF07DDA38
	nativeDecl void DRAW_RECT(float x, float y, float width, float height, int r, int g, int b, int a) { invoke<Void>(0xDD2BFC77, x, y, width, height, r, g, b, a); } // 0xDD2BFC77
	nativeDecl void SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(BOOL flag) { invoke<Void>(0xF8FBCC25, flag); } // 0xF8FBCC25
	nativeDecl void SET_SCRIPT_GFX_DRAW_ORDER(int order) { invoke<Void>(0xADF81D24, order); } // 0xADF81D24
	nativeDecl void _0x228A2598(Any p0, Any p1) { invoke<Void>(0x228A2598, p0, p1); } // 0x228A2598
	nativeDecl void _0x3FE33BD6() { invoke<Void>(0x3FE33BD6); } // 0x3FE33BD6
	nativeDecl void _0x76C641E4(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x76C641E4, p0, p1, p2, p3); } // 0x76C641E4
	nativeDecl Any _0x3F0D1A6F() { return invoke<Any>(0x3F0D1A6F); } // 0x3F0D1A6F
	nativeDecl void DRAW_SPRITE(const char* Type, const char* IconType, float X, float Y, float Z, float width, float height, int RED, int GREEN, int BLUE, int Alpha) { invoke<Void>(0x1FEC16B0, Type, IconType, X, Y, Z, width, height, RED, GREEN, BLUE, Alpha); } // 0x1FEC16B0
	nativeDecl Any ADD_ENTITY_ICON(Any p0, Any p1) { return invoke<Any>(0xF3027D21, p0, p1); } // 0xF3027D21
	nativeDecl void SET_ENTITY_ICON_VISIBILITY(Any p0, Any p1) { invoke<Void>(0xD1D2FD52, p0, p1); } // 0xD1D2FD52
	nativeDecl void SET_ENTITY_ICON_COLOR(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x6EE1E946, p0, p1, p2, p3, p4); } // 0x6EE1E946
	nativeDecl void SET_DRAW_ORIGIN(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE10198D5, p0, p1, p2, p3); } // 0xE10198D5
	nativeDecl void CLEAR_DRAW_ORIGIN() { invoke<Void>(0xDD76B263); } // 0xDD76B263
	nativeDecl void ATTACH_TV_AUDIO_TO_ENTITY(Any p0) { invoke<Void>(0x784944DB, p0); } // 0x784944DB
	nativeDecl void SET_TV_AUDIO_FRONTEND(Any p0) { invoke<Void>(0x2E0DFA35, p0); } // 0x2E0DFA35
	nativeDecl Any LOAD_MOVIE_MESH_SET(Any p0) { return invoke<Any>(0x9627905C, p0); } // 0x9627905C
	nativeDecl void RELEASE_MOVIE_MESH_SET(Any p0) { invoke<Void>(0x4FA5501D, p0); } // 0x4FA5501D
	nativeDecl Any _0x9D5D9B38(Any p0) { return invoke<Any>(0x9D5D9B38, p0); } // 0x9D5D9B38
	nativeDecl void GET_SCREEN_RESOLUTION(int* p0, int* p1) { invoke<Void>(0x29F3572F, p0, p1); } // 0x29F3572F
	nativeDecl Any GET_IS_WIDESCREEN() { return invoke<Any>(0xEC717AEF); } // 0xEC717AEF
	nativeDecl Any GET_IS_HIDEF() { return invoke<Any>(0x1C340359); } // 0x1C340359
	nativeDecl void SET_NIGHTVISION(BOOL Toggle) { invoke<Void>(0xD1E5565F, Toggle); } // 0xD1E5565F
	nativeDecl Any _0x62619061() { return invoke<Any>(0x62619061); } // 0x62619061
	nativeDecl void SET_NOISEOVERIDE(Any p0) { invoke<Void>(0xD576F5DD, p0); } // 0xD576F5DD
	nativeDecl void SET_NOISINESSOVERIDE(Any p0) { invoke<Void>(0x046B62D9, p0); } // 0x046B62D9
	nativeDecl Any _0x1F950E4B(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x1F950E4B, p0, p1, p2, p3, p4); } // 0x1F950E4B
	nativeDecl Vector3 GET_TEXTURE_RESOLUTION(const char* textureDict, const char* textureName) { return invoke<Vector3>(0x096DAA4D, textureDict, textureName); } // 0x096DAA4D
	nativeDecl void _0x455F1084(Any p0) { invoke<Void>(0x455F1084, p0); } // 0x455F1084
	nativeDecl void SET_FLASH(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x7E55A1EE, p0, p1, p2, p3, p4); } // 0x7E55A1EE
	nativeDecl void _0x0DCC0B8B() { invoke<Void>(0x0DCC0B8B); } // 0x0DCC0B8B
	nativeDecl void _0xAA2A0EAF(Any p0) { invoke<Void>(0xAA2A0EAF, p0); } // 0xAA2A0EAF
	nativeDecl Object CREATE_TRACKED_POINT() { return invoke<Object>(0x3129C31A); } // 0x3129C31A
	nativeDecl void SET_TRACKED_POINT_INFO(Object point, Any x, Any y, Any z, float radius) { invoke<Void>(0x28689AA4, point, x, y, z, radius); } // 0x28689AA4
	nativeDecl BOOL IS_TRACKED_POINT_VISIBLE(Any p0) { return invoke<BOOL>(0x0BFC4F64, p0); } // 0x0BFC4F64
	nativeDecl void DESTROY_TRACKED_POINT(Any p0) { invoke<Void>(0x14AC675F, p0); } // 0x14AC675F
	nativeDecl void _0x72B36815() { invoke<Void>(0x72B36815); } // 0x72B36815
	nativeDecl void _0xD820ADD4() { invoke<Void>(0xD820ADD4); } // 0xD820ADD4
	nativeDecl void _0x48F16186() { invoke<Void>(0x48F16186); } // 0x48F16186
	nativeDecl void _0x13D4ABC0(Any p0) { invoke<Void>(0x13D4ABC0, p0); } // 0x13D4ABC0
	nativeDecl void _0xD2157428(Any p0) { invoke<Void>(0xD2157428, p0); } // 0xD2157428
	nativeDecl void _0xC07C64C9(Any p0) { invoke<Void>(0xC07C64C9, p0); } // 0xC07C64C9
	nativeDecl void _0xFE903D0F(Any p0) { invoke<Void>(0xFE903D0F, p0); } // 0xFE903D0F
	nativeDecl void _0xDE10BA1F(Any p0) { invoke<Void>(0xDE10BA1F, p0); } // 0xDE10BA1F
	nativeDecl void _0x9F470BE3(Any p0) { invoke<Void>(0x9F470BE3, p0); } // 0x9F470BE3
	nativeDecl void _0x4A124267(Any p0) { invoke<Void>(0x4A124267, p0); } // 0x4A124267
	nativeDecl void _0xB19B2764(float p0) { invoke<Void>(0xB19B2764, p0); } // 0xB19B2764
	nativeDecl void _0x342FA2B4(Any p0) { invoke<Void>(0x342FA2B4, p0); } // 0x342FA2B4
	nativeDecl void _0x5D3BFFC9(Any p0) { invoke<Void>(0x5D3BFFC9, p0); } // 0x5D3BFFC9
	nativeDecl void _0xD9653728(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0xD9653728, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xD9653728
	nativeDecl void _0x72BA8A14(Any p0, Any p1, Any p2) { invoke<Void>(0x72BA8A14, p0, p1, p2); } // 0x72BA8A14
	nativeDecl void _0x804F444C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { invoke<Void>(0x804F444C, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x804F444C
	nativeDecl void _0xBB1A1294(Any p0, Any p1) { invoke<Void>(0xBB1A1294, p0, p1); } // 0xBB1A1294
	nativeDecl void _0x1A1A72EF(Any p0) { invoke<Void>(0x1A1A72EF, p0); } // 0x1A1A72EF
	nativeDecl void _0x3BB12B75(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0x3BB12B75, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x3BB12B75
	nativeDecl void _0x4EA70FB4(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x4EA70FB4, p0, p1, p2, p3, p4); } // 0x4EA70FB4
	nativeDecl void _0x0D830DC7(Any p0) { invoke<Void>(0x0D830DC7, p0); } // 0x0D830DC7
	nativeDecl Any _0xA08B46AD() { return invoke<Any>(0xA08B46AD); } // 0xA08B46AD
	nativeDecl Vector3 _0xECD470F0(Any p0) { return invoke<Vector3>(0xECD470F0, p0); } // 0xECD470F0
	nativeDecl void SET_SEETHROUGH(BOOL Toggle) { invoke<Void>(0x74D4995C, Toggle); } // 0x74D4995C
	nativeDecl Any _0x1FE547F2() { return invoke<Any>(0x1FE547F2); } // 0x1FE547F2
	nativeDecl void SEETHROUGH_RESET() { invoke<Void>(0x310E9B67); } // 0x310E9B67
	nativeDecl void _0x654F0287(Any p0, Any p1) { invoke<Void>(0x654F0287, p0, p1); } // 0x654F0287
	nativeDecl void _0xF6B837F0(Any p0) { invoke<Void>(0xF6B837F0, p0); } // 0xF6B837F0
	nativeDecl Any _0xD906A3A9() { return invoke<Any>(0xD906A3A9); } // 0xD906A3A9
	nativeDecl void _0xD34A6CBA(Any p0) { invoke<Void>(0xD34A6CBA, p0); } // 0xD34A6CBA
	nativeDecl void _0xD8CC7221(Any p0) { invoke<Void>(0xD8CC7221, p0); } // 0xD8CC7221
	nativeDecl Any _0x5604B890(Any p0) { return invoke<Any>(0x5604B890, p0); } // 0x5604B890
	nativeDecl Any _0x46617502(Any p0) { return invoke<Any>(0x46617502, p0); } // 0x46617502
	nativeDecl void DISABLE_SCREENBLUR_FADE() { invoke<Void>(0xDB7AECDA); } // 0xDB7AECDA
	nativeDecl BOOL IS_PARTICLE_FX_DELAYED_BLINK() { return invoke<BOOL>(0xEA432A94); } // 0xEA432A94
	nativeDecl Any _0x926B8734() { return invoke<Any>(0x926B8734); } // 0x926B8734
	nativeDecl void TOGGLE_PAUSED_RENDERPHASES(BOOL toggle) { invoke<Void>(0x30ADE541, toggle); } // 0x30ADE541
	nativeDecl void _0x0113EAE4() { invoke<Void>(0x0113EAE4); } // 0x0113EAE4
	nativeDecl void GRAB_PAUSEMENU_OWNERSHIP() { invoke<Void>(0xDCBA251B); } // 0xDCBA251B
	nativeDecl void _0x513D444B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x513D444B, p0, p1, p2, p3, p4, p5); } // 0x513D444B
	nativeDecl Any _0xB2410EAB(Any p0) { return invoke<Any>(0xB2410EAB, p0); } // 0xB2410EAB
	nativeDecl Any _0x5AB94128() { return invoke<Any>(0x5AB94128); } // 0x5AB94128
	nativeDecl Any _0xD63FCB3E(Any p0, Any p1) { return invoke<Any>(0xD63FCB3E, p0, p1); } // 0xD63FCB3E
	nativeDecl Any START_PARTICLE_FX_NON_LOOPED_AT_COORD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { return invoke<Any>(0xDD79D679, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0xDD79D679
	nativeDecl Any _START_FWPARTICLE_FX_NON_LOOPED_AT_COORD(const char* FWType, float* xCoord, float* yCoord, float* zCoord, float unk, float unk2, float size, int unk3, int unk4, int unk5, int unk6) { return invoke<Any>(0x633F8C48, FWType, xCoord, yCoord, zCoord, unk, unk2, size, unk3, unk4, unk5, unk6); } // 0x633F8C48
	nativeDecl Any START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12) { return invoke<Any>(0x53DAEF4E, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0x53DAEF4E
	nativeDecl Any _0x161780C1(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12) { return invoke<Any>(0x161780C1, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0x161780C1
	nativeDecl Any START_PARTICLE_FX_NON_LOOPED_ON_ENTITY(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { return invoke<Any>(0x9604DAD4, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x9604DAD4
	nativeDecl void _0x7B689E20(int Red, int Green, int Blue) { invoke<Void>(0x7B689E20, Red, Green, Blue); } // 0x7B689E20
	nativeDecl void SET_PARTICLE_FX_NON_LOOPED_ALPHA(Any p0) { invoke<Void>(0x497EAFF2, p0); } // 0x497EAFF2
	nativeDecl Any START_PARTICLE_FX_LOOPED_AT_COORD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { return invoke<Any>(0xD348E3E6, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0xD348E3E6
	nativeDecl Any START_PARTICLE_FX_LOOPED_ON_PED_BONE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12) { return invoke<Any>(0xF8FC196F, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0xF8FC196F
	nativeDecl Any START_PARTICLE_FX_LOOPED_ON_ENTITY(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { return invoke<Any>(0x0D06FF62, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x0D06FF62
	nativeDecl Any _0x110752B2(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { return invoke<Any>(0x110752B2, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x110752B2
	nativeDecl void STOP_PARTICLE_FX_LOOPED(Any p0, Any p1) { invoke<Void>(0xD245455B, p0, p1); } // 0xD245455B
	nativeDecl void REMOVE_PARTICLE_FX(Any p0, Any p1) { invoke<Void>(0x6BA48C7E, p0, p1); } // 0x6BA48C7E
	nativeDecl void REMOVE_PARTICLE_FX_FROM_ENTITY(Any p0) { invoke<Void>(0xCEDE52E9, p0); } // 0xCEDE52E9
	nativeDecl void REMOVE_PARTICLE_FX_IN_RANGE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x7EB8F275, p0, p1, p2, p3); } // 0x7EB8F275
	nativeDecl BOOL DOES_PARTICLE_FX_LOOPED_EXIST(Any p0) { return invoke<BOOL>(0xCBF91D2A, p0); } // 0xCBF91D2A
	nativeDecl void SET_PARTICLE_FX_LOOPED_OFFSETS(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x641F7790, p0, p1, p2, p3, p4, p5, p6); } // 0x641F7790
	nativeDecl void SET_PARTICLE_FX_LOOPED_EVOLUTION(Any p0, Any p1, Any p2) { invoke<Void>(0x1CBC1373, p0, p1, p2); } // 0x1CBC1373
	nativeDecl void SET_PARTICLE_FX_LOOPED_COLOUR(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x5219D530, p0, p1, p2, p3, p4); } // 0x5219D530
	nativeDecl void SET_PARTICLE_FX_LOOPED_ALPHA(Any p0, Any p1) { invoke<Void>(0x5ED49BE1, p0, p1); } // 0x5ED49BE1
	nativeDecl void SET_PARTICLE_FX_LOOPED_SCALE(Any p0, Any p1) { invoke<Void>(0x099B8B49, p0, p1); } // 0x099B8B49
	nativeDecl void END_TEXT_COMMAND_SCALEFORM_STRING() { invoke<Void>(0x386CE0B8); } // 0x386CE0B8
	nativeDecl void _0x233DE879(Any p0, Any p1) { invoke<Void>(0x233DE879, p0, p1); } // 0x233DE879
	nativeDecl void SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(Any p0) { invoke<Void>(0x19EC0001, p0); } // 0x19EC0001
	nativeDecl void _0x6B125A02(Any p0, Any p1) { invoke<Void>(0x6B125A02, p0, p1); } // 0x6B125A02
	nativeDecl void _0xD938DEE0(Any p0) { invoke<Void>(0xD938DEE0, p0); } // 0xD938DEE0
	nativeDecl void _0xD6844637() { invoke<Void>(0xD6844637); } // 0xD6844637
	nativeDecl void SET_PARTICLE_FX_BLOOD_SCALE(Any p0) { invoke<Void>(0x18136DE0, p0); } // 0x18136DE0
	nativeDecl void SET_CAMERA_ENDTIME(Any p0) { invoke<Void>(0xC61C75E9, p0); } // 0xC61C75E9
	nativeDecl void _0xCE8B8748(Any p0) { invoke<Void>(0xCE8B8748, p0); } // 0xCE8B8748
	nativeDecl void _0xC1AD5DDF(Any p0) { invoke<Void>(0xC1AD5DDF, p0); } // 0xC1AD5DDF
	nativeDecl void _0x3968E915(Any p0) { invoke<Void>(0x3968E915, p0); } // 0x3968E915
	nativeDecl void _0x64BA4648(Any p0) { invoke<Void>(0x64BA4648, p0); } // 0x64BA4648
	nativeDecl void _0x8BE3D47F(Any p0) { invoke<Void>(0x8BE3D47F, p0); } // 0x8BE3D47F
	nativeDecl void _0xE3880F5A(Any p0) { invoke<Void>(0xE3880F5A, p0); } // 0xE3880F5A
	nativeDecl void _0x9C720B61(Any p0) { invoke<Void>(0x9C720B61, p0); } // 0x9C720B61
	nativeDecl void _0xC92719A7(Any p0, Any p1) { invoke<Void>(0xC92719A7, p0, p1); } // 0xC92719A7
	nativeDecl void _0x9E8D8B72(Any p0) { invoke<Void>(0x9E8D8B72, p0); } // 0x9E8D8B72
	nativeDecl void WASH_DECALS_IN_RANGE(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xDEECBC57, p0, p1, p2, p3, p4); } // 0xDEECBC57
	nativeDecl void WASH_DECALS_FROM_VEHICLE(Any p0, Any p1) { invoke<Void>(0x2929F11A, p0, p1); } // 0x2929F11A
	nativeDecl void FADE_DECALS_IN_RANGE(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xF81E884A, p0, p1, p2, p3, p4); } // 0xF81E884A
	nativeDecl void REMOVE_DECALS_IN_RANGE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x06A619A0, p0, p1, p2, p3); } // 0x06A619A0
	nativeDecl void REMOVE_DECALS_FROM_OBJECT(Any p0) { invoke<Void>(0x8B67DCA7, p0); } // 0x8B67DCA7
	nativeDecl void REMOVE_DECALS_FROM_OBJECT_FACING(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF4999A55, p0, p1, p2, p3); } // 0xF4999A55
	nativeDecl void REMOVE_DECALS_FROM_VEHICLE(Any p0) { invoke<Void>(0x831D06CA, p0); } // 0x831D06CA
	nativeDecl Any ADD_DECAL(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15, Any p16, Any p17, Any p18, Any p19) { return invoke<Any>(0xEAD0C412, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19); } // 0xEAD0C412
	nativeDecl Any ADD_PETROL_DECAL(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0x1259DF42, p0, p1, p2, p3, p4, p5); } // 0x1259DF42
	nativeDecl void _0xE3938B0B(Any p0) { invoke<Void>(0xE3938B0B, p0); } // 0xE3938B0B
	nativeDecl void _0xBAEC6ADD(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xBAEC6ADD, p0, p1, p2, p3); } // 0xBAEC6ADD
	nativeDecl void SET_CAMERA_CAMERA_FORWARD() { invoke<Void>(0xCCCA6855); } // 0xCCCA6855
	nativeDecl void REMOVE_DECAL(Any p0) { invoke<Void>(0xA4363188, p0); } // 0xA4363188
	nativeDecl BOOL IS_DECAL_ALIVE(Any p0) { return invoke<BOOL>(0xCDD4A61A, p0); } // 0xCDD4A61A
	nativeDecl Any GET_DECAL_WASH_LEVEL(Any p0) { return invoke<Any>(0x054448EF, p0); } // 0x054448EF
	nativeDecl void _0xEAB6417C() { invoke<Void>(0xEAB6417C); } // 0xEAB6417C
	nativeDecl void _0xC2703B88() { invoke<Void>(0xC2703B88); } // 0xC2703B88
	nativeDecl void _0xA706E84D() { invoke<Void>(0xA706E84D); } // 0xA706E84D
	nativeDecl Any _0x242C6A04(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x242C6A04, p0, p1, p2, p3); } // 0x242C6A04
	nativeDecl void _0x335695CF(Any p0, Any p1, Any p2) { invoke<Void>(0x335695CF, p0, p1, p2); } // 0x335695CF
	nativeDecl void _0x7B786555(Any p0) { invoke<Void>(0x7B786555, p0); } // 0x7B786555
	nativeDecl void MOVE_VEHICLE_DECALS(Any p0, Any p1) { invoke<Void>(0xCE9E6CF2, p0, p1); } // 0xCE9E6CF2
	nativeDecl Any _0x12077738(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12) { return invoke<Any>(0x12077738, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0x12077738
	nativeDecl void _0x667046A8(Any p0) { invoke<Void>(0x667046A8, p0); } // 0x667046A8
	nativeDecl Any _0x4F4D76E8(Any p0) { return invoke<Any>(0x4F4D76E8, p0); } // 0x4F4D76E8
	nativeDecl Any _0x6D58F73B(Any p0) { return invoke<Any>(0x6D58F73B, p0); } // 0x6D58F73B
	nativeDecl void _0x9BABCBA4(Any p0) { invoke<Void>(0x9BABCBA4, p0); } // 0x9BABCBA4
	nativeDecl void _0xFDF6D8DA(Any p0) { invoke<Void>(0xFDF6D8DA, p0); } // 0xFDF6D8DA
	nativeDecl void _0x2056A015(Any p0) { invoke<Void>(0x2056A015, p0); } // 0x2056A015
	nativeDecl void _0x0F486429(Any p0) { invoke<Void>(0x0F486429, p0); } // 0x0F486429
	nativeDecl void _0xD87CC710(Any p0) { invoke<Void>(0xD87CC710, p0); } // 0xD87CC710
	nativeDecl void _0xE29EE145() { invoke<Void>(0xE29EE145); } // 0xE29EE145
	nativeDecl void DISABLE_VEHICLE_DISTANTLIGHTS(Any p0) { invoke<Void>(0x7CFAE36F, p0); } // 0x7CFAE36F
	nativeDecl void _0x60F72371(Any p0) { invoke<Void>(0x60F72371, p0); } // 0x60F72371
	nativeDecl void _0xC53576CA(Any p0) { invoke<Void>(0xC53576CA, p0); } // 0xC53576CA
	nativeDecl void _0x7158B1EA(Any p0) { invoke<Void>(0x7158B1EA, p0); } // 0x7158B1EA
	nativeDecl void SET_TIMECYCLE_MODIFIER(const char* CycleType) { invoke<Void>(0xA81F3638, CycleType); } // 0xA81F3638
	nativeDecl void SET_TIMECYCLE_MODIFIER_STRENGTH(Any p0) { invoke<Void>(0x458F4F45, p0); } // 0x458F4F45
	nativeDecl void SET_TRANSITION_TIMECYCLE_MODIFIER(Any p0, Any p1) { invoke<Void>(0xBB2BA72A, p0, p1); } // 0xBB2BA72A
	nativeDecl void _0x56345F6B(Any p0) { invoke<Void>(0x56345F6B, p0); } // 0x56345F6B
	nativeDecl void CLEAR_TIMECYCLE_MODIFIER() { invoke<Void>(0x8D8DF8EE); } // 0x8D8DF8EE
	nativeDecl Any GET_TIMECYCLE_MODIFIER_INDEX() { return invoke<Any>(0x594FEEC4); } // 0x594FEEC4
	nativeDecl Any _0x03C44E4B() { return invoke<Any>(0x03C44E4B); } // 0x03C44E4B
	nativeDecl void PUSH_TIMECYCLE_MODIFIER() { invoke<Void>(0x7E082045); } // 0x7E082045
	nativeDecl void POP_TIMECYCLE_MODIFIER() { invoke<Void>(0x79D7D235); } // 0x79D7D235
	nativeDecl void _0x85BA15A4(Any p0) { invoke<Void>(0x85BA15A4, p0); } // 0x85BA15A4
	nativeDecl void _0x9559BB38(Any p0) { invoke<Void>(0x9559BB38, p0); } // 0x9559BB38
	nativeDecl void _0x554BA16E(Any p0) { invoke<Void>(0x554BA16E, p0); } // 0x554BA16E
	nativeDecl void _0xE8F538B5(Any p0, Any p1) { invoke<Void>(0xE8F538B5, p0, p1); } // 0xE8F538B5
	nativeDecl void _0x805BAB08(Any p0) { invoke<Void>(0x805BAB08, p0); } // 0x805BAB08
	nativeDecl void _0x908A335E(Any p0) { invoke<Void>(0x908A335E, p0); } // 0x908A335E
	nativeDecl void _0x6776720A() { invoke<Void>(0x6776720A); } // 0x6776720A
	nativeDecl Any REQUEST_SCALEFORM_MOVIE(const char* p0) { return invoke<Any>(0xC67E3DCB, p0); } // 0xC67E3DCB
	nativeDecl Any _0x7CC8057D(Any p0) { return invoke<Any>(0x7CC8057D, p0); } // 0x7CC8057D
	nativeDecl BOOL HAS_SCALEFORM_MOVIE_LOADED(Any p0) { return invoke<BOOL>(0xDDFB6448, p0); } // 0xDDFB6448
	nativeDecl Any _0x1DFE8D8A(Any p0) { return invoke<Any>(0x1DFE8D8A, p0); } // 0x1DFE8D8A
	nativeDecl void SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(int* scaleformHandle) { invoke<Void>(0x5FED3BA1, scaleformHandle); } // 0x5FED3BA1
	nativeDecl void _0x18C9DE8D(Any p0, Any p1) { invoke<Void>(0x18C9DE8D, p0, p1); } // 0x18C9DE8D
	nativeDecl void DRAW_SCALEFORM_MOVIE(int scaleformHandle, float x, float y, float width, float height, int red, int green, int blue, int alpha, int p9) { invoke<Void>(0x48DA6A58, scaleformHandle, x, y, width, height, red, green, blue, alpha, p9); } // 0x48DA6A58
	nativeDecl void _0x7B48E696(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x7B48E696, p0, p1, p2, p3, p4); } // 0x7B48E696
	nativeDecl void _0x9C59FC06(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x9C59FC06, p0, p1, p2, p3, p4, p5); } // 0x9C59FC06
	nativeDecl void _0xC4F63A89(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13) { invoke<Void>(0xC4F63A89, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); } // 0xC4F63A89
	nativeDecl void _0x899933C8(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13) { invoke<Void>(0x899933C8, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); } // 0x899933C8
	nativeDecl void _0x7AB77B57(Any p0, Any p1) { invoke<Void>(0x7AB77B57, p0, p1); } // 0x7AB77B57
	nativeDecl void _0x557EDA1D(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x557EDA1D, p0, p1, p2, p3, p4, p5, p6); } // 0x557EDA1D
	nativeDecl void _0x91A7FCEB(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x91A7FCEB, p0, p1, p2, p3, p4, p5, p6); } // 0x91A7FCEB
	nativeDecl void _0x6EAF56DE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { invoke<Void>(0x6EAF56DE, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x6EAF56DE
	nativeDecl Any _0x5D66CE1E(Any p0, Any p1) { return invoke<Any>(0x5D66CE1E, p0, p1); } // 0x5D66CE1E
	nativeDecl Any _0x215ABBE8(Any p0, const char* p1) { return invoke<Any>(0x215ABBE8, p0, p1); } // 0x215ABBE8
	nativeDecl Any _0xF6015178(Any p0) { return invoke<Any>(0xF6015178, p0); } // 0xF6015178
	nativeDecl Any _0x5E219B67(Any p0) { return invoke<Any>(0x5E219B67, p0); } // 0x5E219B67
	nativeDecl void _0x02DBF2D7() { invoke<Void>(0x02DBF2D7); } // 0x02DBF2D7
	nativeDecl Any _0x2F38B526() { return invoke<Any>(0x2F38B526); } // 0x2F38B526
	nativeDecl Any _0x5CD7C3C0(Any p0) { return invoke<Any>(0x5CD7C3C0, p0); } // 0x5CD7C3C0
	nativeDecl Any _0x2CFB0E6D(Any p0) { return invoke<Any>(0x2CFB0E6D, p0); } // 0x2CFB0E6D
	nativeDecl Any SITTING_TV(Any p0) { return invoke<Any>(0x516862EB, p0); } // 0x516862EB
	nativeDecl void _0x716777CB(Any p0) { invoke<Void>(0x716777CB, p0); } // 0x716777CB
	nativeDecl void _0x9A01FFDA(Any p0) { invoke<Void>(0x9A01FFDA, p0); } // 0x9A01FFDA
	nativeDecl void _0x0D4AE8CB(Any p0) { invoke<Void>(0x0D4AE8CB, p0); } // 0x0D4AE8CB
	nativeDecl void _0x3AC9CB55(const char* p0) { invoke<Void>(0x3AC9CB55, p0); } // 0x3AC9CB55
	nativeDecl void _0x386CE0B8() { invoke<Void>(0x386CE0B8); } // 0x386CE0B8
	nativeDecl void _0x2E80DB52() { invoke<Void>(0x2E80DB52); } // 0x2E80DB52
	nativeDecl void _0x4DAAD55B(Any p0) { invoke<Void>(0x4DAAD55B, p0); } // 0x4DAAD55B
	nativeDecl void _0xCCBF0334(Any p0) { invoke<Void>(0xCCBF0334, p0); } // 0xCCBF0334
	nativeDecl Any _0x91A081A1(Any p0) { return invoke<Any>(0x91A081A1, p0); } // 0x91A081A1
	nativeDecl void _0x83A9811D(Any p0) { invoke<Void>(0x83A9811D, p0); } // 0x83A9811D
	nativeDecl void _0x7AF85862(Any p0) { invoke<Void>(0x7AF85862, p0); } // 0x7AF85862
	nativeDecl Any _0x79B43255(Any p0) { return invoke<Any>(0x79B43255, p0); } // 0x79B43255
	nativeDecl void _0x03D87600(Any p0) { invoke<Void>(0x03D87600, p0); } // 0x03D87600
	nativeDecl Any _0xE9183D3A(Any p0) { return invoke<Any>(0xE9183D3A, p0); } // 0xE9183D3A
	nativeDecl void SET_TV_CHANNEL(Any p0) { invoke<Void>(0x41A8A627, p0); } // 0x41A8A627
	nativeDecl Any GET_TV_CHANNEL() { return invoke<Any>(0x6B96145A); } // 0x6B96145A
	nativeDecl void SET_TV_VOLUME(Any p0) { invoke<Void>(0xF3504F4D, p0); } // 0xF3504F4D
	nativeDecl Any GET_TV_VOLUME() { return invoke<Any>(0x39555CF0); } // 0x39555CF0
	nativeDecl void DRAW_TV_CHANNEL(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0x8129EF89, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x8129EF89
	nativeDecl void _0xB262DE67(Any p0, Any p1, Any p2) { invoke<Void>(0xB262DE67, p0, p1, p2); } // 0xB262DE67
	nativeDecl void _0x78C4DCBE(Any p0, Any p1, Any p2) { invoke<Void>(0x78C4DCBE, p0, p1, p2); } // 0x78C4DCBE
	nativeDecl void _0xCBE7068F(Any p0) { invoke<Void>(0xCBE7068F, p0); } // 0xCBE7068F
	nativeDecl Any _0x4D1EB0FB(Any p0) { return invoke<Any>(0x4D1EB0FB, p0); } // 0x4D1EB0FB
	nativeDecl void _0x796DE696(Any p0) { invoke<Void>(0x796DE696, p0); } // 0x796DE696
	nativeDecl void _0xD99EC000(Any p0) { invoke<Void>(0xD99EC000, p0); } // 0xD99EC000
	nativeDecl void ENABLE_MOVIE_SUBTITLES(Any p0) { invoke<Void>(0xC2DEBA3D, p0); } // 0xC2DEBA3D
	nativeDecl Any _0xE40A0F1A() { return invoke<Any>(0xE40A0F1A); } // 0xE40A0F1A
	nativeDecl Any _0x2E7D9B98(Any p0) { return invoke<Any>(0x2E7D9B98, p0); } // 0x2E7D9B98
	nativeDecl Any _0x9A0E3BFE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0x9A0E3BFE, p0, p1, p2, p3, p4, p5); } // 0x9A0E3BFE
	nativeDecl Any _0x6BBDE6CD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoke<Any>(0x6BBDE6CD, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x6BBDE6CD
	nativeDecl void _0x431AA036() { invoke<Void>(0x431AA036); } // 0x431AA036
	nativeDecl void _0x24A7A7F6(Any p0) { invoke<Void>(0x24A7A7F6, p0); } // 0x24A7A7F6
	nativeDecl void _0xA1CB6C94(Any p0) { invoke<Void>(0xA1CB6C94, p0); } // 0xA1CB6C94
	nativeDecl void _0x3B637AA7(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12) { invoke<Void>(0x3B637AA7, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0x3B637AA7
	nativeDecl void _0xDF552973(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { invoke<Void>(0xDF552973, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0xDF552973
	nativeDecl void _0x1D980479(const char* p0, BOOL p1, BOOL p2) { invoke<Void>(0x1D980479, p0, p1, p2); } // 0x1D980479
	nativeDecl void _0x06BB5CDA(Any p0) { invoke<Void>(0x06BB5CDA, p0); } // 0x06BB5CDA
	nativeDecl Any _0x089D5921(Any p0) { return invoke<Any>(0x089D5921, p0); } // 0x089D5921
	nativeDecl void _0x4E6D875B() { invoke<Void>(0x4E6D875B); } // 0x4E6D875B
}

namespace STATS
{
	nativeDecl Any _0x84BDD475(Any p0) { return invoke<Any>(0x84BDD475, p0); } // 0x84BDD475
	nativeDecl Any STAT_LOAD(Any p0) { return invoke<Any>(0x9E5629F4, p0); } // 0x9E5629F4
	nativeDecl Any STAT_SAVE(int p0, BOOL p1, int p2) { return invoke<Any>(0xE10A7CA4, p0, p1, p2); } // 0xE10A7CA4
	nativeDecl void _0xC62406A6(Any p0) { invoke<Void>(0xC62406A6, p0); } // 0xC62406A6
	nativeDecl Any STAT_LOAD_PENDING(Any p0) { return invoke<Any>(0x4E9AC983, p0); } // 0x4E9AC983
	nativeDecl Any STAT_SAVE_PENDING() { return invoke<Any>(0xC3FD3822); } // 0xC3FD3822
	nativeDecl Any _0xA3407CA3() { return invoke<Any>(0xA3407CA3); } // 0xA3407CA3
	nativeDecl Any STAT_DELETE_SLOT(Any p0) { return invoke<Any>(0x2F171B94, p0); } // 0x2F171B94
	nativeDecl Any _0x7A299C13(Any p0) { return invoke<Any>(0x7A299C13, p0); } // 0x7A299C13
	nativeDecl Any _0x0BF0F4B2(Any p0) { return invoke<Any>(0x0BF0F4B2, p0); } // 0x0BF0F4B2
	nativeDecl Any _0xCE6B62B5(Any p0) { return invoke<Any>(0xCE6B62B5, p0); } // 0xCE6B62B5
	nativeDecl void _0xCE7A2411(Any p0) { invoke<Void>(0xCE7A2411, p0); } // 0xCE7A2411
	nativeDecl Any _0x22804C20(Any p0) { return invoke<Any>(0x22804C20, p0); } // 0x22804C20
	nativeDecl void _0x395D18B1(Any p0) { invoke<Void>(0x395D18B1, p0); } // 0x395D18B1
	nativeDecl Any _0xED7000C8() { return invoke<Any>(0xED7000C8); } // 0xED7000C8
	nativeDecl Any _0x099FCC86() { return invoke<Any>(0x099FCC86); } // 0x099FCC86
	nativeDecl Any STAT_SET_INT(Hash statName, int value, BOOL save) { return invoke<Any>(0xC9CC1C5C, statName, value, save); } // 0xC9CC1C5C
	nativeDecl Any STAT_SET_FLOAT(Hash statName, float value, BOOL save) { return invoke<Any>(0x6CEA96F2, statName, value, save); } // 0x6CEA96F2
	nativeDecl Any STAT_SET_BOOL(Hash statName, BOOL value, BOOL save) { return invoke<Any>(0x55D79DFB, statName, value, save); } // 0x55D79DFB
	nativeDecl Any _0xC1224AA7(Any p0, Any p1, Any p2) { return invoke<Any>(0xC1224AA7, p0, p1, p2); } // 0xC1224AA7
	nativeDecl Any STAT_SET_DATE(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x36BE807B, p0, p1, p2, p3); } // 0x36BE807B
	nativeDecl Any STAT_SET_STRING(Hash statName, const char* value, BOOL save) { return invoke<Any>(0xB1EF2E21, statName, value, save); } // 0xB1EF2E21
	nativeDecl Any STAT_SET_POS(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x1192C9A3, p0, p1, p2, p3, p4); } // 0x1192C9A3
	nativeDecl Any STAT_SET_MASKED_INT(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x2CBAA739, p0, p1, p2, p3, p4); } // 0x2CBAA739
	nativeDecl Any STAT_SET_USER_ID(Any p0, Any p1, Any p2) { return invoke<Any>(0xDBE78ED7, p0, p1, p2); } // 0xDBE78ED7
	nativeDecl Any _0xA286F015(Any p0, Any p1) { return invoke<Any>(0xA286F015, p0, p1); } // 0xA286F015
	nativeDecl BOOL STAT_GET_INT(Hash statHash, int* valuePointer, int p2) { return invoke<BOOL>(0x1C6FE43E, statHash, valuePointer, p2); } // 0x1C6FE43E
	nativeDecl BOOL STAT_GET_FLOAT(Hash statHash, float* valuePointer, Any p2) { return invoke<BOOL>(0xFCBDA612, statHash, valuePointer, p2); } // 0xFCBDA612
	nativeDecl BOOL STAT_GET_BOOL(Hash statHash, int* valuePointer, Any p2) { return invoke<BOOL>(0x28A3DD2B, statHash, valuePointer, p2); } // 0x28A3DD2B
	nativeDecl Any STAT_GET_DATE(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0xD762D16C, p0, p1, p2, p3); } // 0xD762D16C
	nativeDecl Any STAT_GET_STRING(Any p0, Any p1) { return invoke<Any>(0x10CE4BDE, p0, p1); } // 0x10CE4BDE
	nativeDecl Any STAT_GET_POS(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0xC846ECCE, p0, p1, p2, p3, p4); } // 0xC846ECCE
	nativeDecl Any STAT_GET_MASKED_INT(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0xE9D9B70F, p0, p1, p2, p3, p4); } // 0xE9D9B70F
	nativeDecl Any STAT_GET_USER_ID(Any p0) { return invoke<Any>(0xE2E8B6BA, p0); } // 0xE2E8B6BA
	nativeDecl Any _0x1544B29F(Any p0) { return invoke<Any>(0x1544B29F, p0); } // 0x1544B29F
	nativeDecl Any _0x3507D253(Any p0, Any p1) { return invoke<Any>(0x3507D253, p0, p1); } // 0x3507D253
	nativeDecl void STAT_INCREMENT(const char* statName, int Value) { invoke<Void>(0xDFC5F71E, statName, Value); } // 0xDFC5F71E
	nativeDecl Any _0x46F21343() { return invoke<Any>(0x46F21343); } // 0x46F21343
	nativeDecl Any _0x02F283CE() { return invoke<Any>(0x02F283CE); } // 0x02F283CE
	nativeDecl Any _0xC4110917(Any p0, Any p1, Any p2) { return invoke<Any>(0xC4110917, p0, p1, p2); } // 0xC4110917
	nativeDecl void _0x343B27E2(Any p0) { invoke<Void>(0x343B27E2, p0); } // 0x343B27E2
	nativeDecl void _0xE3247582(Any p0) { invoke<Void>(0xE3247582, p0); } // 0xE3247582
	nativeDecl Any _0xFD66A429(Any p0) { return invoke<Any>(0xFD66A429, p0); } // 0xFD66A429
	nativeDecl Any _0x9B431236(Any p0) { return invoke<Any>(0x9B431236, p0); } // 0x9B431236
	nativeDecl Any _0x347B4436(Any p0) { return invoke<Any>(0x347B4436, p0); } // 0x347B4436
	nativeDecl Any _0x2C1D6C31(Any p0) { return invoke<Any>(0x2C1D6C31, p0); } // 0x2C1D6C31
	nativeDecl void _0x24DD4929(Any p0, Any p1) { invoke<Void>(0x24DD4929, p0, p1); } // 0x24DD4929
	nativeDecl Any _0xDFC25D66(Any p0) { return invoke<Any>(0xDFC25D66, p0); } // 0xDFC25D66
	nativeDecl Any _0xCA160BCC(Any p0) { return invoke<Any>(0xCA160BCC, p0); } // 0xCA160BCC
	nativeDecl Any _0xB5BF87B2(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0xB5BF87B2, p0, p1, p2, p3); } // 0xB5BF87B2
	nativeDecl Any _0x1F938864(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x1F938864, p0, p1, p2, p3); } // 0x1F938864
	nativeDecl Any _0x3F8E893B(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x3F8E893B, p0, p1, p2, p3); } // 0x3F8E893B
	nativeDecl Any _0xFB93C5A2(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0xFB93C5A2, p0, p1, p2, p3); } // 0xFB93C5A2
	nativeDecl Any STAT_GET_BOOL_MASKED(Any p0, Any p1, Any p2) { return invoke<Any>(0x6ACE1B7D, p0, p1, p2); } // 0x6ACE1B7D
	nativeDecl Any STAT_SET_BOOL_MASKED(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x7842C4D6, p0, p1, p2, p3); } // 0x7842C4D6
	nativeDecl void _0x61ECC465(Any p0, Any p1) { invoke<Void>(0x61ECC465, p0, p1); } // 0x61ECC465
	nativeDecl void PLAYSTATS_NPC_INVITE(Any p0) { invoke<Void>(0x598C06F3, p0); } // 0x598C06F3
	nativeDecl void PLAYSTATS_AWARD_XP(Any p0, Any p1, Any p2) { invoke<Void>(0x8770017B, p0, p1, p2); } // 0x8770017B
	nativeDecl void PLAYSTATS_RANK_UP(Any p0) { invoke<Void>(0x56AFB9F5, p0); } // 0x56AFB9F5
	nativeDecl void _0x896CDF8D() { invoke<Void>(0x896CDF8D); } // 0x896CDF8D
	nativeDecl void _0x1A66945F(Any p0, Any p1) { invoke<Void>(0x1A66945F, p0, p1); } // 0x1A66945F
	nativeDecl void _0xC960E161(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xC960E161, p0, p1, p2, p3, p4); } // 0xC960E161
	nativeDecl void PLAYSTATS_MISSION_STARTED(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x3AAB699C, p0, p1, p2, p3); } // 0x3AAB699C
	nativeDecl void PLAYSTATS_MISSION_OVER(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x5B90B5FF, p0, p1, p2, p3, p4, p5); } // 0x5B90B5FF
	nativeDecl void PLAYSTATS_MISSION_CHECKPOINT(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xCDC52280, p0, p1, p2, p3); } // 0xCDC52280
	nativeDecl void _0xAC2C7C63(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xAC2C7C63, p0, p1, p2, p3); } // 0xAC2C7C63
	nativeDecl void _0x413539BC(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x413539BC, p0, p1, p2, p3); } // 0x413539BC
	nativeDecl void PLAYSTATS_RACE_CHECKPOINT(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x580D5508, p0, p1, p2, p3, p4); } // 0x580D5508
	nativeDecl Any _0x489E27E7(Any p0, Any p1) { return invoke<Any>(0x489E27E7, p0, p1); } // 0x489E27E7
	nativeDecl void PLAYSTATS_MATCH_STARTED(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x2BDE85C1, p0, p1, p2, p3, p4, p5, p6); } // 0x2BDE85C1
	nativeDecl void PLAYSTATS_SHOP_ITEM(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xA4746384, p0, p1, p2, p3, p4); } // 0xA4746384
	nativeDecl void _0x6602CED6(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x6602CED6, p0, p1, p2, p3, p4, p5); } // 0x6602CED6
	nativeDecl void _0x759E0EC9(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x759E0EC9, p0, p1, p2, p3); } // 0x759E0EC9
	nativeDecl void _0x62073DF7(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x62073DF7, p0, p1, p2, p3); } // 0x62073DF7
	nativeDecl void _0x30558CFD(Any p0, Any p1, Any p2) { invoke<Void>(0x30558CFD, p0, p1, p2); } // 0x30558CFD
	nativeDecl void _0x06CE3692(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoke<Void>(0x06CE3692, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x06CE3692
	nativeDecl void _0x8D5C7B37(Any p0) { invoke<Void>(0x8D5C7B37, p0); } // 0x8D5C7B37
	nativeDecl void _0x37D152BB(Any p0, Any p1) { invoke<Void>(0x37D152BB, p0, p1); } // 0x37D152BB
	nativeDecl void PLAYSTATS_FRIEND_ACTIVITY(Any p0, Any p1) { invoke<Void>(0xD1FA1BDB, p0, p1); } // 0xD1FA1BDB
	nativeDecl void PLAYSTATS_ODDJOB_DONE(Any p0, Any p1, Any p2) { invoke<Void>(0xFE14A8EA, p0, p1, p2); } // 0xFE14A8EA
	nativeDecl void PLAYSTATS_PROP_CHANGE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x25740A1D, p0, p1, p2, p3); } // 0x25740A1D
	nativeDecl void PLAYSTATS_CLOTH_CHANGE(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x3AFF9E58, p0, p1, p2, p3, p4); } // 0x3AFF9E58
	nativeDecl void _0x79716890(Any p0, Any p1, Any p2) { invoke<Void>(0x79716890, p0, p1, p2); } // 0x79716890
	nativeDecl void PLAYSTATS_CHEAT_APPLIED(Any p0) { invoke<Void>(0x345166F3, p0); } // 0x345166F3
	nativeDecl void _0x04181752(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x04181752, p0, p1, p2, p3); } // 0x04181752
	nativeDecl void _0x31002201(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x31002201, p0, p1, p2, p3); } // 0x31002201
	nativeDecl void _0xDDD1F1F3(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xDDD1F1F3, p0, p1, p2, p3); } // 0xDDD1F1F3
	nativeDecl void _0x66FEB701(Any p0, Any p1) { invoke<Void>(0x66FEB701, p0, p1); } // 0x66FEB701
	nativeDecl void _0x9E2B9522(Any p0) { invoke<Void>(0x9E2B9522, p0); } // 0x9E2B9522
	nativeDecl Any LEADERBOARDS_GET_NUMBER_OF_COLUMNS(Any p0, Any p1) { return invoke<Any>(0x0A56EE34, p0, p1); } // 0x0A56EE34
	nativeDecl Any LEADERBOARDS_GET_COLUMN_ID(Any p0, Any p1, Any p2) { return invoke<Any>(0x3821A334, p0, p1, p2); } // 0x3821A334
	nativeDecl Any LEADERBOARDS_GET_COLUMN_TYPE(Any p0, Any p1, Any p2) { return invoke<Any>(0x6F2820F4, p0, p1, p2); } // 0x6F2820F4
	nativeDecl Any LEADERBOARDS_READ_CLEAR_ALL() { return invoke<Any>(0x233E058A); } // 0x233E058A
	nativeDecl Any LEADERBOARDS_READ_CLEAR(Any p0, Any p1, Any p2) { return invoke<Any>(0x7090012F, p0, p1, p2); } // 0x7090012F
	nativeDecl Any LEADERBOARDS_READ_PENDING(Any p0, Any p1, Any p2) { return invoke<Any>(0xEEB8BF5C, p0, p1, p2); } // 0xEEB8BF5C
	nativeDecl Any _0x1789437B() { return invoke<Any>(0x1789437B); } // 0x1789437B
	nativeDecl Any LEADERBOARDS_READ_SUCCESSFUL(Any p0, Any p1, Any p2) { return invoke<Any>(0x3AC5B2F1, p0, p1, p2); } // 0x3AC5B2F1
	nativeDecl Any LEADERBOARDS2_READ_FRIENDS_BY_ROW(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0xBD91B136, p0, p1, p2, p3, p4, p5); } // 0xBD91B136
	nativeDecl Any LEADERBOARDS2_READ_BY_HANDLE(Any p0, Any p1) { return invoke<Any>(0x6B553408, p0, p1); } // 0x6B553408
	nativeDecl Any LEADERBOARDS2_READ_BY_ROW(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<Any>(0xCA931F34, p0, p1, p2, p3, p4, p5, p6); } // 0xCA931F34
	nativeDecl Any LEADERBOARDS2_READ_BY_RANK(Any p0, Any p1, Any p2) { return invoke<Any>(0x1B03F59F, p0, p1, p2); } // 0x1B03F59F
	nativeDecl Any LEADERBOARDS2_READ_BY_RADIUS(Any p0, Any p1, Any p2) { return invoke<Any>(0xC5B7E685, p0, p1, p2); } // 0xC5B7E685
	nativeDecl Any LEADERBOARDS2_READ_BY_SCORE_INT(Any p0, Any p1, Any p2) { return invoke<Any>(0xAC020C18, p0, p1, p2); } // 0xAC020C18
	nativeDecl Any LEADERBOARDS2_READ_BY_SCORE_FLOAT(Any p0, Any p1, Any p2) { return invoke<Any>(0xC678B29F, p0, p1, p2); } // 0xC678B29F
	nativeDecl Any _0x9BEC3401(Any p0, Any p1, Any p2) { return invoke<Any>(0x9BEC3401, p0, p1, p2); } // 0x9BEC3401
	nativeDecl Any _0xC977D6E2(Any p0) { return invoke<Any>(0xC977D6E2, p0); } // 0xC977D6E2
	nativeDecl void _0xF2DB6A82() { invoke<Void>(0xF2DB6A82); } // 0xF2DB6A82
	nativeDecl Any _0x766A74FE(Any p0, Any p1) { return invoke<Any>(0x766A74FE, p0, p1); } // 0x766A74FE
	nativeDecl Any _0x6B90E730(Any p0, Any p1) { return invoke<Any>(0x6B90E730, p0, p1); } // 0x6B90E730
	nativeDecl Any _0x509A286F(Any p0, Any p1) { return invoke<Any>(0x509A286F, p0, p1); } // 0x509A286F
	nativeDecl Any LEADERBOARDS2_WRITE_DATA(Any p0) { return invoke<Any>(0x5F9DF634, p0); } // 0x5F9DF634
	nativeDecl void _0x7524E27B(Any p0, Any p1, Any p2) { invoke<Void>(0x7524E27B, p0, p1, p2); } // 0x7524E27B
	nativeDecl void _0x1C5CCC3A(Any p0, Any p1, Any p2) { invoke<Void>(0x1C5CCC3A, p0, p1, p2); } // 0x1C5CCC3A
	nativeDecl Any LEADERBOARDS_CACHE_DATA_ROW(Any p0) { return invoke<Any>(0x44F7D82B, p0); } // 0x44F7D82B
	nativeDecl void LEADERBOARDS_CLEAR_CACHE_DATA() { invoke<Void>(0x87F498C1); } // 0x87F498C1
	nativeDecl void _0x88AE9667(Any p0) { invoke<Void>(0x88AE9667, p0); } // 0x88AE9667
	nativeDecl Any LEADERBOARDS_GET_CACHE_EXISTS(Any p0) { return invoke<Any>(0xFC8A71F3, p0); } // 0xFC8A71F3
	nativeDecl Any LEADERBOARDS_GET_CACHE_TIME(Any p0) { return invoke<Any>(0xEDF02302, p0); } // 0xEDF02302
	nativeDecl Any _0xCE7CB520(Any p0) { return invoke<Any>(0xCE7CB520, p0); } // 0xCE7CB520
	nativeDecl Any LEADERBOARDS_GET_CACHE_DATA_ROW(Any p0, Any p1, Any p2) { return invoke<Any>(0xA11289EC, p0, p1, p2); } // 0xA11289EC
	nativeDecl void _0x4AC39C6C(Any p0, Any p1, Any p2) { invoke<Void>(0x4AC39C6C, p0, p1, p2); } // 0x4AC39C6C
	nativeDecl void _0x3E69E7C3(Any p0, Any p1, Any p2) { invoke<Void>(0x3E69E7C3, p0, p1, p2); } // 0x3E69E7C3
	nativeDecl void _0x2FFD2FA5(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x2FFD2FA5, p0, p1, p2, p3); } // 0x2FFD2FA5
	nativeDecl Any _0x23D70C39() { return invoke<Any>(0x23D70C39); } // 0x23D70C39
	nativeDecl void _0x0AD43306() { invoke<Void>(0x0AD43306); } // 0x0AD43306
	nativeDecl void _0xC7DE5C30() { invoke<Void>(0xC7DE5C30); } // 0xC7DE5C30
	nativeDecl void _0xA3DAC790(Any p0) { invoke<Void>(0xA3DAC790, p0); } // 0xA3DAC790
	nativeDecl void _0x726FAE66(Any p0) { invoke<Void>(0x726FAE66, p0); } // 0x726FAE66
	nativeDecl void _0xF03895A4(Any p0) { invoke<Void>(0xF03895A4, p0); } // 0xF03895A4
	nativeDecl void _0x4C39CF10(Any p0, Any p1) { invoke<Void>(0x4C39CF10, p0, p1); } // 0x4C39CF10
	nativeDecl void _0x2180AE13(Any p0, Any p1) { invoke<Void>(0x2180AE13, p0, p1); } // 0x2180AE13
	nativeDecl void _0xEE292B91(Any p0, Any p1) { invoke<Void>(0xEE292B91, p0, p1); } // 0xEE292B91
	nativeDecl void _0xA063CABD() { invoke<Void>(0xA063CABD); } // 0xA063CABD
	nativeDecl Any _0x62C19A3D(Any p0, Any p1) { return invoke<Any>(0x62C19A3D, p0, p1); } // 0x62C19A3D
	nativeDecl void FORCE_CLOUD_MP_STATS_DOWNLOAD_AND_OVERWRITE_LOCAL_SAVE() { invoke<Void>(0x3B4EF322); } // 0x3B4EF322
	nativeDecl Any _0x54E775E0() { return invoke<Any>(0x54E775E0); } // 0x54E775E0
	nativeDecl int STAT_GET_SAVE_MIGRATION_STATUS(Any* data) { return invoke<int>(0xE3F0D62D, data); } // 0xE3F0D62D
}

namespace BRAIN
{
	nativeDecl void ADD_SCRIPT_TO_RANDOM_PED(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xECC76C3D, p0, p1, p2, p3); } // 0xECC76C3D
	nativeDecl void REGISTER_OBJECT_SCRIPT_BRAIN(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0xB6BCC608, p0, p1, p2, p3, p4, p5); } // 0xB6BCC608
	nativeDecl BOOL IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(Any p0) { return invoke<BOOL>(0xBA4CAA56, p0); } // 0xBA4CAA56
	nativeDecl void REGISTER_WORLD_POINT_SCRIPT_BRAIN(Any p0, Any p1, Any p2) { invoke<Void>(0x725D91F7, p0, p1, p2); } // 0x725D91F7
	nativeDecl BOOL IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() { return invoke<BOOL>(0x2CF305A0); } // 0x2CF305A0
	nativeDecl void ENABLE_SCRIPT_BRAIN_SET(Any p0) { invoke<Void>(0x2765919F, p0); } // 0x2765919F
	nativeDecl void DISABLE_SCRIPT_BRAIN_SET(Any p0) { invoke<Void>(0xFBD13FAD, p0); } // 0xFBD13FAD
	nativeDecl void _0x19B27825() { invoke<Void>(0x19B27825); } // 0x19B27825
	nativeDecl void _0xF3A3AB08() { invoke<Void>(0xF3A3AB08); } // 0xF3A3AB08
	nativeDecl void _0x949FE53E(Any p0) { invoke<Void>(0x949FE53E, p0); } // 0x949FE53E
	nativeDecl void _0x29CE8BAA(Any p0) { invoke<Void>(0x29CE8BAA, p0); } // 0x29CE8BAA
}

namespace MOBILE
{
	nativeDecl void CREATE_MOBILE_PHONE(Any p0) { invoke<Void>(0x5BBC5E23, p0); } // 0x5BBC5E23
	nativeDecl void DESTROY_MOBILE_PHONE() { invoke<Void>(0x1A65037B); } // 0x1A65037B
	nativeDecl void SET_MOBILE_PHONE_SCALE(float p0) { invoke<Void>(0x09BCF1BE, p0); } // 0x09BCF1BE
	nativeDecl void SET_MOBILE_PHONE_ROTATION(float p0, float p1, float p2, Any p3) { invoke<Void>(0x209C28CF, p0, p1, p2, p3); } // 0x209C28CF
	nativeDecl void GET_MOBILE_PHONE_ROTATION(Any p0, Any p1) { invoke<Void>(0x17A29F23, p0, p1); } // 0x17A29F23
	nativeDecl void SET_MOBILE_PHONE_POSITION(float x, float y, float z) { invoke<Void>(0x841800B3, x, y, z); } // 0x841800B3
	nativeDecl void GET_MOBILE_PHONE_POSITION(Any p0) { invoke<Void>(0xB2E1E1A0, p0); } // 0xB2E1E1A0
	nativeDecl void SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(Any p0) { invoke<Void>(0x29828690, p0); } // 0x29828690
	nativeDecl BOOL CAN_PHONE_BE_SEEN_ON_SCREEN() { return invoke<BOOL>(0x5F978584); } // 0x5F978584
	nativeDecl void CELL_CAM_ACTIVATE(Any p0, Any p1) { invoke<Void>(0x234C1AE9, p0, p1); } // 0x234C1AE9
	nativeDecl void _0x4479B304(Any p0) { invoke<Void>(0x4479B304, p0); } // 0x4479B304
	nativeDecl void _0xC273BB4D(Any p0) { invoke<Void>(0xC273BB4D, p0); } // 0xC273BB4D
	nativeDecl void _0x66DCD9D2(Any p0) { invoke<Void>(0x66DCD9D2, p0); } // 0x66DCD9D2
	nativeDecl Any CELL_CAM_IS_CHAR_VISIBLE_NO_FACE_CHECK(Any p0) { return invoke<Any>(0xBEA88097, p0); } // 0xBEA88097
	nativeDecl void GET_MOBILE_PHONE_RENDER_ID(int* p0) { invoke<Void>(0x88E4FECE, p0); } // 0x88E4FECE
}

namespace APP
{
	nativeDecl Any APP_DATA_VALID() { return invoke<Any>(0x72BDE002); } // 0x72BDE002
	nativeDecl Any APP_GET_INT(Any p0) { return invoke<Any>(0x2942AAD2, p0); } // 0x2942AAD2
	nativeDecl Any APP_GET_FLOAT(Any p0) { return invoke<Any>(0xD87F3A1C, p0); } // 0xD87F3A1C
	nativeDecl Any APP_GET_STRING(Any p0) { return invoke<Any>(0x849CEB80, p0); } // 0x849CEB80
	nativeDecl void APP_SET_INT(Any p0, Any p1) { invoke<Void>(0x1B509C32, p0, p1); } // 0x1B509C32
	nativeDecl void APP_SET_FLOAT(Any p0, Any p1) { invoke<Void>(0xF3076135, p0, p1); } // 0xF3076135
	nativeDecl void APP_SET_STRING(Any p0, Any p1) { invoke<Void>(0x23DF19A8, p0, p1); } // 0x23DF19A8
	nativeDecl void APP_SET_APP(Any p0) { invoke<Void>(0x8BAC4146, p0); } // 0x8BAC4146
	nativeDecl void APP_SET_BLOCK(Any p0) { invoke<Void>(0xC2D54DD9, p0); } // 0xC2D54DD9
	nativeDecl void APP_CLEAR_BLOCK() { invoke<Void>(0xDAB86A18); } // 0xDAB86A18
	nativeDecl void APP_CLOSE_APP() { invoke<Void>(0x03767C7A); } // 0x03767C7A
	nativeDecl void APP_CLOSE_BLOCK() { invoke<Void>(0xED97B202); } // 0xED97B202
	nativeDecl Any _0xD368BA15() { return invoke<Any>(0xD368BA15); } // 0xD368BA15
	nativeDecl Vehicle APP_HAS_SYNCED_DATA(Vehicle p0) { return invoke<Vehicle>(0x1DE2A63D, p0); } // 0x1DE2A63D
	nativeDecl void APP_SAVE_DATA() { invoke<Void>(0x84A3918D); } // 0x84A3918D
	nativeDecl Any _0x784D550B() { return invoke<Any>(0x784D550B); } // 0x784D550B
	nativeDecl Any APP_DELETE_APP_DATA(Any p0) { return invoke<Any>(0x2A2FBD1C, p0); } // 0x2A2FBD1C
}

namespace TIME
{
	nativeDecl void SET_CLOCK_TIME(Any p0, Any p1, Any p2) { invoke<Void>(0x26F6AF14, p0, p1, p2); } // 0x26F6AF14
	nativeDecl void PAUSE_CLOCK(Any p0) { invoke<Void>(0xB02D6124, p0); } // 0xB02D6124
	nativeDecl void _0x57B8DA7C(Any p0, Any p1, Any p2) { invoke<Void>(0x57B8DA7C, p0, p1, p2); } // 0x57B8DA7C
	nativeDecl void ADD_TO_CLOCK_TIME(Any p0, Any p1, Any p2) { invoke<Void>(0xCC40D20D, p0, p1, p2); } // 0xCC40D20D
	nativeDecl Any GET_CLOCK_HOURS() { return invoke<Any>(0x7EF8316F); } // 0x7EF8316F
	nativeDecl Any GET_CLOCK_MINUTES() { return invoke<Any>(0x94AAC486); } // 0x94AAC486
	nativeDecl Any GET_CLOCK_SECONDS() { return invoke<Any>(0x099C927E); } // 0x099C927E
	nativeDecl void SET_CLOCK_DATE(Any p0, Any p1, Any p2) { invoke<Void>(0x96891C94, p0, p1, p2); } // 0x96891C94
	nativeDecl Any GET_CLOCK_DAY_OF_WEEK() { return invoke<Any>(0x84E4A289); } // 0x84E4A289
	nativeDecl Any GET_CLOCK_DAY_OF_MONTH() { return invoke<Any>(0xC7A5ACB7); } // 0xC7A5ACB7
	nativeDecl Any GET_CLOCK_MONTH() { return invoke<Any>(0x3C48A3D5); } // 0x3C48A3D5
	nativeDecl Any GET_CLOCK_YEAR() { return invoke<Any>(0xB8BECF15); } // 0xB8BECF15
	nativeDecl Any _0x3B74095C() { return invoke<Any>(0x3B74095C); } // 0x3B74095C
	nativeDecl void GET_POSIX_TIME(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0xE15A5281, p0, p1, p2, p3, p4, p5); } // 0xE15A5281
	nativeDecl void GET_LOCAL_TIME(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x124BCFA2, p0, p1, p2, p3, p4, p5); } // 0x124BCFA2
}

namespace PATHFIND
{
	nativeDecl void SET_ROADS_IN_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0xEBC7B918, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xEBC7B918
	nativeDecl void SET_ROADS_IN_ANGLED_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoke<Void>(0xBD088F4B, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0xBD088F4B
	nativeDecl void SET_PED_PATHS_IN_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x2148EA84, p0, p1, p2, p3, p4, p5, p6); } // 0x2148EA84
	nativeDecl Any GET_SAFE_COORD_FOR_PED(float x, float y, float z, Any p3, Object* outVector, Any p5) { return invoke<Any>(0xB370270A, x, y, z, p3, outVector, p5); } // 0xB370270A
	nativeDecl int GET_CLOSEST_VEHICLE_NODE(float x, float y, float z, float* nodeX, int p4, float p5, float p6) { return invoke<int>(0x6F5F1E6C, x, y, z, nodeX, p4, p5, p6); } // 0x6F5F1E6C
	nativeDecl Any GET_CLOSEST_MAJOR_VEHICLE_NODE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0x04B5F15B, p0, p1, p2, p3, p4, p5); } // 0x04B5F15B
	nativeDecl Any GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoke<Any>(0x8BD5759B, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x8BD5759B
	nativeDecl Any GET_NTH_CLOSEST_VEHICLE_NODE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoke<Any>(0xF125BFCC, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xF125BFCC
	nativeDecl Any GET_NTH_CLOSEST_VEHICLE_NODE_ID(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<Any>(0x3F358BEA, p0, p1, p2, p3, p4, p5, p6); } // 0x3F358BEA
	nativeDecl Any GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return invoke<Any>(0x7349C856, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x7349C856
	nativeDecl Any GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoke<Any>(0xC1AEB88D, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xC1AEB88D
	nativeDecl Any GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { return invoke<Any>(0x928A4DEC, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x928A4DEC
	nativeDecl Any GET_VEHICLE_NODE_PROPERTIES(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0xCC90110B, p0, p1, p2, p3, p4); } // 0xCC90110B
	nativeDecl BOOL IS_VEHICLE_NODE_ID_VALID(Any p0) { return invoke<BOOL>(0x57DFB1EF, p0); } // 0x57DFB1EF
	nativeDecl void GET_VEHICLE_NODE_POSITION(Any p0, Any p1) { invoke<Void>(0xE38E252D, p0, p1); } // 0xE38E252D
	nativeDecl Any _0xEE4B1219(Any p0) { return invoke<Any>(0xEE4B1219, p0); } // 0xEE4B1219
	nativeDecl Any _0x56737A3C(Any p0) { return invoke<Any>(0x56737A3C, p0); } // 0x56737A3C
	nativeDecl Any GET_CLOSEST_ROAD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { return invoke<Any>(0x567B0E11, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x567B0E11
	nativeDecl Any LOAD_ALL_PATH_NODES(Any p0) { return invoke<Any>(0xC66E28C3, p0); } // 0xC66E28C3
	nativeDecl void _0xD6A3B458(Any p0) { invoke<Void>(0xD6A3B458, p0); } // 0xD6A3B458
	nativeDecl Any _0x86E80A17(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x86E80A17, p0, p1, p2, p3); } // 0x86E80A17
	nativeDecl Any _0x2CDA5012(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x2CDA5012, p0, p1, p2, p3); } // 0x2CDA5012
	nativeDecl void SET_ROADS_BACK_TO_ORIGINAL(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x86AC4A85, p0, p1, p2, p3, p4, p5); } // 0x86AC4A85
	nativeDecl void SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x9DB5D209, p0, p1, p2, p3, p4, p5, p6); } // 0x9DB5D209
	nativeDecl void _0x3C5085E4(Any p0) { invoke<Void>(0x3C5085E4, p0); } // 0x3C5085E4
	nativeDecl void _0xD0F51299(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0xD0F51299, p0, p1, p2, p3, p4, p5, p6); } // 0xD0F51299
	nativeDecl void SET_PED_PATHS_BACK_TO_ORIGINAL(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x3F1ABDA4, p0, p1, p2, p3, p4, p5); } // 0x3F1ABDA4
	nativeDecl Any GET_RANDOM_VEHICLE_NODE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoke<Any>(0xAD1476EA, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xAD1476EA
	nativeDecl void GET_STREET_NAME_AT_COORD(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xDEBEEFCF, p0, p1, p2, p3, p4); } // 0xDEBEEFCF
	nativeDecl Any GENERATE_DIRECTIONS_TO_COORD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<Any>(0xED35C094, p0, p1, p2, p3, p4, p5, p6); } // 0xED35C094
	nativeDecl void SET_IGNORE_NO_GPS_FLAG(Any p0) { invoke<Void>(0xB72CF194, p0); } // 0xB72CF194
	nativeDecl void _0x90DF7A4C(Any p0) { invoke<Void>(0x90DF7A4C, p0); } // 0x90DF7A4C
	nativeDecl void SET_GPS_DISABLED_ZONE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x720B8073, p0, p1, p2, p3, p4, p5); } // 0x720B8073
	nativeDecl Any _0x4B770634() { return invoke<Any>(0x4B770634); } // 0x4B770634
	nativeDecl Any _0x286F82CC() { return invoke<Any>(0x286F82CC); } // 0x286F82CC
	nativeDecl Any _0xF6422F9A(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0xF6422F9A, p0, p1, p2, p3, p4); } // 0xF6422F9A
	nativeDecl BOOL IS_POINT_ON_ROAD(Any p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0xCF198055, p0, p1, p2, p3); } // 0xCF198055
	nativeDecl void ADD_NAVMESH_REQUIRED_REGION(Any p0, Any p1, Any p2) { invoke<Void>(0x12B086EA, p0, p1, p2); } // 0x12B086EA
	nativeDecl void REMOVE_NAVMESH_REQUIRED_REGIONS() { invoke<Void>(0x637BB680); } // 0x637BB680
	nativeDecl void DISABLE_NAVMESH_IN_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x6E37F132, p0, p1, p2, p3, p4, p5, p6); } // 0x6E37F132
	nativeDecl BOOL ARE_ALL_NAVMESH_REGIONS_LOADED() { return invoke<BOOL>(0x34C4E789); } // 0x34C4E789
	nativeDecl BOOL IS_NAVMESH_LOADED_IN_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<BOOL>(0x4C2BA99E, p0, p1, p2, p3, p4, p5); } // 0x4C2BA99E
	nativeDecl Any ADD_NAVMESH_BLOCKING_OBJECT(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoke<Any>(0x2952BA56, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x2952BA56
	nativeDecl void UPDATE_NAVMESH_BLOCKING_OBJECT(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0x4E9776D0, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x4E9776D0
	nativeDecl void REMOVE_NAVMESH_BLOCKING_OBJECT(Any p0) { invoke<Void>(0x098602B0, p0); } // 0x098602B0
	nativeDecl Any _0x4B67D7EE(Any p0) { return invoke<Any>(0x4B67D7EE, p0); } // 0x4B67D7EE
	nativeDecl Any _0x3FE8C5A0(Any p0, Any p1) { return invoke<Any>(0x3FE8C5A0, p0, p1); } // 0x3FE8C5A0
	nativeDecl Any _0x3ED21C90(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x3ED21C90, p0, p1, p2, p3); } // 0x3ED21C90
	nativeDecl Any _0xA07C5B7D(Any p0, Any p1) { return invoke<Any>(0xA07C5B7D, p0, p1); } // 0xA07C5B7D
	nativeDecl Any _0x76751DD4(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x76751DD4, p0, p1, p2, p3); } // 0x76751DD4
	nativeDecl Any CALCULATE_TRAVEL_DISTANCE_BETWEEN_POINTS(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0xB114489B, p0, p1, p2, p3, p4, p5); } // 0xB114489B
}

namespace CONTROLS
{
	nativeDecl BOOL IS_CONTROL_ENABLED(int Index, int Control) { return invoke<BOOL>(0x9174AF84, Index, Control); } // 0x9174AF84
	nativeDecl BOOL IS_CONTROL_PRESSED(int Index, int Control) { return invoke<BOOL>(0x517A4384, Index, Control) || invoke<BOOL>(0x32A93544, Index, Control); } // 0x517A4384
	nativeDecl BOOL IS_CONTROL_RELEASED(int Index, int Control) { return invoke<BOOL>(0x1F91A06E, Index, Control); } // 0x1F91A06E
	nativeDecl BOOL IS_CONTROL_JUST_PRESSED(int Index, int Control) { return invoke<BOOL>(0x4487F579, Index, Control) || invoke<BOOL>(0xEE6ABD32, Index, Control); } // 0x4487F579
	nativeDecl BOOL IS_CONTROL_JUST_RELEASED(int Index, int Control) { return invoke<BOOL>(0x2314444B, Index, Control); } // 0x2314444B
	nativeDecl Any GET_CONTROL_VALUE(Any p0, Any p1) { return invoke<Any>(0xC526F3C6, p0, p1); } // 0xC526F3C6
	nativeDecl Any GET_CONTROL_NORMAL(Any p0, Any p1) { return invoke<Any>(0x5DE226A5, p0, p1); } // 0x5DE226A5
	nativeDecl Any _0xC49343BB(Any p0, Any p1) { return invoke<Any>(0xC49343BB, p0, p1); } // 0xC49343BB
	nativeDecl BOOL IS_DISABLED_CONTROL_PRESSED(int Index, int Control) { return invoke<BOOL>(0x32A93544, Index, Control); } // 0x32A93544
	nativeDecl BOOL IS_DISABLED_CONTROL_JUST_PRESSED(int Index, int Control) { return invoke<BOOL>(0xEE6ABD32, Index, Control); } // 0xEE6ABD32
	nativeDecl BOOL IS_DISABLED_CONTROL_JUST_RELEASED(int Index, Any Control) { return invoke<BOOL>(0xD6A679E1, Index, Control); } // 0xD6A679E1
	nativeDecl Any GET_DISABLED_CONTROL_NORMAL(Any p0, Any p1) { return invoke<Any>(0x66FF4FAA, p0, p1); } // 0x66FF4FAA
	nativeDecl Any _0xF2A65A4C(Any p0, Any p1) { return invoke<Any>(0xF2A65A4C, p0, p1); } // 0xF2A65A4C
	nativeDecl Any _0x0E8EF929(Any p0) { return invoke<Any>(0x0E8EF929, p0); } // 0x0E8EF929
	nativeDecl Any _0x3551727A(Any p0, Any p1, Any p2) { return invoke<Any>(0x3551727A, p0, p1, p2); } // 0x3551727A
	nativeDecl Any _0x3EE71F6A(Any p0, Any p1, Any p2) { return invoke<Any>(0x3EE71F6A, p0, p1, p2); } // 0x3EE71F6A
	nativeDecl void SET_PAD_SHAKE(Any p0, Any p1, Any p2) { invoke<Void>(0x5D38BD2F, p0, p1, p2); } // 0x5D38BD2F
	nativeDecl void STOP_PAD_SHAKE(Any p0) { invoke<Void>(0x8F75657E, p0); } // 0x8F75657E
	nativeDecl void _0x7D65EB6E(Any p0, Any p1) { invoke<Void>(0x7D65EB6E, p0, p1); } // 0x7D65EB6E
	nativeDecl void SET_CONTROL_SHAKE(Any p0, Any p1, Any p2) { invoke<Void>(0xF63D817A, p0, p1, p2); } // 0xF63D817A
	nativeDecl BOOL IS_LOOK_INVERTED() { return invoke<BOOL>(0x313434B2); } // 0x313434B2
	nativeDecl Any GET_LOCAL_PLAYER_AIM_STATE() { return invoke<Any>(0x81802053); } // 0x81802053
	nativeDecl void SET_PLAYERPAD_SHAKES_WHEN_CONTROLLER_DISABLED(Any p0) { invoke<Void>(0xA86BD91F, p0); } // 0xA86BD91F
	nativeDecl void SET_INPUT_EXCLUSIVE(int Index, int Control) { invoke<Void>(0x4E8E29E6, Index, Control); } // 0x4E8E29E6
	nativeDecl void DISABLE_CONTROL_ACTION(int Index, int Control) { invoke<Void>(0x3800C0DC, Index, Control); } // 0x3800C0DC
	nativeDecl void ENABLE_CONTROL_ACTION(int Index, int Control) { invoke<Void>(0xD2753551, Index, Control); } // 0xD2753551
	nativeDecl void DISABLE_ALL_CONTROL_ACTIONS(int Index) { invoke<Void>(0x16753CF4, Index); } // 0x16753CF4
	nativeDecl void ENABLE_ALL_CONTROL_ACTIONS(int Index) { invoke<Void>(0xFC2F119F, Index); } // 0xFC2F119F
	nativeDecl Any _0xD2C80B2E(const char* p0) { return invoke<Any>(0xD2C80B2E, p0); } // 0xD2C80B2E
	nativeDecl Any _0xBBFC9050(Any p0) { return invoke<Any>(0xBBFC9050, p0); } // 0xBBFC9050
	nativeDecl void _0x42140FF9() { invoke<Void>(0x42140FF9); } // 0x42140FF9
	nativeDecl void _0x2CEDE6C5(Any p0) { invoke<Void>(0x2CEDE6C5, p0); } // 0x2CEDE6C5
}

namespace DATAFILE
{
	nativeDecl void _0x621388FF(Any p0) { invoke<Void>(0x621388FF, p0); } // 0x621388FF
	nativeDecl Any _0xB41064A4(Any p0) { return invoke<Any>(0xB41064A4, p0); } // 0xB41064A4
	nativeDecl Any _0x9DB63CFF(Any p0) { return invoke<Any>(0x9DB63CFF, p0); } // 0x9DB63CFF
	nativeDecl Any _0xF09157B0(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<Any>(0xF09157B0, p0, p1, p2, p3, p4, p5, p6); } // 0xF09157B0
	nativeDecl Any _0xD96860FC(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0xD96860FC, p0, p1, p2, p3, p4); } // 0xD96860FC
	nativeDecl Any _0x459F2683(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<Any>(0x459F2683, p0, p1, p2, p3, p4, p5, p6); } // 0x459F2683
	nativeDecl Any _0xDBB83E2B(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0xDBB83E2B, p0, p1, p2, p3, p4); } // 0xDBB83E2B
	nativeDecl Any _0xBB6321BD(Any p0, Any p1, Any p2) { return invoke<Any>(0xBB6321BD, p0, p1, p2); } // 0xBB6321BD
	nativeDecl Any _0xE8D56DA2(Any p0) { return invoke<Any>(0xE8D56DA2, p0); } // 0xE8D56DA2
	nativeDecl Any _0xCB6A351E(Any p0, Any p1) { return invoke<Any>(0xCB6A351E, p0, p1); } // 0xCB6A351E
	nativeDecl Any _0xA4D1B30E(Any p0) { return invoke<Any>(0xA4D1B30E, p0); } // 0xA4D1B30E
	nativeDecl Any _0xB8515B2F(Any p0) { return invoke<Any>(0xB8515B2F, p0); } // 0xB8515B2F
	nativeDecl Any _0x660C468E(Any p0) { return invoke<Any>(0x660C468E, p0); } // 0x660C468E
	nativeDecl void DATAFILE_CREATE() { invoke<Void>(0x95F8A221); } // 0x95F8A221
	nativeDecl void DATAFILE_DELETE() { invoke<Void>(0xDEF31B0A); } // 0xDEF31B0A
	nativeDecl void _0x4E03F632() { invoke<Void>(0x4E03F632); } // 0x4E03F632
	nativeDecl void _0xF11F956F() { invoke<Void>(0xF11F956F); } // 0xF11F956F
	nativeDecl Any PRELOAD_FIND() { return invoke<Any>(0x86DDF9C2); } // 0x86DDF9C2
	nativeDecl Any _0x768CBB35(Any p0) { return invoke<Any>(0x768CBB35, p0); } // 0x768CBB35
	nativeDecl Any _0x0B4087F7(Any p0) { return invoke<Any>(0x0B4087F7, p0); } // 0x0B4087F7
	nativeDecl Any _0x5DCD0796() { return invoke<Any>(0x5DCD0796); } // 0x5DCD0796
	nativeDecl void _0x9B29D99B(Any p0, Any p1, Any p2) { invoke<Void>(0x9B29D99B, p0, p1, p2); } // 0x9B29D99B
	nativeDecl void _0xEFCF554A(Any p0, Any p1, Any p2) { invoke<Void>(0xEFCF554A, p0, p1, p2); } // 0xEFCF554A
	nativeDecl void _0xE972CACF(Any p0, Any p1, Any p2) { invoke<Void>(0xE972CACF, p0, p1, p2); } // 0xE972CACF
	nativeDecl void _0xD437615C(Any p0, Any p1, Any p2) { invoke<Void>(0xD437615C, p0, p1, p2); } // 0xD437615C
	nativeDecl void _0x75FC6C3C(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x75FC6C3C, p0, p1, p2, p3, p4); } // 0x75FC6C3C
	nativeDecl Any _0x96A8E05F(Any p0, Any p1) { return invoke<Any>(0x96A8E05F, p0, p1); } // 0x96A8E05F
	nativeDecl Any _0x03939B8D(Any p0, Any p1) { return invoke<Any>(0x03939B8D, p0, p1); } // 0x03939B8D
	nativeDecl Any _0x8876C872(Any p0, Any p1) { return invoke<Any>(0x8876C872, p0, p1); } // 0x8876C872
	nativeDecl Any _0xA6C68693(Any p0, Any p1) { return invoke<Any>(0xA6C68693, p0, p1); } // 0xA6C68693
	nativeDecl Any _0xA92C1AF4(Any p0, Any p1) { return invoke<Any>(0xA92C1AF4, p0, p1); } // 0xA92C1AF4
	nativeDecl Any _0x942160EC(Any p0, Any p1) { return invoke<Any>(0x942160EC, p0, p1); } // 0x942160EC
	nativeDecl Vector3 _0xE84A127A(Any p0, Any p1) { return invoke<Vector3>(0xE84A127A, p0, p1); } // 0xE84A127A
	nativeDecl Any _0xC9C13D8D(Any p0, Any p1) { return invoke<Any>(0xC9C13D8D, p0, p1); } // 0xC9C13D8D
	nativeDecl Any _0x1F2F7D00(Any p0, Any p1) { return invoke<Any>(0x1F2F7D00, p0, p1); } // 0x1F2F7D00
	nativeDecl Any _0x2678342A(Any p0, Any p1) { return invoke<Any>(0x2678342A, p0, p1); } // 0x2678342A
	nativeDecl void _0x08174B90(Any p0, Any p1) { invoke<Void>(0x08174B90, p0, p1); } // 0x08174B90
	nativeDecl void _0xF29C0B36(Any p0, Any p1) { invoke<Void>(0xF29C0B36, p0, p1); } // 0xF29C0B36
	nativeDecl void _0xE4302123(Any p0, Any p1) { invoke<Void>(0xE4302123, p0, p1); } // 0xE4302123
	nativeDecl void _0xF3C01350(Any p0, Any p1) { invoke<Void>(0xF3C01350, p0, p1); } // 0xF3C01350
	nativeDecl void _0x16F464B6(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x16F464B6, p0, p1, p2, p3); } // 0x16F464B6
	nativeDecl Any _0xC174C71B(Any p0) { return invoke<Any>(0xC174C71B, p0); } // 0xC174C71B
	nativeDecl Any _0xA2E5F921(Any p0, Any p1) { return invoke<Any>(0xA2E5F921, p0, p1); } // 0xA2E5F921
	nativeDecl Any _0xBB120CFC(Any p0, Any p1) { return invoke<Any>(0xBB120CFC, p0, p1); } // 0xBB120CFC
	nativeDecl Any FOCUS_USE_SPLINE(Any p0, Any p1) { return invoke<Any>(0x08AD2CC2, p0, p1); } // 0x08AD2CC2
	nativeDecl Any OVERIDE_TEXTURENAMES(Any p0, Any p1) { return invoke<Any>(0x93F985A6, p0, p1); } // 0x93F985A6
	nativeDecl Vector3 _0x80E3DA55(Any p0, Any p1) { return invoke<Vector3>(0x80E3DA55, p0, p1); } // 0x80E3DA55
	nativeDecl Any _0xECE81278(Any p0, Any p1) { return invoke<Any>(0xECE81278, p0, p1); } // 0xECE81278
	nativeDecl Any _0xA8A21766(Any p0) { return invoke<Any>(0xA8A21766, p0); } // 0xA8A21766
	nativeDecl Any _0xFA2402C8(Any p0, Any p1) { return invoke<Any>(0xFA2402C8, p0, p1); } // 0xFA2402C8
}

namespace FIRE
{
	nativeDecl Any START_SCRIPT_FIRE(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0xE7529357, p0, p1, p2, p3, p4); } // 0xE7529357
	nativeDecl void REMOVE_SCRIPT_FIRE(Any p0) { invoke<Void>(0x6B21FE26, p0); } // 0x6B21FE26
	nativeDecl Any START_ENTITY_FIRE(Entity Entity) { return invoke<Any>(0x8928428E, Entity); } // 0x8928428E
	nativeDecl void STOP_ENTITY_FIRE(Entity Entity) { invoke<Void>(0xCE8C9066, Entity); } // 0xCE8C9066
	nativeDecl BOOL IS_ENTITY_ON_FIRE(Any p0) { return invoke<BOOL>(0x8C73E64F, p0); } // 0x8C73E64F
	nativeDecl Any GET_NUMBER_OF_FIRES_IN_RANGE(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x654D93B7, p0, p1, p2, p3); } // 0x654D93B7
	nativeDecl void STOP_FIRE_IN_RANGE(float p0, float p1, float p2, float p3) { invoke<Void>(0x725C7205, p0, p1, p2, p3); } // 0x725C7205
	nativeDecl Any GET_CLOSEST_FIRE_POS(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0xC4977B47, p0, p1, p2, p3); } // 0xC4977B47
	nativeDecl void ADD_EXPLOSION(float XCoordinate, float YCoordinate, float ZCoordinate, int ExplosionType, float ExplosionRadius, BOOL isAudible, BOOL isVisible, float CameraShake) { invoke<Void>(0x10AF5258, XCoordinate, YCoordinate, ZCoordinate, ExplosionType, ExplosionRadius, isAudible, isVisible, CameraShake); } // 0x10AF5258
	nativeDecl void ADD_OWNED_EXPLOSION(Ped PedHandle, float XCoordinate, float YCoordinate, float ZCoordinate, int ExlosionType, float ExplosionRadius, BOOL IsAudible, BOOL IsVisible, float CamerShake) { invoke<Void>(0x27EE0D67, PedHandle, XCoordinate, YCoordinate, ZCoordinate, ExlosionType, ExplosionRadius, IsAudible, IsVisible, CamerShake); } // 0x27EE0D67
	nativeDecl void _0xCF358946(float* XCoord, float* YCoord, float* ZCoord, int unk, Hash ExplsionFX, float ExlosionRadius, BOOL isAudible, BOOL isVisible, float unk2) { invoke<Void>(0xCF358946, XCoord, YCoord, ZCoord, unk, ExplsionFX, ExlosionRadius, isAudible, isVisible, unk2); } // 0xCF358946
	nativeDecl BOOL IS_EXPLOSION_IN_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<BOOL>(0xFB40075B, p0, p1, p2, p3, p4, p5, p6); } // 0xFB40075B
	nativeDecl BOOL IS_EXPLOSION_IN_SPHERE(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<BOOL>(0xD455A7F3, p0, p1, p2, p3, p4); } // 0xD455A7F3
	nativeDecl BOOL IS_EXPLOSION_IN_ANGLED_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoke<BOOL>(0x0128FED9, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x0128FED9
	nativeDecl Any _0xAEC0D176(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoke<Any>(0xAEC0D176, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xAEC0D176
}

namespace DECISIONEVENT
{
	nativeDecl void SET_DECISION_MAKER(Any p0, Any p1) { invoke<Void>(0x19CEAC9E, p0, p1); } // 0x19CEAC9E
	nativeDecl void CLEAR_DECISION_MAKER_EVENT_RESPONSE(Any p0, Any p1) { invoke<Void>(0x07ABD94D, p0, p1); } // 0x07ABD94D
	nativeDecl void _0x57506EA6(Any p0, Any p1) { invoke<Void>(0x57506EA6, p0, p1); } // 0x57506EA6
	nativeDecl void _0x62A3161D(Any p0, Any p1) { invoke<Void>(0x62A3161D, p0, p1); } // 0x62A3161D
	nativeDecl Any ADD_SHOCKING_EVENT_AT_POSITION(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x0B30F779, p0, p1, p2, p3, p4); } // 0x0B30F779
	nativeDecl Any ADD_SHOCKING_EVENT_FOR_ENTITY(Any p0, Any p1, Any p2) { return invoke<Any>(0xA81B5B71, p0, p1, p2); } // 0xA81B5B71
	nativeDecl BOOL IS_SHOCKING_EVENT_IN_SPHERE(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<BOOL>(0x2F98823E, p0, p1, p2, p3, p4); } // 0x2F98823E
	nativeDecl Any REMOVE_SHOCKING_EVENT(Any p0) { return invoke<Any>(0xF82D5A87, p0); } // 0xF82D5A87
	nativeDecl void REMOVE_ALL_SHOCKING_EVENTS(Any p0) { invoke<Void>(0x64DF6282, p0); } // 0x64DF6282
	nativeDecl void _0xA0CE89C8() { invoke<Void>(0xA0CE89C8); } // 0xA0CE89C8
	nativeDecl void _0x4CC674B5() { invoke<Void>(0x4CC674B5); } // 0x4CC674B5
	nativeDecl void _0xA0FDCB82(Any p0) { invoke<Void>(0xA0FDCB82, p0); } // 0xA0FDCB82
	nativeDecl void _0x80340396() { invoke<Void>(0x80340396); } // 0x80340396
}

namespace ZONE
{
	nativeDecl Any GET_ZONE_AT_COORDS(float x, float y, float z) { return invoke<Any>(0xC9018181, x, y, z); } // 0xC9018181
	nativeDecl Any _0x8EC68304(Any p0) { return invoke<Any>(0x8EC68304, p0); } // 0x8EC68304
	nativeDecl Any GET_ZONE_POPSCHEDULE(Any p0) { return invoke<Any>(0x20AB2FC9, p0); } // 0x20AB2FC9
	nativeDecl const char* GET_NAME_OF_ZONE(float x, float y, float z) { return invoke<const char*>(0x7875CE91, x, y, z); } // 0x7875CE91
	nativeDecl void SET_ZONE_ENABLED(Any p0, Any p1) { invoke<Void>(0x04E21B03, p0, p1); } // 0x04E21B03
	nativeDecl Any GET_ZONE_SCUMMINESS(Any p0) { return invoke<Any>(0xB2FB5C4C, p0); } // 0xB2FB5C4C
	nativeDecl void _0x3F0A3680(Any p0, Any p1) { invoke<Void>(0x3F0A3680, p0, p1); } // 0x3F0A3680
	nativeDecl void _0x7A72A24E(Any p0) { invoke<Void>(0x7A72A24E, p0); } // 0x7A72A24E
	nativeDecl Any _0xB5C5C99B(Any p0, Any p1, Any p2) { return invoke<Any>(0xB5C5C99B, p0, p1, p2); } // 0xB5C5C99B
}

namespace ROPE
{
	nativeDecl Object ADD_ROPE(float position_x, float position_y, float position_z, float angle_x, float angle_y, float angle_z, float length, int type, float max_length, float min_length, float p10, BOOL p11, BOOL p12, BOOL p13, float p14, BOOL breakable, int p16) { return invoke<Object>(0xA592EC74, position_x, position_y, position_z, angle_x, angle_y, angle_z, length, type, max_length, min_length, p10, p11, p12, p13, p14, breakable, p16); } // 0xA592EC74
	nativeDecl void DELETE_ROPE(Object* rope) { invoke<Void>(0x748D72AF, rope); } // 0x748D72AF
	nativeDecl void DELETE_CHILD_ROPE(Object rope) { invoke<Void>(0xB19B4706, rope); } // 0xB19B4706
	nativeDecl BOOL DOES_ROPE_EXIST(Object* rope) { return invoke<BOOL>(0x66E4A3AC, rope); } // 0x66E4A3AC
	nativeDecl void _0x51523B8C(Any p0, Any p1) { invoke<Void>(0x51523B8C, p0, p1); } // 0x51523B8C
	nativeDecl void LOAD_ROPE_DATA(Object rope, const char* rope_preset) { invoke<Void>(0x9E8F1644, rope, rope_preset); } // 0x9E8F1644
	nativeDecl void PIN_ROPE_VERTEX(Object rople, int vertex, float x, float y, float z) { invoke<Void>(0xAE1D101B, rople, vertex, x, y, z); } // 0xAE1D101B
	nativeDecl void UNPIN_ROPE_VERTEX(Object rope, int vertex) { invoke<Void>(0xB30B552F, rope, vertex); } // 0xB30B552F
	nativeDecl int GET_ROPE_VERTEX_COUNT(Object rope) { return invoke<int>(0x5131CD2C, rope); } // 0x5131CD2C
	nativeDecl void ATTACH_ENTITIES_TO_ROPE(Object rope, Entity ent1, Entity ent2, float ent1_x, float ent1_y, float ent1_z, float ent2_x, float ent2_y, float ent2_z, float length, BOOL p10, BOOL p11, BOOL p12, BOOL p13) { invoke<Void>(0x7508668F, rope, ent1, ent2, ent1_x, ent1_y, ent1_z, ent2_x, ent2_y, ent2_z, length, p10, p11, p12, p13); } // 0x7508668F
	nativeDecl void ATTACH_ROPE_TO_ENTITY(Any rope, Entity entity, float x, float y, float z, BOOL p5) { invoke<Void>(0xB25D9536, rope, entity, x, y, z, p5); } // 0xB25D9536
	nativeDecl void DETACH_ROPE_FROM_ENTITY(Any rope, Entity entity) { invoke<Void>(0x3E720BEE, rope, entity); } // 0x3E720BEE
	nativeDecl void _0xEAF291A0(Any p0) { invoke<Void>(0xEAF291A0, p0); } // 0xEAF291A0
	nativeDecl void _0x80DB77A7(Any p0, Any p1) { invoke<Void>(0x80DB77A7, p0, p1); } // 0x80DB77A7
	nativeDecl void _0xC67D5CF6(Any p0, Any p1) { invoke<Void>(0xC67D5CF6, p0, p1); } // 0xC67D5CF6
	nativeDecl Any _0x7A18BB9C(Any p0) { return invoke<Any>(0x7A18BB9C, p0); } // 0x7A18BB9C
	nativeDecl Vector3 GET_ROPE_LAST_VERTEX_COORD(Object rope) { return invoke<Vector3>(0x91F6848B, rope); } // 0x91F6848B
	nativeDecl Vector3 GET_ROPE_VERTEX_COORD(Object rope, int vertex) { return invoke<Vector3>(0x84374452, rope, vertex); } // 0x84374452
	nativeDecl void _0x5187BED3(Any p0) { invoke<Void>(0x5187BED3, p0); } // 0x5187BED3
	nativeDecl void _0x46826B53(Any p0) { invoke<Void>(0x46826B53, p0); } // 0x46826B53
	nativeDecl void _0xFC0DB4C3(Any p0) { invoke<Void>(0xFC0DB4C3, p0); } // 0xFC0DB4C3
	nativeDecl void _0x2EEDB18F(Any p0) { invoke<Void>(0x2EEDB18F, p0); } // 0x2EEDB18F
	nativeDecl void _0x43E92628(Any p0) { invoke<Void>(0x43E92628, p0); } // 0x43E92628
	nativeDecl void ROPE_LOAD_TEXTURES() { invoke<Void>(0xBA97CE91); } // 0xBA97CE91
	nativeDecl Any _0x5FDC1047() { return invoke<Any>(0x5FDC1047); } // 0x5FDC1047
	nativeDecl void ROPE_UNLOAD_TEXTURES() { invoke<Void>(0x584463E0); } // 0x584463E0
	nativeDecl Any _0x67522E25(Any p0) { return invoke<Any>(0x67522E25, p0); } // 0x67522E25
	nativeDecl void _0x106BA127(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13) { invoke<Void>(0x106BA127, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); } // 0x106BA127
	nativeDecl void _0x7C6F7668(Any p0, Any p1, Any p2) { invoke<Void>(0x7C6F7668, p0, p1, p2); } // 0x7C6F7668
	nativeDecl void _0x686672DD(Any p0, Any p1) { invoke<Void>(0x686672DD, p0, p1); } // 0x686672DD
	nativeDecl Any _0xFD309DC8(Any p0) { return invoke<Any>(0xFD309DC8, p0); } // 0xFD309DC8
	nativeDecl void ROPE_FORCE_LENGTH(Object rope, float length) { invoke<Void>(0xABF3130F, rope, length); } // 0xABF3130F
	nativeDecl void ROPE_RESET_LENGTH(Object rope, float length) { invoke<Void>(0xC8A423A3, rope, length); } // 0xC8A423A3
	nativeDecl void _0xA2A5C9FE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0xA2A5C9FE, p0, p1, p2, p3, p4, p5, p6); } // 0xA2A5C9FE
	nativeDecl void SET_DAMPING(Any p0, Any p1, Any p2) { invoke<Void>(0xCFB37773, p0, p1, p2); } // 0xCFB37773
	nativeDecl void ACTIVATE_PHYSICS(Object rope) { invoke<Void>(0x031711B8, rope); } // 0x031711B8
	nativeDecl void _0x59910AB2(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x59910AB2, p0, p1, p2, p3); } // 0x59910AB2
	nativeDecl Vector3 _0x49A11F0D(Any p0) { return invoke<Vector3>(0x49A11F0D, p0); } // 0x49A11F0D
	nativeDecl void _0xA5B55421(Any p0) { invoke<Void>(0xA5B55421, p0); } // 0xA5B55421
	nativeDecl void BREAK_ENTITY_GLASS(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { invoke<Void>(0xD0E0402F, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0xD0E0402F
	nativeDecl void SET_DISABLE_BREAKING(Object rope, BOOL enabled) { invoke<Void>(0xEE77C326, rope, enabled); } // 0xEE77C326
	nativeDecl void _0x97269DC8(Any p0, Any p1) { invoke<Void>(0x97269DC8, p0, p1); } // 0x97269DC8
}

namespace WATER
{
	nativeDecl Any GET_WATER_HEIGHT(float x, float y, float p2, float p3) { return invoke<Any>(0xD864E17C, x, y, p2, p3); } // 0xD864E17C
	nativeDecl Any GET_WATER_HEIGHT_NO_WAVES(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x262017F8, p0, p1, p2, p3); } // 0x262017F8
	nativeDecl Any _0xAA4AE00C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<Any>(0xAA4AE00C, p0, p1, p2, p3, p4, p5, p6); } // 0xAA4AE00C
	nativeDecl Any _0x4A962D55(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoke<Any>(0x4A962D55, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x4A962D55
	nativeDecl Any _0x4C71D143(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x4C71D143, p0, p1, p2, p3, p4); } // 0x4C71D143
	nativeDecl void MODIFY_WATER(float p0, float p1, float p2, Any p3) { invoke<Void>(0xC49E005A, p0, p1, p2, p3); } // 0xC49E005A
}

namespace WORLDPROBE
{
	nativeDecl Any _0xEFAF4BA6(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoke<Any>(0xEFAF4BA6, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xEFAF4BA6
	nativeDecl Any _0x8251485D(float x1, float y1, float z1, float x2, float y2, float z2, int flags, Entity entity, int p8) { return invoke<Any>(0x8251485D, x1, y1, z1, x2, y2, z2, flags, entity, p8); } // 0x8251485D
	nativeDecl Any _0xCEEAD94B(Any p0, Any p1, Any p2) { return invoke<Any>(0xCEEAD94B, p0, p1, p2); } // 0xCEEAD94B
	nativeDecl Any _0x249BC876(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12) { return invoke<Any>(0x249BC876, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0x249BC876
	nativeDecl Any _0x13BC46C0(Any p0, Any p1, Any p2) { return invoke<Any>(0x13BC46C0, p0, p1, p2); } // 0x13BC46C0
	nativeDecl Any _0x591EA833(float x1, float y1, float z1, float x2, float y2, float z2, float radius, int flags, Entity entity, int p8) { return invoke<Any>(0x591EA833, x1, y1, z1, x2, y2, z2, radius, flags, entity, p8); } // 0x591EA833
	nativeDecl Any _0x4559460A(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return invoke<Any>(0x4559460A, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x4559460A
	nativeDecl Any _0xF3C2875A(int rayHandle, BOOL* hit, Vector3* endCoords, Vector3* surfaceNormal, Entity* entityHit) { return invoke<Any>(0xF3C2875A, rayHandle, hit, endCoords, surfaceNormal, entityHit); } // 0xF3C2875A
	nativeDecl Any _0x4301E10C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0x4301E10C, p0, p1, p2, p3, p4, p5); } // 0x4301E10C
	nativeDecl void _0xEC2AAF06(Any p0) { invoke<Void>(0xEC2AAF06, p0); } // 0xEC2AAF06
}

namespace NETWORK
{
	nativeDecl Hash NETWORK_HASH_FROM_PLAYER_HANDLE(Player player) { return invoke<Hash>(0xF8D7AF3B, player); }
	nativeDecl void NETWORK_HANDLE_FROM_PLAYER(Player player, Any* networkHandle, int bufferSize) { invoke<Void>(0xD3498917, player, networkHandle, bufferSize); } // 0xD3498917
	nativeDecl BOOL NETWORK_APPLY_CACHED_PLAYER_HEAD_BLEND_DATA(Ped ped, Player player) { return invoke<BOOL>(0x99F58A07, ped, player); };
	nativeDecl BOOL NETWORK_IS_SIGNED_IN() { return invoke<BOOL>(0xADD0B40F); } // 0xADD0B40F
	nativeDecl BOOL NETWORK_IS_SIGNED_ONLINE() { return invoke<BOOL>(0x6E5BDCE2); } // 0x6E5BDCE2
	nativeDecl BOOL NETWORK_HAS_VALID_ROS_CREDENTIALS() { return invoke<BOOL>(0x3FB40673); } // 0x3FB40673
	nativeDecl BOOL NETWORK_IS_CLOUD_AVAILABLE() { return invoke<BOOL>(0xC7FF5AFC); } // 0xC7FF5AFC
	nativeDecl BOOL NETWORK_HAS_SOCIAL_CLUB_ACCOUNT() { return invoke<BOOL>(0x66EC713F); } // 0x66EC713F
	nativeDecl BOOL NETWORK_ARE_SOCIAL_CLUB_POLICIES_CURRENT() { return invoke<BOOL>(0x358D1D77); } // 0x358D1D77
	nativeDecl BOOL NETWORK_IS_HOST() { return invoke<BOOL>(0xE46AC10F); } // 0xE46AC10F
	nativeDecl BOOL NETWORK_HAVE_ONLINE_PRIVILEGES() { return invoke<BOOL>(0xEF63BFDF); } // 0xEF63BFDF
	nativeDecl BOOL NETWORK_HAVE_USER_CONTENT_PRIVILEGES(int p0) { return invoke<BOOL>(0x1F88819D, p0); } // 0x1F88819D
	nativeDecl BOOL NETWORK_HAVE_COMMUNICATION_PRIVILEGES(int p0, Player player) { return invoke<BOOL>(0x2D817A5E, p0, player); } // 0x2D817A5E
	nativeDecl BOOL NETWORK_CHECK_USER_CONTENT_PRIVILEGES(Any p0, Any p1, BOOL p2) { return invoke<BOOL>(0xBB54AA3D, p0, p1, p2); } // 0xBB54AA3D
	nativeDecl BOOL NETWORK_CHECK_COMMUNICATION_PRIVILEGES(Any p0, Any p1, Any p2) { return invoke<BOOL>(0xA79E5B05, p0, p1, p2); } // 0xA79E5B05
	nativeDecl BOOL NETWORK_HAS_SOCIAL_NETWORKING_SHARING_PRIV() { return invoke<BOOL>(0xEB864288); } // 0xEB864288
	nativeDecl BOOL NETWORK_GET_AGE_GROUP() { return invoke<BOOL>(0xAB07CBBE); } // 0xAB07CBBE
	nativeDecl BOOL NETWORK_CAN_BAIL() { return invoke<BOOL>(0x60E1FEDF); } // 0x60E1FEDF
	nativeDecl void NETWORK_BAIL() { invoke<Void>(0x87D79A04); } // 0x87D79A04
	nativeDecl void NETWORK_ON_RETURN_TO_SINGLE_PLAYER() { invoke<Void>(0x96E28FE2); } // 0x96E28FE2
	nativeDecl BOOL NETWORK_CAN_ACCESS_MULTIPLAYER(int* loadingState) { return invoke<BOOL>(0xA520B982, loadingState); } // 0xA520B982
	nativeDecl BOOL NETWORK_IS_MULTIPLAYER_DISABLED() { return invoke<BOOL>(0x05518C0F); } // 0x05518C0F
	nativeDecl Any NETWORK_CAN_ENTER_MULTIPLAYER() { return invoke<Any>(0x4A23B9C9); } // 0x4A23B9C9
	nativeDecl Any NETWORK_SESSION_ENTER(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0x543CD2BE, p0, p1, p2, p3, p4, p5); } // 0x543CD2BE
	nativeDecl Any _0x4E53202A(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x4E53202A, p0, p1, p2, p3); } // 0x4E53202A
	nativeDecl Any _0xD7624E6B(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0xD7624E6B, p0, p1, p2, p3, p4); } // 0xD7624E6B
	nativeDecl Any _0x3F75CC38(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x3F75CC38, p0, p1, p2, p3); } // 0x3F75CC38
	nativeDecl Any NETWORK_SESSION_HOST(Any p0, Any p1, Any p2) { return invoke<Any>(0x6716460F, p0, p1, p2); } // 0x6716460F
	nativeDecl Any NETWORK_SESSION_HOST_CLOSED(int p0, int maxPlayers) { return invoke<Any>(0x8AC9EA19, p0, maxPlayers); } // 0x8AC9EA19
	nativeDecl Any NETWORK_SESSION_HOST_FRIENDS_ONLY(Any p0, Any p1) { return invoke<Any>(0x26864403, p0, p1); } // 0x26864403
	nativeDecl Any NETWORK_SESSION_IS_CLOSED_FRIENDS() { return invoke<Any>(0x56E75FE4); } // 0x56E75FE4
	nativeDecl Any NETWORK_SESSION_IS_CLOSED_CREW() { return invoke<Any>(0xA95299B9); } // 0xA95299B9
	nativeDecl Any NETWORK_SESSION_IS_SOLO() { return invoke<Any>(0x3D2C1916); } // 0x3D2C1916
	nativeDecl Any NETWORK_SESSION_IS_PRIVATE() { return invoke<Any>(0xDB67785D); } // 0xDB67785D
	nativeDecl Any NETWORK_SESSION_END(Any p0, Any p1) { return invoke<Any>(0xBCACBEA2, p0, p1); } // 0xBCACBEA2
	nativeDecl void NETWORK_SESSION_KICK_PLAYER(Any p0) { invoke<Void>(0x1E20138A, p0); } // 0x1E20138A
	nativeDecl Any NETWORK_SESSION_GET_KICK_VOTE(Player player) { return invoke<Any>(0x8A559D26, player); } // 0x8A559D26
	nativeDecl void _0x3C3E2AB6(Any p0) { invoke<Void>(0x3C3E2AB6, p0); } // 0x3C3E2AB6
	nativeDecl void _0x5F29A7E0(Any p0, Any p1) { invoke<Void>(0x5F29A7E0, p0, p1); } // 0x5F29A7E0
	nativeDecl Any _0x36EAD960(Any p0) { return invoke<Any>(0x36EAD960, p0); } // 0x36EAD960
	nativeDecl void _0x5BE529F7(Any p0) { invoke<Void>(0x5BE529F7, p0); } // 0x5BE529F7
	nativeDecl void _0x454C7B67(Any p0) { invoke<Void>(0x454C7B67, p0); } // 0x454C7B67
	nativeDecl void _0xE5961511(Any p0) { invoke<Void>(0xE5961511, p0); } // 0xE5961511
	nativeDecl void _0xAE396263(Any p0) { invoke<Void>(0xAE396263, p0); } // 0xAE396263
	nativeDecl void _0x913FD7D6(Any p0) { invoke<Void>(0x913FD7D6, p0); } // 0x913FD7D6
	nativeDecl void _0xB3D9A67F(Any p0) { invoke<Void>(0xB3D9A67F, p0); } // 0xB3D9A67F
	nativeDecl void _0x6CC062FC(Any p0) { invoke<Void>(0x6CC062FC, p0); } // 0x6CC062FC
	nativeDecl void _0x57F9BC83() { invoke<Void>(0x57F9BC83); } // 0x57F9BC83
	nativeDecl void _0xF3768F90(Any p0) { invoke<Void>(0xF3768F90, p0); } // 0xF3768F90
	nativeDecl void _0x0EC62629(Any p0, Any p1) { invoke<Void>(0x0EC62629, p0, p1); } // 0x0EC62629
	nativeDecl void _0x5E557307() { invoke<Void>(0x5E557307); } // 0x5E557307
	nativeDecl void _0x74E8C53E(Any p0, Any p1, Any p2) { invoke<Void>(0x74E8C53E, p0, p1, p2); } // 0x74E8C53E
	nativeDecl void _0x959E43A3(Any p0) { invoke<Void>(0x959E43A3, p0); } // 0x959E43A3
	nativeDecl Any _0x7771AB83(Any p0) { return invoke<Any>(0x7771AB83, p0); } // 0x7771AB83
	nativeDecl Any _0xA13045D4(int p0, float p1, float p2, float p3) { return invoke<Any>(0xA13045D4, p0, p1, p2, p3); } // 0xA13045D4
	nativeDecl Any NETWORK_IS_FINDING_GAMERS() { return invoke<Any>(0xA6DAA79F); } // 0xA6DAA79F
	nativeDecl Any _0xBEDC4503() { return invoke<Any>(0xBEDC4503); } // 0xBEDC4503
	nativeDecl Any NETWORK_GET_NUM_FOUND_GAMERS() { return invoke<Any>(0xF4B80C7E); } // 0xF4B80C7E
	nativeDecl Any NETWORK_GET_FOUND_GAMER(int* p0, Any p1) { return invoke<Any>(0xA08C9141, p0, p1); } // 0xA08C9141
	nativeDecl void NETWORK_CLEAR_FOUND_GAMERS() { invoke<Void>(0x6AA9A154); } // 0x6AA9A154
	nativeDecl Any _0x42BD0780(Any* p0) { return invoke<Any>(0x42BD0780, p0); } // 0x42BD0780
	nativeDecl Any _0xBEB98840() { return invoke<Any>(0xBEB98840); } // 0xBEB98840
	nativeDecl Any _0x08029970() { return invoke<Any>(0x08029970); } // 0x08029970
	nativeDecl Any _0xC871E745() { return invoke<Any>(0xC871E745); } // 0xC871E745
	nativeDecl Any _0xB5ABC4B4(Any p0, Any p1) { return invoke<Any>(0xB5ABC4B4, p0, p1); } // 0xB5ABC4B4
	nativeDecl void _0x3F7EDBBD() { invoke<Void>(0x3F7EDBBD); } // 0x3F7EDBBD
	nativeDecl void NETWORK_IS_PLAYER_ANIMATION_DRAWING_SYNCHRONIZED() { invoke<Void>(0x3D6360B5); } // 0x3D6360B5
	nativeDecl void NETWORK_SESSION_CANCEL_INVITE() { invoke<Void>(0x20317535); } // 0x20317535
	nativeDecl void _0x3FD49D3B() { invoke<Void>(0x3FD49D3B); } // 0x3FD49D3B
	nativeDecl Any NETWORK_HAS_PENDING_INVITE() { return invoke<Any>(0x0C207D6E); } // 0x0C207D6E
	nativeDecl Any _0xFBBAC350() { return invoke<Any>(0xFBBAC350); } // 0xFBBAC350
	nativeDecl Any _0x0907A6BF() { return invoke<Any>(0x0907A6BF); } // 0x0907A6BF
	nativeDecl Any _0x6A0BEA60() { return invoke<Any>(0x6A0BEA60); } // 0x6A0BEA60
	nativeDecl void NETWORK_SESSION_GET_INVITER(Any p0) { invoke<Void>(0xE9C6B3FD, p0); } // 0xE9C6B3FD
	nativeDecl Any _0x3EA9D44C() { return invoke<Any>(0x3EA9D44C); } // 0x3EA9D44C
	nativeDecl void NETWORK_SUPPRESS_INVITE(Any p0) { invoke<Void>(0x323DC78C, p0); } // 0x323DC78C
	nativeDecl void NETWORK_BLOCK_INVITES(Any p0) { invoke<Void>(0xD156FD1A, p0); } // 0xD156FD1A
	nativeDecl void _0x32B7A076() { invoke<Void>(0x32B7A076); } // 0x32B7A076
	nativeDecl void _0x0FCE995D(Any p0) { invoke<Void>(0x0FCE995D, p0); } // 0x0FCE995D
	nativeDecl void _0xA639DCA2(Any p0) { invoke<Void>(0xA639DCA2, p0); } // 0xA639DCA2
	nativeDecl Any _0x70ED476A() { return invoke<Any>(0x70ED476A); } // 0x70ED476A
	nativeDecl void _0x50507BED() { invoke<Void>(0x50507BED); } // 0x50507BED
	nativeDecl void NETWORK_SESSION_HOST_SINGLE_PLAYER(Any p0) { invoke<Void>(0xF3B1CA85, p0); } // 0xF3B1CA85
	nativeDecl void NETWORK_SESSION_LEAVE_SINGLE_PLAYER() { invoke<Void>(0xC692F86A); } // 0xC692F86A
	nativeDecl Any NETWORK_IS_GAME_IN_PROGRESS() { return invoke<Any>(0x09B88E3E); } // 0x09B88E3E
	nativeDecl BOOL NETWORK_IS_SESSION_ACTIVE() { return invoke<Any>(0x715CB8C4); } // 0x715CB8C4
	nativeDecl Any NETWORK_IS_IN_SESSION() { return invoke<Any>(0x4BC4105E); } // 0x4BC4105E
	nativeDecl Any NETWORK_IS_SESSION_STARTED() { return invoke<Any>(0x9D854A37); } // 0x9D854A37
	nativeDecl Any NETWORK_IS_SESSION_BUSY() { return invoke<Any>(0x8592152D); } // 0x8592152D
	nativeDecl Any NETWORK_CAN_SESSION_END() { return invoke<Any>(0xE1FCCDBA); } // 0xE1FCCDBA
	nativeDecl void _0x7017257D(Any p0) { invoke<Void>(0x7017257D, p0); } // 0x7017257D
	nativeDecl Any _0x4977AC28() { return invoke<Any>(0x4977AC28); } // 0x4977AC28
	nativeDecl void _0xE6EEF8AF(Any p0) { invoke<Void>(0xE6EEF8AF, p0); } // 0xE6EEF8AF
	nativeDecl void _0x6BB93227(Any p0, Any p1) { invoke<Void>(0x6BB93227, p0, p1); } // 0x6BB93227
	nativeDecl Any _0xE642F2FD() { return invoke<Any>(0xE642F2FD); } // 0xE642F2FD
	nativeDecl void NETWORK_SESSION_VOICE_HOST() { invoke<Void>(0x345C2980); } // 0x345C2980
	nativeDecl void NETWORK_SESSION_VOICE_LEAVE() { invoke<Void>(0xE566C7DA); } // 0xE566C7DA
	nativeDecl void _0x9DFD89E6(int* p0) { invoke<Void>(0x9DFD89E6, p0); } // 0x9DFD89E6
	nativeDecl void NETWORK_SET_KEEP_FOCUSPOINT(Any p0, Any p1) { invoke<Void>(0x075321B5, p0, p1); } // 0x075321B5
	nativeDecl void _0x6EFC2FD0(Any p0) { invoke<Void>(0x6EFC2FD0, p0); } // 0x6EFC2FD0
	nativeDecl Any _0x60AA4AA1() { return invoke<Any>(0x60AA4AA1); } // 0x60AA4AA1
	nativeDecl Any _0x132CA01E() { return invoke<Any>(0x132CA01E); } // 0x132CA01E
	nativeDecl Any NETWORK_SEND_TEXT_MESSAGE(const char* Text, int FreeMemPointer) { return invoke<Any>(0xAFFEA720, Text, FreeMemPointer); } // 0xAFFEA720
	nativeDecl void NETWORK_SET_ACTIVITY_SPECTATOR(Any p0) { invoke<Void>(0xFC9AD060, p0); } // 0xFC9AD060
	nativeDecl Any NETWORK_IS_ACTIVITY_SPECTATOR() { return invoke<Any>(0xAF329720); } // 0xAF329720
	nativeDecl void NETWORK_SET_ACTIVITY_SPECTATOR_MAX(Any p0) { invoke<Void>(0x74E0BC0A, p0); } // 0x74E0BC0A
	nativeDecl Any NETWORK_GET_ACTIVITY_PLAYER_NUM(Any p0) { return invoke<Any>(0x31F951FD, p0); } // 0x31F951FD
	nativeDecl Any NETWORK_IS_ACTIVITY_SPECTATOR_FROM_HANDLE(Any p0) { return invoke<Any>(0x58F1DF7D, p0); } // 0x58F1DF7D
	nativeDecl Any NETWORK_HOST_TRANSITION(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0x146764FB, p0, p1, p2, p3, p4, p5); } // 0x146764FB
	nativeDecl Any _0x2FF65C0B(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x2FF65C0B, p0, p1, p2, p3); } // 0x2FF65C0B
	nativeDecl Any _0x47D61C99(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x47D61C99, p0, p1, p2, p3); } // 0x47D61C99
	nativeDecl Any _0x5CE60A11(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0x5CE60A11, p0, p1, p2, p3, p4, p5); } // 0x5CE60A11
	nativeDecl Any _0x0D7E5CF9() { return invoke<Any>(0x0D7E5CF9); } // 0x0D7E5CF9
	nativeDecl void _0x36A5F2DA() { invoke<Void>(0x36A5F2DA); } // 0x36A5F2DA
	nativeDecl Any _0x95FFACF8() { return invoke<Any>(0x95FFACF8); } // 0x95FFACF8
	nativeDecl Any _0xB97A966B() { return invoke<Any>(0xB97A966B); } // 0xB97A966B
	nativeDecl void _0x7EF353E1(Any p0) { invoke<Void>(0x7EF353E1, p0); } // 0x7EF353E1
	nativeDecl void _0xF60986FC(Any p0) { invoke<Void>(0xF60986FC, p0); } // 0xF60986FC
	nativeDecl void NETWORK_SET_TRANSITION_CREATOR_HANDLE(Any p0) { invoke<Void>(0x1DD01FE7, p0); } // 0x1DD01FE7
	nativeDecl void NETWORK_CLEAR_TRANSITION_CREATOR_HANDLE() { invoke<Void>(0x8BB336F7); } // 0x8BB336F7
	nativeDecl Any NETWORK_INVITE_GAMERS_TO_TRANSITION(Any p0, Any p1) { return invoke<Any>(0x5332E645, p0, p1); } // 0x5332E645
	nativeDecl void NETWORK_SET_GAMER_INVITED_TO_TRANSITION(Any p0) { invoke<Void>(0x17F1C69D, p0); } // 0x17F1C69D
	nativeDecl Any NETWORK_LEAVE_TRANSITION() { return invoke<Any>(0x3A3599B7); } // 0x3A3599B7
	nativeDecl Any NETWORK_LAUNCH_TRANSITION() { return invoke<Any>(0xE3570BA2); } // 0xE3570BA2
	nativeDecl void _0xB59D74CA() { invoke<Void>(0xB59D74CA); } // 0xB59D74CA
	nativeDecl Any NETWORK_DO_TRANSITION_TO_GAME(Any p0, Any p1) { return invoke<Any>(0x1B2114D2, p0, p1); } // 0x1B2114D2
	nativeDecl Any NETWORK_DO_TRANSITION_TO_NEW_GAME(Any p0, Any p1, Any p2) { return invoke<Any>(0x58AFBE63, p0, p1, p2); } // 0x58AFBE63
	nativeDecl Any NETWORK_DO_TRANSITION_TO_FREEMODE(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0xC7CB8ADF, p0, p1, p2, p3); } // 0xC7CB8ADF
	nativeDecl Any NETWORK_DO_TRANSITION_TO_NEW_FREEMODE(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0xAD13375E, p0, p1, p2, p3, p4); } // 0xAD13375E
	nativeDecl Any NETWORK_IS_TRANSITION_TO_GAME() { return invoke<Any>(0x17146B2B); } // 0x17146B2B
	nativeDecl Any NETWORK_GET_TRANSITION_MEMBERS(Any p0, Any p1) { return invoke<Any>(0x31F19263, p0, p1); } // 0x31F19263
	nativeDecl void _0xCEE79711(Any p0, Any p1) { invoke<Void>(0xCEE79711, p0, p1); } // 0xCEE79711
	nativeDecl void _0xE0C28DB5(Any p0, Any p1, Any p2) { invoke<Void>(0xE0C28DB5, p0, p1, p2); } // 0xE0C28DB5
	nativeDecl Any NETWORK_SEND_TRANSITION_GAMER_INSTRUCTION(void* p0, const char* p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x468B0884, p0, p1, p2, p3, p4); } // 0x468B0884
	nativeDecl Any NETWORK_MARK_TRANSITION_GAMER_AS_FULLY_JOINED(Any p0) { return invoke<Any>(0x03383F57, p0); } // 0x03383F57
	nativeDecl Any NETWORK_IS_TRANSITION_HOST() { return invoke<Any>(0x0C0900BC); } // 0x0C0900BC
	nativeDecl Any NETWORK_IS_TRANSITION_HOST_FROM_HANDLE(Any p0) { return invoke<Any>(0x0E2854C4, p0); } // 0x0E2854C4
	nativeDecl Any NETWORK_GET_TRANSITION_HOST(Any p0) { return invoke<Any>(0x73098D40, p0); } // 0x73098D40
	nativeDecl Any NETWORK_IS_IN_TRANSITION() { return invoke<Any>(0xC3CDB626); } // 0xC3CDB626
	nativeDecl Any NETWORK_IS_TRANSITION_STARTED() { return invoke<Any>(0x7917E111); } // 0x7917E111
	nativeDecl Any NETWORK_IS_TRANSITION_BUSY() { return invoke<Any>(0xA357A2C6); } // 0xA357A2C6
	nativeDecl Any _0x8262C70E() { return invoke<Any>(0x8262C70E); } // 0x8262C70E
	nativeDecl void _0xC71E607B() { invoke<Void>(0xC71E607B); } // 0xC71E607B
	nativeDecl void _0x82D32D07() { invoke<Void>(0x82D32D07); } // 0x82D32D07
	nativeDecl Any _0xC901AA9F() { return invoke<Any>(0xC901AA9F); } // 0xC901AA9F
	nativeDecl void _0xCCA9C022(Any p0) { invoke<Void>(0xCCA9C022, p0); } // 0xCCA9C022
	nativeDecl void _0x1E5F6AEF(Any p0, Any p1) { invoke<Void>(0x1E5F6AEF, p0, p1); } // 0x1E5F6AEF
	nativeDecl void _0x0532DDD2(Any p0) { invoke<Void>(0x0532DDD2, p0); } // 0x0532DDD2
	nativeDecl Any NETWORK_HAS_PLAYER_STARTED_TRANSITION(Any p0) { return invoke<Any>(0x4ABD1E59, p0); } // 0x4ABD1E59
	nativeDecl Any _0xCDEBCCE7(Any p0) { return invoke<Any>(0xCDEBCCE7, p0); } // 0xCDEBCCE7
	nativeDecl Any NETWORK_JOIN_TRANSITION(Any p0) { return invoke<Any>(0xB054EC4B, p0); } // 0xB054EC4B
	nativeDecl Any _0x4F41DF6B(Any p0) { return invoke<Any>(0x4F41DF6B, p0); } // 0x4F41DF6B
	nativeDecl Any NETWORK_IS_ACTIVITY_SESSION() { return invoke<Any>(0x577DAA8A); } // 0x577DAA8A
	nativeDecl void _0x18F03AFD(Any p0) { invoke<Void>(0x18F03AFD, p0); } // 0x18F03AFD
	nativeDecl Any _0x8B99B72B(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x8B99B72B, p0, p1, p2, p3); } // 0x8B99B72B
	nativeDecl Any _0x877C0E1C(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x877C0E1C, p0, p1, p2, p3); } // 0x877C0E1C
	nativeDecl Any _0x5E832444(Any p0) { return invoke<Any>(0x5E832444, p0); } // 0x5E832444
	nativeDecl Any _0x3FDA00F3() { return invoke<Any>(0x3FDA00F3); } // 0x3FDA00F3
	nativeDecl Any NETWORK_ACCEPT_PRESENCE_INVITE(Any p0) { return invoke<Any>(0xE5DA4CED, p0); } // 0xE5DA4CED
	nativeDecl Any _0x93C665FA(Any p0) { return invoke<Any>(0x93C665FA, p0); } // 0x93C665FA
	nativeDecl Any _0xD50DF46C(Any p0) { return invoke<Any>(0xD50DF46C, p0); } // 0xD50DF46C
	nativeDecl Any _0x19EC65D9(Any p0) { return invoke<Any>(0x19EC65D9, p0); } // 0x19EC65D9
	nativeDecl Any NETWORK_GET_PRESENCE_INVITE_HANDLE(Any p0, Any p1) { return invoke<Any>(0xB2451429, p0, p1); } // 0xB2451429
	nativeDecl Any _0xC5E0C989(Any p0) { return invoke<Any>(0xC5E0C989, p0); } // 0xC5E0C989
	nativeDecl Any _0xA4302183(Any p0) { return invoke<Any>(0xA4302183, p0); } // 0xA4302183
	nativeDecl Any _0x51B2D848(Any p0) { return invoke<Any>(0x51B2D848, p0); } // 0x51B2D848
	nativeDecl Any _0x4677C656(Any p0) { return invoke<Any>(0x4677C656, p0); } // 0x4677C656
	nativeDecl Any _0xF5E3401C(Any p0) { return invoke<Any>(0xF5E3401C, p0); } // 0xF5E3401C
	nativeDecl Any _0x7D593B4C(Any p0) { return invoke<Any>(0x7D593B4C, p0); } // 0x7D593B4C
	nativeDecl Any _0xE96CFE7D() { return invoke<Any>(0xE96CFE7D); } // 0xE96CFE7D
	nativeDecl Any _0xAB969F00() { return invoke<Any>(0xAB969F00); } // 0xAB969F00
	nativeDecl Any _0x3242F952() { return invoke<Any>(0x3242F952); } // 0x3242F952
	nativeDecl void _0x9773F36A() { invoke<Void>(0x9773F36A); } // 0x9773F36A
	nativeDecl void NETWORK_REMOVE_TRANSITION_INVITE(Any p0) { invoke<Void>(0xFDE84CB7, p0); } // 0xFDE84CB7
	nativeDecl void _0xF7134E73() { invoke<Void>(0xF7134E73); } // 0xF7134E73
	nativeDecl void _0xC47352E7() { invoke<Void>(0xC47352E7); } // 0xC47352E7
	nativeDecl Any NETWORK_INVITE_GAMERS(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x52FB8074, p0, p1, p2, p3); } // 0x52FB8074
	nativeDecl Any _0xEC651BC0(Any p0) { return invoke<Any>(0xEC651BC0, p0); } // 0xEC651BC0
	nativeDecl Any NETWORK_GET_CURRENTLY_SELECTED_GAMER_HANDLE_FROM_INVITE_MENU(Any p0) { return invoke<Any>(0x72BA00CE, p0); } // 0x72BA00CE
	nativeDecl Any NETWORK_SET_CURRENTLY_SELECTED_GAMER_HANDLE_FROM_INVITE_MENU(Any p0) { return invoke<Any>(0xFD95899E, p0); } // 0xFD95899E
	nativeDecl void _0x0808D4CC(Any p0, Any p1) { invoke<Void>(0x0808D4CC, p0, p1); } // 0x0808D4CC
	nativeDecl void _0x11378777(Any p0) { invoke<Void>(0x11378777, p0); } // 0x11378777
	nativeDecl Any FILLOUT_PM_PLAYER_LIST(Any p0, Any p1, Any p2) { return invoke<Any>(0xCE40F423, p0, p1, p2); } // 0xCE40F423
	nativeDecl Any FILLOUT_PM_PLAYER_LIST_WITH_NAMES(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0xB8DF604E, p0, p1, p2, p3); } // 0xB8DF604E
	nativeDecl Any USING_NETWORK_WEAPONTYPE(Any p0) { return invoke<Any>(0xF49C1533, p0); } // 0xF49C1533
	nativeDecl Any _0xA812B6CB() { return invoke<Any>(0xA812B6CB); } // 0xA812B6CB
	nativeDecl Any _0xF30E5814(Any p0, Any p1) { return invoke<Any>(0xF30E5814, p0, p1); } // 0xF30E5814
	nativeDecl Any _0xC6609191() { return invoke<Any>(0xC6609191); } // 0xC6609191
	nativeDecl Any _0x51367B34(Any p0) { return invoke<Any>(0x51367B34, p0); } // 0x51367B34
	nativeDecl Any NETWORK_IS_IN_PARTY() { return invoke<Any>(0xF9D7D67D); } // 0xF9D7D67D
	nativeDecl Any NETWORK_IS_PARTY_MEMBER(Any p0) { return invoke<Any>(0x1D0C929D, p0); } // 0x1D0C929D
	nativeDecl Any _0x9156EFC0() { return invoke<Any>(0x9156EFC0); } // 0x9156EFC0
	nativeDecl Any _0x8FA6EE0E() { return invoke<Any>(0x8FA6EE0E); } // 0x8FA6EE0E
	nativeDecl void _0x7F70C15A() { invoke<Void>(0x7F70C15A); } // 0x7F70C15A
	nativeDecl void _0x8179C48A(Any p0) { invoke<Void>(0x8179C48A, p0); } // 0x8179C48A
	nativeDecl void _0x41702C8A(Any p0) { invoke<Void>(0x41702C8A, p0); } // 0x41702C8A
	nativeDecl Any _0x208DD848() { return invoke<Any>(0x208DD848); } // 0x208DD848
	nativeDecl Any _0xF9B6426D(Any p0, Any p1) { return invoke<Any>(0xF9B6426D, p0, p1); } // 0xF9B6426D
	nativeDecl Any NETWORK_PLAYER_IS_CHEATER() { return invoke<Any>(0xA51DC214); } // 0xA51DC214
	nativeDecl Any _0x1720ABA6() { return invoke<Any>(0x1720ABA6); } // 0x1720ABA6
	nativeDecl Any _0xA19708E3() { return invoke<Any>(0xA19708E3); } // 0xA19708E3
	nativeDecl Any _0xF9A51B92(Any p0, Any p1, Any p2) { return invoke<Any>(0xF9A51B92, p0, p1, p2); } // 0xF9A51B92
	nativeDecl Any _0x4C2C6B6A(Any p0, Any p1, Any p2) { return invoke<Any>(0x4C2C6B6A, p0, p1, p2); } // 0x4C2C6B6A
	nativeDecl void _0x4818ACD0(Any p0, Any p1) { invoke<Void>(0x4818ACD0, p0, p1); } // 0x4818ACD0
	nativeDecl void NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(Any p0, Any p1, Any p2) { invoke<Void>(0x470810ED, p0, p1, p2); } // 0x470810ED
	nativeDecl BOOL NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() { return invoke<BOOL>(0xD9BF6549); } // 0xD9BF6549
	nativeDecl Any _0xCCD8C02D() { return invoke<Any>(0xCCD8C02D); } // 0xCCD8C02D
	nativeDecl Any _0x3E25A3C5() { return invoke<Any>(0x3E25A3C5); } // 0x3E25A3C5
	nativeDecl Any NETWORK_GET_SCRIPT_STATUS() { return invoke<Any>(0x2BE9235A); } // 0x2BE9235A
	nativeDecl void NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(Any p0, Any p1) { invoke<Void>(0xDAF3B0AE, p0, p1); } // 0xDAF3B0AE
	nativeDecl void NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Any p0, Any p1) { invoke<Void>(0xBE3D32B4, p0, p1); } // 0xBE3D32B4
	nativeDecl void _0xA71A1D2A() { invoke<Void>(0xA71A1D2A); } // 0xA71A1D2A
	nativeDecl Any _0x0B739F53() { return invoke<Any>(0x0B739F53); } // 0x0B739F53
	nativeDecl Any NETWORK_GET_PLAYER_INDEX(Ped PedHandle) { return invoke<Any>(0xBE1C1506, PedHandle); } // 0xBE1C1506
	nativeDecl Any NETWORK_GET_PARTICIPANT_INDEX(Any p0) { return invoke<Any>(0xC4D91094, p0); } // 0xC4D91094
	nativeDecl Any _0x40DBF464(Any p0) { return invoke<Any>(0x40DBF464, p0); } // 0x40DBF464
	nativeDecl int NETWORK_GET_NUM_CONNECTED_PLAYERS() { return invoke<int>(0xF7952E62); } // 0xF7952E62
	nativeDecl Any NETWORK_IS_PLAYER_CONNECTED(Any p0) { return invoke<Any>(0x168EE2C2, p0); } // 0x168EE2C2
	nativeDecl Any _0xF4F13B06() { return invoke<Any>(0xF4F13B06); } // 0xF4F13B06
	nativeDecl Any NETWORK_IS_PARTICIPANT_ACTIVE(Any p0) { return invoke<Any>(0x4E2C348B, p0); } // 0x4E2C348B
	nativeDecl Any NETWORK_IS_PLAYER_ACTIVE(Any p0) { return invoke<Any>(0x43657B17, p0); } // 0x43657B17
	nativeDecl Any NETWORK_IS_PLAYER_A_PARTICIPANT(Any p0) { return invoke<Any>(0xB08B6992, p0); } // 0xB08B6992
	nativeDecl Any NET_BUT() { return invoke<Any>(0x6970BA94); } // 0x6970BA94
	nativeDecl Any NETWORK_GET_HOST_OF_THIS_SCRIPT() { return invoke<Any>(0x89EA7B54); } // 0x89EA7B54
	nativeDecl Any NETWORK_GET_HOST_OF_SCRIPT(const char* gamemode, Any p1, Any p2) { return invoke<Any>(0x9C95D0BB, gamemode, p1, p2); } // 0x9C95D0BB
	nativeDecl void NETWORK_SET_MISSION_FINISHED() { invoke<Void>(0x3083FAD7); } // 0x3083FAD7
	nativeDecl Any NETWORK_IS_SCRIPT_ACTIVE(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x4A65250C, p0, p1, p2, p3); } // 0x4A65250C
	nativeDecl Any _0x8F7D9F46(Any p0, Any p1, Any p2) { return invoke<Any>(0x8F7D9F46, p0, p1, p2); } // 0x8F7D9F46
	nativeDecl Any _0xDB8B5D71() { return invoke<Any>(0xDB8B5D71); } // 0xDB8B5D71
	nativeDecl Any _0xCEA55F4C(Any p0, Any p1, Any p2) { return invoke<Any>(0xCEA55F4C, p0, p1, p2); } // 0xCEA55F4C
	nativeDecl void _0x8DCFE77D() { invoke<Void>(0x8DCFE77D); } // 0x8DCFE77D
	nativeDecl void _0x331D9A27() { invoke<Void>(0x331D9A27); } // 0x331D9A27
	nativeDecl Any PARTICIPANT_ID() { return invoke<Any>(0x9C35A221); } // 0x9C35A221
	nativeDecl Any PARTICIPANT_ID_TO_INT() { return invoke<Any>(0x907498B0); } // 0x907498B0
	nativeDecl Any NETWORK_GET_DESTROYER_OF_NETWORK_ID(Any p0, Any p1) { return invoke<Any>(0x4FCA6436, p0, p1); } // 0x4FCA6436
	nativeDecl Any _0x28A45454(Any p0, Any p1, Any p2) { return invoke<Any>(0x28A45454, p0, p1, p2); } // 0x28A45454
	nativeDecl Any NETWORK_GET_ENTITY_KILLER_OF_PLAYER(Any p0, Any p1) { return invoke<Any>(0xA7E7E04F, p0, p1); } // 0xA7E7E04F
	nativeDecl void NETWORK_RESURRECT_LOCAL_PLAYER(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0xF1F9D4B4, p0, p1, p2, p3, p4, p5); } // 0xF1F9D4B4
	nativeDecl void NETWORK_SET_LOCAL_PLAYER_INVINCIBLE_TIME(Any p0) { invoke<Void>(0xFEA9B85C, p0); } // 0xFEA9B85C
	nativeDecl Any NETWORK_IS_LOCAL_PLAYER_INVINCIBLE() { return invoke<Any>(0x8DE13B36); } // 0x8DE13B36
	nativeDecl void _0x8D27280E(Any p0, Any p1) { invoke<Void>(0x8D27280E, p0, p1); } // 0x8D27280E
	nativeDecl void _0xB72F086D(Any p0) { invoke<Void>(0xB72F086D, p0); } // 0xB72F086D
	nativeDecl Any _0xEDA68956(Any p0) { return invoke<Any>(0xEDA68956, p0); } // 0xEDA68956
	nativeDecl BOOL NETWORK_GET_NETWORK_ID_FROM_ENTITY(Entity entty) { return invoke<BOOL>(0x9E35DAB6, entty); } // 0x9E35DAB6
	nativeDecl BOOL NETWORK_GET_ENTITY_FROM_NETWORK_ID(Entity entty) { return invoke<BOOL>(0x5B912C3F, entty); } // 0x5B912C3F
	nativeDecl BOOL NETWORK_GET_ENTITY_IS_NETWORKED(Entity entty) { return invoke<BOOL>(0xD7F934F4, entty); } // 0xD7F934F4
	nativeDecl BOOL NETWORK_GET_ENTITY_IS_LOCAL(Entity entty) { return invoke<BOOL>(0x813353ED, entty); } // 0x813353ED
	nativeDecl void _0x31A630A4(Any p0) { invoke<Void>(0x31A630A4, p0); } // 0x31A630A4
	nativeDecl void _0x5C645F64(Any p0) { invoke<Void>(0x5C645F64, p0); } // 0x5C645F64
	nativeDecl Any NETWORK_DOES_NETWORK_ID_EXIST(Any p0) { return invoke<Any>(0xB8D2C99E, p0); } // 0xB8D2C99E
	nativeDecl Any NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Any p0) { return invoke<Any>(0x1E2E3177, p0); } // 0x1E2E3177
	nativeDecl Any NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(int netID) { return invoke<Any>(0x9262A60A, netID); } // 0x9262A60A
	nativeDecl Any NETWORK_HAS_CONTROL_OF_NETWORK_ID(Entity entity) { return invoke<Any>(0x92E77D21, entity); } // 0x92E77D21
	nativeDecl Any NETWORK_REQUEST_CONTROL_OF_ENTITY(Entity entity) { return invoke<Any>(0xA05FEBD7, entity); } // 0xA05FEBD7
	nativeDecl Any NETWORK_REQUEST_CONTROL_OF_DOOR(Any p0) { return invoke<Any>(0xF60DAAF6, p0); } // 0xF60DAAF6
	nativeDecl Any NETWORK_HAS_CONTROL_OF_ENTITY(Entity Entity) { return invoke<Any>(0x005FD797, Entity); } // 0x005FD797
	nativeDecl Any NETWORK_HAS_CONTROL_OF_PICKUP(Any p0) { return invoke<Any>(0xF7784FC8, p0); } // 0xF7784FC8
	nativeDecl Any NETWORK_HAS_CONTROL_OF_DOOR(Any p0) { return invoke<Any>(0x136326EC, p0); } // 0x136326EC
	nativeDecl Any VEH_TO_NET(Vehicle vehicle) { return invoke<Any>(0xF17634EB, vehicle); } // 0xF17634EB
	nativeDecl Any PED_TO_NET(Ped ped) { return invoke<Any>(0x86A0B759, ped); } // 0x86A0B759
	nativeDecl Any OBJ_TO_NET(Object object) { return invoke<Any>(0x1E05F29F, object); } // 0x1E05F29F
	nativeDecl Any NET_TO_VEH(Any p0) { return invoke<Any>(0x7E02FAEA, p0); } // 0x7E02FAEA
	nativeDecl Any NET_TO_PED(Any p0) { return invoke<Any>(0x87717DD4, p0); } // 0x87717DD4
	nativeDecl Any NET_TO_OBJ(Any p0) { return invoke<Any>(0x27AA14D8, p0); } // 0x27AA14D8
	nativeDecl Any NET_TO_ENT(Any p0) { return invoke<Any>(0x5E149683, p0); } // 0x5E149683
	nativeDecl void NETWORK_GET_LOCAL_HANDLE(Any p0, Any p1) { invoke<Void>(0x08023B16, p0, p1); } // 0x08023B16
	nativeDecl void NETWORK_HANDLE_FROM_USER_ID(const char* p0, int* p1, Any p2) { invoke<Void>(0x74C2C1B7, p0, p1, p2); } // 0x74C2C1B7
	nativeDecl void NETWORK_HANDLE_FROM_MEMBER_ID(const char* p0, int* p1, Any p2) { invoke<Void>(0x9BFC9FE2, p0, p1, p2); } // 0x9BFC9FE2
	nativeDecl void NETWORK_HANDLE_FROM_FRIEND(Any p0, Any p1, Any p2) { invoke<Void>(0x3B0BB3A3, p0, p1, p2); } // 0x3B0BB3A3
	nativeDecl Any NETWORK_GAMERTAG_FROM_HANDLE_START(Any p0) { return invoke<Any>(0xEBA00C2A, p0); } // 0xEBA00C2A
	nativeDecl Any NETWORK_GAMERTAG_FROM_HANDLE_PENDING() { return invoke<Any>(0xF000828E); } // 0xF000828E
	nativeDecl Any NETWORK_GAMERTAG_FROM_HANDLE_SUCCEEDED() { return invoke<Any>(0x89C2B5EA); } // 0x89C2B5EA
	nativeDecl const char* NETWORK_GET_GAMERTAG_FROM_HANDLE(int* p0) { return invoke<const char*>(0xA18A1B26, p0); } // 0xA18A1B26
	nativeDecl Any NETWORK_ARE_HANDLES_THE_SAME(Any p0, Any p1) { return invoke<Any>(0x45975AE3, p0, p1); } // 0x45975AE3
	nativeDecl Any NETWORK_IS_HANDLE_VALID(int* p0, Any p1) { return invoke<Any>(0xF0996C6E, p0, p1); } // 0xF0996C6E
	nativeDecl Any NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(Any p0) { return invoke<Any>(0x2E96EF1E, p0); } // 0x2E96EF1E
	nativeDecl Any NETWORK_MEMBER_ID_FROM_GAMER_HANDLE(Any p0) { return invoke<Any>(0x62EF0A63, p0); } // 0x62EF0A63
	nativeDecl Any NETWORK_IS_GAMER_IN_MY_SESSION(Any p0) { return invoke<Any>(0x59127716, p0); } // 0x59127716
	nativeDecl void NETWORK_SHOW_PROFILE_UI(Any p0) { invoke<Void>(0xF00A20B0, p0); } // 0xF00A20B0
	nativeDecl Any NETWORK_GET_GAME_REGION() { return invoke<Any>(0xEE4D173E); } // 0xEE4D173E
	nativeDecl Any NETWORK_PLAYER_GET_NAME(Any p0) { return invoke<Any>(0xCE48F260, p0); } // 0xCE48F260
	nativeDecl Any _0x4EC0D983(Any p0, Any p1) { return invoke<Any>(0x4EC0D983, p0, p1); } // 0x4EC0D983
	nativeDecl BOOL NETWORK_PLAYER_IS_ROCKSTAR_DEV(Player player) { return invoke<BOOL>(0xF6659045, player); } // 0xF6659045
	nativeDecl Any _0xD265B049(Any p0) { return invoke<Any>(0xD265B049, p0); } // 0xD265B049
	nativeDecl Any NETWORK_IS_INACTIVE_PROFILE(Any p0) { return invoke<Any>(0x95481343, p0); } // 0x95481343
	nativeDecl Any NETWORK_GET_MAX_FRIENDS() { return invoke<Any>(0x048171BC); } // 0x048171BC
	nativeDecl Any NETWORK_GET_FRIEND_COUNT() { return invoke<Any>(0xA396ACDE); } // 0xA396ACDE
	nativeDecl const char* NETWORK_GET_FRIEND_NAME(Any p0) { return invoke<const char*>(0x97420B6D, p0); } // 0x97420B6D
	nativeDecl Any NETWORK_IS_FRIEND_ONLINE(const char* p0) { return invoke<Any>(0xE0A42430, p0); } // 0xE0A42430
	nativeDecl Any NETWORK_IS_FRIEND_IN_SAME_TITLE(Any p0) { return invoke<Any>(0xC54365C2, p0); } // 0xC54365C2
	nativeDecl Any NETWORK_IS_FRIEND_IN_MULTIPLAYER(Any p0) { return invoke<Any>(0x400BDDD9, p0); } // 0x400BDDD9
	nativeDecl Any NETWORK_IS_FRIEND(Any p0) { return invoke<Any>(0x2DA4C282, p0); } // 0x2DA4C282
	nativeDecl Any NETWORK_IS_PENDING_FRIEND(Any p0) { return invoke<Any>(0x5C85FF81, p0); } // 0x5C85FF81
	nativeDecl Any NETWORK_IS_ADDING_FRIEND() { return invoke<Any>(0xBB7EC8C4); } // 0xBB7EC8C4
	nativeDecl Any NETWORK_ADD_FRIEND(Any p0, Any p1) { return invoke<Any>(0x20E5B3EE, p0, p1); } // 0x20E5B3EE
	nativeDecl Any CLEAR_PLAYER_BAILED_FROM_PLAYERICLE(Any p0) { return invoke<Any>(0x94AE7172, p0); } // 0x94AE7172
	nativeDecl Any GET_OBJ_ENTITY(Any p0) { return invoke<Any>(0xB802B671, p0); } // 0xB802B671
	nativeDecl Any NETWORK_CAN_SET_WAYPOINT() { return invoke<Any>(0x009E68F3); } // 0x009E68F3
	nativeDecl Any _0x5C0AB2A9(Any p0) { return invoke<Any>(0x5C0AB2A9, p0); } // 0x5C0AB2A9
	nativeDecl Any _0x9A176B6E() { return invoke<Any>(0x9A176B6E); } // 0x9A176B6E
	nativeDecl Any NETWORK_HAS_HEADSET() { return invoke<Any>(0xA7DC5657); } // 0xA7DC5657
	nativeDecl void _0x5C05B7E1(Any p0) { invoke<Void>(0x5C05B7E1, p0); } // 0x5C05B7E1
	nativeDecl Any VEHICLE_NET_ATTACH_CHAR_TO_CHAR_PHYSICALLY() { return invoke<Any>(0xAC00A5BE); } // 0xAC00A5BE
	nativeDecl Any NETWORK_GAMER_HAS_HEADSET(Any p0) { return invoke<Any>(0xD036DA4A, p0); } // 0xD036DA4A
	nativeDecl Any NETWORK_IS_GAMER_TALKING(Any p0) { return invoke<Any>(0x99B58DBC, p0); } // 0x99B58DBC
	nativeDecl Any NETWORK_CAN_COMMUNICATE_WITH_GAMER(Any p0) { return invoke<Any>(0xD05EB7F6, p0); } // 0xD05EB7F6
	nativeDecl Any NETWORK_IS_GAMER_MUTED_BY_ME(Any p0) { return invoke<Any>(0x001B4046, p0); } // 0x001B4046
	nativeDecl Any _0x7685B333(Any p0) { return invoke<Any>(0x7685B333, p0); } // 0x7685B333
	nativeDecl Any _0x3FDCC8D7(Any p0) { return invoke<Any>(0x3FDCC8D7, p0); } // 0x3FDCC8D7
	nativeDecl Any _0xD19B312C(Any p0) { return invoke<Any>(0xD19B312C, p0); } // 0xD19B312C
	nativeDecl Any NETWORK_IS_PLAYER_TALKING(Any p0) { return invoke<Any>(0xDA9FD9DB, p0); } // 0xDA9FD9DB
	nativeDecl Any NETWORK_PLAYER_HAS_HEADSET(Any p0) { return invoke<Any>(0x451FB6B6, p0); } // 0x451FB6B6
	nativeDecl Any NETWORK_IS_PLAYER_MUTED_BY_ME(Any p0) { return invoke<Any>(0x7A21050E, p0); } // 0x7A21050E
	nativeDecl Any NETWORK_AM_I_MUTED_BY_PLAYER(Any p0) { return invoke<Any>(0xE128F2B0, p0); } // 0xE128F2B0
	nativeDecl Any NETWORK_IS_PLAYER_BLOCKED_BY_ME(Any p0) { return invoke<Any>(0xAE4F4560, p0); } // 0xAE4F4560
	nativeDecl Any NETWORK_AM_I_BLOCKED_BY_PLAYER(Any p0) { return invoke<Any>(0x953EF45E, p0); } // 0x953EF45E
	nativeDecl Any NETWORK_GET_PLAYER_LOUDNESS(Any p0) { return invoke<Any>(0xF2F67014, p0); } // 0xF2F67014
	nativeDecl void NETWORK_SET_TALKER_PROXIMITY(Any p0) { invoke<Void>(0x67555C66, p0); } // 0x67555C66
	nativeDecl Any NETWORK_GET_TALKER_PROXIMITY() { return invoke<Any>(0x19991ADD); } // 0x19991ADD
	nativeDecl void NETWORK_SET_VOICE_ACTIVE(Any p0) { invoke<Void>(0x8011247F, p0); } // 0x8011247F
	nativeDecl void _0x1A3EA6CD(Any p0) { invoke<Void>(0x1A3EA6CD, p0); } // 0x1A3EA6CD
	nativeDecl void _0xCAB21090(Any p0) { invoke<Void>(0xCAB21090, p0); } // 0xCAB21090
	nativeDecl void NETWORK_SET_TEAM_ONLY_CHAT(Any p0) { invoke<Void>(0x3813019A, p0); } // 0x3813019A
	nativeDecl void _0xC8CC9E75(Any p0, Any p1) { invoke<Void>(0xC8CC9E75, p0, p1); } // 0xC8CC9E75
	nativeDecl void NETWORK_SET_OVERRIDE_SPECTATOR_MODE(Any p0) { invoke<Void>(0xA0FD42D3, p0); } // 0xA0FD42D3
	nativeDecl void _0xC9DDA85B(Any p0) { invoke<Void>(0xC9DDA85B, p0); } // 0xC9DDA85B
	nativeDecl void _0xD33AFF79(Any p0) { invoke<Void>(0xD33AFF79, p0); } // 0xD33AFF79
	nativeDecl void _0x4FFEFE43(Any p0) { invoke<Void>(0x4FFEFE43, p0); } // 0x4FFEFE43
	nativeDecl void _0x74EE2D8B(Any p0, Any p1) { invoke<Void>(0x74EE2D8B, p0, p1); } // 0x74EE2D8B
	nativeDecl void _0x2F98B405(Any p0) { invoke<Void>(0x2F98B405, p0); } // 0x2F98B405
	nativeDecl void _0x95F1C60D(Any p0, Any p1) { invoke<Void>(0x95F1C60D, p0, p1); } // 0x95F1C60D
	nativeDecl void _0x6C344AE3(Any p0, Any p1) { invoke<Void>(0x6C344AE3, p0, p1); } // 0x95F1C60D
	nativeDecl void _0x1BCD3DDF(Any p0) { invoke<Void>(0x1BCD3DDF, p0); } // 0x1BCD3DDF
	nativeDecl void NETWORK_SET_VOICE_CHANNEL(Any p0) { invoke<Void>(0x3974879F, p0); } // 0x3974879F
	nativeDecl void _0x9ECF722A() { invoke<Void>(0x9ECF722A); } // 0x9ECF722A
	nativeDecl void IS_NETWORK_VEHICLE_BEEN_DAMAGED_BY_ANY_OBJECT(Any p0, Any p1, Any p2) { invoke<Void>(0xF1E84832, p0, p1, p2); } // 0xF1E84832
	nativeDecl void _0x7F9B9052() { invoke<Void>(0x7F9B9052); } // 0x7F9B9052
	nativeDecl void _0x7BBEA8CF(Any p0) { invoke<Void>(0x7BBEA8CF, p0); } // 0x7BBEA8CF
	nativeDecl void _0xE797A4B6(Any p0) { invoke<Void>(0xE797A4B6, p0); } // 0xE797A4B6
	nativeDecl void _0x92268BB5(int player, float* p1, float* p2) { invoke<Void>(0x92268BB5, player, p1, p2); } // 0x92268BB5
	nativeDecl void SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME() { invoke<Void>(0x92B7351C); } // 0x92B7351C
	nativeDecl void NETWORK_SET_FRIENDLY_FIRE_OPTION(Any p0) { invoke<Void>(0x6BAF95FA, p0); } // 0x6BAF95FA
	nativeDecl void NETWORK_SET_RICH_PRESENCE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x932A6CED, p0, p1, p2, p3); } // 0x932A6CED
	nativeDecl void _0x017E6777(int p0, const char* p1) { invoke<Void>(0x017E6777, p0, p1); } // 0x017E6777
	nativeDecl Any _0xE1F86C6A() { return invoke<Any>(0xE1F86C6A); } // 0xE1F86C6A
	nativeDecl void _NETWORK_RESPAWN_COORDS(Player player, float* coords, BOOL p4, BOOL p5) { invoke<Void>(0xBE6A30C3, player, coords, p4, p5); } // 0x9769F811D1785B03 0xBE6A30C3
	nativeDecl void _NETWORK_RESPAWN_PLAYER(Player player, BOOL p1) { invoke<Void>(0x22E03AD0, player, p1); }// 0xBF22E0F32968E967 0x22E03AD0
	nativeDecl void _0xCEAE5AFC(Any p0) { invoke<Void>(0xCEAE5AFC, p0); } // 0xCEAE5AFC
	nativeDecl Any _0xF5F4BD95() { return invoke<Any>(0xF5F4BD95); } // 0xF5F4BD95
	nativeDecl Any NETWORK_CLAN_PLAYER_IS_ACTIVE(Any* p0) { return invoke<Any>(0xAB8319A3, p0); } // 0xAB8319A3
	nativeDecl Any NETWORK_CLAN_PLAYER_GET_DESC(Any* crewdescription, Any p1, Any* playerhandle) { return invoke<Any>(0x6EE4A282, crewdescription, p1, playerhandle); } // 0x6EE4A282
	nativeDecl Any _0x54E79E9C(Any* p0, Any p1) { return invoke<Any>(0x54E79E9C, p0, p1); } // 0x54E79E9C
	nativeDecl void _0xF633805A(Any p0, Any p1, Any p2) { invoke<Void>(0xF633805A, p0, p1, p2); } // 0xF633805A
	nativeDecl Any _0x807B3450() { return invoke<Any>(0x807B3450); } // 0x807B3450
	nativeDecl Any _0x3369DD1F(Any p0, Any p1) { return invoke<Any>(0x3369DD1F, p0, p1); } // 0x3369DD1F
	nativeDecl Any NETWORK_CLAN_DOWNLOAD_MEMBERSHIP(Any p0) { return invoke<Any>(0x8E8CB520, p0); } // 0x8E8CB520
	nativeDecl Any NETWORK_CLAN_DOWNLOAD_MEMBERSHIP_PENDING(Any p0) { return invoke<Any>(0x1FDB590F, p0); } // 0x1FDB590F
	nativeDecl Any _0x83ED8E08() { return invoke<Any>(0x83ED8E08); } // 0x83ED8E08
	nativeDecl Any _0x40202867(Any p0) { return invoke<Any>(0x40202867, p0); } // 0x40202867
	nativeDecl Any NETWORK_CLAN_GET_MEMBERSHIP_COUNT(Any p0) { return invoke<Any>(0x25924010, p0); } // 0x25924010
	nativeDecl Any NETWORK_CLAN_GET_MEMBERSHIP_VALID(Any p0, Any p1) { return invoke<Any>(0x48914F6A, p0, p1); } // 0x48914F6A
	nativeDecl Any NETWORK_CLAN_GET_MEMBERSHIP(Any p0, Any p1, Any p2) { return invoke<Any>(0xCDC4A590, p0, p1, p2); } // 0xCDC4A590
	nativeDecl Any NETWORK_CLAN_JOIN(Any p0) { return invoke<Any>(0x79C916C5, p0); } // 0x79C916C5
	nativeDecl Any _0xBDA90BAC(Any p0, Any p1) { return invoke<Any>(0xBDA90BAC, p0, p1); } // 0xBDA90BAC
	nativeDecl Any _0x8E952B12(Any p0, Any p1) { return invoke<Any>(0x8E952B12, p0, p1); } // 0x8E952B12
	nativeDecl Any _0x966C90FD() { return invoke<Any>(0x966C90FD); } // 0x966C90FD
	nativeDecl Any _0xBA672146(Any p0, Any p1) { return invoke<Any>(0xBA672146, p0, p1); } // 0xBA672146
	nativeDecl Any _0x7963FA4D(Any p0) { return invoke<Any>(0x7963FA4D, p0); } // 0x7963FA4D
	nativeDecl Any _0x88B13CDC(Any p0, Any p1) { return invoke<Any>(0x88B13CDC, p0, p1); } // 0x88B13CDC
	nativeDecl void _0xD6E3D5EA(Any p0) { invoke<Void>(0xD6E3D5EA, p0); } // 0xD6E3D5EA
	nativeDecl Any _0xE22445DA() { return invoke<Any>(0xE22445DA); } // 0xE22445DA
	nativeDecl void _0x455DDF5C() { invoke<Void>(0x455DDF5C); } // 0x455DDF5C
	nativeDecl Any _0x89DB0EC7(Any p0, Any p1) { return invoke<Any>(0x89DB0EC7, p0, p1); } // 0x89DB0EC7
	nativeDecl Any _0xA4EF02F3() { return invoke<Any>(0xA4EF02F3); } // 0xA4EF02F3
	nativeDecl Any _0x068A054E() { return invoke<Any>(0x068A054E); } // 0x068A054E
	nativeDecl Any _0x9B8631EB(Any p0, Any p1) { return invoke<Any>(0x9B8631EB, p0, p1); } // 0x9B8631EB
	nativeDecl void SET_NETWORK_ID_CAN_MIGRATE(Any p0, Any p1) { invoke<Void>(0x47C8E5FF, p0, p1); } // 0x47C8E5FF
	nativeDecl void SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(int netId, BOOL toggle) { invoke<Void>(0x68D486B2, netId, toggle); } // 0x68D486B2
	nativeDecl void _0x4D15FDB1(Any p0, Any p1, Any p2) { invoke<Void>(0x4D15FDB1, p0, p1, p2); } // 0x4D15FDB1
	nativeDecl void NETWORK_SET_ENTITY_CAN_BLEND(Any p0, Any p1) { invoke<Void>(0xDE8C0DB8, p0, p1); } // 0xDE8C0DB8
	nativeDecl void _0x09CBC4B0(Any p0, Any p1) { invoke<Void>(0x09CBC4B0, p0, p1); } // 0x09CBC4B0
	nativeDecl void SET_NETWORK_ID_VISIBLE_IN_CUTSCENE(Any p0, Any p1, Any p2) { invoke<Void>(0x199E75EF, p0, p1, p2); } // 0x199E75EF
	nativeDecl void _0x00AE4E17(Any p0, Any p1) { invoke<Void>(0x00AE4E17, p0, p1); } // 0x00AE4E17
	nativeDecl Any _0xEA5176C0(Any p0) { return invoke<Any>(0xEA5176C0, p0); } // 0xEA5176C0
	nativeDecl void SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(Any p0, Any p1) { invoke<Void>(0x59F3479B, p0, p1); } // 0x59F3479B
	nativeDecl void SET_LOCAL_PLAYER_INVISIBLE_LOCALLY(Any p0) { invoke<Void>(0x764F6222, p0); } // 0x764F6222
	nativeDecl void SET_LOCAL_PLAYER_VISIBLE_LOCALLY(Any p0) { invoke<Void>(0x324B56DB, p0); } // 0x324B56DB
	nativeDecl void SET_PLAYER_INVISIBLE_LOCALLY(Any p0, Any p1) { invoke<Void>(0x18227209, p0, p1); } // 0x18227209
	nativeDecl void SET_PLAYER_VISIBLE_LOCALLY(Any p0, Any p1) { invoke<Void>(0xBA2BB4B4, p0, p1); } // 0xBA2BB4B4
	nativeDecl void FADE_OUT_LOCAL_PLAYER(Any p0) { invoke<Void>(0x8FA7CEBD, p0); } // 0x8FA7CEBD
	nativeDecl void NETWORK_FADE_OUT_ENTITY(Any p0, Any p1, Any p2) { invoke<Void>(0x47EDEE56, p0, p1, p2); } // 0x47EDEE56
	nativeDecl void NETWORK_FADE_IN_ENTITY(Any p0, Any p1) { invoke<Void>(0x9B9FCD02, p0, p1); } // 0x9B9FCD02
	nativeDecl BOOL IS_PLAYER_IN_CUTSCENE(Any p0) { return invoke<BOOL>(0xE0A619BD, p0); } // 0xE0A619BD
	nativeDecl void SET_ENTITY_VISIBLE_IN_CUTSCENE(Any p0, Any p1, Any p2) { invoke<Void>(0xDBFB067B, p0, p1, p2); } // 0xDBFB067B
	nativeDecl void SET_ENTITY_LOCALLY_INVISIBLE(Any p0) { invoke<Void>(0x51ADCC5F, p0); } // 0x51ADCC5F
	nativeDecl void SET_ENTITY_LOCALLY_VISIBLE(Any p0) { invoke<Void>(0x235A57B3, p0); } // 0x235A57B3
	nativeDecl BOOL IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID(Any p0) { return invoke<BOOL>(0x597063BA, p0); } // 0x597063BA
	nativeDecl void ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Any p0, Any p1) { invoke<Void>(0x95D07BA5, p0, p1); } // 0x95D07BA5
	nativeDecl BOOL IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(Any p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0x23C5274E, p0, p1, p2, p3); } // 0x23C5274E
	nativeDecl BOOL IS_SPHERE_VISIBLE_TO_PLAYER(int player, float x, float y, float z, float radius) { return invoke<BOOL>(0xE9FCFB32, player, x, y, z, radius); } // 0xE9FCFB32
	nativeDecl void RESERVE_NETWORK_MISSION_OBJECTS(Any p0) { invoke<Void>(0x391DF4F3, p0); } // 0x391DF4F3
	nativeDecl void RESERVE_NETWORK_MISSION_PEDS(Any p0) { invoke<Void>(0x54998C37, p0); } // 0x54998C37
	nativeDecl void RESERVE_NETWORK_MISSION_VEHICLES(Any p0) { invoke<Void>(0x5062875E, p0); } // 0x5062875E
	nativeDecl BOOL CAN_REGISTER_MISSION_OBJECTS(Any p0) { return invoke<BOOL>(0x7F85DFDE, p0); } // 0x7F85DFDE
	nativeDecl BOOL CAN_REGISTER_MISSION_PEDS(Any p0) { return invoke<BOOL>(0xCCAA5CE9, p0); } // 0xCCAA5CE9
	nativeDecl BOOL CAN_REGISTER_MISSION_VEHICLES(Any p0) { return invoke<BOOL>(0x818B6830, p0); } // 0x818B6830
	nativeDecl BOOL CAN_REGISTER_MISSION_ENTITIES(Any p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0x83794008, p0, p1, p2, p3); } // 0x83794008
	nativeDecl Any GET_NUM_RESERVED_MISSION_OBJECTS(Any p0) { return invoke<Any>(0x16A80CD6, p0); } // 0x16A80CD6
	nativeDecl Any GET_NUM_RESERVED_MISSION_PEDS(Any p0) { return invoke<Any>(0x6C25975C, p0); } // 0x6C25975C
	nativeDecl Any GET_NUM_RESERVED_MISSION_VEHICLES(Any p0) { return invoke<Any>(0xA9A308F3, p0); } // 0xA9A308F3
	nativeDecl Any _0x603FA104(Any p0) { return invoke<Any>(0x603FA104, p0); } // 0x603FA104
	nativeDecl Any _0xD8FEC4F8(Any p0) { return invoke<Any>(0xD8FEC4F8, p0); } // 0xD8FEC4F8
	nativeDecl Any _0x20527695(Any p0) { return invoke<Any>(0x20527695, p0); } // 0x20527695
	nativeDecl Any _0x8687E285() { return invoke<Any>(0x8687E285); } // 0x8687E285
	nativeDecl Any _0x744AC008() { return invoke<Any>(0x744AC008); } // 0x744AC008
	nativeDecl Any _0xC3A12135() { return invoke<Any>(0xC3A12135); } // 0xC3A12135
	nativeDecl Any _0x6A036061() { return invoke<Any>(0x6A036061); } // 0x6A036061
	nativeDecl Any GET_NETWORK_TIME() { return invoke<Any>(0x998103C2); } // 0x998103C2
	nativeDecl Any _0x98AA48E5() { return invoke<Any>(0x98AA48E5); } // 0x98AA48E5
	nativeDecl Any _0x4538C4A2() { return invoke<Any>(0x4538C4A2); } // 0x4538C4A2
	nativeDecl Any GET_TIME_OFFSET(Any p0, Any p1) { return invoke<Any>(0x2E079AE6, p0, p1); } // 0x2E079AE6
	nativeDecl Any _0x50EF8FC6(Any p0, Any p1) { return invoke<Any>(0x50EF8FC6, p0, p1); } // 0x50EF8FC6
	nativeDecl Any _0xBBB6DF61(Any p0, Any p1) { return invoke<Any>(0xBBB6DF61, p0, p1); } // 0xBBB6DF61
	nativeDecl Any _0x8B4D1C06(Any p0, Any p1) { return invoke<Any>(0x8B4D1C06, p0, p1); } // 0x8B4D1C06
	nativeDecl Any GET_TIME_DIFFERENCE(Any p0, Any p1) { return invoke<Any>(0x5666A837, p0, p1); } // 0x5666A837
	nativeDecl Any _0x8218944E(Any p0) { return invoke<Any>(0x8218944E, p0); } // 0x8218944E
	nativeDecl Any _0xF2FDF2E0() { return invoke<Any>(0xF2FDF2E0); } // 0xF2FDF2E0
	nativeDecl void _0xBB7CCE49(Any p0, Any p1) { invoke<Void>(0xBB7CCE49, p0, p1); } // 0xBB7CCE49
	nativeDecl void NETWORK_SET_IN_SPECTATOR_MODE(Any p0, Any p1) { invoke<Void>(0x5C4C8458, p0, p1); } // 0x5C4C8458
	nativeDecl void _0x54058F5F(Any p0, Any p1, Any p2) { invoke<Void>(0x54058F5F, p0, p1, p2); } // 0x54058F5F
	nativeDecl void _0xA7E36020(Any p0) { invoke<Void>(0xA7E36020, p0); } // 0xA7E36020
	nativeDecl void _0x64235620(Any p0, Any p1) { invoke<Void>(0x64235620, p0, p1); } // 0x64235620
	nativeDecl Any NETWORK_IS_IN_SPECTATOR_MODE() { return invoke<Any>(0x3EAD9DB8); } // 0x3EAD9DB8
	nativeDecl void NETWORK_SET_IN_MP_CUTSCENE(Any p0, Any p1, Any p2) { invoke<Void>(0x8434CB43, p0, p1, p2); } // 0x8434CB43
	nativeDecl Any NETWORK_IS_IN_MP_CUTSCENE() { return invoke<Any>(0x4BB33316); } // 0x4BB33316
	nativeDecl Any NETWORK_IS_PLAYER_IN_MP_CUTSCENE(Any p0) { return invoke<Any>(0x56F961E4, p0); } // 0x56F961E4
	nativeDecl void SET_NETWORK_VEHICLE_RESPOT_TIMER(Any p0, Any p1) { invoke<Void>(0x2C30912D, p0, p1); } // 0x2C30912D
	nativeDecl void _0xEA235081(Any p0, Any p1) { invoke<Void>(0xEA235081, p0, p1); } // 0xEA235081
	nativeDecl void USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(Any p0) { invoke<Void>(0x4DD46DAE, p0); } // 0x4DD46DAE
	nativeDecl Any NETWORK_CREATE_SYNCHRONISED_SCENE(float p0, float p1, float p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, float p9, float p10, float p11) { return invoke<Any>(0xB06FE3FE, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0xB06FE3FE
	nativeDecl void NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(Any p0, Any p1, const char* p2, const char* p3, float p4, float p5, int p6, Any p7, float p8) { invoke<Void>(0xB386713E, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xB386713E
	nativeDecl void NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(Entity entity, int netScene, const char* animDict, const char* animName, float speed, float speedMultiplier, int flag) { invoke<Void>(0x10DD636C, entity, netScene, animDict, animName, speed, speedMultiplier, flag); } // 0x10DD636C
	nativeDecl void _0xBFFE8B5C(Any p0, Any p1, Any p2) { invoke<Void>(0xBFFE8B5C, p0, p1, p2); } // 0xBFFE8B5C
	nativeDecl void NETWORK_ATTACH_SYNCHRONISED_SCENE_TO_ENTITY(Any p0, Any p1, Any p2) { invoke<Void>(0x3FE5B222, p0, p1, p2); } // 0x3FE5B222
	nativeDecl void NETWORK_START_SYNCHRONISED_SCENE(Any p0) { invoke<Void>(0xA9DFDC40, p0); } // 0xA9DFDC40
	nativeDecl void NETWORK_STOP_SYNCHRONISED_SCENE(Any p0) { invoke<Void>(0x97B1CDF6, p0); } // 0x97B1CDF6
	nativeDecl Any _0x16AED87B(Any p0) { return invoke<Any>(0x16AED87B, p0); } // 0x16AED87B
	nativeDecl Any _0x0679CE71(Any p0, Any p1) { return invoke<Any>(0x0679CE71, p0, p1); } // 0x0679CE71
	nativeDecl Any _0xC62E77B3(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoke<Any>(0xC62E77B3, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xC62E77B3
	nativeDecl Any _0x74D6B13C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { return invoke<Any>(0x74D6B13C, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x74D6B13C
	nativeDecl Any _0x90700C7D(Any p0) { return invoke<Any>(0x90700C7D, p0); } // 0x90700C7D
	nativeDecl void _0x44BFB619() { invoke<Void>(0x44BFB619); } // 0x44BFB619
	nativeDecl void NETWORK_GET_RESPAWN_RESULT(Any p0, Any p1, Any p2) { invoke<Void>(0xDDFE9FBC, p0, p1, p2); } // 0xDDFE9FBC
	nativeDecl Any _0x03287FD2(Any p0) { return invoke<Any>(0x03287FD2, p0); } // 0x03287FD2
	nativeDecl void _0x408A9436() { invoke<Void>(0x408A9436); } // 0x408A9436
	nativeDecl void _0xFFB2ADA1(Any p0, Any p1) { invoke<Void>(0xFFB2ADA1, p0, p1); } // 0xFFB2ADA1
	nativeDecl void NETWORK_END_TUTORIAL_SESSION() { invoke<Void>(0xBA57E53E); } // 0xBA57E53E
	nativeDecl Any NETWORK_IS_IN_TUTORIAL_SESSION() { return invoke<Any>(0x34DD7B28); } // 0x34DD7B28
	nativeDecl Any _0x755A2B3E() { return invoke<Any>(0x755A2B3E); } // 0x755A2B3E
	nativeDecl Any _0xA003C40B() { return invoke<Any>(0xA003C40B); } // 0xA003C40B
	nativeDecl Any _0x5E1020CC(Any p0) { return invoke<Any>(0x5E1020CC, p0); } // 0x5E1020CC
	nativeDecl Any _0xE66A0B40(Any p0, Any p1) { return invoke<Any>(0xE66A0B40, p0, p1); } // 0xE66A0B40
	nativeDecl void _0x72052DB3(Any p0, Any p1) { invoke<Void>(0x72052DB3, p0, p1); } // 0x72052DB3
	nativeDecl Any _0xB0313590(Any p0) { return invoke<Any>(0xB0313590, p0); } // 0xB0313590
	nativeDecl void NETWORK_OVERRIDE_CLOCK_TIME(int Hours, int Minutes, int Seconds) { invoke<Void>(0xC077BCD6, Hours, Minutes, Seconds); } // 0xC077BCD6
	nativeDecl void _0xC4AEAF49() { invoke<Void>(0xC4AEAF49); } // 0xC4AEAF49
	nativeDecl Any _0x2465296D() { return invoke<Any>(0x2465296D); } // 0x2465296D
	nativeDecl Any NETWORK_ADD_ENTITY_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0x51030E5B, p0, p1, p2, p3, p4, p5); } // 0x51030E5B
	nativeDecl Any _0x4C2C2B12(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0x4C2C2B12, p0, p1, p2, p3, p4, p5); } // 0x4C2C2B12
	nativeDecl Any NETWORK_REMOVE_ENTITY_AREA(Any p0) { return invoke<Any>(0xEAB97F25, p0); } // 0xEAB97F25
	nativeDecl Any _0x69956127(Any p0) { return invoke<Any>(0x69956127, p0); } // 0x69956127
	nativeDecl Any _0xCB1CD6D3(Any p0) { return invoke<Any>(0xCB1CD6D3, p0); } // 0xCB1CD6D3
	nativeDecl Any _0xC6D53AA0(Any p0) { return invoke<Any>(0xC6D53AA0, p0); } // 0xC6D53AA0
	nativeDecl void _0x155465EE(Any p0, Any p1) { invoke<Void>(0x155465EE, p0, p1); } // 0x155465EE
	nativeDecl Any _0x29532731() { return invoke<Any>(0x29532731); } // 0x29532731
	nativeDecl void _0xD760CAD5() { invoke<Void>(0xD760CAD5); } // 0xD760CAD5
	nativeDecl Any _0x231CFD12() { return invoke<Any>(0x231CFD12); } // 0x231CFD12
	nativeDecl Any NETWORK_DOES_TUNABLE_EXIST(Any p0, Any p1) { return invoke<Any>(0x9FCE9C9A, p0, p1); } // 0x9FCE9C9A
	nativeDecl Any _0xE4B3726A(Any p0, Any p1, Any p2) { return invoke<Any>(0xE4B3726A, p0, p1, p2); } // 0xE4B3726A
	nativeDecl Any _0x41E8912A(Any p0, Any p1, Any p2) { return invoke<Any>(0x41E8912A, p0, p1, p2); } // 0x41E8912A
	nativeDecl Any _0x8A04E1FE(Any p0, Any p1) { return invoke<Any>(0x8A04E1FE, p0, p1); } // 0x8A04E1FE
	nativeDecl Any _0xA78571CA(Any p0) { return invoke<Any>(0xA78571CA, p0); } // 0xA78571CA
	nativeDecl Any _0x053BB329() { return invoke<Any>(0x053BB329); } // 0x053BB329
	nativeDecl void NETWORK_RESET_BODY_TRACKER() { invoke<Void>(0x3914463F); } // 0x3914463F
	nativeDecl Any _0x17CBC608() { return invoke<Any>(0x17CBC608); } // 0x17CBC608
	nativeDecl Any _0xBFAA349B(Any p0) { return invoke<Any>(0xBFAA349B, p0); } // 0xBFAA349B
	nativeDecl Any _0xBEB7281A(Any p0, Any p1) { return invoke<Any>(0xBEB7281A, p0, p1); } // 0xBEB7281A
	nativeDecl Any NETWORK_EXPLODE_VEHICLE(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x0E1B38AE, p0, p1, p2, p3); } // 0x0E1B38AE
	nativeDecl void _0xBC54371B(Any p0) { invoke<Void>(0xBC54371B, p0); } // 0xBC54371B
	nativeDecl void _0x644141C5(int p0, float p1, float p2, float p3, float p4) { invoke<Void>(0x644141C5, p0, p1, p2, p3, p4); } // 0x644141C5
	nativeDecl void NETWORK_SET_PROPERTY_ID(Any p0) { invoke<Void>(0x5A74E873, p0); } // 0x5A74E873
	nativeDecl void _0x38BC35C8() { invoke<Void>(0x38BC35C8); } // 0x38BC35C8
	nativeDecl void _0x53C9563C(Any p0) { invoke<Void>(0x53C9563C, p0); } // 0x53C9563C
	nativeDecl void _0x6B97075B(Any p0) { invoke<Void>(0x6B97075B, p0); } // 0x6B97075B
	nativeDecl Any _0x965EA007() { return invoke<Any>(0x965EA007); } // 0x965EA007
	nativeDecl Any _0xEEFC8A55() { return invoke<Any>(0xEEFC8A55); } // 0xEEFC8A55
	nativeDecl void _0x866D1B67(Any p0) { invoke<Void>(0x866D1B67, p0); } // 0x866D1B67
	nativeDecl Any _0xED4A272F() { return invoke<Any>(0xED4A272F); } // 0xED4A272F
	nativeDecl Any _0x4ACF110C(Any p0) { return invoke<Any>(0x4ACF110C, p0); } // 0x4ACF110C
	nativeDecl Any _0x1AA3A0D5(Any p0) { return invoke<Any>(0x1AA3A0D5, p0); } // 0x1AA3A0D5
	nativeDecl Any _0x37877757(Any p0) { return invoke<Any>(0x37877757, p0); } // 0x37877757
	nativeDecl Any _0x1CF89DA5(Any p0) { return invoke<Any>(0x1CF89DA5, p0); } // 0x1CF89DA5
	nativeDecl Any _0x16E53875(Any p0, Any p1) { return invoke<Any>(0x16E53875, p0, p1); } // 0x16E53875
	nativeDecl void _0x365C50EE(Any p0, Any p1) { invoke<Void>(0x365C50EE, p0, p1); } // 0x365C50EE
	nativeDecl Any _0x25E2DBA9() { return invoke<Any>(0x25E2DBA9); } // 0x25E2DBA9
	nativeDecl void SET_STORE_ENABLED(Any p0) { invoke<Void>(0xC1F6443B, p0); } // 0xC1F6443B
	nativeDecl Any _0x1FDC75DC(Any p0) { return invoke<Any>(0x1FDC75DC, p0); } // 0x1FDC75DC
	nativeDecl void _0xCA7A0A49() { invoke<Void>(0xCA7A0A49); } // 0xCA7A0A49
	nativeDecl Any _0x44A58B0A(Any p0) { return invoke<Any>(0x44A58B0A, p0); } // 0x44A58B0A
	nativeDecl Any _0xD32FA11F() { return invoke<Any>(0xD32FA11F); } // 0xD32FA11F
	nativeDecl void _0xA7FA70AE() { invoke<Void>(0xA7FA70AE); } // 0xA7FA70AE
	nativeDecl void _0xCC7DCE24() { invoke<Void>(0xCC7DCE24); } // 0xCC7DCE24
	nativeDecl Any _0x70F6D3AD() { return invoke<Any>(0x70F6D3AD); } // 0x70F6D3AD
	nativeDecl Any _0x2B7B57B3(Any p0) { return invoke<Any>(0x2B7B57B3, p0); } // 0x2B7B57B3
	nativeDecl Any _0xBAF52DD8(Any p0) { return invoke<Any>(0xBAF52DD8, p0); } // 0xBAF52DD8
	nativeDecl Any _0x9B9AFFF1(Any p0) { return invoke<Any>(0x9B9AFFF1, p0); } // 0x9B9AFFF1
	nativeDecl void _0xC38E9DB0() { invoke<Void>(0xC38E9DB0); } // 0xC38E9DB0
	nativeDecl Any _0x32A4EB22() { return invoke<Any>(0x32A4EB22); } // 0x32A4EB22
	nativeDecl Any _0x9262744C() { return invoke<Any>(0x9262744C); } // 0x9262744C
	nativeDecl Any _0x08243B79(Any p0, Any p1) { return invoke<Any>(0x08243B79, p0, p1); } // 0x08243B79
	nativeDecl Any _0x798D6C27() { return invoke<Any>(0x798D6C27); } // 0x798D6C27
	nativeDecl Any _0xE69E8D0D() { return invoke<Any>(0xE69E8D0D); } // 0xE69E8D0D
	nativeDecl Any _0x742075FE() { return invoke<Any>(0x742075FE); } // 0x742075FE
	nativeDecl Any _0xCE569932() { return invoke<Any>(0xCE569932); } // 0xCE569932
	nativeDecl Any _0x82146BE9() { return invoke<Any>(0x82146BE9); } // 0x82146BE9
	nativeDecl void _0x133FF2D5() { invoke<Void>(0x133FF2D5); } // 0x133FF2D5
	nativeDecl Any _0xCBA7242F(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0xCBA7242F, p0, p1, p2, p3, p4, p5); } // 0xCBA7242F
	nativeDecl Any _0xDED82A6E(Any p0, Any p1, Any p2) { return invoke<Any>(0xDED82A6E, p0, p1, p2); } // 0xDED82A6E
	nativeDecl Any _0x40CF0783(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x40CF0783, p0, p1, p2, p3); } // 0x40CF0783
	nativeDecl Any _0x4609D596(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x4609D596, p0, p1, p2, p3); } // 0x4609D596
	nativeDecl Any _0x4C2C0D1F(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x4C2C0D1F, p0, p1, p2, p3); } // 0x4C2C0D1F
	nativeDecl Any _0x9EFBD5D1(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x9EFBD5D1, p0, p1, p2, p3); } // 0x9EFBD5D1
	nativeDecl Any _0xA6D8B798(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0xA6D8B798, p0, p1, p2, p3, p4); } // 0xA6D8B798
	nativeDecl Any _0x67E74842(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x67E74842, p0, p1, p2, p3, p4); } // 0x67E74842
	nativeDecl Any SET_BALANCE_ADD_MACHINE(Any p0, Any p1) { return invoke<Any>(0xE123C7AC, p0, p1); } // 0xE123C7AC
	nativeDecl Any SET_BALANCE_ADD_MACHINES(Any p0, Any p1, Any p2) { return invoke<Any>(0x22C33603, p0, p1, p2); } // 0x22C33603
	nativeDecl Any _0x37F5BD93(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x37F5BD93, p0, p1, p2, p3); } // 0x37F5BD93
	nativeDecl Any _0x1CFB3F51(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x1CFB3F51, p0, p1, p2, p3); } // 0x1CFB3F51
	nativeDecl Any _0x87D1E6BD(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x87D1E6BD, p0, p1, p2, p3); } // 0x87D1E6BD
	nativeDecl void _0x021D5A94() { invoke<Void>(0x021D5A94); } // 0x021D5A94
	nativeDecl Any _0x4908A514() { return invoke<Any>(0x4908A514); } // 0x4908A514
	nativeDecl Any _0x50296140() { return invoke<Any>(0x50296140); } // 0x50296140
	nativeDecl Any _0x3970B0DA() { return invoke<Any>(0x3970B0DA); } // 0x3970B0DA
	nativeDecl Any _0xC1487110() { return invoke<Any>(0xC1487110); } // 0xC1487110
	nativeDecl Any _0xCC2356E3() { return invoke<Any>(0xCC2356E3); } // 0xCC2356E3
	nativeDecl Any _0x2DE69817() { return invoke<Any>(0x2DE69817); } // 0x2DE69817
	nativeDecl Any _0x81BD8D3B() { return invoke<Any>(0x81BD8D3B); } // 0x81BD8D3B
	nativeDecl Any _0x8E1D8F78() { return invoke<Any>(0x8E1D8F78); } // 0x8E1D8F78
	nativeDecl void _0x0D35DD93() { invoke<Void>(0x0D35DD93); } // 0x0D35DD93
	nativeDecl Any _0x8F3137E6(Any p0) { return invoke<Any>(0x8F3137E6, p0); } // 0x8F3137E6
	nativeDecl Any _0xB9137BA7(Any p0) { return invoke<Any>(0xB9137BA7, p0); } // 0xB9137BA7
	nativeDecl Any _0x9FEEAA9C(Any p0) { return invoke<Any>(0x9FEEAA9C, p0); } // 0x9FEEAA9C
	nativeDecl Any _0x5E8A7559(Any p0) { return invoke<Any>(0x5E8A7559, p0); } // 0x5E8A7559
	nativeDecl Any _0x331AEABF(Any p0) { return invoke<Any>(0x331AEABF, p0); } // 0x331AEABF
	nativeDecl Any _0x0E5E8E5C(Any p0) { return invoke<Any>(0x0E5E8E5C, p0); } // 0x0E5E8E5C
	nativeDecl Any _0xA5A0C695(Any p0) { return invoke<Any>(0xA5A0C695, p0); } // 0xA5A0C695
	nativeDecl Any _0x91534C6E(Any p0) { return invoke<Any>(0x91534C6E, p0); } // 0x91534C6E
	nativeDecl Any _0x744A9EA5(Any p0, Any p1) { return invoke<Any>(0x744A9EA5, p0, p1); } // 0x744A9EA5
	nativeDecl void _0xA19A238D(Any p0, Any p1) { invoke<Void>(0xA19A238D, p0, p1); } // 0xA19A238D
	nativeDecl Any _0xFF7D44E6(Any p0, Any p1) { return invoke<Any>(0xFF7D44E6, p0, p1); } // 0xFF7D44E6
	nativeDecl Any _0xA2C5BD9D(Any p0) { return invoke<Any>(0xA2C5BD9D, p0); } // 0xA2C5BD9D
	nativeDecl Any _0xA850DDE1(Any p0) { return invoke<Any>(0xA850DDE1, p0); } // 0xA850DDE1
	nativeDecl Any _0x8F6754AE(Any p0) { return invoke<Any>(0x8F6754AE, p0); } // 0x8F6754AE
	nativeDecl Any _0x1E34953F(Any p0, Any p1) { return invoke<Any>(0x1E34953F, p0, p1); } // 0x1E34953F
	nativeDecl Any _0x771FE190(Any p0, Any p1) { return invoke<Any>(0x771FE190, p0, p1); } // 0x771FE190
	nativeDecl Any _0x3276D9D3(Any p0, Any p1) { return invoke<Any>(0x3276D9D3, p0, p1); } // 0x3276D9D3
	nativeDecl Any _0x41A0FB02(Any p0, Any p1) { return invoke<Any>(0x41A0FB02, p0, p1); } // 0x41A0FB02
	nativeDecl Any _0x11DC0F27(Any p0) { return invoke<Any>(0x11DC0F27, p0); } // 0x11DC0F27
	nativeDecl Any _0x0DEB3F5A(Any p0) { return invoke<Any>(0x0DEB3F5A, p0); } // 0x0DEB3F5A
	nativeDecl Any _0x84315226(Any p0, Any p1) { return invoke<Any>(0x84315226, p0, p1); } // 0x84315226
	nativeDecl Any _0x38FC2EEB(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x38FC2EEB, p0, p1, p2, p3, p4); } // 0x38FC2EEB
	nativeDecl Any _0x1C4F9FDB(Any p0) { return invoke<Any>(0x1C4F9FDB, p0); } // 0x1C4F9FDB
	nativeDecl Any _0xA69AE16C(Any p0) { return invoke<Any>(0xA69AE16C, p0); } // 0xA69AE16C
	nativeDecl Any _0xF50BC67A(Any p0) { return invoke<Any>(0xF50BC67A, p0); } // 0xF50BC67A
	nativeDecl Any _0xB3BBD241(Any p0) { return invoke<Any>(0xB3BBD241, p0); } // 0xB3BBD241
	nativeDecl Any _0x70A2845C(Any p0, Any p1) { return invoke<Any>(0x70A2845C, p0, p1); } // 0x70A2845C
	nativeDecl Any _0x346B506C(Any p0) { return invoke<Any>(0x346B506C, p0); } // 0x346B506C
	nativeDecl void _0x0095DB71() { invoke<Void>(0x0095DB71); } // 0x0095DB71
	nativeDecl Any _0xAD334B40(Any p0, Any p1, Any p2) { return invoke<Any>(0xAD334B40, p0, p1, p2); } // 0xAD334B40
	nativeDecl Any _0x980D45D7(Any p0, Any p1, Any p2) { return invoke<Any>(0x980D45D7, p0, p1, p2); } // 0x980D45D7
	nativeDecl Any _0x48CCC328(Any p0, Any p1, Any p2) { return invoke<Any>(0x48CCC328, p0, p1, p2); } // 0x48CCC328
	nativeDecl Any _0x8E664EFD() { return invoke<Any>(0x8E664EFD); } // 0x8E664EFD
	nativeDecl Any _0x611E0BE2() { return invoke<Any>(0x611E0BE2); } // 0x611E0BE2
	nativeDecl Any _0xF0211AC1() { return invoke<Any>(0xF0211AC1); } // 0xF0211AC1
	nativeDecl Any _0x1F0DD8AF() { return invoke<Any>(0x1F0DD8AF); } // 0x1F0DD8AF
	nativeDecl void _0x405ECA16() { invoke<Void>(0x405ECA16); } // 0x405ECA16
	nativeDecl Any _0x9567392B(Any p0, Any p1) { return invoke<Any>(0x9567392B, p0, p1); } // 0x9567392B
	nativeDecl Any _0xF79FFF3C() { return invoke<Any>(0xF79FFF3C); } // 0xF79FFF3C
	nativeDecl Any _0xA7F3F82B() { return invoke<Any>(0xA7F3F82B); } // 0xA7F3F82B
	nativeDecl Any _0x410C61D1() { return invoke<Any>(0x410C61D1); } // 0x410C61D1
	nativeDecl Any _0x0D4F845D(Any p0) { return invoke<Any>(0x0D4F845D, p0); } // 0x0D4F845D
	nativeDecl void _0xE13C1F7F() { invoke<Void>(0xE13C1F7F); } // 0xE13C1F7F
	nativeDecl void _0x213C6D36(Any p0) { invoke<Void>(0x213C6D36, p0); } // 0x213C6D36
	nativeDecl void _0x511E6F50(Any p0) { invoke<Void>(0x511E6F50, p0); } // 0x511E6F50
	nativeDecl Any _0xB4668B23(Any p0) { return invoke<Any>(0xB4668B23, p0); } // 0xB4668B23
	nativeDecl Any _0x30B51753(Any p0, Any p1, Any p2) { return invoke<Any>(0x30B51753, p0, p1, p2); } // 0x30B51753
	nativeDecl Any _0x02DAD93F() { return invoke<Any>(0x02DAD93F); } // 0x02DAD93F
	nativeDecl Any _0x2D947814(Any p0) { return invoke<Any>(0x2D947814, p0); } // 0x2D947814
	nativeDecl Any _0x37A28C26() { return invoke<Any>(0x37A28C26); } // 0x37A28C26
	nativeDecl Any _0x11E8B5CD() { return invoke<Any>(0x11E8B5CD); } // 0x11E8B5CD
	nativeDecl Any _0x429AEAB3() { return invoke<Any>(0x429AEAB3); } // 0x429AEAB3
	nativeDecl Any TEXTURE_DOWNLOAD_REQUEST(int PlayerHandle, const char* FilePath, const char* Name, BOOL p3) { return invoke<Any>(0xAD546CC3, PlayerHandle, FilePath, Name, p3); } // 0xAD546CC3
	nativeDecl Any _0x1856D008(Any p0, Any p1, Any p2) { return invoke<Any>(0x1856D008, p0, p1, p2); } // 0x1856D008
	nativeDecl Any _0x68C9AF69(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0x68C9AF69, p0, p1, p2, p3, p4, p5); } // 0x68C9AF69
	nativeDecl void TEXTURE_DOWNLOAD_RELEASE(Any p0) { invoke<Void>(0xEE8D9E70, p0); } // 0xEE8D9E70
	nativeDecl Any _0xE4547765(Any p0) { return invoke<Any>(0xE4547765, p0); } // 0xE4547765
	nativeDecl Any TEXTURE_DOWNLOAD_GET_NAME(Any p0) { return invoke<Any>(0xA40EF65A, p0); } // 0xA40EF65A
	nativeDecl Any _0x03225BA3(Any p0) { return invoke<Any>(0x03225BA3, p0); } // 0x03225BA3
	nativeDecl Any _0x4DEBC227() { return invoke<Any>(0x4DEBC227); } // 0x4DEBC227
	nativeDecl Any _0x5C065D55() { return invoke<Any>(0x5C065D55); } // 0x5C065D55
	nativeDecl Any _0x0CA1167F() { return invoke<Any>(0x0CA1167F); } // 0x0CA1167F
	nativeDecl Any _0x424C6E27() { return invoke<Any>(0x424C6E27); } // 0x424C6E27
	nativeDecl Any _0xD3BBE42F() { return invoke<Any>(0xD3BBE42F); } // 0xD3BBE42F
	nativeDecl Any _0xBDBB5948() { return invoke<Any>(0xBDBB5948); } // 0xBDBB5948
	nativeDecl Any _0x97287D68() { return invoke<Any>(0x97287D68); } // 0x97287D68
	nativeDecl Any _0xC6EA802E() { return invoke<Any>(0xC6EA802E); } // 0xC6EA802E
	nativeDecl Any _0xFD261E30(Any p0) { return invoke<Any>(0xFD261E30, p0); } // 0xFD261E30
	nativeDecl Any _0x8570DD34(Any p0, Any p1, Any p2) { return invoke<Any>(0x8570DD34, p0, p1, p2); } // 0x8570DD34
	nativeDecl void _0x273C6180() { invoke<Void>(0x273C6180); } // 0x273C6180
	nativeDecl void _0x371BBA08() { invoke<Void>(0x371BBA08); } // 0x371BBA08
	nativeDecl void _0xA100CC97(Any p0) { invoke<Void>(0xA100CC97, p0); } // 0xA100CC97
	nativeDecl void _0xBB2D33D3(Any p0, Any p1) { invoke<Void>(0xBB2D33D3, p0, p1); } // 0xBB2D33D3
}

namespace MONEY
{
	nativeDecl Any NETWORK_CHECK_RECEIVE_PLAYER_CASH(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0xD6B69D67, p0, p1, p2, p3, p4); } // 0xD6B69D67
	nativeDecl void NETWORK_GIVE_PLAYER_JOBSHARE_CASH(Any p0, Any p1) { invoke<Void>(0xC6047FDB, p0, p1); } // 0xC6047FDB
	nativeDecl void NETWORK_RECEIVE_PLAYER_JOBSHARE_CASH(Any p0, Any p1) { invoke<Void>(0x4ED71C1A, p0, p1); } // 0x4ED71C1A
	nativeDecl void NETWORK_EARN_FROM_BOUNTY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x127F2DAE, p0, p1, p2, p3); } // 0x127F2DAE
	nativeDecl Any _0x5AA379D9(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x5AA379D9, p0, p1, p2, p3, p4); } // 0x5AA379D9
	nativeDecl void NETWORK_BUY_ITEM(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoke<Void>(0xA07B6368, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0xA07B6368
	nativeDecl void NETWORK_SPENT_BUY_WANTEDLEVEL(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE7CB4F95, p0, p1, p2, p3); } // 0xE7CB4F95
	nativeDecl void NETWORK_SPENT_PAY_VEHICLE_INSURANCE_PREMIUM(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x4E665BB2, p0, p1, p2, p3, p4); } // 0x4E665BB2
	nativeDecl void NETWORK_SPENT_CALL_PLAYER(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x1A89B5FC, p0, p1, p2, p3); } // 0x1A89B5FC
	nativeDecl void NETWORK_SPENT_BOUNTY(Any p0, Any p1, Any p2) { invoke<Void>(0x3401FC96, p0, p1, p2); } // 0x3401FC96
	nativeDecl Any _0xC5D8B1E9(Any p0, Any p1) { return invoke<Any>(0xC5D8B1E9, p0, p1); } // 0xC5D8B1E9
	nativeDecl Any _0x6F1C592C() { return invoke<Any>(0x6F1C592C); } // 0x6F1C592C
	nativeDecl Any _0x8B755993(Any p0) { return invoke<Any>(0x8B755993, p0); } // 0x8B755993
	nativeDecl Any _0x8F266745(Any p0) { return invoke<Any>(0x8F266745, p0); } // 0x8F266745
	nativeDecl BOOL HAS_VC_WITHDRAWAL_COMPLETED(Any p0) { return invoke<BOOL>(0x531E4892, p0); } // 0x531E4892
	nativeDecl Any _0xB96C7ABE(Any p0) { return invoke<Any>(0xB96C7ABE, p0); } // 0xB96C7ABE
	nativeDecl void _0x66DA9935(Any p0, Any p1) { invoke<Void>(0x66DA9935, p0, p1); } // 0x66DA9935
	nativeDecl void NETWORK_DELETE_CHARACTER(Any p0, Any p1, Any p2) { invoke<Void>(0xA9F7E9C3, p0, p1, p2); } // 0xA9F7E9C3
	nativeDecl void _0x19F0C471(Any p0) { invoke<Void>(0x19F0C471, p0); } // 0x19F0C471
	nativeDecl Any _0xA27B9FE8() { return invoke<Any>(0xA27B9FE8); } // 0xA27B9FE8
	nativeDecl void _0x07C92F21(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x07C92F21, p0, p1, p2, p3); } // 0x07C92F21
	nativeDecl Any _0x8474E6F0(Any p0, Any p1, Any p2) { return invoke<Any>(0x8474E6F0, p0, p1, p2); } // 0x8474E6F0
	nativeDecl Any _0xE3802533(Any p0) { return invoke<Any>(0xE3802533, p0); } // 0xE3802533
	nativeDecl void NETWORK_EARN_FROM_PICKUP(int amount) { invoke<Void>(0x70A0ED62, amount); } // 0x70A0ED62
	nativeDecl void _0x33C20BC4(Any p0) { invoke<Void>(0x33C20BC4, p0); } // 0x33C20BC4
	nativeDecl void _0x30B3EC0A(Any p0) { invoke<Void>(0x30B3EC0A, p0); } // 0x30B3EC0A
	nativeDecl void _0xEAF04923(Any p0) { invoke<Void>(0xEAF04923, p0); } // 0xEAF04923
	nativeDecl void NETWORK_EARN_FROM_BETTING(Any p0, Any p1) { invoke<Void>(0xA0F7F07C, p0, p1); } // 0xA0F7F07C
	nativeDecl void NETWORK_EARN_FROM_JOB(int amount, Any p1) { invoke<Void>(0x0B6997FC, amount, p1); } // 0x0B6997FC
	nativeDecl void _0x5E81F55C(Any p0, Any p1) { invoke<Void>(0x5E81F55C, p0, p1); } // 0x5E81F55C
	nativeDecl void _0x2BEFB6C4(Any p0, Any p1, Any p2) { invoke<Void>(0x2BEFB6C4, p0, p1, p2); } // 0x2BEFB6C4
	nativeDecl void _0xF11FC458(Any p0, Any p1) { invoke<Void>(0xF11FC458, p0, p1); } // 0xF11FC458
	nativeDecl void NETWORK_EARN_FROM_HOLDUPS(Any p0) { invoke<Void>(0xE6B90E9C, p0); } // 0xE6B90E9C
	nativeDecl void NETWORK_EARN_FROM_PROPERTY(Any p0, Any p1) { invoke<Void>(0x9BE4F7E1, p0, p1); } // 0x9BE4F7E1
	nativeDecl void _0x866004A8(Any p0, Any p1) { invoke<Void>(0x866004A8, p0, p1); } // 0x866004A8
	nativeDecl void _0xCC068380(Any p0) { invoke<Void>(0xCC068380, p0); } // 0xCC068380
	nativeDecl void NETWORK_EARN_FROM_ROCKSTAR(Any p0) { invoke<Void>(0x5A3733CC, p0); } // 0x5A3733CC
	nativeDecl void NETWORK_EARN_FROM_VEHICLE(Any p0, Any p1) { invoke<Void>(0xF803589D, p0, p1); } // 0xF803589D
	nativeDecl void _0x96B8BEE8(Any p0, Any p1) { invoke<Void>(0x96B8BEE8, p0, p1); } // 0x96B8BEE8
	nativeDecl void NETWORK_SPENT_TAXI(Any p0, Any p1, Any p2) { invoke<Void>(0x1F3DB3E3, p0, p1, p2); } // 0x1F3DB3E3
	nativeDecl void _0xBE70849B(Any p0, Any p1, Any p2) { invoke<Void>(0xBE70849B, p0, p1, p2); } // 0xBE70849B
	nativeDecl void _0x451A2644(Any p0, Any p1, Any p2) { invoke<Void>(0x451A2644, p0, p1, p2); } // 0x451A2644
	nativeDecl void _0x224A3488(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x224A3488, p0, p1, p2, p3); } // 0x224A3488
	nativeDecl void NETWORK_SPENT_BETTING(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xF8A07513, p0, p1, p2, p3, p4); } // 0xF8A07513
	nativeDecl void _0x8957038E(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x8957038E, p0, p1, p2, p3); } // 0x8957038E
	nativeDecl void NETWORK_BUY_HEALTHCARE(Any p0, Any p1, Any p2) { invoke<Void>(0x832150E5, p0, p1, p2); } // 0x832150E5
	nativeDecl void NETWORK_BUY_AIRSTRIKE(Any p0, Any p1, Any p2) { invoke<Void>(0x40470683, p0, p1, p2); } // 0x40470683
	nativeDecl void _0x047547D4(Any p0, Any p1, Any p2) { invoke<Void>(0x047547D4, p0, p1, p2); } // 0x047547D4
	nativeDecl void NETWORK_SPENT_AMMO_DROP(Any p0, Any p1, Any p2) { invoke<Void>(0x4B643076, p0, p1, p2); } // 0x4B643076
	nativeDecl void NETWORK_BUY_BOUNTY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xCB89CBE0, p0, p1, p2, p3); } // 0xCB89CBE0
	nativeDecl void NETWORK_BUY_PROPERTY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x7D479AAB, p0, p1, p2, p3); } // 0x7D479AAB
	nativeDecl void NETWORK_SPENT_HELI_PICKUP(Any p0, Any p1, Any p2) { invoke<Void>(0x27EEBCAB, p0, p1, p2); } // 0x27EEBCAB
	nativeDecl void NETWORK_SPENT_BOAT_PICKUP(Any p0, Any p1, Any p2) { invoke<Void>(0xB241CABD, p0, p1, p2); } // 0xB241CABD
	nativeDecl void _0xDE7D398C(Any p0, Any p1, Any p2) { invoke<Void>(0xDE7D398C, p0, p1, p2); } // 0xDE7D398C
	nativeDecl void NETWORK_SPENT_CASH_DROP(Any p0, Any p1, Any p2) { invoke<Void>(0x87BD1D11, p0, p1, p2); } // 0x87BD1D11
	nativeDecl void _0xE792C4A5(Any p0, Any p1, Any p2) { invoke<Void>(0xE792C4A5, p0, p1, p2); } // 0xE792C4A5
	nativeDecl void _0xE6AAA0D5(Any p0, Any p1, Any p2) { invoke<Void>(0xE6AAA0D5, p0, p1, p2); } // 0xE6AAA0D5
	nativeDecl void _0x99CF02C4(Any p0, Any p1, Any p2) { invoke<Void>(0x99CF02C4, p0, p1, p2); } // 0x99CF02C4
	nativeDecl void _0x20DDCF2F(Any p0, Any p1, Any p2) { invoke<Void>(0x20DDCF2F, p0, p1, p2); } // 0x20DDCF2F
	nativeDecl void _0x2F7836E2(Any p0, Any p1, Any p2) { invoke<Void>(0x2F7836E2, p0, p1, p2); } // 0x2F7836E2
	nativeDecl void NETWORK_SPENT_CARWASH(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x8283E028, p0, p1, p2, p3, p4); } // 0x8283E028
	nativeDecl void NETWORK_SPENT_CINEMA(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x1100CAF5, p0, p1, p2, p3); } // 0x1100CAF5
	nativeDecl void NETWORK_SPENT_TELESCOPE(Any p0, Any p1, Any p2) { invoke<Void>(0xAE7FF044, p0, p1, p2); } // 0xAE7FF044
	nativeDecl void NETWORK_SPENT_HOLDUPS(Any p0, Any p1, Any p2) { invoke<Void>(0x1B3803B1, p0, p1, p2); } // 0x1B3803B1
	nativeDecl void _0x7E97C92C(Any p0, Any p1, Any p2) { invoke<Void>(0x7E97C92C, p0, p1, p2); } // 0x7E97C92C
	nativeDecl void _0x78436D07(Any p0, Any p1, Any p2) { invoke<Void>(0x78436D07, p0, p1, p2); } // 0x78436D07
	nativeDecl void _0x5AEE2FC1(Any p0, Any p1, Any p2) { invoke<Void>(0x5AEE2FC1, p0, p1, p2); } // 0x5AEE2FC1
	nativeDecl void _0x54198922(Any p0, Any p1, Any p2) { invoke<Void>(0x54198922, p0, p1, p2); } // 0x54198922
	nativeDecl void _0x3D96A21C(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x3D96A21C, p0, p1, p2, p3); } // 0x3D96A21C
	nativeDecl void _0x2E51C61C(Any p0, Any p1, Any p2) { invoke<Void>(0x2E51C61C, p0, p1, p2); } // 0x2E51C61C
	nativeDecl void _0xD57A5125(Any p0, Any p1, Any p2) { invoke<Void>(0xD57A5125, p0, p1, p2); } // 0xD57A5125
	nativeDecl void _0xD9622D64(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xD9622D64, p0, p1, p2, p3); } // 0xD9622D64
	nativeDecl Any _0x16184FB5() { return invoke<Any>(0x16184FB5); } // 0x16184FB5
	nativeDecl Any _0x4F5B781C(Any p0) { return invoke<Any>(0x4F5B781C, p0); } // 0x4F5B781C
	nativeDecl Any _0xADF8F882() { return invoke<Any>(0xADF8F882); } // 0xADF8F882
	nativeDecl Any NETWORK_CAN_RECEIVE_PLAYER_CASH(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x41F5F10E, p0, p1, p2, p3); } // 0x41F5F10E
}

namespace FILES
{
	nativeDecl Any _0x71D0CF3E(Any p0) { return invoke<Any>(0x71D0CF3E, p0); } // 0x71D0CF3E
	nativeDecl Any _0x2E9D628C(Any p0, Any p1, Any p2) { return invoke<Any>(0x2E9D628C, p0, p1, p2); } // 0x2E9D628C
	nativeDecl void INIT_SHOP_PED_COMPONENT(Any p0) { invoke<Void>(0xB818C7FC, p0); } // 0xB818C7FC
	nativeDecl void INIT_SHOP_PED_PROP(Any p0) { invoke<Void>(0xF5659E50, p0); } // 0xF5659E50
	nativeDecl Any _0xC937FF3D(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0xC937FF3D, p0, p1, p2, p3); } // 0xC937FF3D
	nativeDecl Any _0x594E862C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0x594E862C, p0, p1, p2, p3, p4, p5); } // 0x594E862C
	nativeDecl void GET_SHOP_PED_QUERY_COMPONENT(Any p0, Any p1) { invoke<Void>(0xC0718904, p0, p1); } // 0xC0718904
	nativeDecl void GET_SHOP_PED_COMPONENT(Any p0, Any p1) { invoke<Void>(0xB39677C5, p0, p1); } // 0xB39677C5
	nativeDecl void GET_SHOP_PED_QUERY_PROP(Any p0, Any p1) { invoke<Void>(0x1D3C1466, p0, p1); } // 0x1D3C1466
	nativeDecl void GET_SHOP_PED_PROP(Any p0, Any p1) { invoke<Void>(0xDB0A7A58, p0, p1); } // 0xDB0A7A58
	nativeDecl Any _0xC8A4BF12(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0xC8A4BF12, p0, p1, p2, p3); } // 0xC8A4BF12
	nativeDecl Any _0x7D876DC0(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x7D876DC0, p0, p1, p2, p3); } // 0x7D876DC0
	nativeDecl Any _0x159751B4(Any p0) { return invoke<Any>(0x159751B4, p0); } // 0x159751B4
	nativeDecl void _0xE4FF7103(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xE4FF7103, p0, p1, p2, p3, p4); } // 0xE4FF7103
	nativeDecl Any _0xCE70F183(Any p0) { return invoke<Any>(0xCE70F183, p0); } // 0xCE70F183
	nativeDecl Any _0xC560D7C0(Any p0) { return invoke<Any>(0xC560D7C0, p0); } // 0xC560D7C0
	nativeDecl void GET_FORCED_COMPONENT(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x382C70BE, p0, p1, p2, p3, p4); } // 0x382C70BE
	nativeDecl void GET_FORCED_PROP(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x22DAE257, p0, p1, p2, p3, p4); } // 0x22DAE257
	nativeDecl Any _0x8E2C7FD5(Any p0, Any p1, Any p2) { return invoke<Any>(0x8E2C7FD5, p0, p1, p2); } // 0x8E2C7FD5
	nativeDecl Any _0x1ECD23E7(Any p0, Any p1) { return invoke<Any>(0x1ECD23E7, p0, p1); } // 0x1ECD23E7
	nativeDecl void GET_SHOP_PED_QUERY_OUTFIT(Any p0, Any p1) { invoke<Void>(0x2F8013A1, p0, p1); } // 0x2F8013A1
	nativeDecl void _0xCAFE9209(Any p0, Any p1) { invoke<Void>(0xCAFE9209, p0, p1); } // 0xCAFE9209
	nativeDecl Any GET_SHOP_PED_OUTFIT_PROP(Any p0, Any p1) { return invoke<Any>(0x6C767148, p0, p1); } // 0x6C767148
	nativeDecl Any _0x2798F56F(Any p0) { return invoke<Any>(0x2798F56F, p0); } // 0x2798F56F
	nativeDecl Any GET_SHOP_PED_OUTFIT_COMPONENT(Any p0, Any p1) { return invoke<Any>(0x99EE4570, p0, p1); } // 0x99EE4570
	nativeDecl Any _0x6641A864(Any p0, Any p1, Any p2) { return invoke<Any>(0x6641A864, p0, p1, p2); } // 0x6641A864
	nativeDecl Any _0x818534AC(Any p0, Any p1, Any p2) { return invoke<Any>(0x818534AC, p0, p1, p2); } // 0x818534AC
	nativeDecl int GET_NUM_DLC_VEHICLES() { return invoke<int>(0x8EAF9CF6); } // 0x8EAF9CF6
	nativeDecl Any GET_DLC_VEHICLE_MODEL(Any p0) { return invoke<Any>(0xA2201E09, p0); } // 0xA2201E09
	nativeDecl Any GET_DLC_VEHICLE_DATA(Any p0, Any p1) { return invoke<Any>(0xCF428FA4, p0, p1); } // 0xCF428FA4
	nativeDecl Any GET_DLC_VEHICLE_FLAGS(Any p0) { return invoke<Any>(0xAB12738C, p0); } // 0xAB12738C
	nativeDecl Any _0x2B757E6C() { return invoke<Any>(0x2B757E6C); } // 0x2B757E6C
	nativeDecl Any GET_DLC_WEAPON_DATA(Any p0, Any p1) { return invoke<Any>(0xD88EC8EA, p0, p1); } // 0xD88EC8EA
	nativeDecl Any _0x476B23A9(Any p0) { return invoke<Any>(0x476B23A9, p0); } // 0x476B23A9
	nativeDecl Any GET_DLC_WEAPON_COMPONENT_DATA(Any p0, Any p1, Any p2) { return invoke<Any>(0x4B83FCAF, p0, p1, p2); } // 0x4B83FCAF
	nativeDecl Any _0x06396058(Any p0) { return invoke<Any>(0x06396058, p0); } // 0x06396058
	nativeDecl Any _0x35BCA844(Any p0) { return invoke<Any>(0x35BCA844, p0); } // 0x35BCA844
	nativeDecl Any _0x59352658(Any p0) { return invoke<Any>(0x59352658, p0); } // 0x59352658
}

namespace DLC
{
	nativeDecl BOOL IS_DLC_PRESENT(Hash DlcHash) { return invoke<BOOL>(0x1F321943, DlcHash); } // 0x1F321943
	nativeDecl BOOL DLC_CHECK_CLOUD_DATA_CORRECT() { return invoke<Any>(0x881B1FDB); } // 0x881B1FDB
	nativeDecl int GET_EXTRACONTENT_CLOUD_RESULT() { return invoke<int>(0xC2169164); } // 0xC2169164
	nativeDecl BOOL DLC_CHECK_COMPAT_PACK_CONFIGURATION() { return invoke<BOOL>(0xF79A97F5); } // 0xF79A97F5
	nativeDecl BOOL GET_EVER_HAD_BAD_PACK_ORDER() { return invoke<BOOL>(0xF69B729C); } // 0xF69B729C
	nativeDecl BOOL GET_IS_LOADING_SCREEN_ACTIVE() { return invoke<BOOL>(0x517B601B); } // 0x517B601B
	nativeDecl BOOL HAS_CLOUD_REQUESTS_FINISHED(BOOL* p0, int unused) { return invoke<BOOL>(0x6087C10C, p0, unused); } // 0x6087C10C
}

namespace SYSTEM
{
	nativeDecl void WAIT(int ms) { invoke<Void>(0x7715C03B, ms); } // 0x7715C03B
	nativeDecl int START_NEW_SCRIPT(const char* scriptName, int stackSize) { return invoke<int>(0x3F166D0E, scriptName, stackSize); } // 0x3F166D0E
	nativeDecl int START_NEW_SCRIPT_WITH_ARGS(const char* scriptName, Any* args, int argCount, int stackSize) { return invoke<int>(0x4A2100E4, scriptName, args, argCount, stackSize); } // 0x4A2100E4
	nativeDecl Any START_NEW_SCRIPT_WITH_NAME_HASH(Hash scriptHash, int stackSize) { return invoke<Any>(0x8D15BE5D, scriptHash, stackSize); } // 0x8D15BE5D
	nativeDecl Any START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(Hash scriptHash, Any* args, int argCount, int stackSize) { return invoke<Any>(0xE38A3AD4, scriptHash, args, argCount, stackSize); } // 0xE38A3AD4
	nativeDecl int TIMERA() { return invoke<int>(0x45C8C188); } // 0x45C8C188
	nativeDecl int TIMERB() { return invoke<int>(0x330A9C0C); } // 0x330A9C0C
	nativeDecl void SETTIMERA(int timerA) { invoke<Void>(0x35785333, timerA); } // 0x35785333
	nativeDecl void SETTIMERB(int timerB) { invoke<Void>(0x27C1B7C6, timerB); } // 0x27C1B7C6
	nativeDecl float TIMESTEP() { return invoke<float>(0x50597EE2); } // 0x50597EE2
	nativeDecl float SIN(float p0) { return invoke<float>(0xBF987F58, p0); } // 0xBF987F58
	nativeDecl float COS(float p0) { return invoke<float>(0x00238FE9, p0); } // 0x00238FE9
	nativeDecl float SQRT(float p0) { return invoke<float>(0x145C7701, p0); } // 0x145C7701
	nativeDecl float POW(float base, float exponent) { return invoke<float>(0x85D134F8, base, exponent); } // 0x85D134F8
	nativeDecl float VMAG(float p0, float p1, float p2) { return invoke<float>(0x1FCF1ECD, p0, p1, p2); } // 0x1FCF1ECD
	nativeDecl float VMAG2(float p0, float p1, float p2) { return invoke<float>(0xE796E629, p0, p1, p2); } // 0xE796E629
	nativeDecl float VDIST(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<float>(0x3C08ECB7, x1, y1, z1, x2, y2, z2); } // 0x3C08ECB7
	nativeDecl float VDIST2(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<float>(0xC85DEF1F, x1, y1, z1, x2, y2, z2); } // 0xC85DEF1F
	nativeDecl int SHIFT_LEFT(int value, int bitShift) { return invoke<int>(0x314CC6CD, value, bitShift); } // 0x314CC6CD
	nativeDecl int SHIFT_RIGHT(int value, int bitShift) { return invoke<int>(0x352633CA, value, bitShift); } // 0x352633CA
	nativeDecl int FLOOR(float value) { return invoke<int>(0x32E9BE04, value); } // 0x32E9BE04
	nativeDecl int CEIL(float value) { return invoke<int>(0xD536A1DF, value); } // 0xD536A1DF
	nativeDecl int ROUND(float value) { return invoke<int>(0x323B0E24, value); } // 0x323B0E24
	nativeDecl float TO_FLOAT(int value) { return invoke<float>(0x67116627, value); } // 0x67116627
}

namespace DECORATOR
{
	nativeDecl BOOL DECOR_SET_TIME(Entity entity, const char* propertyName, int timestamp) { return invoke<BOOL>(0xBBAEEF94, entity, propertyName, timestamp); } // 0xBBAEEF94
	nativeDecl BOOL DECOR_SET_BOOL(Entity entity, const char* propertyName, BOOL value) { return invoke<BOOL>(0x8E101F5C, entity, propertyName, value); } // 0x8E101F5C
	nativeDecl BOOL DECOR_SET_INT(Entity entity, const char* propertyName, int value) { return invoke<BOOL>(0xDB718B21, entity, propertyName, value); } // 0xDB718B21
	nativeDecl BOOL DECOR_GET_BOOL(Entity entity, const cha* propertyName) { return invoke<BOOL>(0xDBCE51E0, entity, propertyName); } // 0xDBCE51E0
	nativeDecl int DECOR_GET_INT(Entity entity, const char* propertyName) { return invoke<int>(0xDDDE59B5, entity, propertyName); } // 0xDDDE59B5
	nativeDecl BOOL DECOR_EXIST_ON(Entity entity, const char* propertyName) { return invoke<BOOL>(0x74EF9C40, entity, propertyName); } // 0x74EF9C40
	nativeDecl BOOL DECOR_REMOVE(Entity entity, const char* propertyName) { return invoke<BOOL>(0xE0E2640B, entity, propertyName); } // 0xE0E2640B
	nativeDecl void DECOR_REGISTER(const char* propertyName, int type) { invoke<Void>(0x68BD42A9, propertyName, type); } // 0x68BD42A9
	nativeDecl BOOL DECOR_IS_REGISTERED_AS_TYPE(const char* propertyName, int type) { return invoke<BOOL>(0x7CF0971D, propertyName, type); } // 0x7CF0971D
	nativeDecl void DECOR_REGISTER_LOCK() { invoke<Void>(0x7F3F1C02); } // 0x7F3F1C02
}

namespace SOCIALCLUB
{
	nativeDecl int SC_INBOX_GET_TOTAL_NUM_MESSAGES() { return invoke<int>(0x6BE5DF29); } // 0x6BE5DF29
	nativeDecl Hash SC_INBOX_GET_MESSAGE_TYPE_AT_INDEX(int msgIndex) { return invoke<Hash>(0x5ECF955D, msgIndex); } // 0x5ECF955D
	nativeDecl BOOL SC_INBOX_GET_MESSAGE_IS_READ_AT_INDEX(int msgIndex) { return invoke<BOOL>(0xD1ED1D48, msgIndex); } // 0xD1ED1D48
	nativeDecl BOOL SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(int msgIndex) { return invoke<BOOL>(0x19EE0CCB, msgIndex); } // 0x19EE0CCB
	nativeDecl BOOL SC_INBOX_MESSAGE_GET_DATA_INT(Any p0, const char* context, int* out) { return invoke<BOOL>(0x88068C7C, p0, context, out); } // 0x88068C7C
	nativeDecl BOOL SC_INBOX_MESSAGE_GET_DATA_FLOAT(int p0, const char* context, float* out) { return invoke<BOOL>(0x6A67FC31, p0, context, out); } // 0x6A67FC31
	nativeDecl BOOL SC_INBOX_MESSAGE_GET_DATA_STRING(int p0, const char* context, char* out) { return invoke<BOOL>(0x15607620, p0, context, out); } // 0x15607620
	nativeDecl BOOL SC_INBOX_MESSAGE_DO_APPLY(Any p0) { return invoke<BOOL>(0xEBE420A4, p0); } // 0xEBE420A4
	nativeDecl const char* SC_INBOX_MESSAGE_GET_RAW_TYPE_AT_INDEX(int p0) { return invoke<const char*>(0x2C959AF9, p0); } // 0x2C959AF9
	nativeDecl void _0x0B9A3512(Any* data) { invoke<Void>(0x0B9A3512, data); } // 0x0B9A3512
	nativeDecl void SC_INBOX_SEND_UGCSTATUPDATE_TO_RECIP_LIST(Any p0) { invoke<Void>(0x75324674, p0); } // 0x75324674
	nativeDecl Any SC_INBOX_MESSAGE_GET_UGCDATA(Any p0, Any p1) { return invoke<Any>(0x88CA3BFC, p0, p1); } // 0x88CA3BFC
	nativeDecl Any SC_INBOX_SEND_BOUNTY_TO_RECIP_LIST(Any* data) { return invoke<Any>(0x628F489B, data); } // 0x628F489B
	nativeDecl BOOL SC_INBOX_GET_BOUNTY_DATA_AT_INDEX(int index, Any* outData) { return invoke<Any>(0xAB3346B5, index, outData); } // 0xAB3346B5
	nativeDecl void _0x095D5EBD(Any p0, Any p1) { invoke<Void>(0x095D5EBD, p0, p1); } // 0x095D5EBD
	nativeDecl BOOL _0xDB75CDD1() { return invoke<BOOL>(0xDB75CDD1); } // 0xDB75CDD1
	nativeDecl Any _0xC98160E1(Any p0, Any p1) { return invoke<Any>(0xC98160E1, p0, p1); } // 0xC98160E1
	nativeDecl void _0x2B240E0A(Any p0, Any p1) { invoke<Void>(0x2B240E0A, p0, p1); } // 0x2B240E0A
	nativeDecl void SC_EMAIL_MESSAGE_PUSH_GAMER_TO_RECIP_LIST(Any* gamerHandle) { invoke<Void>(0x9A703A2B, gamerHandle); } // 0x9A703A2B
	nativeDecl void SC_EMAIL_MESSAGE_CLEAR_RECIP_LIST() { invoke<Void>(0xD094F11A); } // 0xD094F11A
	nativeDecl void SC_EMAIL_SEND_EMAIL(const char* string) { invoke<Void>(0xAF3C081B, string); } // 0xAF3C081B
	nativeDecl void SC_CACHE_NEW_ROCKSTAR_MSGS(BOOL toggle) { invoke<Void>(0x2FB9F53C, toggle); } // 0x2FB9F53C
	nativeDecl BOOL SC_HAS_NEW_ROCKSTAR_MSG() { return invoke<BOOL>(0x6C5738AB); } // 0x6C5738AB
	nativeDecl BOOL SC_GET_NEW_ROCKSTAR_MSG() { return invoke<BOOL>(0x468668F0); } // 0x468668F0
	nativeDecl BOOL SC_PRESENCE_ATTR_SET_INT(Hash attrHash, int value) { return invoke<BOOL>(0x90C74343, attrHash, value); } // 0x90C74343
	nativeDecl BOOL SC_PRESENCE_ATTR_SET_STRING(Hash attrHash, const char* value) { return invoke<BOOL>(0x3ACE6D6B, attrHash, value); } // 0x3ACE6D6B
	nativeDecl BOOL SC_PRESENCE_SET_ACTIVITY_RATING(Any p0, float p1) { return invoke<BOOL>(0x579B4510, p0, p1); } // 0x579B4510
	nativeDecl BOOL SC_GAMERDATA_GET_BOOL(const char* name) { return invoke<BOOL>(0xDF45B2A7, name); } // 0xDF45B2A7
	nativeDecl BOOL SC_PROFANITY_CHECK_STRING(const char* string, int* token) { return invoke<BOOL>(0xDF084A6B, string, token); } // 0xDF084A6B
	nativeDecl BOOL SC_PROFANITY_GET_CHECK_IS_VALID(int token) { return invoke<BOOL>(0xFFED3676, token); } // 0xFFED3676
	nativeDecl BOOL SC_PROFANITY_GET_CHECK_IS_PENDING(int token) { return invoke<BOOL>(0xA796D7A7, token); } // 0xA796D7A7
	nativeDecl BOOL SC_PROFANITY_GET_STRING_PASSED(int token) { return invoke<Any>(0x09497F31, token); } // 0x09497F31
	nativeDecl int SC_PROFANITY_GET_STRING_STATUS(int token) { return invoke<int>(0x4D8A6521, token); } // 0x4D8A6521
	nativeDecl BOOL SC_LICENSEPLATE_CHECK_STRING(const char* p0, int* p1) { return invoke<BOOL>(0x7AA36406, p0, p1); } // 0x7AA36406
	nativeDecl BOOL SC_LICENSEPLATE_GET_CHECK_IS_VALID(Any p0) { return invoke<BOOL>(0xF379DCE4, p0); } // 0xF379DCE4
	nativeDecl BOOL SC_LICENSEPLATE_GET_CHECK_IS_PENDING(Any p0) { return invoke<BOOL>(0x65D84665, p0); } // 0x65D84665
	nativeDecl BOOL _0xD268255C(Any p0) { return invoke<BOOL>(0xD268255C, p0); } // 0xD268255C
	nativeDecl BOOL SC_COMMUNITY_EVENT_IS_ACTIVE() { return invoke<BOOL>(0xC96456BA); } // 0xC96456BA
	nativeDecl int SC_COMMUNITY_EVENT_GET_EVENT_ID_FOR_TYPE(const char* p0) { return invoke<int>(0x8E7AEEB7, p0); } // 0x8E7AEEB7
	nativeDecl Any _0xE778B2A7(Any p0, Any p1, Any p2) { return invoke<Any>(0xE778B2A7, p0, p1, p2); } // 0xE778B2A7
	nativeDecl Any _0xCE7D50A8(Any p0, Any p1, Any p2) { return invoke<Any>(0xCE7D50A8, p0, p1, p2); } // 0xCE7D50A8
	nativeDecl Any _0xD26CCA46(Any p0, Any p1) { return invoke<Any>(0xD26CCA46, p0, p1); } // 0xD26CCA46
	nativeDecl Any _0xA3EFE4A1(Any p0) { return invoke<Any>(0xA3EFE4A1, p0); } // 0xA3EFE4A1
	nativeDecl Any _0x24D84334(Any p0) { return invoke<Any>(0x24D84334, p0); } // 0x24D84334
	nativeDecl Any _0x8A023024(Any p0, Any p1) { return invoke<Any>(0x8A023024, p0, p1); } // 0x8A023024
	nativeDecl Any _0x1C65B038() { return invoke<Any>(0x1C65B038); } // 0x1C65B038
	nativeDecl Any _0x4D4C37B3() { return invoke<Any>(0x4D4C37B3); } // 0x4D4C37B3
	nativeDecl Any _0xAED95A6F(Any p0, Any p1) { return invoke<Any>(0xAED95A6F, p0, p1); } // 0xAED95A6F
	nativeDecl void _0x486867E6() { invoke<Void>(0x486867E6); } // 0x486867E6
}

namespace LOADINGSCREEN
{
	nativeDecl BOOL LOBBY_AUTO_MULTIPLAYER_MENU() { return invoke<BOOL>(0x106C8317); } // 0x106C8317
	nativeDecl BOOL LOBBY_AUTO_MULTIPLAYER_FREEMODE() { return invoke<BOOL>(0xD87F3A9E); } // 0xD87F3A9E
	nativeDecl void LOBBY_SET_AUTO_MULTIPLAYER(BOOL toggle) { invoke<Void>(0xC0B971EA, toggle); } // 0xC0B971EA
	nativeDecl BOOL LOBBY_AUTO_MULTIPLAYER_EVENT() { return invoke<BOOL>(0x94BCAC7C); } // 0x94BCAC7C
	nativeDecl void LOBBY_SET_AUTO_MULTIPLAYER_EVENT(BOOL toggle) { invoke<Void>(0x7D90EEE5, toggle); } // 0x7D90EEE5
	nativeDecl BOOL LOBBY_AUTO_MULTIPLAYER_RANDOM_JOB() { return invoke<BOOL>(0x734CFEDA); } // 0x734CFEDA
	nativeDecl void LOBBY_SET_AUTO_MP_RANDOM_JOB(BOOL toggle) { invoke<Void>(0x8C227332, toggle); } // 0x8C227332
}
