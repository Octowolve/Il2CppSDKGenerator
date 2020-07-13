#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text {

class EncoderFallbackBuffer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Text", "EncoderFallbackBuffer"));
	}


	template <typename T = int32_t> T get_Remaining() {
		return ((T (*)(EncoderFallbackBuffer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T Fallback(char charUnknown, int32_t index) {
		return ((T (*)(EncoderFallbackBuffer*, char, int32_t))(Il2CppBase() + 0x0))(this, charUnknown, index);
	}
	template <typename T = bool> T Fallback_1(char charUnknownHigh, char charUnknownLow, int32_t index) {
		return ((T (*)(EncoderFallbackBuffer*, char, char, int32_t))(Il2CppBase() + 0x0))(this, charUnknownHigh, charUnknownLow, index);
	}
	template <typename T = char> T GetNextChar() {
		return ((T (*)(EncoderFallbackBuffer*))(Il2CppBase() + 0x0))(this);
	}

};

}
