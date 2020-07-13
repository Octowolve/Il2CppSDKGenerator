#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text {

class EncoderReplacementFallbackBuffer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Text", "EncoderReplacementFallbackBuffer"));
	}

	template <typename T = Il2CppString*> T& replacement() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& current() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& fallback_assigned() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_Remaining() {
		return ((T (*)(EncoderReplacementFallbackBuffer*))(Il2CppBase() + 0x429ACB0))(this);
	}
	template <typename T = bool> T Fallback(char charUnknown, int32_t index) {
		return ((T (*)(EncoderReplacementFallbackBuffer*, char, int32_t))(Il2CppBase() + 0x429ACDC))(this, charUnknown, index);
	}
	template <typename T = bool> T Fallback_1(char charUnknownHigh, char charUnknownLow, int32_t index) {
		return ((T (*)(EncoderReplacementFallbackBuffer*, char, char, int32_t))(Il2CppBase() + 0x429AE34))(this, charUnknownHigh, charUnknownLow, index);
	}
	template <typename T = bool> T Fallback_2(int32_t index) {
		return ((T (*)(EncoderReplacementFallbackBuffer*, int32_t))(Il2CppBase() + 0x429ACE4))(this, index);
	}
	template <typename T = char> T GetNextChar() {
		return ((T (*)(EncoderReplacementFallbackBuffer*))(Il2CppBase() + 0x429AE3C))(this);
	}

};

}
