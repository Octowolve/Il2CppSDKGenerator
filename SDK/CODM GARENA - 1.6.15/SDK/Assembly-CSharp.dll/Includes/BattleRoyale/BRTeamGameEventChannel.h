#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRTeamGameEventChannel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRTeamGameEventChannel"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncAircraftStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBrRevive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncAllProp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T SyncAircraftStatus(uintptr_t inMsg) {
		return ((T (*)(BRTeamGameEventChannel*, uintptr_t))(Il2CppBase() + 0x261EFD4))(this, inMsg);
	}
	template <typename T = void> T OnSyncNotify(uintptr_t Msg) {
		return ((T (*)(BRTeamGameEventChannel*, uintptr_t))(Il2CppBase() + 0x261F584))(this, Msg);
	}
	template <typename T = bool> T IsBrRevive(uintptr_t syncRespawnMsg) {
		return ((T (*)(BRTeamGameEventChannel*, uintptr_t))(Il2CppBase() + 0x261F8F4))(this, syncRespawnMsg);
	}
	template <typename T = void> T OnSyncAllProp(uintptr_t msg) {
		return ((T (*)(BRTeamGameEventChannel*, uintptr_t))(Il2CppBase() + 0x261FB0C))(this, msg);
	}
	template <typename T = void> T xLuaBaseProxy_SyncAircraftStatus(uintptr_t P0) {
		return ((T (*)(BRTeamGameEventChannel*, uintptr_t))(Il2CppBase() + 0x261FCF4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncNotify(uintptr_t P0) {
		return ((T (*)(BRTeamGameEventChannel*, uintptr_t))(Il2CppBase() + 0x261FCFC))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_IsBrRevive(uintptr_t P0) {
		return ((T (*)(BRTeamGameEventChannel*, uintptr_t))(Il2CppBase() + 0x261FD04))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncAllProp(uintptr_t P0) {
		return ((T (*)(BRTeamGameEventChannel*, uintptr_t))(Il2CppBase() + 0x261FD0C))(this, P0);
	}

};

}
