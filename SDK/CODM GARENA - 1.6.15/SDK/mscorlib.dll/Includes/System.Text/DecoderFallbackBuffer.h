#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text {

class DecoderFallbackBuffer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Text", "DecoderFallbackBuffer"));
	}


	template <typename T = int32_t> T get_Remaining() {
		return ((T (*)(DecoderFallbackBuffer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T Fallback(Il2CppArray<uintptr_t>* bytesUnknown, int32_t index) {
		return ((T (*)(DecoderFallbackBuffer*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x0))(this, bytesUnknown, index);
	}
	template <typename T = char> T GetNextChar() {
		return ((T (*)(DecoderFallbackBuffer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(DecoderFallbackBuffer*))(Il2CppBase() + 0x4299CCC))(this);
	}

};

}
