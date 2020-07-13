#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BuffEffectSmokeBePerspectivedEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BuffEffect_SmokeBePerspectivedEffect"));
	}

	template <typename T = bool> T& m_HasApplyEffect() {
		return *(T*)((uintptr_t)this + 0x2D);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerEffectImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyPropertySet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerEffectOverImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T TriggerEffectImpl() {
		return ((T (*)(BuffEffectSmokeBePerspectivedEffect*))(Il2CppBase() + 0x3C3ED3C))(this);
	}
	template <typename T = void> T ApplyPropertySet() {
		return ((T (*)(BuffEffectSmokeBePerspectivedEffect*))(Il2CppBase() + 0x3C3EDF4))(this);
	}
	template <typename T = void> T TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectSmokeBePerspectivedEffect*))(Il2CppBase() + 0x3C3F1C8))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BuffEffectSmokeBePerspectivedEffect*, float))(Il2CppBase() + 0x3C3F34C))(this, deltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffectImpl() {
		return ((T (*)(BuffEffectSmokeBePerspectivedEffect*))(Il2CppBase() + 0x3C3F400))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectSmokeBePerspectivedEffect*))(Il2CppBase() + 0x3C3F408))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BuffEffectSmokeBePerspectivedEffect*, float))(Il2CppBase() + 0x3C3F410))(this, P0);
	}

};

}
