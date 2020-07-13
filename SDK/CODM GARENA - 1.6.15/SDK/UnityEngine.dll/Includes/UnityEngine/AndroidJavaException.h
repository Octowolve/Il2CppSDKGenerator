#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class AndroidJavaException
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "AndroidJavaException"));
	}

	template <typename T = Il2CppString*> T& mJavaStackTrace() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = Il2CppString*> T get_StackTrace() {
		return ((T (*)(AndroidJavaException*))(Il2CppBase() + 0x4683B4C))(this);
	}

};

}
