#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class ControllerEventProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "ControllerEventProcessor"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitGameEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Init() {
		return ((T (*)(ControllerEventProcessor*))(Il2CppBase() + 0x41A2E54))(this);
	}
	template <typename T = void> T InitGameEvent() {
		return ((T (*)(ControllerEventProcessor*))(Il2CppBase() + 0x41A2F10))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ControllerEventProcessor*))(Il2CppBase() + 0x41A2FA8))(this);
	}

};

}
