#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text {

class DecoderFallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Text", "DecoderFallback"));
	}

	template <typename T = uintptr_t> static T& exception_fallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& replacement_fallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& standard_safe_fallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> static T get_ExceptionFallback() {
		return ((T (*)(void *))(Il2CppBase() + 0x4299ABC))(0);
	}
	template <typename T = uintptr_t> static T get_ReplacementFallback() {
		return ((T (*)(void *))(Il2CppBase() + 0x4299B6C))(0);
	}
	template <typename T = uintptr_t> static T get_StandardSafeFallback() {
		return ((T (*)(void *))(Il2CppBase() + 0x4299C1C))(0);
	}
	template <typename T = uintptr_t> T CreateFallbackBuffer() {
		return ((T (*)(DecoderFallback*))(Il2CppBase() + 0x0))(this);
	}

};

}
