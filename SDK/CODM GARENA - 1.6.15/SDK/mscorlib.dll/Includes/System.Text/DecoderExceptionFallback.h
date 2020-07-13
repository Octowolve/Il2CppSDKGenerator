#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text {

class DecoderExceptionFallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Text", "DecoderExceptionFallback"));
	}


	template <typename T = uintptr_t> T CreateFallbackBuffer() {
		return ((T (*)(DecoderExceptionFallback*))(Il2CppBase() + 0x42996A8))(this);
	}
	template <typename T = bool> T Equals(uintptr_t value) {
		return ((T (*)(DecoderExceptionFallback*, uintptr_t))(Il2CppBase() + 0x429973C))(this, value);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(DecoderExceptionFallback*))(Il2CppBase() + 0x42997D4))(this);
	}

};

}
