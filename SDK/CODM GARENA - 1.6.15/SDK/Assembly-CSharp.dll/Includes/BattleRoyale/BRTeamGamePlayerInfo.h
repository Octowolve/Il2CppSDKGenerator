#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRTeamGamePlayerInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRTeamGamePlayerInfo"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreLoadAircraftRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSameTeam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T get_IsReviveWaitSwitchMainWeapon() {
		return ((T (*)(BRTeamGamePlayerInfo*))(Il2CppBase() + 0x26237C0))(this);
	}
	template <typename T = void> T set_IsReviveWaitSwitchMainWeapon(bool value) {
		return ((T (*)(BRTeamGamePlayerInfo*, bool))(Il2CppBase() + 0x26237C8))(this, value);
	}
	template <typename T = void> T PreLoadAircraftRes() {
		return ((T (*)(BRTeamGamePlayerInfo*))(Il2CppBase() + 0x26237D4))(this);
	}
	template <typename T = bool> T IsSameTeam(uint32_t otherPlayerID) {
		return ((T (*)(BRTeamGamePlayerInfo*, uint32_t))(Il2CppBase() + 0x2623914))(this, otherPlayerID);
	}
	template <typename T = void> T xLuaBaseProxy_PreLoadAircraftRes() {
		return ((T (*)(BRTeamGamePlayerInfo*))(Il2CppBase() + 0x2623B58))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsSameTeam(uint32_t P0) {
		return ((T (*)(BRTeamGamePlayerInfo*, uint32_t))(Il2CppBase() + 0x2623B60))(this, P0);
	}

};

}
