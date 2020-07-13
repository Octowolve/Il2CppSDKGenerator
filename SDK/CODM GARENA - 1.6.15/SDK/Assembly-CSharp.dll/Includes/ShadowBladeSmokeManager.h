#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShadowBladeSmokeManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShadowBladeSmokeManager"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& SmokeEffects() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_ShadowbladeAbilityEnable() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableShadowbladeAbility() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableShadowbladeAbility() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddSmokeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveSmokeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T set_ShadowbladeAbilityEnable(bool value) {
		return ((T (*)(ShadowBladeSmokeManager*, bool))(Il2CppBase() + 0x38DA6E0))(this, value);
	}
	template <typename T = bool> T get_ShadowbladeAbilityEnable() {
		return ((T (*)(ShadowBladeSmokeManager*))(Il2CppBase() + 0x38D915C))(this);
	}
	template <typename T = void> T EnableShadowbladeAbility(uintptr_t smokeEffect) {
		return ((T (*)(ShadowBladeSmokeManager*, uintptr_t))(Il2CppBase() + 0x38DA8B0))(this, smokeEffect);
	}
	template <typename T = void> T DisableShadowbladeAbility(uintptr_t smokeEffect) {
		return ((T (*)(ShadowBladeSmokeManager*, uintptr_t))(Il2CppBase() + 0x38DA974))(this, smokeEffect);
	}
	template <typename T = void> T AddSmokeEffect(uintptr_t smokeEffect) {
		return ((T (*)(ShadowBladeSmokeManager*, uintptr_t))(Il2CppBase() + 0x38D9398))(this, smokeEffect);
	}
	template <typename T = void> T RemoveSmokeEffect(uintptr_t smokeEffect) {
		return ((T (*)(ShadowBladeSmokeManager*, uintptr_t))(Il2CppBase() + 0x38D9674))(this, smokeEffect);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(ShadowBladeSmokeManager*))(Il2CppBase() + 0x38DAA40))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(ShadowBladeSmokeManager*))(Il2CppBase() + 0x38DAAD8))(this);
	}

};

}
