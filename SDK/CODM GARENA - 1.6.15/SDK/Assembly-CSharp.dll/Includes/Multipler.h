#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Multipler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Multipler"));
	}

	template <typename T = float> T& FogDensity_Multipler() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& FogHeightFalloff_Multipler() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& StartDistance_Adder() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& MaxFogOpacity_Multipler() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& BlendInScatteringColorFactor_Adder() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& FogHeight_Adder() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& BlendInScatteringColor_Multipler() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& AtmLightAbsorptionColor_Multipler() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
