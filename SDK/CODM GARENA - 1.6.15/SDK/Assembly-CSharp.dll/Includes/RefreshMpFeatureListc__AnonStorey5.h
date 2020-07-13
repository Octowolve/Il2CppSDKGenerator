#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RefreshMpFeatureListcAnonStorey5
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<RefreshMpFeatureList>c__AnonStorey5"));
	}

	template <typename T = uintptr_t> T& wsds() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = int32_t> T m__0(uint32_t a, uint32_t b) {
		return ((T (*)(RefreshMpFeatureListcAnonStorey5*, uint32_t, uint32_t))(Il2CppBase() + 0x1D3D73C))(this, a, b);
	}

};

}
