#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class SwimmingTransitionToIdleState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "SwimmingTransitionToIdleState"));
	}

	template <typename T = bool> T& m_IsHiddenWeapon() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_TickTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_TransitionTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_TPAttachWeaponTimeRate() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_CheckAttachToHand() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(SwimmingTransitionToIdleState*))(Il2CppBase() + 0x35A993C))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(SwimmingTransitionToIdleState*, float))(Il2CppBase() + 0x35A9D40))(this, deltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(SwimmingTransitionToIdleState*))(Il2CppBase() + 0x35A9F1C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(SwimmingTransitionToIdleState*, float))(Il2CppBase() + 0x35A9F20))(this, P0);
	}

};

}
