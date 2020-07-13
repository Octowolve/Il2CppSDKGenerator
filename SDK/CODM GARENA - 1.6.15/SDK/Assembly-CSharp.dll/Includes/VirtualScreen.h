#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VirtualScreen
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VirtualScreen"));
	}

	template <typename T = uintptr_t> static T& On_ScreenResize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& virtualWidth() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& virtualHeight() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> static T& width() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = float> static T& height() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = float> static T& xRatio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = float> static T& yRatio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = float> T& realWidth() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& realHeight() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& oldRealWidth() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& oldRealHeight() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_On_ScreenResize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_On_ScreenResize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ComputeScreen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ComputeVirtualScreen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGuiScaleMatrix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRealRect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = void> static T add_On_ScreenResize(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x488EEF8))(0, value);
	}
	template <typename T = void> static T remove_On_ScreenResize(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x488F1A0))(0, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(VirtualScreen*))(Il2CppBase() + 0x488F448))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(VirtualScreen*))(Il2CppBase() + 0x488F8F8))(this);
	}
	template <typename T = void> T ComputeScreen() {
		return ((T (*)(VirtualScreen*))(Il2CppBase() + 0x488F554))(this);
	}
	template <typename T = void> static T ComputeVirtualScreen() {
		return ((T (*)(void *))(Il2CppBase() + 0x488FB6C))(0);
	}
	template <typename T = void> static T SetGuiScaleMatrix() {
		return ((T (*)(void *))(Il2CppBase() + 0x488FCA4))(0);
	}
	template <typename T = Il2CppRect> static T GetRealRect(Il2CppRect rect) {
		return ((T (*)(void *, Il2CppRect))(Il2CppBase() + 0x488FEBC))(0, rect);
	}

};

}
