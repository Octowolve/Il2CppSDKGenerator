#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIPlayAnimation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIPlayAnimation"));
	}

	template <typename T = uintptr_t> static T& current() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& clipName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& trigger() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& playDirection() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& resetOnPlay() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& clearSelection() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = uintptr_t> T& ifDisabledOnPlay() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& disableWhenFinished() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& onFinished() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& eventReceiver() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& callWhenFinished() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& mStarted() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& mActivated() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = bool> T& dragHighlight() {
		return *(T*)((uintptr_t)this + 0x3A);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHover() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDoubleClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSelect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnToggle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayForward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayReverse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = bool> T get_dualState() {
		return ((T (*)(UIPlayAnimation*))(Il2CppBase() + 0x2F7B1F8))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UIPlayAnimation*))(Il2CppBase() + 0x2F7B210))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIPlayAnimation*))(Il2CppBase() + 0x2F7B414))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIPlayAnimation*))(Il2CppBase() + 0x2F7B740))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIPlayAnimation*))(Il2CppBase() + 0x2F7BC9C))(this);
	}
	template <typename T = void> T OnHover(bool isOver) {
		return ((T (*)(UIPlayAnimation*, bool))(Il2CppBase() + 0x2F7BB5C))(this, isOver);
	}
	template <typename T = void> T OnPress(bool isPressed) {
		return ((T (*)(UIPlayAnimation*, bool))(Il2CppBase() + 0x2F7C320))(this, isPressed);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(UIPlayAnimation*))(Il2CppBase() + 0x2F7C4FC))(this);
	}
	template <typename T = void> T OnDoubleClick() {
		return ((T (*)(UIPlayAnimation*))(Il2CppBase() + 0x2F7C694))(this);
	}
	template <typename T = void> T OnSelect(bool isSelected) {
		return ((T (*)(UIPlayAnimation*, bool))(Il2CppBase() + 0x2F7C82C))(this, isSelected);
	}
	template <typename T = void> T OnToggle() {
		return ((T (*)(UIPlayAnimation*))(Il2CppBase() + 0x2F7C96C))(this);
	}
	template <typename T = void> T OnDragOver() {
		return ((T (*)(UIPlayAnimation*))(Il2CppBase() + 0x2F7CCB8))(this);
	}
	template <typename T = void> T OnDragOut() {
		return ((T (*)(UIPlayAnimation*))(Il2CppBase() + 0x2F7CEA4))(this);
	}
	template <typename T = void> T OnDrop(uintptr_t go) {
		return ((T (*)(UIPlayAnimation*, uintptr_t))(Il2CppBase() + 0x2F7D054))(this, go);
	}
	template <typename T = void> T Play(bool forward) {
		return ((T (*)(UIPlayAnimation*, bool))(Il2CppBase() + 0x2F7D228))(this, forward);
	}
	template <typename T = void> T Play_1(bool forward, bool onlyIfDifferent) {
		return ((T (*)(UIPlayAnimation*, bool, bool))(Il2CppBase() + 0x2F7BE74))(this, forward, onlyIfDifferent);
	}
	template <typename T = void> T PlayForward() {
		return ((T (*)(UIPlayAnimation*))(Il2CppBase() + 0x2F7D30C))(this);
	}
	template <typename T = void> T PlayReverse() {
		return ((T (*)(UIPlayAnimation*))(Il2CppBase() + 0x2F7D3E4))(this);
	}
	template <typename T = void> T OnFinished() {
		return ((T (*)(UIPlayAnimation*))(Il2CppBase() + 0x2F7D4BC))(this);
	}

};

}
