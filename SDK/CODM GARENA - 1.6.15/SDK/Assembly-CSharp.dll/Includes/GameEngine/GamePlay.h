#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class GamePlay
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "GamePlay"));
	}

	template <typename T = uintptr_t> static T& mLocalPawnStateChangeCmp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& s_bShowSmokeManTestEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateInPersistentScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckDelayTriggerCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearStateChangeCmp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCurState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLocalPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLocalOrViewTargetPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerNickName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCampInGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LockBRWeaponFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetLocKState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPawnSwtichState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLockPawnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLockPawnStateExcept() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LockAllPawnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LockProne_Jump_Crouch_Fire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLockState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename T = uintptr_t> static T get_Game() {
		return ((T (*)(void *))(Il2CppBase() + 0x36D06BC))(0);
	}
	template <typename T = uintptr_t> static T get_MatchGame() {
		return ((T (*)(void *))(Il2CppBase() + 0x36DF74C))(0);
	}
	template <typename T = uintptr_t> static T get_FsmMgr() {
		return ((T (*)(void *))(Il2CppBase() + 0x36DF83C))(0);
	}
	template <typename T = uintptr_t> static T get_MatineeDirector() {
		return ((T (*)(void *))(Il2CppBase() + 0x36DF8EC))(0);
	}
	template <typename T = uintptr_t> static T get_ModelOptimizer() {
		return ((T (*)(void *))(Il2CppBase() + 0x36DF99C))(0);
	}
	template <typename T = uintptr_t> static T get_DestructibleMgr() {
		return ((T (*)(void *))(Il2CppBase() + 0x36DFA94))(0);
	}
	template <typename T = uintptr_t> static T get_LuaActorMgr() {
		return ((T (*)(void *))(Il2CppBase() + 0x36DFB44))(0);
	}
	template <typename T = uintptr_t> static T get_WeaponSkinMgr() {
		return ((T (*)(void *))(Il2CppBase() + 0x36DFBF4))(0);
	}
	template <typename T = uintptr_t> static T get_WeaponSocketMgr() {
		return ((T (*)(void *))(Il2CppBase() + 0x36DFCEC))(0);
	}
	template <typename T = uintptr_t> static T get_BuffMgr() {
		return ((T (*)(void *))(Il2CppBase() + 0x36DFD9C))(0);
	}
	template <typename T = uintptr_t> static T get_AttackableColliderMap() {
		return ((T (*)(void *))(Il2CppBase() + 0x36DFE4C))(0);
	}
	template <typename T = uintptr_t> static T get_UnAttackableColliderMap() {
		return ((T (*)(void *))(Il2CppBase() + 0x36DFEFC))(0);
	}
	template <typename T = uintptr_t> static T get_SignManager() {
		return ((T (*)(void *))(Il2CppBase() + 0x36DFFAC))(0);
	}
	template <typename T = uintptr_t> static T get_BuildMgr() {
		return ((T (*)(void *))(Il2CppBase() + 0x36E00A0))(0);
	}
	template <typename T = uintptr_t> static T get_UIPreZMgr() {
		return ((T (*)(void *))(Il2CppBase() + 0x36E0194))(0);
	}
	template <typename T = uintptr_t> static T CreateInPersistentScene() {
		return ((T (*)(void *))(Il2CppBase() + 0x335081C))(0);
	}
	template <typename T = uintptr_t> static T get_GameInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x36D10C8))(0);
	}
	template <typename T = uintptr_t> static T get_CurGameMode() {
		return ((T (*)(void *))(Il2CppBase() + 0x36E0288))(0);
	}
	template <typename T = bool> static T get_IsInBRGame() {
		return ((T (*)(void *))(Il2CppBase() + 0x36E03DC))(0);
	}
	template <typename T = bool> static T get_IsStandalone() {
		return ((T (*)(void *))(Il2CppBase() + 0x36E0540))(0);
	}
	template <typename T = bool> static T get_IsInBRTrainingGame() {
		return ((T (*)(void *))(Il2CppBase() + 0x36E0698))(0);
	}
	template <typename T = uintptr_t> static T get_LocalPlayer() {
		return ((T (*)(void *))(Il2CppBase() + 0x36DBC30))(0);
	}
	template <typename T = uint32_t> static T get_LocalPlayerID() {
		return ((T (*)(void *))(Il2CppBase() + 0x36E07FC))(0);
	}
	template <typename T = uint32_t> static T get_LocalOriginalPlayerID() {
		return ((T (*)(void *))(Il2CppBase() + 0x36E08AC))(0);
	}
	template <typename T = uint32_t> static T get_LocalOrViewTargetPlayerID() {
		return ((T (*)(void *))(Il2CppBase() + 0x36E095C))(0);
	}
	template <typename T = uintptr_t> static T get_LocalPlayerInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x36D7C54))(0);
	}
	template <typename T = uintptr_t> static T get_LocalOrViewTargetPlayerInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x36D67CC))(0);
	}
	template <typename T = uintptr_t> static T get_LocalPC() {
		return ((T (*)(void *))(Il2CppBase() + 0x36C636C))(0);
	}
	template <typename T = uintptr_t> static T get_LocalPawn() {
		return ((T (*)(void *))(Il2CppBase() + 0x36D2244))(0);
	}
	template <typename T = uintptr_t> static T get_LocalBrPawn() {
		return ((T (*)(void *))(Il2CppBase() + 0x36E0A78))(0);
	}
	template <typename T = uintptr_t> static T get_LocalPawnStateChangeCmp() {
		return ((T (*)(void *))(Il2CppBase() + 0x36E0B68))(0);
	}
	template <typename T = void> static T CheckDelayTriggerCallBack() {
		return ((T (*)(void *))(Il2CppBase() + 0x36E0C18))(0);
	}
	template <typename T = void> static T ClearStateChangeCmp() {
		return ((T (*)(void *))(Il2CppBase() + 0x36E0D58))(0);
	}
	template <typename T = bool> static T CheckCurState(uintptr_t callBack, uintptr_t checkState) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x36E0E98))(0, callBack, checkState);
	}
	template <typename T = uintptr_t> static T get_SpectatingTarget() {
		return ((T (*)(void *))(Il2CppBase() + 0x36E0FF8))(0);
	}
	template <typename T = uintptr_t> static T get_LocalOrViewTargetPawn() {
		return ((T (*)(void *))(Il2CppBase() + 0x36D4DD0))(0);
	}
	template <typename T = uintptr_t> static T get_LocalOrViewTargetPawnEGR() {
		return ((T (*)(void *))(Il2CppBase() + 0x36E110C))(0);
	}
	template <typename T = uintptr_t> static T get_CurrentWeapon() {
		return ((T (*)(void *))(Il2CppBase() + 0x36CC940))(0);
	}
	template <typename T = uintptr_t> static T get_FirstWeapon() {
		return ((T (*)(void *))(Il2CppBase() + 0x36E12B0))(0);
	}
	template <typename T = uintptr_t> static T get_SecondWeapon() {
		return ((T (*)(void *))(Il2CppBase() + 0x36E13CC))(0);
	}
	template <typename T = uintptr_t> static T get_CurrentSubWeapon() {
		return ((T (*)(void *))(Il2CppBase() + 0x36E14E8))(0);
	}
	template <typename T = bool> static T IsLocalPlayer(uint32_t PlayerID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x36E1604))(0, PlayerID);
	}
	template <typename T = bool> static T IsLocalOrViewTargetPlayer(uint32_t PlayerID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x36E16FC))(0, PlayerID);
	}
	template <typename T = uintptr_t> static T GetPlayerInfo(uint32_t playerID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x36D9CCC))(0, playerID);
	}
	template <typename T = Il2CppString*> static T GetPlayerNickName(uint32_t inPlayerID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x36E184C))(0, inPlayerID);
	}
	template <typename T = uintptr_t> static T GetCampInGame(bool considerDeadReplay) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x36E19B8))(0, considerDeadReplay);
	}
	template <typename T = int32_t> static T get_MapID() {
		return ((T (*)(void *))(Il2CppBase() + 0x36DBC5C))(0);
	}
	template <typename T = uintptr_t> static T get_UIScene() {
		return ((T (*)(void *))(Il2CppBase() + 0x36E1BF0))(0);
	}
	template <typename T = bool> static T LockBRWeaponFire() {
		return ((T (*)(void *))(Il2CppBase() + 0x36E1CE8))(0);
	}
	template <typename T = uintptr_t> static T GetPawn(uint32_t Id) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x36E2014))(0, Id);
	}
	template <typename T = uintptr_t> static T get_PawnStateContorl() {
		return ((T (*)(void *))(Il2CppBase() + 0x36D2360))(0);
	}
	template <typename T = void> static T ResetState() {
		return ((T (*)(void *))(Il2CppBase() + 0x36DB3DC))(0);
	}
	template <typename T = void> static T ResetLocKState() {
		return ((T (*)(void *))(Il2CppBase() + 0x36E2168))(0);
	}
	template <typename T = void> static T SetPawnSwtichState(uintptr_t state, bool isActive) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x36E226C))(0, state, isActive);
	}
	template <typename T = void> static T SetLockPawnState(uintptr_t state, bool isLock) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x36E2428))(0, state, isLock);
	}
	template <typename T = void> static T SetLockPawnStateExcept(uintptr_t state, bool isLock) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x36E25E4))(0, state, isLock);
	}
	template <typename T = void> static T LockAllPawnState(bool isLock) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x36E27A0))(0, isLock);
	}
	template <typename T = void> static T LockProne_Jump_Crouch_Fire(bool isLock) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x36E2928))(0, isLock);
	}
	template <typename T = bool> static T IsLockState(uintptr_t state) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x36C432C))(0, state);
	}

};

}
