#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class Ps4Android10Config
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "Ps4Android10Config"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGamepadType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T GetGamepadType(Il2CppString* joystickName) {
		return ((T (*)(Ps4Android10Config*, Il2CppString*))(Il2CppBase() + 0x1DF833C))(this, joystickName);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetGamepadType(Il2CppString* P0) {
		return ((T (*)(Ps4Android10Config*, Il2CppString*))(Il2CppBase() + 0x1DF83E4))(this, P0);
	}

};

}
