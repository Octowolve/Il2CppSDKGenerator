#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRTeamGameEnemyAircraftManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRTeamGameEnemyAircraftManager"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAllUIOnScreen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateViewPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AttachAllTeamToAircraft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T ShowAllUIOnScreen(bool bShow) {
		return ((T (*)(BRTeamGameEnemyAircraftManager*, bool))(Il2CppBase() + 0x261E478))(this, bShow);
	}
	template <typename T = void> T UpdateViewPlayer(float deltaTime) {
		return ((T (*)(BRTeamGameEnemyAircraftManager*, float))(Il2CppBase() + 0x261E518))(this, deltaTime);
	}
	template <typename T = void> T AttachAllTeamToAircraft() {
		return ((T (*)(BRTeamGameEnemyAircraftManager*))(Il2CppBase() + 0x261E5B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShowAllUIOnScreen(bool P0) {
		return ((T (*)(BRTeamGameEnemyAircraftManager*, bool))(Il2CppBase() + 0x261EF0C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateViewPlayer(float P0) {
		return ((T (*)(BRTeamGameEnemyAircraftManager*, float))(Il2CppBase() + 0x261EF14))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_AttachAllTeamToAircraft() {
		return ((T (*)(BRTeamGameEnemyAircraftManager*))(Il2CppBase() + 0x261EF1C))(this);
	}

};

}
