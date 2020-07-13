#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class TripleDESCryptoServiceProvider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "TripleDESCryptoServiceProvider"));
	}


	template <typename T = void> T GenerateIV() {
		return ((T (*)(TripleDESCryptoServiceProvider*))(Il2CppBase() + 0x427BA7C))(this);
	}
	template <typename T = void> T GenerateKey() {
		return ((T (*)(TripleDESCryptoServiceProvider*))(Il2CppBase() + 0x427BAA4))(this);
	}
	template <typename T = uintptr_t> T CreateDecryptor(Il2CppArray<uintptr_t>* rgbKey, Il2CppArray<uintptr_t>* rgbIV) {
		return ((T (*)(TripleDESCryptoServiceProvider*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x427BBBC))(this, rgbKey, rgbIV);
	}
	template <typename T = uintptr_t> T CreateEncryptor(Il2CppArray<uintptr_t>* rgbKey, Il2CppArray<uintptr_t>* rgbIV) {
		return ((T (*)(TripleDESCryptoServiceProvider*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x427C02C))(this, rgbKey, rgbIV);
	}

};

}
