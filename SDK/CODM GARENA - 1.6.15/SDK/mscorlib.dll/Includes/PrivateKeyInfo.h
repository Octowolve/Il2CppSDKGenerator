#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PrivateKeyInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "PrivateKeyInfo"));
	}

	template <typename T = int32_t> T& _version() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& _algorithm() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _key() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _list() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_PrivateKey_1() {
		return ((T (*)(PrivateKeyInfo*))(Il2CppBase() + 0x3FAC734))(this);
	}
	template <typename T = void> T Decode_1(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(PrivateKeyInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3FAC45C))(this, data);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T RemoveLeadingZero_1(Il2CppArray<uintptr_t>* bigInt) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3FAC7D0))(0, bigInt);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T Normalize_1(Il2CppArray<uintptr_t>* bigInt, int32_t length) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x3FAC8D0))(0, bigInt, length);
	}
	template <typename T = uintptr_t> static T DecodeRSA_1(Il2CppArray<uintptr_t>* keypair) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3FAC9D8))(0, keypair);
	}
	template <typename T = uintptr_t> static T DecodeDSA_1(Il2CppArray<uintptr_t>* privateKey, uintptr_t dsaParameters) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3FACE80))(0, privateKey, dsaParameters);
	}

};

}
