#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.GunFightGame {

class GunFightGameInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.GunFightGame", "GunFightGameInfo"));
	}

	template <typename T = uint32_t> T& m_LastGamePeriodType() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = bool> T& m_IsShowPerspectiveEffectNow() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = float> T& m_ShowPerspectiveEffectDelta() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoundEndReason() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncGameInfoProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GamePeriodChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowRoundStartPerspectiveInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopShowRoundStartPerspectiveInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = bool> T get_IsShowPvpLoadout() {
		return ((T (*)(GunFightGameInfo*))(Il2CppBase() + 0x402284C))(this);
	}
	template <typename T = bool> T get_IsShowPvpStreak() {
		return ((T (*)(GunFightGameInfo*))(Il2CppBase() + 0x4022854))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(GunFightGameInfo*, float))(Il2CppBase() + 0x402285C))(this, deltaTime);
	}
	template <typename T = uintptr_t> T get_PvpWeaponViewType() {
		return ((T (*)(GunFightGameInfo*))(Il2CppBase() + 0x402305C))(this);
	}
	template <typename T = bool> T get_BloodEffectWithoutRestoreHP() {
		return ((T (*)(GunFightGameInfo*))(Il2CppBase() + 0x4023064))(this);
	}
	template <typename T = Il2CppString*> T GetRoundEndReason() {
		return ((T (*)(GunFightGameInfo*))(Il2CppBase() + 0x402306C))(this);
	}
	template <typename T = void> T SyncGameInfoProperty(uint32_t propertyID, uint32_t value, uintptr_t varType) {
		return ((T (*)(GunFightGameInfo*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x4023248))(this, propertyID, value, varType);
	}
	template <typename T = void> T GamePeriodChanged(uintptr_t periodType) {
		return ((T (*)(GunFightGameInfo*, uintptr_t))(Il2CppBase() + 0x40233F0))(this, periodType);
	}
	template <typename T = void> T ShowRoundStartPerspectiveInfo(float duration) {
		return ((T (*)(GunFightGameInfo*, float))(Il2CppBase() + 0x4022A10))(this, duration);
	}
	template <typename T = void> T StopShowRoundStartPerspectiveInfo() {
		return ((T (*)(GunFightGameInfo*))(Il2CppBase() + 0x4022DF0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(GunFightGameInfo*, float))(Il2CppBase() + 0x40238DC))(this, P0);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetRoundEndReason() {
		return ((T (*)(GunFightGameInfo*))(Il2CppBase() + 0x40238E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SyncGameInfoProperty(uint32_t P0, uint32_t P1, uintptr_t P2) {
		return ((T (*)(GunFightGameInfo*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x40238EC))(this, P0, P1, P2);
	}

};

}
