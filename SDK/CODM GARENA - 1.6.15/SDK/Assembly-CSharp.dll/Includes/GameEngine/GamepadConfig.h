#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class GamepadConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "GamepadConfig"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& SupportedPlatforms() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& JoystickNames() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& JoystickRegex() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& AxisDict() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& KeyDict() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSupportedOnThisPlatform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGamepadType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UseEscape() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasJoystickName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = bool> T IsSupportedOnThisPlatform(Il2CppString* curplatform) {
		return ((T (*)(GamepadConfig*, Il2CppString*))(Il2CppBase() + 0x36DE894))(this, curplatform);
	}
	template <typename T = uintptr_t> T GetGamepadType(Il2CppString* joystickName) {
		return ((T (*)(GamepadConfig*, Il2CppString*))(Il2CppBase() + 0x36DE9CC))(this, joystickName);
	}
	template <typename T = bool> T UseEscape() {
		return ((T (*)(GamepadConfig*))(Il2CppBase() + 0x36DEA74))(this);
	}
	template <typename T = bool> T HasJoystickName(Il2CppString* joystickName) {
		return ((T (*)(GamepadConfig*, Il2CppString*))(Il2CppBase() + 0x36DEB14))(this, joystickName);
	}

};

}
