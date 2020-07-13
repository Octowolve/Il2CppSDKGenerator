#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class RemoteSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "RemoteSettings"));
	}

	template <typename T = uintptr_t> static T& Updated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T CallOnUpdate() {
		return ((T (*)(void *))(Il2CppBase() + 0x4ACFB34))(0);
	}

};

}
