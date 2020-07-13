#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class ScriptableObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "ScriptableObject"));
	}


	template <typename T = void> static T Internal_CreateScriptableObject(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E7E3D4))(0, self);
	}
	template <typename T = uintptr_t> static T CreateInstance(Il2CppString* className) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4E7E46C))(0, className);
	}
	template <typename T = uintptr_t> static T CreateInstance_1(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E7E504))(0, type);
	}
	template <typename T = uintptr_t> static T CreateInstanceFromType(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E7E508))(0, type);
	}
	template <typename T = uintptr_t> static T CreateInstance_2() {
		return ((T (*)(void *))(Il2CppBase() + 0x339559C))(0);
	}

};

}
