#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CEasyJoystickTemplate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "C_EasyJoystickTemplate"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_JoystickDoubleTap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_JoystickTap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_JoystickTouchUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_JoystickMoveEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_JoystickMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_JoystickMoveStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_JoystickTouchStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(CEasyJoystickTemplate*))(Il2CppBase() + 0x5311048))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(CEasyJoystickTemplate*))(Il2CppBase() + 0x53112E8))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(CEasyJoystickTemplate*))(Il2CppBase() + 0x5311588))(this);
	}
	template <typename T = void> T On_JoystickDoubleTap(uintptr_t move) {
		return ((T (*)(CEasyJoystickTemplate*, uintptr_t))(Il2CppBase() + 0x5311828))(this, move);
	}
	template <typename T = void> T On_JoystickTap(uintptr_t move) {
		return ((T (*)(CEasyJoystickTemplate*, uintptr_t))(Il2CppBase() + 0x53118C8))(this, move);
	}
	template <typename T = void> T On_JoystickTouchUp(uintptr_t move) {
		return ((T (*)(CEasyJoystickTemplate*, uintptr_t))(Il2CppBase() + 0x5311968))(this, move);
	}
	template <typename T = void> T On_JoystickMoveEnd(uintptr_t move) {
		return ((T (*)(CEasyJoystickTemplate*, uintptr_t))(Il2CppBase() + 0x5311A08))(this, move);
	}
	template <typename T = void> T On_JoystickMove(uintptr_t move) {
		return ((T (*)(CEasyJoystickTemplate*, uintptr_t))(Il2CppBase() + 0x5311AA8))(this, move);
	}
	template <typename T = void> T On_JoystickMoveStart(uintptr_t move) {
		return ((T (*)(CEasyJoystickTemplate*, uintptr_t))(Il2CppBase() + 0x5311B48))(this, move);
	}
	template <typename T = void> T On_JoystickTouchStart(uintptr_t move) {
		return ((T (*)(CEasyJoystickTemplate*, uintptr_t))(Il2CppBase() + 0x5311BE8))(this, move);
	}

};

}
