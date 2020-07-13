#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text {

class EncoderExceptionFallbackBuffer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Text", "EncoderExceptionFallbackBuffer"));
	}


	template <typename T = int32_t> T get_Remaining() {
		return ((T (*)(EncoderExceptionFallbackBuffer*))(Il2CppBase() + 0x429A3A8))(this);
	}
	template <typename T = bool> T Fallback(char charUnknown, int32_t index) {
		return ((T (*)(EncoderExceptionFallbackBuffer*, char, int32_t))(Il2CppBase() + 0x429A3B0))(this, charUnknown, index);
	}
	template <typename T = bool> T Fallback_1(char charUnknownHigh, char charUnknownLow, int32_t index) {
		return ((T (*)(EncoderExceptionFallbackBuffer*, char, char, int32_t))(Il2CppBase() + 0x429A49C))(this, charUnknownHigh, charUnknownLow, index);
	}
	template <typename T = char> T GetNextChar() {
		return ((T (*)(EncoderExceptionFallbackBuffer*))(Il2CppBase() + 0x429A598))(this);
	}

};

}
