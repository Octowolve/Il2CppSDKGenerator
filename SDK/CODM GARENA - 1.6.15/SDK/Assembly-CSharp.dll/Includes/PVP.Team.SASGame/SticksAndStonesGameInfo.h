#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.SASGame {

class SticksAndStonesGameInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.SASGame", "SticksAndStonesGameInfo"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncPlayerInfoProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSuppressScoreChangeSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T get_PvpWeaponViewType() {
		return ((T (*)(SticksAndStonesGameInfo*))(Il2CppBase() + 0x34BDD00))(this);
	}
	template <typename T = bool> T get_IsUseMlkUAV() {
		return ((T (*)(SticksAndStonesGameInfo*))(Il2CppBase() + 0x34BDD08))(this);
	}
	template <typename T = void> T SyncPlayerInfoProperty(uintptr_t playerInfo, uint32_t propertyID, uint32_t value, uintptr_t varType) {
		return ((T (*)(SticksAndStonesGameInfo*, uintptr_t, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x34BDD10))(this, playerInfo, propertyID, value, varType);
	}
	template <typename T = bool> T IsSuppressScoreChangeSound() {
		return ((T (*)(SticksAndStonesGameInfo*))(Il2CppBase() + 0x34BDDF8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SyncPlayerInfoProperty(uintptr_t P0, uint32_t P1, uint32_t P2, uintptr_t P3) {
		return ((T (*)(SticksAndStonesGameInfo*, uintptr_t, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x34BDE98))(this, P0, P1, P2, P3);
	}
	template <typename T = bool> T xLuaBaseProxy_IsSuppressScoreChangeSound() {
		return ((T (*)(SticksAndStonesGameInfo*))(Il2CppBase() + 0x34BDEBC))(this);
	}

};

}
