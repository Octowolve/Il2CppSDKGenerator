#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SunShaftSetting
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SunShaftSetting"));
	}

	template <typename T = float> T& depthThreshold() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& colorThreshold() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& lightColor() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& lightFactor() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& samplerScale() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& blurIteration() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& downSample() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& lightTransform() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& lightRadius() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& lightPowFactor() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector3> T& viewPortLightPos() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
