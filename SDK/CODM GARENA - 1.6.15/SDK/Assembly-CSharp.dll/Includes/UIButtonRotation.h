#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIButtonRotation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIButtonRotation"));
	}

	template <typename T = uintptr_t> T& tweenTarget() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& hover() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& pressed() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppQuaternion> T& mRot() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& mStarted() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHover() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSelect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(UIButtonRotation*))(Il2CppBase() + 0x39AD1A4))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIButtonRotation*))(Il2CppBase() + 0x39AD308))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIButtonRotation*))(Il2CppBase() + 0x39AD5C8))(this);
	}
	template <typename T = void> T OnPress(bool isPressed) {
		return ((T (*)(UIButtonRotation*, bool))(Il2CppBase() + 0x39AD78C))(this, isPressed);
	}
	template <typename T = void> T OnHover(bool isOver) {
		return ((T (*)(UIButtonRotation*, bool))(Il2CppBase() + 0x39AD40C))(this, isOver);
	}
	template <typename T = void> T OnSelect(bool isSelected) {
		return ((T (*)(UIButtonRotation*, bool))(Il2CppBase() + 0x39ADA24))(this, isSelected);
	}

};

}
