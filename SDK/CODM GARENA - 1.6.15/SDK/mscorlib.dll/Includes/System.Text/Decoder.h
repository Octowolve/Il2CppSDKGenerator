#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text {

class Decoder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Text", "Decoder"));
	}

	template <typename T = uintptr_t> T& fallback() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& fallback_buffer() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T set_Fallback(uintptr_t value) {
		return ((T (*)(Decoder*, uintptr_t))(Il2CppBase() + 0x4299504))(this, value);
	}
	template <typename T = uintptr_t> T get_FallbackBuffer() {
		return ((T (*)(Decoder*))(Il2CppBase() + 0x42995B4))(this);
	}
	template <typename T = int32_t> T GetChars(Il2CppArray<uintptr_t>* bytes, int32_t byteIndex, int32_t byteCount, Il2CppArray<uintptr_t>* chars, int32_t charIndex) {
		return ((T (*)(Decoder*, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x0))(this, bytes, byteIndex, byteCount, chars, charIndex);
	}

};

}
