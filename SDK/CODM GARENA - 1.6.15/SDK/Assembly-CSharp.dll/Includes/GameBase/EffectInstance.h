#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class EffectInstance
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "EffectInstance"));
	}

	template <typename T = uintptr_t> T& m_Target() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& HasRecycle() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSelf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T SetTarget(uintptr_t target) {
		return ((T (*)(EffectInstance*, uintptr_t))(Il2CppBase() + 0x40F3EE8))(this, target);
	}
	template <typename T = void> T CheckSelf() {
		return ((T (*)(EffectInstance*))(Il2CppBase() + 0x40F4030))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(EffectInstance*, float))(Il2CppBase() + 0x40F40C8))(this, deltaTime);
	}
	template <typename T = bool> T get_HasRecycle() {
		return ((T (*)(EffectInstance*))(Il2CppBase() + 0x40F4168))(this);
	}
	template <typename T = void> T set_HasRecycle(bool value) {
		return ((T (*)(EffectInstance*, bool))(Il2CppBase() + 0x40F4170))(this, value);
	}
	template <typename T = void> T OnRecycle() {
		return ((T (*)(EffectInstance*))(Il2CppBase() + 0x40F4178))(this);
	}

};

}
