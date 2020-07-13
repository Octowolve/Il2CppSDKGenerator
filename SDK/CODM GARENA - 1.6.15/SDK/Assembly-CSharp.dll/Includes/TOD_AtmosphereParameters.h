#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TODAtmosphereParameters
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TOD_AtmosphereParameters"));
	}

	template <typename T = uintptr_t> T& ScatteringColor() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& ScatteringColorChart() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& RayleighMultiplier() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& MieMultiplier() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& Brightness() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& Contrast() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& Directionality() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& Haziness() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& Fogginess() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& CloudBrightness() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& FogColorMultiplier() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T CheckRange() {
		return ((T (*)(TODAtmosphereParameters*))(Il2CppBase() + 0x495F6C8))(this);
	}

};

}
