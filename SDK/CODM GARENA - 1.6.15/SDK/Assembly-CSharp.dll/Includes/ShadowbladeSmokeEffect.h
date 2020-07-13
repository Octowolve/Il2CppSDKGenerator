#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShadowbladeSmokeEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShadowbladeSmokeEffect"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_EnableRenderers() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_EffectEnable() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRenderState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_StartEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecoverEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TestStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Test() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = bool> T get_EffectEnable() {
		return ((T (*)(ShadowbladeSmokeEffect*))(Il2CppBase() + 0x38D923C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ShadowbladeSmokeEffect*))(Il2CppBase() + 0x38D9244))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ShadowbladeSmokeEffect*))(Il2CppBase() + 0x38D9520))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(ShadowbladeSmokeEffect*))(Il2CppBase() + 0x38D97A8))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(ShadowbladeSmokeEffect*))(Il2CppBase() + 0x38D9B90))(this);
	}
	template <typename T = void> T SetRenderState(uintptr_t rd) {
		return ((T (*)(ShadowbladeSmokeEffect*, uintptr_t))(Il2CppBase() + 0x38D9C40))(this, rd);
	}
	template <typename T = void> T SetupEffect(uintptr_t rd, bool enable) {
		return ((T (*)(ShadowbladeSmokeEffect*, uintptr_t, bool))(Il2CppBase() + 0x38D9D64))(this, rd, enable);
	}
	template <typename T = void> T StartEffect(bool force) {
		return ((T (*)(ShadowbladeSmokeEffect*, bool))(Il2CppBase() + 0x38D990C))(this, force);
	}
	template <typename T = void> T StartEffect_1(void* renderers) {
		return ((T (*)(ShadowbladeSmokeEffect*, void*))(Il2CppBase() + 0x38D9E5C))(this, renderers);
	}
	template <typename T = void> T EndEffect() {
		return ((T (*)(ShadowbladeSmokeEffect*))(Il2CppBase() + 0x38DA260))(this);
	}
	template <typename T = void> T RecoverEffect() {
		return ((T (*)(ShadowbladeSmokeEffect*))(Il2CppBase() + 0x38DA35C))(this);
	}
	template <typename T = void> T TestStart() {
		return ((T (*)(ShadowbladeSmokeEffect*))(Il2CppBase() + 0x38DA4D8))(this);
	}
	template <typename T = void> T Test() {
		return ((T (*)(ShadowbladeSmokeEffect*))(Il2CppBase() + 0x38DA570))(this);
	}

};

}
