#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Diagnostics {

class Trace
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Diagnostics", "Trace"));
	}


	template <typename T = bool> static T get_AutoFlush() {
		return ((T (*)(void *))(Il2CppBase() + 0x42AFF7C))(0);
	}
	template <typename T = uintptr_t> static T get_Listeners() {
		return ((T (*)(void *))(Il2CppBase() + 0x42B00C8))(0);
	}
	template <typename T = uintptr_t> static T get_CorrelationManager() {
		return ((T (*)(void *))(Il2CppBase() + 0x42B0214))(0);
	}

};

}
