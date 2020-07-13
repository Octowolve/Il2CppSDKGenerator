#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityStandardAssets.ImageEffects {

class GlobalFog
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityStandardAssets.ImageEffects", "GlobalFog"));
	}

	template <typename T = bool> T& distanceFog() {
		return *(T*)((uintptr_t)this + 0xF);
	}
	template <typename T = bool> T& useRadialDistance() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& heightFog() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = float> T& height() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& heightDensity() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& startDistance() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& fogShader() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& fogMaterial() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& OriginalHeightDensity() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckResources() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleGlobalFog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRenderImage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CustomGraphicsBlit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GlobalFog*))(Il2CppBase() + 0x421E9B4))(this);
	}
	template <typename T = bool> T CheckResources() {
		return ((T (*)(GlobalFog*))(Il2CppBase() + 0x421EA58))(this);
	}
	template <typename T = bool> static T ToggleGlobalFog(bool open) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x421F484))(0, open);
	}
	template <typename T = void> T OnRenderImage(uintptr_t source, uintptr_t destination) {
		return ((T (*)(GlobalFog*, uintptr_t, uintptr_t))(Il2CppBase() + 0x421F660))(this, source, destination);
	}
	template <typename T = void> static T CustomGraphicsBlit(uintptr_t source, uintptr_t dest, uintptr_t fxMaterial, int32_t passNr) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x42203EC))(0, source, dest, fxMaterial, passNr);
	}
	template <typename T = bool> T xLuaBaseProxy_CheckResources() {
		return ((T (*)(GlobalFog*))(Il2CppBase() + 0x4220618))(this);
	}

};

}
