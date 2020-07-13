#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DizzyBlur
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DizzyBlur"));
	}

	template <typename T = uintptr_t> T& motionBlurShader() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& motionBlurMaterial() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& blurAmount() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& BgColor() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& accumulationTexture() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckResources() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSupport() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotSupported() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShaderAndCreateMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRenderImage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T CheckResources() {
		return ((T (*)(DizzyBlur*))(Il2CppBase() + 0x4177B24))(this);
	}
	template <typename T = bool> T CheckSupport() {
		return ((T (*)(DizzyBlur*))(Il2CppBase() + 0x4177BD8))(this);
	}
	template <typename T = void> T NotSupported() {
		return ((T (*)(DizzyBlur*))(Il2CppBase() + 0x4177D0C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(DizzyBlur*))(Il2CppBase() + 0x4177DB8))(this);
	}
	template <typename T = uintptr_t> T CheckShaderAndCreateMaterial(uintptr_t shader, uintptr_t material) {
		return ((T (*)(DizzyBlur*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4177E5C))(this, shader, material);
	}
	template <typename T = uintptr_t> T get_material() {
		return ((T (*)(DizzyBlur*))(Il2CppBase() + 0x41780F4))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(DizzyBlur*))(Il2CppBase() + 0x4178114))(this);
	}
	template <typename T = void> T OnRenderImage(uintptr_t src, uintptr_t dest) {
		return ((T (*)(DizzyBlur*, uintptr_t, uintptr_t))(Il2CppBase() + 0x41781FC))(this, src, dest);
	}

};

}
