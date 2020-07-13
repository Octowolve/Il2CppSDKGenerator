#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NetworkZombieAvogadro
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NetworkZombieAvogadro"));
	}

	template <typename T = uintptr_t> static T& glowEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& effectBall() {
		return *(T*)((uintptr_t)this + 0xAB8);
	}
	template <typename T = uintptr_t> T& effectMove() {
		return *(T*)((uintptr_t)this + 0xABC);
	}
	template <typename T = bool> T& ballState() {
		return *(T*)((uintptr_t)this + 0xAC0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBehaviors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleBallState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDieAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T InitBehaviors(uintptr_t info) {
		return ((T (*)(NetworkZombieAvogadro*, uintptr_t))(Il2CppBase() + 0x43B63A8))(this, info);
	}
	template <typename T = void> T ToggleBallState(bool enable) {
		return ((T (*)(NetworkZombieAvogadro*, bool))(Il2CppBase() + 0x43B47C0))(this, enable);
	}
	template <typename T = void> T PlayDieAnim(bool isHeadShot) {
		return ((T (*)(NetworkZombieAvogadro*, bool))(Il2CppBase() + 0x43B6604))(this, isHeadShot);
	}
	template <typename T = void> T xLuaBaseProxy_InitBehaviors(uintptr_t P0) {
		return ((T (*)(NetworkZombieAvogadro*, uintptr_t))(Il2CppBase() + 0x43B6720))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayDieAnim(bool P0) {
		return ((T (*)(NetworkZombieAvogadro*, bool))(Il2CppBase() + 0x43B6728))(this, P0);
	}

};

}
