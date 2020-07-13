#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Cursor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Cursor"));
	}


	template <typename T = void> static T set_visible(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x4DA4220))(0, value);
	}
	template <typename T = uintptr_t> static T get_lockState() {
		return ((T (*)(void *))(Il2CppBase() + 0x4DA42B8))(0);
	}
	template <typename T = void> static T set_lockState(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DA4348))(0, value);
	}

};

}
