#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Profiling {

class Profiler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Profiling", "Profiler"));
	}


	template <typename T = bool> static T get_enabled() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AC7340))(0);
	}

};

}
