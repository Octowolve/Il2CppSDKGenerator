#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class LoadingGame
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "LoadingGame"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitGameEventChannel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessZoneEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Init() {
		return ((T (*)(LoadingGame*))(Il2CppBase() + 0x2E69F08))(this);
	}
	template <typename T = void> T InitGameEventChannel() {
		return ((T (*)(LoadingGame*))(Il2CppBase() + 0x2E69FC4))(this);
	}
	template <typename T = void> T ProcessZoneEvent(uintptr_t msg) {
		return ((T (*)(LoadingGame*, uintptr_t))(Il2CppBase() + 0x2E6A0BC))(this, msg);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LoadingGame*))(Il2CppBase() + 0x2E6A1C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitGameEventChannel() {
		return ((T (*)(LoadingGame*))(Il2CppBase() + 0x2E6A1D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessZoneEvent(uintptr_t P0) {
		return ((T (*)(LoadingGame*, uintptr_t))(Il2CppBase() + 0x2E6A1D8))(this, P0);
	}

};

}
