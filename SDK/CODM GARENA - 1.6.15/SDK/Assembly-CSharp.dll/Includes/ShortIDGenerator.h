#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShortIDGenerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShortIDGenerator"));
	}

	template <typename T = uint32_t> static T& s_prime32() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> static T& s_offsetBasis32() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = unsigned char> static T& s_hashSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> static T& s_mask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = unsigned char> static T get_HashSize() {
		return ((T (*)(void *))(Il2CppBase() + 0x22B34EC))(0);
	}
	template <typename T = void> static T set_HashSize(unsigned char value) {
		return ((T (*)(void *, unsigned char))(Il2CppBase() + 0x22B3400))(0, value);
	}
	template <typename T = uint32_t> static T Compute(Il2CppString* in_name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x22AF574))(0, in_name);
	}

};

}
