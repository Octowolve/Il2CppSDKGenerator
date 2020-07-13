#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.ChamberGame {

class ChamberGameInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.ChamberGame", "ChamberGameInfo"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncPlayerInfoProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSuppressScoreChangeSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> T get_IsShowPvpLoadout() {
		return ((T (*)(ChamberGameInfo*))(Il2CppBase() + 0x2B22F70))(this);
	}
	template <typename T = bool> T get_IsUseMlkUAV() {
		return ((T (*)(ChamberGameInfo*))(Il2CppBase() + 0x2B22F78))(this);
	}
	template <typename T = bool> T get_IsShowPvpStreak() {
		return ((T (*)(ChamberGameInfo*))(Il2CppBase() + 0x2B22F80))(this);
	}
	template <typename T = uintptr_t> T get_PvpWeaponViewType() {
		return ((T (*)(ChamberGameInfo*))(Il2CppBase() + 0x2B22F88))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(ChamberGameInfo*, float))(Il2CppBase() + 0x2B22F90))(this, deltaTime);
	}
	template <typename T = void> T SyncPlayerInfoProperty(uintptr_t playerInfo, uint32_t propertyID, uint32_t value, uintptr_t varType) {
		return ((T (*)(ChamberGameInfo*, uintptr_t, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x2B23360))(this, playerInfo, propertyID, value, varType);
	}
	template <typename T = bool> T IsSuppressScoreChangeSound() {
		return ((T (*)(ChamberGameInfo*))(Il2CppBase() + 0x2B2365C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(ChamberGameInfo*, float))(Il2CppBase() + 0x2B236FC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SyncPlayerInfoProperty(uintptr_t P0, uint32_t P1, uint32_t P2, uintptr_t P3) {
		return ((T (*)(ChamberGameInfo*, uintptr_t, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x2B23704))(this, P0, P1, P2, P3);
	}
	template <typename T = bool> T xLuaBaseProxy_IsSuppressScoreChangeSound() {
		return ((T (*)(ChamberGameInfo*))(Il2CppBase() + 0x2B23728))(this);
	}

};

}
