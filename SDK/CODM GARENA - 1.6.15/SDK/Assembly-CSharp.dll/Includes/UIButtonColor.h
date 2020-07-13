#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIButtonColor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIButtonColor"));
	}

	template <typename T = uintptr_t> T& tweenTarget() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& hover() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& pressed() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& disabledColor() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mStartingColor() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& mDefaultColor() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& mInitDone() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& mWidget() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& mState() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetDefaultColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CacheDefaultColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHover() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uintptr_t> T get_state() {
		return ((T (*)(UIButtonColor*))(Il2CppBase() + 0x39A9C24))(this);
	}
	template <typename T = void> T set_state(uintptr_t value) {
		return ((T (*)(UIButtonColor*, uintptr_t))(Il2CppBase() + 0x39A9C2C))(this, value);
	}
	template <typename T = uintptr_t> T get_defaultColor() {
		return ((T (*)(UIButtonColor*))(Il2CppBase() + 0x39A9C40))(this);
	}
	template <typename T = void> T set_defaultColor(uintptr_t value) {
		return ((T (*)(UIButtonColor*, uintptr_t))(Il2CppBase() + 0x39A9C80))(this, value);
	}
	template <typename T = bool> T get_isEnabled() {
		return ((T (*)(UIButtonColor*))(Il2CppBase() + 0x39A9CF4))(this);
	}
	template <typename T = void> T set_isEnabled(bool value) {
		return ((T (*)(UIButtonColor*, bool))(Il2CppBase() + 0x39A9CFC))(this, value);
	}
	template <typename T = void> T ResetDefaultColor() {
		return ((T (*)(UIButtonColor*))(Il2CppBase() + 0x39A9D04))(this);
	}
	template <typename T = void> T CacheDefaultColor() {
		return ((T (*)(UIButtonColor*))(Il2CppBase() + 0x39A9DC4))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UIButtonColor*))(Il2CppBase() + 0x39A9E80))(this);
	}
	template <typename T = void> T OnInit() {
		return ((T (*)(UIButtonColor*))(Il2CppBase() + 0x39A7B6C))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIButtonColor*))(Il2CppBase() + 0x39A9720))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIButtonColor*))(Il2CppBase() + 0x39AA0BC))(this);
	}
	template <typename T = void> T OnHover(bool isOver) {
		return ((T (*)(UIButtonColor*, bool))(Il2CppBase() + 0x39AA2A4))(this, isOver);
	}
	template <typename T = void> T OnPress(bool isPressed) {
		return ((T (*)(UIButtonColor*, bool))(Il2CppBase() + 0x39AA410))(this, isPressed);
	}
	template <typename T = void> T OnDragOver() {
		return ((T (*)(UIButtonColor*))(Il2CppBase() + 0x39A8638))(this);
	}
	template <typename T = void> T OnDragOut() {
		return ((T (*)(UIButtonColor*))(Il2CppBase() + 0x39A8958))(this);
	}
	template <typename T = void> T SetState(uintptr_t state, bool instant) {
		return ((T (*)(UIButtonColor*, uintptr_t, bool))(Il2CppBase() + 0x39A94A0))(this, state, instant);
	}
	template <typename T = void> T UpdateColor(bool instant) {
		return ((T (*)(UIButtonColor*, bool))(Il2CppBase() + 0x39AAB04))(this, instant);
	}

};

}
