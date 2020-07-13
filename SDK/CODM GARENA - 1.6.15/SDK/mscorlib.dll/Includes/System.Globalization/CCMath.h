#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Globalization {

class CCMath
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Globalization", "CCMath"));
	}


	template <typename T = int32_t> static T div(int32_t x, int32_t y) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x3FD1648))(0, x, y);
	}
	template <typename T = int32_t> static T mod(int32_t x, int32_t y) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x3FD13D4))(0, x, y);
	}
	template <typename T = int32_t> static T div_mod(uintptr_t* remainder, int32_t x, int32_t y) {
		return ((T (*)(void *, uintptr_t*, int32_t, int32_t))(Il2CppBase() + 0x3FD17A0))(0, remainder, x, y);
	}

};

}
