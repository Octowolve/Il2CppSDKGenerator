#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SunShaftBloomSetting
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SunShaftBloomSetting"));
	}

	template <typename T = float> T& Density() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& Weight() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Decay() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& Exposure() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& IlluminationDecay() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& BrightnessThreshold() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& screenBlendMode() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& useDepthTexture() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& radialBlurIterations() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& sunColor() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& sunThreshold() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& sunShaftBlurRadius() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& sunShaftIntensity() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& maxRadius() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
