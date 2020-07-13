#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GlowEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GlowEffect"));
	}

	template <typename T = float> T& blurSpread() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& glowStrength() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& glowMaterial() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& glowReplaceShader() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& downsampleSize() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& blurIterations() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& ignoreLayers() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& glowColorMultiplier() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& origCamera() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& shaderCamera() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& shaderCullingMask() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppRect> T& normalizedRect() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& replaceRenderTexture() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGlowMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPreRender() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRenderImage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateGlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GlowEffect*))(Il2CppBase() + 0x3E15F88))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GlowEffect*))(Il2CppBase() + 0x3E161D0))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(GlowEffect*))(Il2CppBase() + 0x3E1639C))(this);
	}
	template <typename T = void> T UpdateGlowMaterial() {
		return ((T (*)(GlowEffect*))(Il2CppBase() + 0x3E16738))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(GlowEffect*))(Il2CppBase() + 0x3E168F0))(this);
	}
	template <typename T = void> T OnPreRender() {
		return ((T (*)(GlowEffect*))(Il2CppBase() + 0x3E16B04))(this);
	}
	template <typename T = void> T OnRenderImage(uintptr_t source, uintptr_t destination) {
		return ((T (*)(GlowEffect*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E16DB8))(this, source, destination);
	}
	template <typename T = void> T CalculateGlow(uintptr_t source, uintptr_t destination) {
		return ((T (*)(GlowEffect*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E16E84))(this, source, destination);
	}

};

}
