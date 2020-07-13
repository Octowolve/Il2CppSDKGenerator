#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class DynamicGI
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "DynamicGI"));
	}


	template <typename T = void> static T UpdateEnvironment() {
		return ((T (*)(void *))(Il2CppBase() + 0x4DA6EA4))(0);
	}

};

}
