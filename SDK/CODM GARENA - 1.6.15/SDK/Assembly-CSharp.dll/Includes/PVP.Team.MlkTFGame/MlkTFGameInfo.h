#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.MlkTFGame {

class MlkTFGameInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.MlkTFGame", "MlkTFGameInfo"));
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& WeaponLevelMaxPlayerInfos_Regular() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& WeaponLevelMaxPlayerInfos_Rebel() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncPlayerInfoProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_bTeamMaxLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWeaponLevelMaxPlayers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoundEndReason() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = bool> T get_IsShowPvpLoadout() {
		return ((T (*)(MlkTFGameInfo*))(Il2CppBase() + 0x348BC90))(this);
	}
	template <typename T = bool> T get_InfiniteCarriedAmmo() {
		return ((T (*)(MlkTFGameInfo*))(Il2CppBase() + 0x348BC98))(this);
	}
	template <typename T = bool> T get_IsUseMlkUAV() {
		return ((T (*)(MlkTFGameInfo*))(Il2CppBase() + 0x348BCA0))(this);
	}
	template <typename T = bool> T get_IsShowPvpStreak() {
		return ((T (*)(MlkTFGameInfo*))(Il2CppBase() + 0x348BCA8))(this);
	}
	template <typename T = uintptr_t> T get_PvpWeaponViewType() {
		return ((T (*)(MlkTFGameInfo*))(Il2CppBase() + 0x348BCB0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_MlkTFEnemyIndicators() {
		return ((T (*)(MlkTFGameInfo*))(Il2CppBase() + 0x348BCB8))(this);
	}
	template <typename T = void> T SyncPlayerInfoProperty(uintptr_t playerInfo, uint32_t propertyID, uint32_t value, uintptr_t varType) {
		return ((T (*)(MlkTFGameInfo*, uintptr_t, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x348C588))(this, playerInfo, propertyID, value, varType);
	}
	template <typename T = bool> T bTeamMaxLevel(uintptr_t item) {
		return ((T (*)(MlkTFGameInfo*, uintptr_t))(Il2CppBase() + 0x348C6D4))(this, item);
	}
	template <typename T = void> T UpdateWeaponLevelMaxPlayers() {
		return ((T (*)(MlkTFGameInfo*))(Il2CppBase() + 0x348B6B0))(this);
	}
	template <typename T = Il2CppString*> T GetRoundEndReason() {
		return ((T (*)(MlkTFGameInfo*))(Il2CppBase() + 0x348C9B0))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(MlkTFGameInfo*, float))(Il2CppBase() + 0x348CA90))(this, deltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_SyncPlayerInfoProperty(uintptr_t P0, uint32_t P1, uint32_t P2, uintptr_t P3) {
		return ((T (*)(MlkTFGameInfo*, uintptr_t, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x348CBE8))(this, P0, P1, P2, P3);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetRoundEndReason() {
		return ((T (*)(MlkTFGameInfo*))(Il2CppBase() + 0x348CC0C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(MlkTFGameInfo*, float))(Il2CppBase() + 0x348CC14))(this, P0);
	}

};

}
