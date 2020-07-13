#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Cryptography {

class PKCS1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "Mono.Security.Cryptography", "PKCS1"));
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

	template <typename T = bool> static T Compare_1(Il2CppArray<uintptr_t>* array1, Il2CppArray<uintptr_t>* array2) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3FAA1EC))(0, array1, array2);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T xor(Il2CppArray<uintptr_t>* array1, Il2CppArray<uintptr_t>* array2) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3FAA288))(0, array1, array2);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetEmptyHash(uintptr_t hash) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3FAA3D8))(0, hash);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T I2OSP_1(int32_t x, int32_t size) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x3FAA6A8))(0, x, size);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T I2OSP_2(Il2CppArray<uintptr_t>* x, int32_t size) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x3FAA798))(0, x, size);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T OS2IP_1(Il2CppArray<uintptr_t>* x) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3FAA87C))(0, x);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T RSAEP(uintptr_t rsa, Il2CppArray<uintptr_t>* m) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3FAA9B0))(0, rsa, m);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T RSADP(uintptr_t rsa, Il2CppArray<uintptr_t>* c) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3FAA9EC))(0, rsa, c);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T RSASP1_1(uintptr_t rsa, Il2CppArray<uintptr_t>* m) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3FAAA28))(0, rsa, m);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T RSAVP1_1(uintptr_t rsa, Il2CppArray<uintptr_t>* s) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3FAAA64))(0, rsa, s);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T Encrypt_OAEP(uintptr_t rsa, uintptr_t hash, uintptr_t rng, Il2CppArray<uintptr_t>* M) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3FAAAA0))(0, rsa, hash, rng, M);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T Encrypt_v15(uintptr_t rsa, uintptr_t rng, Il2CppArray<uintptr_t>* M) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3FAB11C))(0, rsa, rng, M);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T Decrypt_v15(uintptr_t rsa, Il2CppArray<uintptr_t>* C) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3FAB388))(0, rsa, C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T Sign_v15_1(uintptr_t rsa, uintptr_t hash, Il2CppArray<uintptr_t>* hashValue) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3FAB604))(0, rsa, hash, hashValue);
	}
	template <typename T = bool> static T Verify_v15_2(uintptr_t rsa, uintptr_t hash, Il2CppArray<uintptr_t>* hashValue, Il2CppArray<uintptr_t>* signature) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3FABB48))(0, rsa, hash, hashValue, signature);
	}
	template <typename T = bool> static T Verify_v15_3(uintptr_t rsa, uintptr_t hash, Il2CppArray<uintptr_t>* hashValue, Il2CppArray<uintptr_t>* signature, bool tryNonStandardEncoding) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x3FABC10))(0, rsa, hash, hashValue, signature, tryNonStandardEncoding);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T Encode_v15_1(uintptr_t hash, Il2CppArray<uintptr_t>* hashValue, int32_t emLength) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x3FAB70C))(0, hash, hashValue, emLength);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T MGF1(uintptr_t hash, Il2CppArray<uintptr_t>* mgfSeed, int32_t maskLen) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x3FAAE50))(0, hash, mgfSeed, maskLen);
	}

};

}
