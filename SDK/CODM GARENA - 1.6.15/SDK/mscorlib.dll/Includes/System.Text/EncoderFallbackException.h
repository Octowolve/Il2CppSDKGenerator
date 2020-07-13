#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text {

class EncoderFallbackException
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Text", "EncoderFallbackException"));
	}

	template <typename T = char> T& char_unknown() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = char> T& char_unknown_high() {
		return *(T*)((uintptr_t)this + 0x3A);
	}
	template <typename T = char> T& char_unknown_low() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x40);
	}


};

}
