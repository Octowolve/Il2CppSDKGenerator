#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class UnityString
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "UnityString"));
	}


	template <typename T = Il2CppString*> static T Format(Il2CppString* fmt, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4D27D00))(0, fmt, args);
	}

};

}
