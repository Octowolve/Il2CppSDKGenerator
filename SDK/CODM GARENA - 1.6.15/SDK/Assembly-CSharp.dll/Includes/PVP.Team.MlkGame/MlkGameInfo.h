#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.MlkGame {

class MlkGameInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.MlkGame", "MlkGameInfo"));
	}

	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncPlayerInfoProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckHighestScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerInfoListBySort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = bool> T get_IsShowPvpLoadout() {
		return ((T (*)(MlkGameInfo*))(Il2CppBase() + 0x40456C0))(this);
	}
	template <typename T = bool> T get_InfiniteCarriedAmmo() {
		return ((T (*)(MlkGameInfo*))(Il2CppBase() + 0x40456C8))(this);
	}
	template <typename T = bool> T get_IsUseMlkUAV() {
		return ((T (*)(MlkGameInfo*))(Il2CppBase() + 0x40456D0))(this);
	}
	template <typename T = bool> T get_IsShowPvpStreak() {
		return ((T (*)(MlkGameInfo*))(Il2CppBase() + 0x40456D8))(this);
	}
	template <typename T = uintptr_t> T get_PvpWeaponViewType() {
		return ((T (*)(MlkGameInfo*))(Il2CppBase() + 0x40456E0))(this);
	}
	template <typename T = void> T SyncPlayerInfoProperty(uintptr_t playerInfo, uint32_t propertyID, uint32_t value, uintptr_t varType) {
		return ((T (*)(MlkGameInfo*, uintptr_t, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x40456E8))(this, playerInfo, propertyID, value, varType);
	}
	template <typename T = uintptr_t> T get_ScoreType() {
		return ((T (*)(MlkGameInfo*))(Il2CppBase() + 0x404582C))(this);
	}
	template <typename T = bool> T CheckHighestScore(uint32_t playerID, uint32_t scoreVal) {
		return ((T (*)(MlkGameInfo*, uint32_t, uint32_t))(Il2CppBase() + 0x4045834))(this, playerID, scoreVal);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetPlayerInfoListBySort() {
		return ((T (*)(MlkGameInfo*))(Il2CppBase() + 0x4045B00))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(MlkGameInfo*, float))(Il2CppBase() + 0x4045CB4))(this, deltaTime);
	}
	template <typename T = int32_t> static T GetPlayerInfoListBySortm__0(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4045E08))(0, a, b);
	}
	template <typename T = void> T xLuaBaseProxy_SyncPlayerInfoProperty(uintptr_t P0, uint32_t P1, uint32_t P2, uintptr_t P3) {
		return ((T (*)(MlkGameInfo*, uintptr_t, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x4045FD8))(this, P0, P1, P2, P3);
	}
	template <typename T = bool> T xLuaBaseProxy_CheckHighestScore(uint32_t P0, uint32_t P1) {
		return ((T (*)(MlkGameInfo*, uint32_t, uint32_t))(Il2CppBase() + 0x4045FF8))(this, P0, P1);
	}
	template <typename T = Il2CppList<uintptr_t>*> T xLuaBaseProxy_GetPlayerInfoListBySort() {
		return ((T (*)(MlkGameInfo*))(Il2CppBase() + 0x4045FFC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(MlkGameInfo*, float))(Il2CppBase() + 0x4046000))(this, P0);
	}

};

}
