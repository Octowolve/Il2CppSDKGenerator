#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FrictionFlowRainVariables
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FrictionFlowRainVariables"));
	}

	template <typename T = bool> T& AutoStart() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& PlayOnce() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = uintptr_t> T& OverlayColor() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& NormalMap() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& OverlayTexture() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& FrictionMap() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& Duration() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& Delay() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& MaxRainSpawnCount() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& SpawnOffsetY() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& LifetimeMin() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& LifetimeMax() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& EmissionRateMax() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& EmissionRateMin() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& Resolution() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& AlphaOverLifetime() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& SizeMinX() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& SizeMaxX() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& TrailWidth() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& DistortionValue() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& DistortionOverLifetime() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& ReliefValue() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& ReliefOverLifetime() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& Blur() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& BlurOverLifetime() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& Darkness() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& InitialVelocity() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& AccelerationMin() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& AccelerationMax() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
