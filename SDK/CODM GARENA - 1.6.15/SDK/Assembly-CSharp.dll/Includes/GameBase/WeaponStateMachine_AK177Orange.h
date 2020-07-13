#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponStateMachineAK177Orange
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponStateMachine_AK177Orange"));
	}

	template <typename T = int32_t> static T& WatchTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& IdleWaitTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T InitializeAllStates() {
		return ((T (*)(WeaponStateMachineAK177Orange*))(Il2CppBase() + 0x457FB10))(this);
	}
	template <typename T = bool> static T CheckWatch(uintptr_t waitTime, float DeltaTime) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x4580244))(0, waitTime, DeltaTime);
	}

};

}
