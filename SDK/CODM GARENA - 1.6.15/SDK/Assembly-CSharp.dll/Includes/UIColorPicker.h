#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIColorPicker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIColorPicker"));
	}

	template <typename T = uintptr_t> static T& current() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& value() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& selectionWidget() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& onChange() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& mTrans() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& mUITex() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& mTex() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& mCam() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector2> T& mPos() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& mWidth() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& mHeight() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& mRed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& mGreen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& mBlue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Sample() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Select() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Select() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Sample() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = void> T Start() {
		return ((T (*)(UIColorPicker*))(Il2CppBase() + 0x39C76AC))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(UIColorPicker*))(Il2CppBase() + 0x39C88CC))(this);
	}
	template <typename T = void> T OnPress(bool pressed) {
		return ((T (*)(UIColorPicker*, bool))(Il2CppBase() + 0x39C89BC))(this, pressed);
	}
	template <typename T = void> T OnDrag(Il2CppVector2 delta) {
		return ((T (*)(UIColorPicker*, Il2CppVector2))(Il2CppBase() + 0x39C90B4))(this, delta);
	}
	template <typename T = void> T OnPan(Il2CppVector2 delta) {
		return ((T (*)(UIColorPicker*, Il2CppVector2))(Il2CppBase() + 0x39C9190))(this, delta);
	}
	template <typename T = void> T Sample() {
		return ((T (*)(UIColorPicker*))(Il2CppBase() + 0x39C8AC8))(this);
	}
	template <typename T = void> T Select(Il2CppVector2 v) {
		return ((T (*)(UIColorPicker*, Il2CppVector2))(Il2CppBase() + 0x39C92F8))(this, v);
	}
	template <typename T = Il2CppVector2> T Select_1(uintptr_t c) {
		return ((T (*)(UIColorPicker*, uintptr_t))(Il2CppBase() + 0x39C83CC))(this, c);
	}
	template <typename T = uintptr_t> static T Sample_1(float x, float y) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x39C7A24))(0, x, y);
	}

};

}
