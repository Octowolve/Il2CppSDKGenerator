#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIDragScrollView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIDragScrollView"));
	}

	template <typename T = uintptr_t> T& scrollView() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& draggablePanel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mTrans() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& mScroll() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& mAutoFind() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& mStarted() {
		return *(T*)((uintptr_t)this + 0x1D);
	}
	template <typename T = bool> T& mPressed() {
		return *(T*)((uintptr_t)this + 0x1E);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindScrollView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnScroll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(UIDragScrollView*))(Il2CppBase() + 0x39DD840))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIDragScrollView*))(Il2CppBase() + 0x39DDC28))(this);
	}
	template <typename T = void> T FindScrollView() {
		return ((T (*)(UIDragScrollView*))(Il2CppBase() + 0x39DDA14))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIDragScrollView*))(Il2CppBase() + 0x39DDCD4))(this);
	}
	template <typename T = void> T OnPress(bool pressed) {
		return ((T (*)(UIDragScrollView*, bool))(Il2CppBase() + 0x39DDE70))(this, pressed);
	}
	template <typename T = void> T OnDrag(Il2CppVector2 delta) {
		return ((T (*)(UIDragScrollView*, Il2CppVector2))(Il2CppBase() + 0x39DE0F8))(this, delta);
	}
	template <typename T = void> T OnScroll(float delta) {
		return ((T (*)(UIDragScrollView*, float))(Il2CppBase() + 0x39DE27C))(this, delta);
	}
	template <typename T = void> T OnPan(Il2CppVector2 delta) {
		return ((T (*)(UIDragScrollView*, Il2CppVector2))(Il2CppBase() + 0x39DE3EC))(this, delta);
	}

};

}
