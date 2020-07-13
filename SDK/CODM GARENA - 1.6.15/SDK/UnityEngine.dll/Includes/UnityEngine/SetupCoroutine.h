#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class SetupCoroutine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "SetupCoroutine"));
	}


	template <typename T = void> static T InvokeMoveNext(uintptr_t enumerator, uintptr_t returnValueAddress) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E806D0))(0, enumerator, returnValueAddress);
	}
	template <typename T = uintptr_t> static T InvokeMember(uintptr_t behaviour, Il2CppString* name, uintptr_t variable) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4E80878))(0, behaviour, name, variable);
	}

};

}
