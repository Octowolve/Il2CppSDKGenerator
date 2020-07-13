#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponPartZoom
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponPart_Zoom"));
	}

	template <typename T = float> T& m_ZoomingChangeFOVScaleAdd() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& m_ZoomingChangeCameraAddRotateRateScaleAdd() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& m_AimingWorldFovCache() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = float> T& m_AimingCameraAddRotateRateCache() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadPropertyFromConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAimingZoomingFov() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeAimingZoomingFov() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponBeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponPartZoom*, uintptr_t, bool))(Il2CppBase() + 0x241E270))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponPartZoom*))(Il2CppBase() + 0x241E39C))(this);
	}
	template <typename T = void> T LoadPropertyFromConfig() {
		return ((T (*)(WeaponPartZoom*))(Il2CppBase() + 0x241E458))(this);
	}
	template <typename T = void> T SetAimingZoomingFov(bool isFov) {
		return ((T (*)(WeaponPartZoom*, bool))(Il2CppBase() + 0x241E544))(this, isFov);
	}
	template <typename T = void> T ChangeAimingZoomingFov() {
		return ((T (*)(WeaponPartZoom*))(Il2CppBase() + 0x241EA48))(this);
	}
	template <typename T = void> T OnWeaponBeginState(uintptr_t stateType) {
		return ((T (*)(WeaponPartZoom*, uintptr_t))(Il2CppBase() + 0x241EF1C))(this, stateType);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponPartZoom*, uintptr_t, bool))(Il2CppBase() + 0x241F2B0))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_LoadPropertyFromConfig() {
		return ((T (*)(WeaponPartZoom*))(Il2CppBase() + 0x241F2B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetAimingZoomingFov(bool P0) {
		return ((T (*)(WeaponPartZoom*, bool))(Il2CppBase() + 0x241F2B8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ChangeAimingZoomingFov() {
		return ((T (*)(WeaponPartZoom*))(Il2CppBase() + 0x241F2BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnWeaponBeginState(uintptr_t P0) {
		return ((T (*)(WeaponPartZoom*, uintptr_t))(Il2CppBase() + 0x241F2C0))(this, P0);
	}

};

}
