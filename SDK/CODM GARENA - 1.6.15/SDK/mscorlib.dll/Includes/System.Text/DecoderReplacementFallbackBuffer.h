#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text {

class DecoderReplacementFallbackBuffer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Text", "DecoderReplacementFallbackBuffer"));
	}

	template <typename T = bool> T& fallback_assigned() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& current() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& replacement() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_Remaining() {
		return ((T (*)(DecoderReplacementFallbackBuffer*))(Il2CppBase() + 0x4299F6C))(this);
	}
	template <typename T = bool> T Fallback(Il2CppArray<uintptr_t>* bytesUnknown, int32_t index) {
		return ((T (*)(DecoderReplacementFallbackBuffer*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4299FB0))(this, bytesUnknown, index);
	}
	template <typename T = char> T GetNextChar() {
		return ((T (*)(DecoderReplacementFallbackBuffer*))(Il2CppBase() + 0x429A158))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(DecoderReplacementFallbackBuffer*))(Il2CppBase() + 0x429A1B0))(this);
	}

};

}
