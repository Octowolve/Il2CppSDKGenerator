#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class SystemClock
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "SystemClock"));
	}

	template <typename T = uintptr_t> static T& s_Epoch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T get_now() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E84284))(0);
	}

};

}
