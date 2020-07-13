#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NetworkZombieParade
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NetworkZombieParade"));
	}

	template <typename T = bool> T& bLastCheckFollow() {
		return *(T*)((uintptr_t)this + 0xAD0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFollowingBoss() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSoundEmitterType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = bool> T IsFollowingBoss() {
		return ((T (*)(NetworkZombieParade*))(Il2CppBase() + 0x43B75B8))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(NetworkZombieParade*, float))(Il2CppBase() + 0x43B76A8))(this, deltaTime);
	}
	template <typename T = uintptr_t> T GetSoundEmitterType() {
		return ((T (*)(NetworkZombieParade*))(Il2CppBase() + 0x43B788C))(this);
	}
	template <typename T = void> T InitPawn(uintptr_t info) {
		return ((T (*)(NetworkZombieParade*, uintptr_t))(Il2CppBase() + 0x43B7988))(this, info);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(NetworkZombieParade*, float))(Il2CppBase() + 0x43B7A4C))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetSoundEmitterType() {
		return ((T (*)(NetworkZombieParade*))(Il2CppBase() + 0x43B7A54))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitPawn(uintptr_t P0) {
		return ((T (*)(NetworkZombieParade*, uintptr_t))(Il2CppBase() + 0x43B7A5C))(this, P0);
	}

};

}
