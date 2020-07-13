#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Cryptography {

class CryptoConvert
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Cryptography", "CryptoConvert"));
	}


	template <typename T = int32_t> static T ToInt32LE(Il2CppArray<uintptr_t>* bytes, int32_t offset) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x47CCFF0))(0, bytes, offset);
	}
	template <typename T = uint32_t> static T ToUInt32LE(Il2CppArray<uintptr_t>* bytes, int32_t offset) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x47CD0A4))(0, bytes, offset);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T Trim(Il2CppArray<uintptr_t>* array) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47CD158))(0, array);
	}
	template <typename T = uintptr_t> static T FromCapiPrivateKeyBlob(Il2CppArray<uintptr_t>* blob) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47CBA70))(0, blob);
	}
	template <typename T = uintptr_t> static T FromCapiPrivateKeyBlob_1(Il2CppArray<uintptr_t>* blob, int32_t offset) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x47CD27C))(0, blob, offset);
	}
	template <typename T = Il2CppString*> static T ToHex(Il2CppArray<uintptr_t>* input) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47CDB7C))(0, input);
	}
	template <typename T = unsigned char> static T FromHexChar(char c) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x47CDD10))(0, c);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T FromHex(Il2CppString* hex) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x47CDE0C))(0, hex);
	}

};

}
