#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuidParser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "GuidParser"));
	}

	template <typename T = Il2CppString*> T& _src() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _length() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _cur() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GuidParser*))(Il2CppBase() + 0x3FE084C))(this);
	}
	template <typename T = bool> T AtEnd() {
		return ((T (*)(GuidParser*))(Il2CppBase() + 0x3FE0888))(this);
	}
	template <typename T = void> T ThrowFormatException() {
		return ((T (*)(GuidParser*))(Il2CppBase() + 0x3FE08A0))(this);
	}
	template <typename T = uint64_t> T ParseHex(int32_t length, bool strictLength) {
		return ((T (*)(GuidParser*, int32_t, bool))(Il2CppBase() + 0x3FE0964))(this, length, strictLength);
	}
	template <typename T = bool> T ParseOptChar(char c) {
		return ((T (*)(GuidParser*, char))(Il2CppBase() + 0x3FE0B18))(this, c);
	}
	template <typename T = void> T ParseChar(char c) {
		return ((T (*)(GuidParser*, char))(Il2CppBase() + 0x3FE0B7C))(this, c);
	}
	template <typename T = uintptr_t> T ParseGuid1() {
		return ((T (*)(GuidParser*))(Il2CppBase() + 0x3FE0B98))(this);
	}
	template <typename T = void> T ParseHexPrefix() {
		return ((T (*)(GuidParser*))(Il2CppBase() + 0x3FE0E20))(this);
	}
	template <typename T = uintptr_t> T ParseGuid2() {
		return ((T (*)(GuidParser*))(Il2CppBase() + 0x3FE0E44))(this);
	}
	template <typename T = uintptr_t> T Parse() {
		return ((T (*)(GuidParser*))(Il2CppBase() + 0x3FDE660))(this);
	}

};

}
