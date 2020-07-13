#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Cryptography {

class CryptoConvert
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "Mono.Security.Cryptography", "CryptoConvert"));
	}


	template <typename T = int32_t> static T ToInt32LE_1(Il2CppArray<uintptr_t>* bytes, int32_t offset) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x3FA3050))(0, bytes, offset);
	}
	template <typename T = uint32_t> static T ToUInt32LE_1(Il2CppArray<uintptr_t>* bytes, int32_t offset) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x3FA3104))(0, bytes, offset);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetBytesLE(int32_t val) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3FA31B8))(0, val);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T Trim_1(Il2CppArray<uintptr_t>* array) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3FA32D0))(0, array);
	}
	template <typename T = uintptr_t> static T FromCapiPrivateKeyBlob_2(Il2CppArray<uintptr_t>* blob, int32_t offset) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x3FA33F4))(0, blob, offset);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T ToCapiPrivateKeyBlob(uintptr_t rsa) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3FA3AE0))(0, rsa);
	}
	template <typename T = uintptr_t> static T FromCapiPublicKeyBlob(Il2CppArray<uintptr_t>* blob) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3FA400C))(0, blob);
	}
	template <typename T = uintptr_t> static T FromCapiPublicKeyBlob_1(Il2CppArray<uintptr_t>* blob, int32_t offset) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x3FA4014))(0, blob, offset);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T ToCapiPublicKeyBlob(uintptr_t rsa) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3FA4550))(0, rsa);
	}
	template <typename T = uintptr_t> static T FromCapiKeyBlob(Il2CppArray<uintptr_t>* blob) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3FA4880))(0, blob);
	}
	template <typename T = uintptr_t> static T FromCapiKeyBlob_1(Il2CppArray<uintptr_t>* blob, int32_t offset) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x3FA4888))(0, blob, offset);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T ToCapiKeyBlob(uintptr_t rsa, bool includePrivateKey) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x3FA4A48))(0, rsa, includePrivateKey);
	}

};

}
