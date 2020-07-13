#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.TacticalCombat {

class TacticalCombatPlayerPawn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.TacticalCombat", "TacticalCombatPlayerPawn"));
	}

	template <typename T = bool> T& m_IsTraitorInPlacingBombArea() {
		return *(T*)((uintptr_t)this + 0xBE5);
	}
	template <typename T = uintptr_t> T& m_TCGameInfo() {
		return *(T*)((uintptr_t)this + 0xBE8);
	}
	template <typename T = unsigned char> T& m_WeaponSlotBeforeUsingItem() {
		return *(T*)((uintptr_t)this + 0xBEC);
	}
	template <typename T = int32_t> T& m_WeaponItemIDBeforeUsingItem() {
		return *(T*)((uintptr_t)this + 0xBF0);
	}
	template <typename T = Il2CppString*> static T& m_C4Pack_AudioEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& m_C4UnPack_AudioEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> T& m_LastTickUpdateCureTeammate() {
		return *(T*)((uintptr_t)this + 0xBF4);
	}
	template <typename T = float> T& lastTickDyingTime() {
		return *(T*)((uintptr_t)this + 0xBF8);
	}
	template <typename T = Il2CppList<uint32_t>*> T& CanCureTeammatesList() {
		return *(T*)((uintptr_t)this + 0xBFC);
	}
	template <typename T = uint32_t> T& m_CurrentAimedCureTeammate() {
		return *(T*)((uintptr_t)this + 0xC00);
	}
	template <typename T = bool> T& IsSavingTeammate() {
		return *(T*)((uintptr_t)this + 0xC04);
	}
	template <typename T = uintptr_t> T& saveTargetPawn() {
		return *(T*)((uintptr_t)this + 0xC08);
	}
	template <typename T = uint32_t> T& m_SaveTargetPlayerId() {
		return *(T*)((uintptr_t)this + 0xC0C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelUseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSpectatingC4Defuser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldDelayToEndOfFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayUseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddAllInventory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GiveCarrierC4Bomb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Die() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_C4CarrierLocalPlayerSwitchToPrevWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_C4CarrierThreePersonPawnSwitchToPrevWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPawnCurrentWeaponAttachmentC4Bomb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpectatingEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEndStopIndividuation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStartPosForFiringTrace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickDying() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckDyingTeammates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindACureTeammate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CurrentWillCureTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckDyingTeammate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanCureMyTeammates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanNotCureTeammates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanSaveTeammate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSaveTeammateReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTimerSaveTeammateResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSaveTeammateResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginSave() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelSave() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndSave() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}

	template <typename T = bool> T get_IsTraitorInPlacingBombArea() {
		return ((T (*)(TacticalCombatPlayerPawn*))(Il2CppBase() + 0x3D8163C))(this);
	}
	template <typename T = void> T set_IsTraitorInPlacingBombArea(bool value) {
		return ((T (*)(TacticalCombatPlayerPawn*, bool))(Il2CppBase() + 0x3D81644))(this, value);
	}
	template <typename T = bool> T get_CanTraitorPlacingBomb() {
		return ((T (*)(TacticalCombatPlayerPawn*))(Il2CppBase() + 0x3D8164C))(this);
	}
	template <typename T = void> T InitPawn(uintptr_t info) {
		return ((T (*)(TacticalCombatPlayerPawn*, uintptr_t))(Il2CppBase() + 0x3D816CC))(this, info);
	}
	template <typename T = bool> T GetItem(uint64_t InItemID, bool PersonalItem) {
		return ((T (*)(TacticalCombatPlayerPawn*, uint64_t, bool))(Il2CppBase() + 0x3D8190C))(this, InItemID, PersonalItem);
	}
	template <typename T = void> T UseItem(uint64_t inItemID, int32_t useItmeType, float extendTime) {
		return ((T (*)(TacticalCombatPlayerPawn*, uint64_t, int32_t, float))(Il2CppBase() + 0x3D81A00))(this, inItemID, useItmeType, extendTime);
	}
	template <typename T = void> T CancelUseItem(uint64_t itemID) {
		return ((T (*)(TacticalCombatPlayerPawn*, uint64_t))(Il2CppBase() + 0x3D81E10))(this, itemID);
	}
	template <typename T = bool> T IsSpectatingC4Defuser() {
		return ((T (*)(TacticalCombatPlayerPawn*))(Il2CppBase() + 0x3D82000))(this);
	}
	template <typename T = bool> T ShouldDelayToEndOfFrame() {
		return ((T (*)(TacticalCombatPlayerPawn*))(Il2CppBase() + 0x3D820F0))(this);
	}
	template <typename T = uintptr_t> T DelayUseItem() {
		return ((T (*)(TacticalCombatPlayerPawn*))(Il2CppBase() + 0x3D81D00))(this);
	}
	template <typename T = void> T AddAllInventory() {
		return ((T (*)(TacticalCombatPlayerPawn*))(Il2CppBase() + 0x3D821C8))(this);
	}
	template <typename T = void> T GiveCarrierC4Bomb() {
		return ((T (*)(TacticalCombatPlayerPawn*))(Il2CppBase() + 0x3D82398))(this);
	}
	template <typename T = void> T Die(bool isHeadShot, uintptr_t damageType) {
		return ((T (*)(TacticalCombatPlayerPawn*, bool, uintptr_t))(Il2CppBase() + 0x3D826BC))(this, isHeadShot, damageType);
	}
	template <typename T = void> T C4CarrierLocalPlayerSwitchToPrevWeapon() {
		return ((T (*)(TacticalCombatPlayerPawn*))(Il2CppBase() + 0x3D82954))(this);
	}
	template <typename T = void> T C4CarrierThreePersonPawnSwitchToPrevWeapon() {
		return ((T (*)(TacticalCombatPlayerPawn*))(Il2CppBase() + 0x3D82A94))(this);
	}
	template <typename T = bool> T IsPawnCurrentWeaponAttachmentC4Bomb() {
		return ((T (*)(TacticalCombatPlayerPawn*))(Il2CppBase() + 0x3D82BE8))(this);
	}
	template <typename T = void> T OnSpectatingEnd() {
		return ((T (*)(TacticalCombatPlayerPawn*))(Il2CppBase() + 0x3D82E2C))(this);
	}
	template <typename T = void> T OnRoundEndStopIndividuation() {
		return ((T (*)(TacticalCombatPlayerPawn*))(Il2CppBase() + 0x3D82F10))(this);
	}
	template <typename T = Il2CppVector3> T GetStartPosForFiringTrace() {
		return ((T (*)(TacticalCombatPlayerPawn*))(Il2CppBase() + 0x3D83010))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(TacticalCombatPlayerPawn*, float))(Il2CppBase() + 0x3D830FC))(this, deltaTime);
	}
	template <typename T = void> T TickDying() {
		return ((T (*)(TacticalCombatPlayerPawn*))(Il2CppBase() + 0x3D831E8))(this);
	}
	template <typename T = void> T CheckDyingTeammates() {
		return ((T (*)(TacticalCombatPlayerPawn*))(Il2CppBase() + 0x3D83464))(this);
	}
	template <typename T = bool> T FindACureTeammate() {
		return ((T (*)(TacticalCombatPlayerPawn*))(Il2CppBase() + 0x3D83FDC))(this);
	}
	template <typename T = uint32_t> T CurrentWillCureTarget() {
		return ((T (*)(TacticalCombatPlayerPawn*))(Il2CppBase() + 0x3D84694))(this);
	}
	template <typename T = void> T CheckDyingTeammate() {
		return ((T (*)(TacticalCombatPlayerPawn*))(Il2CppBase() + 0x3D84B10))(this);
	}
	template <typename T = void> T CanCureMyTeammates(uint32_t playerid) {
		return ((T (*)(TacticalCombatPlayerPawn*, uint32_t))(Il2CppBase() + 0x3D83E68))(this, playerid);
	}
	template <typename T = void> T CanNotCureTeammates(uint32_t playerid) {
		return ((T (*)(TacticalCombatPlayerPawn*, uint32_t))(Il2CppBase() + 0x3D83C68))(this, playerid);
	}
	template <typename T = bool> T CanSaveTeammate() {
		return ((T (*)(TacticalCombatPlayerPawn*))(Il2CppBase() + 0x3D850A0))(this);
	}
	template <typename T = void> T OnSaveTeammateReady() {
		return ((T (*)(TacticalCombatPlayerPawn*))(Il2CppBase() + 0x3D8527C))(this);
	}
	template <typename T = void> T OnTimerSaveTeammateResult() {
		return ((T (*)(TacticalCombatPlayerPawn*))(Il2CppBase() + 0x3D85408))(this);
	}
	template <typename T = void> T OnSaveTeammateResult() {
		return ((T (*)(TacticalCombatPlayerPawn*))(Il2CppBase() + 0x3D85510))(this);
	}
	template <typename T = bool> T get_IsSavingTeammate() {
		return ((T (*)(TacticalCombatPlayerPawn*))(Il2CppBase() + 0x3D84764))(this);
	}
	template <typename T = void> T set_IsSavingTeammate(bool value) {
		return ((T (*)(TacticalCombatPlayerPawn*, bool))(Il2CppBase() + 0x3D8566C))(this, value);
	}
	template <typename T = void> T BeginSave(uint32_t targetID) {
		return ((T (*)(TacticalCombatPlayerPawn*, uint32_t))(Il2CppBase() + 0x3D85674))(this, targetID);
	}
	template <typename T = void> T CancelSave() {
		return ((T (*)(TacticalCombatPlayerPawn*))(Il2CppBase() + 0x3D85C50))(this);
	}
	template <typename T = void> T EndSave() {
		return ((T (*)(TacticalCombatPlayerPawn*))(Il2CppBase() + 0x3D8476C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitPawn(uintptr_t P0) {
		return ((T (*)(TacticalCombatPlayerPawn*, uintptr_t))(Il2CppBase() + 0x3D85F60))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_GetItem(uint64_t P0, bool P1) {
		return ((T (*)(TacticalCombatPlayerPawn*, uint64_t, bool))(Il2CppBase() + 0x3D85F64))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_UseItem(uint64_t P0, int32_t P1, float P2) {
		return ((T (*)(TacticalCombatPlayerPawn*, uint64_t, int32_t, float))(Il2CppBase() + 0x3D85F8C))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_CancelUseItem(uint64_t P0) {
		return ((T (*)(TacticalCombatPlayerPawn*, uint64_t))(Il2CppBase() + 0x3D85FBC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_AddAllInventory() {
		return ((T (*)(TacticalCombatPlayerPawn*))(Il2CppBase() + 0x3D85FDC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Die(bool P0, uintptr_t P1) {
		return ((T (*)(TacticalCombatPlayerPawn*, bool, uintptr_t))(Il2CppBase() + 0x3D85FE4))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnSpectatingEnd() {
		return ((T (*)(TacticalCombatPlayerPawn*))(Il2CppBase() + 0x3D85FE8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(TacticalCombatPlayerPawn*, float))(Il2CppBase() + 0x3D85FF0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_CancelSave() {
		return ((T (*)(TacticalCombatPlayerPawn*))(Il2CppBase() + 0x3D85FF8))(this);
	}

};

}
