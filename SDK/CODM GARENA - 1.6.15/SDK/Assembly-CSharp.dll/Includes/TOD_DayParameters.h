#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TODDayParameters
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TOD_DayParameters"));
	}

	template <typename T = uintptr_t> T& AdditiveColor() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& SunMeshColor() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& SunLightColor() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& SunMeshSize() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& SunLightIntensity() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& AmbientIntensity() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& ShadowStrength() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& SkyMultiplier() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& CloudMultiplier() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppVector3> T& SunPos() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppVector3> T& MoonPos() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T CheckRange() {
		return ((T (*)(TODDayParameters*))(Il2CppBase() + 0x49607C0))(this);
	}

};

}
