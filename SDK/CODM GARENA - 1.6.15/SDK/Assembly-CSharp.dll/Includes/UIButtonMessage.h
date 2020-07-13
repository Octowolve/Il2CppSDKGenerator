#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIButtonMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIButtonMessage"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& functionName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& trigger() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& includeChildren() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& mStarted() {
		return *(T*)((uintptr_t)this + 0x19);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnHover() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSelect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDoubleClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Send() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T Start() {
		return ((T (*)(UIButtonMessage*))(Il2CppBase() + 0x39AB558))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIButtonMessage*))(Il2CppBase() + 0x39AB5FC))(this);
	}
	template <typename T = void> T OnHover(bool isOver) {
		return ((T (*)(UIButtonMessage*, bool))(Il2CppBase() + 0x39AB700))(this, isOver);
	}
	template <typename T = void> T OnPress(bool isPressed) {
		return ((T (*)(UIButtonMessage*, bool))(Il2CppBase() + 0x39ABA64))(this, isPressed);
	}
	template <typename T = void> T OnSelect(bool isSelected) {
		return ((T (*)(UIButtonMessage*, bool))(Il2CppBase() + 0x39ABB48))(this, isSelected);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(UIButtonMessage*))(Il2CppBase() + 0x39ABC5C))(this);
	}
	template <typename T = void> T OnDoubleClick() {
		return ((T (*)(UIButtonMessage*))(Il2CppBase() + 0x39ABD20))(this);
	}
	template <typename T = void> T Send() {
		return ((T (*)(UIButtonMessage*))(Il2CppBase() + 0x39AB7E4))(this);
	}

};

}
