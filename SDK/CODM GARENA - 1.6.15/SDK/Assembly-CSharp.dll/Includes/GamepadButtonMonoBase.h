#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GamepadButtonMonoBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GamepadButtonMonoBase"));
	}

	template <typename T = uintptr_t> T& GamepadVisibleObj() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGamepadVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateButtonSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Start() {
		return ((T (*)(GamepadButtonMonoBase*))(Il2CppBase() + 0x255094C))(this);
	}
	template <typename T = void> T UpdateGamepadVisible(bool v) {
		return ((T (*)(GamepadButtonMonoBase*, bool))(Il2CppBase() + 0x254F1F4))(this, v);
	}
	template <typename T = void> static T UpdateButtonSprite(uintptr_t sprite, uintptr_t buttonType, bool hold) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x254CEE0))(0, sprite, buttonType, hold);
	}

};

}
