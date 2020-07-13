#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UISquareDragScrollView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UISquareDragScrollView"));
	}

	template <typename T = uintptr_t> T& horizontalScrollView() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& verticalScrollView() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& mPressed() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& mDirection() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T OnDisable() {
		return ((T (*)(UISquareDragScrollView*))(Il2CppBase() + 0x2FAC814))(this);
	}
	template <typename T = void> T OnPress(bool pressed) {
		return ((T (*)(UISquareDragScrollView*, bool))(Il2CppBase() + 0x2FACA84))(this, pressed);
	}
	template <typename T = void> T OnDrag(Il2CppVector2 delta) {
		return ((T (*)(UISquareDragScrollView*, Il2CppVector2))(Il2CppBase() + 0x2FACC80))(this, delta);
	}

};

}
