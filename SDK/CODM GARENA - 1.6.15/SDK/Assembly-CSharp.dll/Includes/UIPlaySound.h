#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIPlaySound
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIPlaySound"));
	}

	template <typename T = uintptr_t> T& audioClip() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& trigger() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& volume() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& pitch() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& mIsOver() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHover() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSelect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = bool> T get_canPlay() {
		return ((T (*)(UIPlaySound*))(Il2CppBase() + 0x2F7D888))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIPlaySound*))(Il2CppBase() + 0x2F7D9A4))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIPlaySound*))(Il2CppBase() + 0x2F7DAC4))(this);
	}
	template <typename T = void> T OnHover(bool isOver) {
		return ((T (*)(UIPlaySound*, bool))(Il2CppBase() + 0x2F7DBE4))(this, isOver);
	}
	template <typename T = void> T OnPress(bool isPressed) {
		return ((T (*)(UIPlaySound*, bool))(Il2CppBase() + 0x2F7DD54))(this, isPressed);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(UIPlaySound*))(Il2CppBase() + 0x2F7DEC4))(this);
	}
	template <typename T = void> T OnSelect(bool isSelected) {
		return ((T (*)(UIPlaySound*, bool))(Il2CppBase() + 0x2F7DFF0))(this, isSelected);
	}
	template <typename T = void> T Play() {
		return ((T (*)(UIPlaySound*))(Il2CppBase() + 0x2F7E108))(this);
	}

};

}
