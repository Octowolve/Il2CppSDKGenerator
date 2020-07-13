#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BlurTexture
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BlurTexture"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Blur() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> static T Blur(uintptr_t source, int32_t downsample, float blurSize, int32_t blurIterations) {
		return ((T (*)(void *, uintptr_t, int32_t, float, int32_t))(Il2CppBase() + 0x2D7844C))(0, source, downsample, blurSize, blurIterations);
	}

};

}
