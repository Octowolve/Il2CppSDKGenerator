#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class EndPoint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "EndPoint"));
	}


	template <typename T = uintptr_t> T get_AddressFamily() {
		return ((T (*)(EndPoint*))(Il2CppBase() + 0x42C2F18))(this);
	}
	template <typename T = uintptr_t> T Create(uintptr_t address) {
		return ((T (*)(EndPoint*, uintptr_t))(Il2CppBase() + 0x42C2FBC))(this, address);
	}
	template <typename T = uintptr_t> T Serialize() {
		return ((T (*)(EndPoint*))(Il2CppBase() + 0x42C2FD4))(this);
	}
	template <typename T = uintptr_t> static T NotImplemented() {
		return ((T (*)(void *))(Il2CppBase() + 0x42C2F30))(0);
	}

};

}
