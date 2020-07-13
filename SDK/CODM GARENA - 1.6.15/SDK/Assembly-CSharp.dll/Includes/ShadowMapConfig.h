#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShadowMapConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShadowMapConfig"));
	}

	template <typename T = uintptr_t> T& resolution() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& sampleType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& softenRadius() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& shadowRadius() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& shadowDistance() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& depthBias() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& normalBias() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& shadowMapDepth() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& projectCameraRenderDepth() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateDefault() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Equals() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> static T CreateDefault() {
		return ((T (*)(void *))(Il2CppBase() + 0x415E9C8))(0);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ShadowMapConfig*, uintptr_t))(Il2CppBase() + 0x4161B30))(this, other);
	}

};

}
