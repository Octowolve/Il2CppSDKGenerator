#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text {

class DecoderReplacementFallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Text", "DecoderReplacementFallback"));
	}

	template <typename T = Il2CppString*> T& replacement() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppString*> T get_DefaultString() {
		return ((T (*)(DecoderReplacementFallback*))(Il2CppBase() + 0x4299CF4))(this);
	}
	template <typename T = uintptr_t> T CreateFallbackBuffer() {
		return ((T (*)(DecoderReplacementFallback*))(Il2CppBase() + 0x4299CFC))(this);
	}
	template <typename T = bool> T Equals(uintptr_t value) {
		return ((T (*)(DecoderReplacementFallback*, uintptr_t))(Il2CppBase() + 0x4299E60))(this, value);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(DecoderReplacementFallback*))(Il2CppBase() + 0x4299F44))(this);
	}

};

}
