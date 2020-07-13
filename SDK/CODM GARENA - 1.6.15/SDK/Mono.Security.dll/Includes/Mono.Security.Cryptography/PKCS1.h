#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Cryptography {

class PKCS1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Cryptography", "PKCS1"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& emptySHA1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& emptySHA256() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& emptySHA384() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& emptySHA512() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> static T Compare(Il2CppArray<uintptr_t>* array1, Il2CppArray<uintptr_t>* array2) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47D1630))(0, array1, array2);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T I2OSP(Il2CppArray<uintptr_t>* x, int32_t size) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x47D16CC))(0, x, size);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T OS2IP(Il2CppArray<uintptr_t>* x) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47D17B0))(0, x);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T RSASP1(uintptr_t rsa, Il2CppArray<uintptr_t>* m) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47D18E4))(0, rsa, m);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T RSAVP1(uintptr_t rsa, Il2CppArray<uintptr_t>* s) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47D1920))(0, rsa, s);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T Sign_v15(uintptr_t rsa, uintptr_t hash, Il2CppArray<uintptr_t>* hashValue) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47D195C))(0, rsa, hash, hashValue);
	}
	template <typename T = bool> static T Verify_v15(uintptr_t rsa, uintptr_t hash, Il2CppArray<uintptr_t>* hashValue, Il2CppArray<uintptr_t>* signature) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47D1EA0))(0, rsa, hash, hashValue, signature);
	}
	template <typename T = bool> static T Verify_v15_1(uintptr_t rsa, uintptr_t hash, Il2CppArray<uintptr_t>* hashValue, Il2CppArray<uintptr_t>* signature, bool tryNonStandardEncoding) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x47D1F68))(0, rsa, hash, hashValue, signature, tryNonStandardEncoding);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T Encode_v15(uintptr_t hash, Il2CppArray<uintptr_t>* hashValue, int32_t emLength) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x47D1A64))(0, hash, hashValue, emLength);
	}

};

}
