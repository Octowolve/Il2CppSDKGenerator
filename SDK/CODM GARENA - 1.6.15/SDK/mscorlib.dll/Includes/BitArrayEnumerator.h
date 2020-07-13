#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BitArrayEnumerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "BitArrayEnumerator"));
	}

	template <typename T = uintptr_t> T& _bitArray() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& _current() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _index() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _version() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(BitArrayEnumerator*))(Il2CppBase() + 0x363604C))(this);
	}
	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(BitArrayEnumerator*))(Il2CppBase() + 0x3636054))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(BitArrayEnumerator*))(Il2CppBase() + 0x3636194))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(BitArrayEnumerator*))(Il2CppBase() + 0x36362B4))(this);
	}
	template <typename T = void> T checkVersion() {
		return ((T (*)(BitArrayEnumerator*))(Il2CppBase() + 0x36361F4))(this);
	}

};

}
