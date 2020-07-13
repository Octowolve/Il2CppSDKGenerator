#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TODNightParameters
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TOD_NightParameters"));
	}

	template <typename T = uintptr_t> T& AdditiveColor() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& MoonMeshColor() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& MoonLightColor() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& MoonHaloColor() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& MoonMeshSize() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& MoonLightIntensity() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& AmbientIntensity() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& ShadowStrength() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& SkyMultiplier() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& CloudMultiplier() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T CheckRange() {
		return ((T (*)(TODNightParameters*))(Il2CppBase() + 0x4960CF0))(this);
	}

};

}
