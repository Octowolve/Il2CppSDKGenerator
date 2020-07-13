#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class PlayerInfoEventProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "PlayerInfoEventProcessor"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReconnectNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSimulateMoveData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncDead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncSwitchWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T get_PlayerNetInfo() {
		return ((T (*)(PlayerInfoEventProcessor*))(Il2CppBase() + 0x1DEA504))(this);
	}
	template <typename T = void> T PreInit(uintptr_t info) {
		return ((T (*)(PlayerInfoEventProcessor*, uintptr_t))(Il2CppBase() + 0x1DEA5C8))(this, info);
	}
	template <typename T = void> T OnReconnectNtf(uintptr_t Msg) {
		return ((T (*)(PlayerInfoEventProcessor*, uintptr_t))(Il2CppBase() + 0x1DEA7E4))(this, Msg);
	}
	template <typename T = void> T OnSimulateMoveData(uintptr_t Msg) {
		return ((T (*)(PlayerInfoEventProcessor*, uintptr_t))(Il2CppBase() + 0x1DEA980))(this, Msg);
	}
	template <typename T = void> T OnSyncDead(uintptr_t Msg) {
		return ((T (*)(PlayerInfoEventProcessor*, uintptr_t))(Il2CppBase() + 0x1DEAC94))(this, Msg);
	}
	template <typename T = void> T OnSyncSwitchWeapon(uintptr_t Msg) {
		return ((T (*)(PlayerInfoEventProcessor*, uintptr_t))(Il2CppBase() + 0x1DEB0E0))(this, Msg);
	}
	template <typename T = void> T xLuaBaseProxy_PreInit(uintptr_t P0) {
		return ((T (*)(PlayerInfoEventProcessor*, uintptr_t))(Il2CppBase() + 0x1DEB37C))(this, P0);
	}

};

}
