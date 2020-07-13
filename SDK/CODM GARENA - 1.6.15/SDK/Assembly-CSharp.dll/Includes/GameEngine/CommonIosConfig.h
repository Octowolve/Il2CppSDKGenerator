#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class CommonIosConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "CommonIosConfig"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasJoystickName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGamepadType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T HasJoystickName(Il2CppString* joystickName) {
		return ((T (*)(CommonIosConfig*, Il2CppString*))(Il2CppBase() + 0x419A750))(this, joystickName);
	}
	template <typename T = uintptr_t> T GetGamepadType(Il2CppString* joystickName) {
		return ((T (*)(CommonIosConfig*, Il2CppString*))(Il2CppBase() + 0x419A7F8))(this, joystickName);
	}
	template <typename T = bool> T xLuaBaseProxy_HasJoystickName(Il2CppString* P0) {
		return ((T (*)(CommonIosConfig*, Il2CppString*))(Il2CppBase() + 0x419A8F8))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetGamepadType(Il2CppString* P0) {
		return ((T (*)(CommonIosConfig*, Il2CppString*))(Il2CppBase() + 0x419A900))(this, P0);
	}

};

}
