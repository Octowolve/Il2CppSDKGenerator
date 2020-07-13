#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UISlider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UISlider"));
	}

	template <typename T = uintptr_t> T& foreground() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& rawValue() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& direction() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& mInverted() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Upgrade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPressBackground() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragBackground() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPressForeground() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragForeground() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = bool> T get_isColliderEnabled() {
		return ((T (*)(UISlider*))(Il2CppBase() + 0x2FA4380))(this);
	}
	template <typename T = float> T get_sliderValue() {
		return ((T (*)(UISlider*))(Il2CppBase() + 0x2FA447C))(this);
	}
	template <typename T = void> T set_sliderValue(float value) {
		return ((T (*)(UISlider*, float))(Il2CppBase() + 0x2FA4480))(this, value);
	}
	template <typename T = bool> T get_inverted() {
		return ((T (*)(UISlider*))(Il2CppBase() + 0x2FA4488))(this);
	}
	template <typename T = void> T set_inverted(bool value) {
		return ((T (*)(UISlider*, bool))(Il2CppBase() + 0x2FA449C))(this, value);
	}
	template <typename T = void> T Upgrade() {
		return ((T (*)(UISlider*))(Il2CppBase() + 0x2F9DA0C))(this);
	}
	template <typename T = void> T OnStart() {
		return ((T (*)(UISlider*))(Il2CppBase() + 0x2F9CA00))(this);
	}
	template <typename T = void> T OnPressBackground(uintptr_t go, bool isPressed) {
		return ((T (*)(UISlider*, uintptr_t, bool))(Il2CppBase() + 0x2FA44A0))(this, go, isPressed);
	}
	template <typename T = void> T OnDragBackground(uintptr_t go, Il2CppVector2 delta) {
		return ((T (*)(UISlider*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x2FA463C))(this, go, delta);
	}
	template <typename T = void> T OnPressForeground(uintptr_t go, bool isPressed) {
		return ((T (*)(UISlider*, uintptr_t, bool))(Il2CppBase() + 0x2FA47C8))(this, go, isPressed);
	}
	template <typename T = void> T OnDragForeground(uintptr_t go, Il2CppVector2 delta) {
		return ((T (*)(UISlider*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x2FA4A30))(this, go, delta);
	}
	template <typename T = void> T OnPan(Il2CppVector2 delta) {
		return ((T (*)(UISlider*, Il2CppVector2))(Il2CppBase() + 0x2FA4BD0))(this, delta);
	}
	template <typename T = void> T xLuaBaseProxy_Upgrade() {
		return ((T (*)(UISlider*))(Il2CppBase() + 0x2FA4CC4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnStart() {
		return ((T (*)(UISlider*))(Il2CppBase() + 0x2FA4CC8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnPan(Il2CppVector2 P0) {
		return ((T (*)(UISlider*, Il2CppVector2))(Il2CppBase() + 0x2FA4CCC))(this, P0);
	}

};

}
