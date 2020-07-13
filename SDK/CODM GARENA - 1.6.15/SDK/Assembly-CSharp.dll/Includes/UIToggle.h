#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIToggle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIToggle"));
	}

	template <typename T = void*> static T& list() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& current() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> T& group() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& activeSprite() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& inactiveSprite() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& invertSpriteState() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& activeAnimation() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& tween() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& tween_2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& startsActive() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& instantTween() {
		return *(T*)((uintptr_t)this + 0x2D);
	}
	template <typename T = bool> T& optionCanBeNone() {
		return *(T*)((uintptr_t)this + 0x2E);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& onChange() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& validator() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& checkSprite() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& checkAnimation() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& eventReceiver() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& functionName() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& startsChecked() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& mIsActive() {
		return *(T*)((uintptr_t)this + 0x49);
	}
	template <typename T = bool> T& mStarted() {
		return *(T*)((uintptr_t)this + 0x4A);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetActiveToggle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceSet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Set() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = bool> T get_value() {
		return ((T (*)(UIToggle*))(Il2CppBase() + 0x2F7CC98))(this);
	}
	template <typename T = void> T set_value(bool value) {
		return ((T (*)(UIToggle*, bool))(Il2CppBase() + 0x2F9B998))(this, value);
	}
	template <typename T = bool> T get_isColliderEnabled() {
		return ((T (*)(UIToggle*))(Il2CppBase() + 0x2FB5AD4))(this);
	}
	template <typename T = bool> T get_isChecked() {
		return ((T (*)(UIToggle*))(Il2CppBase() + 0x2FB5BD0))(this);
	}
	template <typename T = void> T set_isChecked(bool value) {
		return ((T (*)(UIToggle*, bool))(Il2CppBase() + 0x2FB5BF0))(this, value);
	}
	template <typename T = uintptr_t> static T GetActiveToggle(int32_t group) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2FB5BF4))(0, group);
	}
	template <typename T = void> T ForceSet(bool state) {
		return ((T (*)(UIToggle*, bool))(Il2CppBase() + 0x2FB5E2C))(this, state);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIToggle*))(Il2CppBase() + 0x2FB61DC))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIToggle*))(Il2CppBase() + 0x2FB630C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIToggle*))(Il2CppBase() + 0x2FB643C))(this);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(UIToggle*))(Il2CppBase() + 0x2FB67FC))(this);
	}
	template <typename T = void> T Set(bool state, bool notify, bool ignoreValidator) {
		return ((T (*)(UIToggle*, bool, bool, bool))(Il2CppBase() + 0x2FB4AE4))(this, state, notify, ignoreValidator);
	}

};

}
