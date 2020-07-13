#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class ZombieUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "ZombieUtil"));
	}

	template <typename T = bool> T& HasOpening() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& OpeningScreen() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T get_HasOpening() {
		return ((T (*)(ZombieUtil*))(Il2CppBase() + 0x4069ECC))(this);
	}
	template <typename T = void> T set_HasOpening(bool value) {
		return ((T (*)(ZombieUtil*, bool))(Il2CppBase() + 0x4069038))(this, value);
	}
	template <typename T = uintptr_t> T get_OpeningScreen() {
		return ((T (*)(ZombieUtil*))(Il2CppBase() + 0x4069ED4))(this);
	}
	template <typename T = void> T set_OpeningScreen(uintptr_t value) {
		return ((T (*)(ZombieUtil*, uintptr_t))(Il2CppBase() + 0x4069040))(this, value);
	}

};

}
