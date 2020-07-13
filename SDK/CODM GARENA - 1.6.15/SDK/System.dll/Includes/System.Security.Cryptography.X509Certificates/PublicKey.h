#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography.X509Certificates {

class PublicKey
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Security.Cryptography.X509Certificates", "PublicKey"));
	}

	template <typename T = uintptr_t> T& _key() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _keyValue() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _params() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _oid() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map9() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_EncodedKeyValue() {
		return ((T (*)(PublicKey*))(Il2CppBase() + 0x3E7B368))(this);
	}
	template <typename T = uintptr_t> T get_EncodedParameters() {
		return ((T (*)(PublicKey*))(Il2CppBase() + 0x3E7B370))(this);
	}
	template <typename T = uintptr_t> T get_Key() {
		return ((T (*)(PublicKey*))(Il2CppBase() + 0x3E7B378))(this);
	}
	template <typename T = uintptr_t> T get_Oid() {
		return ((T (*)(PublicKey*))(Il2CppBase() + 0x3E7C0BC))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetUnsignedBigInteger(Il2CppArray<uintptr_t>* integer) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3E7C0C4))(0, integer);
	}
	template <typename T = uintptr_t> static T DecodeDSA(Il2CppArray<uintptr_t>* rawPublicKey, Il2CppArray<uintptr_t>* rawParameters) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3E7BB00))(0, rawPublicKey, rawParameters);
	}
	template <typename T = uintptr_t> static T DecodeRSA(Il2CppArray<uintptr_t>* rawPublicKey) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3E7B674))(0, rawPublicKey);
	}

};

}
