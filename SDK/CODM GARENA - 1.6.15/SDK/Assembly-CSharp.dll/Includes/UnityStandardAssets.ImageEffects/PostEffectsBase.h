#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityStandardAssets.ImageEffects {

class PostEffectsBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityStandardAssets.ImageEffects", "PostEffectsBase"));
	}

	template <typename T = bool> T& supportHDRTextures() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& supportDX11() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = bool> T& isSupported() {
		return *(T*)((uintptr_t)this + 0xE);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShaderAndCreateMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSupport() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckResources() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CheckSupport() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_CheckSupport() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Dx11Support() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportAutoDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotSupported() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawBorder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = uintptr_t> T CheckShaderAndCreateMaterial(uintptr_t s, uintptr_t m2Create) {
		return ((T (*)(PostEffectsBase*, uintptr_t, uintptr_t))(Il2CppBase() + 0x421ECE4))(this, s, m2Create);
	}
	template <typename T = uintptr_t> T CreateMaterial(uintptr_t s, uintptr_t m2Create) {
		return ((T (*)(PostEffectsBase*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4220850))(this, s, m2Create);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(PostEffectsBase*))(Il2CppBase() + 0x4220BAC))(this);
	}
	template <typename T = bool> T CheckSupport() {
		return ((T (*)(PostEffectsBase*))(Il2CppBase() + 0x4220C50))(this);
	}
	template <typename T = bool> T CheckResources() {
		return ((T (*)(PostEffectsBase*))(Il2CppBase() + 0x422061C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(PostEffectsBase*))(Il2CppBase() + 0x4220CF8))(this);
	}
	template <typename T = bool> T CheckSupport_1(bool needDepth) {
		return ((T (*)(PostEffectsBase*, bool))(Il2CppBase() + 0x421EB34))(this, needDepth);
	}
	template <typename T = bool> T CheckSupport_2(bool needDepth, bool needHdr) {
		return ((T (*)(PostEffectsBase*, bool, bool))(Il2CppBase() + 0x4220DA8))(this, needDepth, needHdr);
	}
	template <typename T = bool> T Dx11Support() {
		return ((T (*)(PostEffectsBase*))(Il2CppBase() + 0x4220E94))(this);
	}
	template <typename T = void> T ReportAutoDisable() {
		return ((T (*)(PostEffectsBase*))(Il2CppBase() + 0x421F30C))(this);
	}
	template <typename T = bool> T CheckShader(uintptr_t s) {
		return ((T (*)(PostEffectsBase*, uintptr_t))(Il2CppBase() + 0x4220F3C))(this, s);
	}
	template <typename T = void> T NotSupported() {
		return ((T (*)(PostEffectsBase*))(Il2CppBase() + 0x422079C))(this);
	}
	template <typename T = void> T DrawBorder(uintptr_t dest, uintptr_t material) {
		return ((T (*)(PostEffectsBase*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42212DC))(this, dest, material);
	}

};

}
