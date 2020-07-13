#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RootMotion {

class Singleton1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RootMotion", "Singleton`1"));
	}

	template <typename T = uintptr_t> static T& sInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T get_instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x4B71B64))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(Singleton1*))(Il2CppBase() + 0x4B71C0C))(this);
	}

};

}
