#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIDragCamera
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIDragCamera"));
	}

	template <typename T = uintptr_t> T& draggableCamera() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnScroll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIDragCamera*))(Il2CppBase() + 0x39D5320))(this);
	}
	template <typename T = void> T OnPress(bool isPressed) {
		return ((T (*)(UIDragCamera*, bool))(Il2CppBase() + 0x39D5488))(this, isPressed);
	}
	template <typename T = void> T OnDrag(Il2CppVector2 delta) {
		return ((T (*)(UIDragCamera*, Il2CppVector2))(Il2CppBase() + 0x39D583C))(this, delta);
	}
	template <typename T = void> T OnScroll(float delta) {
		return ((T (*)(UIDragCamera*, float))(Il2CppBase() + 0x39D5D48))(this, delta);
	}

};

}
