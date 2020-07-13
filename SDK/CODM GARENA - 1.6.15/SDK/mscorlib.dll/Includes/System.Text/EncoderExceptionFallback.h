#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text {

class EncoderExceptionFallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Text", "EncoderExceptionFallback"));
	}


	template <typename T = uintptr_t> T CreateFallbackBuffer() {
		return ((T (*)(EncoderExceptionFallback*))(Il2CppBase() + 0x429A26C))(this);
	}
	template <typename T = bool> T Equals(uintptr_t value) {
		return ((T (*)(EncoderExceptionFallback*, uintptr_t))(Il2CppBase() + 0x429A300))(this, value);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(EncoderExceptionFallback*))(Il2CppBase() + 0x429A398))(this);
	}

};

}
