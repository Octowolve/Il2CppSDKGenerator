#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UICustomSlider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UICustomSlider"));
	}

	template <typename T = uintptr_t> T& Decrease() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& Increase() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& Tip() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& mTipWidget() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnValueChangeStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnValueChangeEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPressBackground() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragBackground() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPressForeground() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragForeground() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T OnDec() {
		return ((T (*)(UICustomSlider*))(Il2CppBase() + 0x39D2624))(this);
	}
	template <typename T = void> T OnInc() {
		return ((T (*)(UICustomSlider*))(Il2CppBase() + 0x39D26EC))(this);
	}
	template <typename T = bool> T get_isColliderEnabled() {
		return ((T (*)(UICustomSlider*))(Il2CppBase() + 0x39D27B4))(this);
	}
	template <typename T = void> T OnStart() {
		return ((T (*)(UICustomSlider*))(Il2CppBase() + 0x39D28B0))(this);
	}
	template <typename T = void> T OnValueChangeStart() {
		return ((T (*)(UICustomSlider*))(Il2CppBase() + 0x39D3574))(this);
	}
	template <typename T = void> T OnValueChangeEnd() {
		return ((T (*)(UICustomSlider*))(Il2CppBase() + 0x39D3694))(this);
	}
	template <typename T = void> T OnPressBackground(uintptr_t go, bool isPressed) {
		return ((T (*)(UICustomSlider*, uintptr_t, bool))(Il2CppBase() + 0x39D37B4))(this, go, isPressed);
	}
	template <typename T = void> T OnDragBackground(uintptr_t go, Il2CppVector2 delta) {
		return ((T (*)(UICustomSlider*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x39D3954))(this, go, delta);
	}
	template <typename T = void> T OnPressForeground(uintptr_t go, bool isPressed) {
		return ((T (*)(UICustomSlider*, uintptr_t, bool))(Il2CppBase() + 0x39D3AD4))(this, go, isPressed);
	}
	template <typename T = void> T OnDragForeground(uintptr_t go, Il2CppVector2 delta) {
		return ((T (*)(UICustomSlider*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x39D3D3C))(this, go, delta);
	}
	template <typename T = void> T OnPan(Il2CppVector2 delta) {
		return ((T (*)(UICustomSlider*, Il2CppVector2))(Il2CppBase() + 0x39D3ED0))(this, delta);
	}
	template <typename T = void> T xLuaBaseProxy_OnStart() {
		return ((T (*)(UICustomSlider*))(Il2CppBase() + 0x39D3FC8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnPan(Il2CppVector2 P0) {
		return ((T (*)(UICustomSlider*, Il2CppVector2))(Il2CppBase() + 0x39D3FD0))(this, P0);
	}

};

}
