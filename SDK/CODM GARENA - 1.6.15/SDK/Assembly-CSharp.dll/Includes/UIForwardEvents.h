#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIForwardEvents
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIForwardEvents"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& onHover() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& onPress() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = bool> T& onClick() {
		return *(T*)((uintptr_t)this + 0x12);
	}
	template <typename T = bool> T& onDoubleClick() {
		return *(T*)((uintptr_t)this + 0x13);
	}
	template <typename T = bool> T& onSelect() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& onDrag() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = bool> T& onDrop() {
		return *(T*)((uintptr_t)this + 0x16);
	}
	template <typename T = bool> T& onSubmit() {
		return *(T*)((uintptr_t)this + 0x17);
	}
	template <typename T = bool> T& onScroll() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHover() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDoubleClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSelect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSubmit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnScroll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T OnHover(bool isOver) {
		return ((T (*)(UIForwardEvents*, bool))(Il2CppBase() + 0x39EEB00))(this, isOver);
	}
	template <typename T = void> T OnPress(bool pressed) {
		return ((T (*)(UIForwardEvents*, bool))(Il2CppBase() + 0x39EEC88))(this, pressed);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(UIForwardEvents*))(Il2CppBase() + 0x39EEE10))(this);
	}
	template <typename T = void> T OnDoubleClick() {
		return ((T (*)(UIForwardEvents*))(Il2CppBase() + 0x39EEF54))(this);
	}
	template <typename T = void> T OnSelect(bool selected) {
		return ((T (*)(UIForwardEvents*, bool))(Il2CppBase() + 0x39EF098))(this, selected);
	}
	template <typename T = void> T OnDrag(Il2CppVector2 delta) {
		return ((T (*)(UIForwardEvents*, Il2CppVector2))(Il2CppBase() + 0x39EF220))(this, delta);
	}
	template <typename T = void> T OnDrop(uintptr_t go) {
		return ((T (*)(UIForwardEvents*, uintptr_t))(Il2CppBase() + 0x39EF3B4))(this, go);
	}
	template <typename T = void> T OnSubmit() {
		return ((T (*)(UIForwardEvents*))(Il2CppBase() + 0x39EF510))(this);
	}
	template <typename T = void> T OnScroll(float delta) {
		return ((T (*)(UIForwardEvents*, float))(Il2CppBase() + 0x39EF654))(this, delta);
	}

};

}
