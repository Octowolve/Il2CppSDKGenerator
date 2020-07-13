#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.INFGame {

class INFGameInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.INFGame", "INFGameInfo"));
	}

	template <typename T = int32_t> T& humanCount() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = int32_t> T& infectedCount() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = bool> T& m_LastHumanIsGoliath() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uint32_t> T& firstInfectMutateCountDown() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInfectGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoundEndReason() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncPlayerInfoProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncGameInfoProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCampPlayerCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = int32_t> T get_humanCount() {
		return ((T (*)(INFGameInfo*))(Il2CppBase() + 0x403A6B4))(this);
	}
	template <typename T = void> T set_humanCount(int32_t value) {
		return ((T (*)(INFGameInfo*, int32_t))(Il2CppBase() + 0x403FEDC))(this, value);
	}
	template <typename T = int32_t> T get_infectedCount() {
		return ((T (*)(INFGameInfo*))(Il2CppBase() + 0x403A6BC))(this);
	}
	template <typename T = void> T set_infectedCount(int32_t value) {
		return ((T (*)(INFGameInfo*, int32_t))(Il2CppBase() + 0x403FEE4))(this, value);
	}
	template <typename T = bool> T IsInfectGame() {
		return ((T (*)(INFGameInfo*))(Il2CppBase() + 0x403FEEC))(this);
	}
	template <typename T = bool> T get_LastHumanIsGoliath() {
		return ((T (*)(INFGameInfo*))(Il2CppBase() + 0x403B3BC))(this);
	}
	template <typename T = uintptr_t> T get_PvpWeaponViewType() {
		return ((T (*)(INFGameInfo*))(Il2CppBase() + 0x403FF8C))(this);
	}
	template <typename T = bool> T get_IsShowPvpStreak() {
		return ((T (*)(INFGameInfo*))(Il2CppBase() + 0x403FF94))(this);
	}
	template <typename T = bool> T get_IsShowPvpLoadout() {
		return ((T (*)(INFGameInfo*))(Il2CppBase() + 0x403FF9C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(INFGameInfo*))(Il2CppBase() + 0x403FFA4))(this);
	}
	template <typename T = bool> T get_lastSurvivor() {
		return ((T (*)(INFGameInfo*))(Il2CppBase() + 0x4032384))(this);
	}
	template <typename T = bool> T get_CanGrenadeReload() {
		return ((T (*)(INFGameInfo*))(Il2CppBase() + 0x404004C))(this);
	}
	template <typename T = Il2CppString*> T GetRoundEndReason() {
		return ((T (*)(INFGameInfo*))(Il2CppBase() + 0x40401C8))(this);
	}
	template <typename T = void> T SyncPlayerInfoProperty(uintptr_t playerInfo, uint32_t propertyID, uint32_t value, uintptr_t varType) {
		return ((T (*)(INFGameInfo*, uintptr_t, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x40402EC))(this, playerInfo, propertyID, value, varType);
	}
	template <typename T = void> T SyncGameInfoProperty(uint32_t propertyID, uint32_t value, uintptr_t varType) {
		return ((T (*)(INFGameInfo*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x4040668))(this, propertyID, value, varType);
	}
	template <typename T = void> T UpdateCampPlayerCount() {
		return ((T (*)(INFGameInfo*))(Il2CppBase() + 0x403B97C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsInfectGame() {
		return ((T (*)(INFGameInfo*))(Il2CppBase() + 0x40407A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(INFGameInfo*))(Il2CppBase() + 0x40407AC))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetRoundEndReason() {
		return ((T (*)(INFGameInfo*))(Il2CppBase() + 0x40407B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SyncPlayerInfoProperty(uintptr_t P0, uint32_t P1, uint32_t P2, uintptr_t P3) {
		return ((T (*)(INFGameInfo*, uintptr_t, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x40407BC))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T xLuaBaseProxy_SyncGameInfoProperty(uint32_t P0, uint32_t P1, uintptr_t P2) {
		return ((T (*)(INFGameInfo*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x40407E0))(this, P0, P1, P2);
	}

};

}
