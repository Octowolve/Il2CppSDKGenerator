#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USGameObjectUtils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "WellFired", "USGameObjectUtils"));
	}


	template <typename T = void> static T ToggleObjectActive(uintptr_t GO) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x485D7A4))(0, GO);
	}
	template <typename T = void> static T SetObjectActive(uintptr_t GO, bool active) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x485D808))(0, GO, active);
	}
	template <typename T = bool> static T IsObjectActive(uintptr_t GO) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x485D7DC))(0, GO);
	}

};

}
