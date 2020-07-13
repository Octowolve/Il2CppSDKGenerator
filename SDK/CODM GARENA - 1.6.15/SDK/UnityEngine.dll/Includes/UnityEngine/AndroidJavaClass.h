#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class AndroidJavaClass
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "AndroidJavaClass"));
	}


	template <typename T = void> T _AndroidJavaClass(Il2CppString* className) {
		return ((T (*)(AndroidJavaClass*, Il2CppString*))(Il2CppBase() + 0x4683628))(this, className);
	}

};

}
