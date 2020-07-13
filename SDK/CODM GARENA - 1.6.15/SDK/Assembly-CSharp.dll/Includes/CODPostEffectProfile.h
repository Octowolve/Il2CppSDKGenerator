#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CODPostEffectProfile
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CODPostEffectProfile"));
	}

	template <typename T = bool> T& changed() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& BCGS() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Exposure() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& ACES() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Bloom() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& RadBlur() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Distort() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& FastBlur() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& ColorGrading() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& AmplifyBloom() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& PostProcessBloom() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& SunShaftBloom() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& DizzyBlur() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& SunShaft() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& RealDOF() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& mDefault() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> T get_changed() {
		return ((T (*)(CODPostEffectProfile*))(Il2CppBase() + 0x3A44A78))(this);
	}
	template <typename T = void> T set_changed(bool value) {
		return ((T (*)(CODPostEffectProfile*, bool))(Il2CppBase() + 0x3A44A80))(this, value);
	}
	template <typename T = uintptr_t> static T get_Default() {
		return ((T (*)(void *))(Il2CppBase() + 0x3A321A8))(0);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(CODPostEffectProfile*))(Il2CppBase() + 0x3A44A88))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(CODPostEffectProfile*))(Il2CppBase() + 0x3A44B38))(this);
	}

};

}
