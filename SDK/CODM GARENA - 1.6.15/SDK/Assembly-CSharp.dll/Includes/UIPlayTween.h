#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIPlayTween
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIPlayTween"));
	}

	template <typename T = uintptr_t> static T& current() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& tweenTarget() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& tweenGroup() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& trigger() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& playDirection() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& resetOnPlay() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& resetIfDisabled() {
		return *(T*)((uintptr_t)this + 0x1D);
	}
	template <typename T = uintptr_t> T& ifDisabledOnPlay() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& disableWhenFinished() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& includeChildren() {
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
	template <typename T = Il2CppArray<uintptr_t>*> T& mTweens() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& mStarted() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& mActive() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& mActivated() {
		return *(T*)((uintptr_t)this + 0x44);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHover() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CustomHoverListener() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDoubleClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSelect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnToggle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetToNormal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIPlayTween*))(Il2CppBase() + 0x2F7E2FC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIPlayTween*))(Il2CppBase() + 0x2F7E44C))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIPlayTween*))(Il2CppBase() + 0x2F7E558))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIPlayTween*))(Il2CppBase() + 0x2F7ED60))(this);
	}
	template <typename T = void> T OnDragOver() {
		return ((T (*)(UIPlayTween*))(Il2CppBase() + 0x2F7EF08))(this);
	}
	template <typename T = void> T OnHover(bool isOver) {
		return ((T (*)(UIPlayTween*, bool))(Il2CppBase() + 0x2F7E944))(this, isOver);
	}
	template <typename T = void> T CustomHoverListener(uintptr_t go, bool isOver) {
		return ((T (*)(UIPlayTween*, uintptr_t, bool))(Il2CppBase() + 0x2F7F574))(this, go, isOver);
	}
	template <typename T = void> T OnDragOut() {
		return ((T (*)(UIPlayTween*))(Il2CppBase() + 0x2F7F970))(this);
	}
	template <typename T = void> T OnPress(bool isPressed) {
		return ((T (*)(UIPlayTween*, bool))(Il2CppBase() + 0x2F7FA44))(this, isPressed);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(UIPlayTween*))(Il2CppBase() + 0x2F7FB5C))(this);
	}
	template <typename T = void> T OnDoubleClick() {
		return ((T (*)(UIPlayTween*))(Il2CppBase() + 0x2F7FC24))(this);
	}
	template <typename T = void> T OnSelect(bool isSelected) {
		return ((T (*)(UIPlayTween*, bool))(Il2CppBase() + 0x2F7FCEC))(this, isSelected);
	}
	template <typename T = void> T OnToggle() {
		return ((T (*)(UIPlayTween*))(Il2CppBase() + 0x2F7FE04))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIPlayTween*))(Il2CppBase() + 0x2F800EC))(this);
	}
	template <typename T = void> T Play(bool forward) {
		return ((T (*)(UIPlayTween*, bool))(Il2CppBase() + 0x2F7EFBC))(this, forward);
	}
	template <typename T = void> T ResetToNormal() {
		return ((T (*)(UIPlayTween*))(Il2CppBase() + 0x2F802A0))(this);
	}
	template <typename T = void> T OnFinished() {
		return ((T (*)(UIPlayTween*))(Il2CppBase() + 0x2F80404))(this);
	}

};

}
