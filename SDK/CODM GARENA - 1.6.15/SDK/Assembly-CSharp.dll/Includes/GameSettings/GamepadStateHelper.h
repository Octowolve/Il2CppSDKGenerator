#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class GamepadStateHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "GamepadStateHelper"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyGamepadStateChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckGamepadFirstConnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> static T OnNotifyGamepadStateChange(uintptr_t msg) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x25533D0))(0, msg);
	}
	template <typename T = void> static T CheckGamepadFirstConnect() {
		return ((T (*)(void *))(Il2CppBase() + 0x2553888))(0);
	}

};

}
