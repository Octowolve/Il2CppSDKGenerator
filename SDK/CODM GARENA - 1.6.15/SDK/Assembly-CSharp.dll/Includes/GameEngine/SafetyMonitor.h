#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class SafetyMonitor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "SafetyMonitor"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayerLoginLobby() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> static T OnPlayerLoginLobby() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E06024))(0);
	}

};

}
