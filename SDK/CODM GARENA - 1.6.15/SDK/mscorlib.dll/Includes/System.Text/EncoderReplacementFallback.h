#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text {

class EncoderReplacementFallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Text", "EncoderReplacementFallback"));
	}

	template <typename T = Il2CppString*> T& replacement() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppString*> T get_DefaultString() {
		return ((T (*)(EncoderReplacementFallback*))(Il2CppBase() + 0x429AA38))(this);
	}
	template <typename T = uintptr_t> T CreateFallbackBuffer() {
		return ((T (*)(EncoderReplacementFallback*))(Il2CppBase() + 0x429AA40))(this);
	}
	template <typename T = bool> T Equals(uintptr_t value) {
		return ((T (*)(EncoderReplacementFallback*, uintptr_t))(Il2CppBase() + 0x429ABA4))(this, value);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(EncoderReplacementFallback*))(Il2CppBase() + 0x429AC88))(this);
	}

};

}
