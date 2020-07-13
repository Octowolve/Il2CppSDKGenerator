#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text {

class DecoderExceptionFallbackBuffer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Text", "DecoderExceptionFallbackBuffer"));
	}


	template <typename T = int32_t> T get_Remaining() {
		return ((T (*)(DecoderExceptionFallbackBuffer*))(Il2CppBase() + 0x42997E4))(this);
	}
	template <typename T = bool> T Fallback(Il2CppArray<uintptr_t>* bytesUnknown, int32_t index) {
		return ((T (*)(DecoderExceptionFallbackBuffer*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x42997EC))(this, bytesUnknown, index);
	}
	template <typename T = char> T GetNextChar() {
		return ((T (*)(DecoderExceptionFallbackBuffer*))(Il2CppBase() + 0x42998D4))(this);
	}

};

}
