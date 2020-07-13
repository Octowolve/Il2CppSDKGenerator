#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.TacticalCombat {

class TacticalCombatGameInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.TacticalCombat", "TacticalCombatGameInfo"));
	}

	template <typename T = uint32_t> T& m_C4BombCarrierID() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& m_AttackerCamp() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uint32_t> T& m_LastGamePeriodType() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uint32_t> T& m_ExtraTime() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uint32_t> T& m_MaxExtraTime() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = Il2CppVector3> T& m_BombDropPos() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_PerspectiveInfoList() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoundEndReason() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRadarCompAssetIDList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncGameInfoProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GamePeriodChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateExtraTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBombDropped() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBombCarrier() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBombCarrier() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBombPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowRoundStartPerspectiveInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddPerspectiveInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemovePerspectiveInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = uint32_t> T get_C4BombCarrierID() {
		return ((T (*)(TacticalCombatGameInfo*))(Il2CppBase() + 0x34CD370))(this);
	}
	template <typename T = uintptr_t> T get_C4BombCarrierInfo() {
		return ((T (*)(TacticalCombatGameInfo*))(Il2CppBase() + 0x34CED90))(this);
	}
	template <typename T = bool> T get_IsLocalPlayerC4BombCarrier() {
		return ((T (*)(TacticalCombatGameInfo*))(Il2CppBase() + 0x34D6D0C))(this);
	}
	template <typename T = uintptr_t> T get_AttackerCamp() {
		return ((T (*)(TacticalCombatGameInfo*))(Il2CppBase() + 0x34CEF14))(this);
	}
	template <typename T = uint32_t> T get_ExtraTime() {
		return ((T (*)(TacticalCombatGameInfo*))(Il2CppBase() + 0x34CBCCC))(this);
	}
	template <typename T = uint32_t> T get_MaxExtraTime() {
		return ((T (*)(TacticalCombatGameInfo*))(Il2CppBase() + 0x34D6DC4))(this);
	}
	template <typename T = bool> T get_IsShowPvpLoadout() {
		return ((T (*)(TacticalCombatGameInfo*))(Il2CppBase() + 0x34D6DCC))(this);
	}
	template <typename T = bool> T get_InfiniteCarriedAmmo() {
		return ((T (*)(TacticalCombatGameInfo*))(Il2CppBase() + 0x34D6DD4))(this);
	}
	template <typename T = bool> T get_IsShowPvpStreak() {
		return ((T (*)(TacticalCombatGameInfo*))(Il2CppBase() + 0x34D6DDC))(this);
	}
	template <typename T = uintptr_t> T get_PvpWeaponViewType() {
		return ((T (*)(TacticalCombatGameInfo*))(Il2CppBase() + 0x34D6DE4))(this);
	}
	template <typename T = Il2CppVector3> T get_BombDropPos() {
		return ((T (*)(TacticalCombatGameInfo*))(Il2CppBase() + 0x34D6DEC))(this);
	}
	template <typename T = bool> T get_BloodEffectWithoutRestoreHP() {
		return ((T (*)(TacticalCombatGameInfo*))(Il2CppBase() + 0x34D6E00))(this);
	}
	template <typename T = Il2CppString*> T GetRoundEndReason() {
		return ((T (*)(TacticalCombatGameInfo*))(Il2CppBase() + 0x34D6E08))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetRadarCompAssetIDList() {
		return ((T (*)(TacticalCombatGameInfo*))(Il2CppBase() + 0x34D6F54))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(TacticalCombatGameInfo*, float))(Il2CppBase() + 0x34D7088))(this, deltaTime);
	}
	template <typename T = void> T OnRoundStart(int32_t inTimeLimit, int32_t inLeftTime) {
		return ((T (*)(TacticalCombatGameInfo*, int32_t, int32_t))(Il2CppBase() + 0x34D713C))(this, inTimeLimit, inLeftTime);
	}
	template <typename T = void> T OnRoundEnd(uintptr_t inRoundResult, uint64_t inWarGodPlayerID) {
		return ((T (*)(TacticalCombatGameInfo*, uintptr_t, uint64_t))(Il2CppBase() + 0x34D7650))(this, inRoundResult, inWarGodPlayerID);
	}
	template <typename T = void> T SyncGameInfoProperty(uint32_t propertyID, uint32_t value, uintptr_t varType) {
		return ((T (*)(TacticalCombatGameInfo*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x34D7730))(this, propertyID, value, varType);
	}
	template <typename T = void> T GamePeriodChanged(uint32_t periodType) {
		return ((T (*)(TacticalCombatGameInfo*, uint32_t))(Il2CppBase() + 0x34D788C))(this, periodType);
	}
	template <typename T = void> T UpdateExtraTime(uint32_t leftTime) {
		return ((T (*)(TacticalCombatGameInfo*, uint32_t))(Il2CppBase() + 0x34D793C))(this, leftTime);
	}
	template <typename T = void> T SetBombDropped(Il2CppVector3 dropPos) {
		return ((T (*)(TacticalCombatGameInfo*, Il2CppVector3))(Il2CppBase() + 0x34D568C))(this, dropPos);
	}
	template <typename T = void> T SetBombCarrier(uint32_t playerID) {
		return ((T (*)(TacticalCombatGameInfo*, uint32_t))(Il2CppBase() + 0x34D7A3C))(this, playerID);
	}
	template <typename T = void> T RefreshBombCarrier() {
		return ((T (*)(TacticalCombatGameInfo*))(Il2CppBase() + 0x34D7E80))(this);
	}
	template <typename T = Il2CppVector3> T GetBombPos() {
		return ((T (*)(TacticalCombatGameInfo*))(Il2CppBase() + 0x34D8088))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_PerspectiveInfoList() {
		return ((T (*)(TacticalCombatGameInfo*))(Il2CppBase() + 0x34D827C))(this);
	}
	template <typename T = void> T ShowRoundStartPerspectiveInfo() {
		return ((T (*)(TacticalCombatGameInfo*))(Il2CppBase() + 0x34D721C))(this);
	}
	template <typename T = void> T AddPerspectiveInfo(uint32_t ownerId, uint32_t exposedPawnId) {
		return ((T (*)(TacticalCombatGameInfo*, uint32_t, uint32_t))(Il2CppBase() + 0x34D4C78))(this, ownerId, exposedPawnId);
	}
	template <typename T = void> T RemovePerspectiveInfo(int32_t index) {
		return ((T (*)(TacticalCombatGameInfo*, int32_t))(Il2CppBase() + 0x34D828C))(this, index);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetRoundEndReason() {
		return ((T (*)(TacticalCombatGameInfo*))(Il2CppBase() + 0x34D836C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T xLuaBaseProxy_GetRadarCompAssetIDList() {
		return ((T (*)(TacticalCombatGameInfo*))(Il2CppBase() + 0x34D8374))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(TacticalCombatGameInfo*, float))(Il2CppBase() + 0x34D837C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundStart(int32_t P0, int32_t P1) {
		return ((T (*)(TacticalCombatGameInfo*, int32_t, int32_t))(Il2CppBase() + 0x34D8384))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnd(uintptr_t P0, uint64_t P1) {
		return ((T (*)(TacticalCombatGameInfo*, uintptr_t, uint64_t))(Il2CppBase() + 0x34D838C))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_SyncGameInfoProperty(uint32_t P0, uint32_t P1, uintptr_t P2) {
		return ((T (*)(TacticalCombatGameInfo*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x34D83AC))(this, P0, P1, P2);
	}

};

}
