#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class RC2CryptoServiceProvider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "RC2CryptoServiceProvider"));
	}


	template <typename T = int32_t> T get_EffectiveKeySize() {
		return ((T (*)(RC2CryptoServiceProvider*))(Il2CppBase() + 0x3046A38))(this);
	}
	template <typename T = uintptr_t> T CreateDecryptor(Il2CppArray<uintptr_t>* rgbKey, Il2CppArray<uintptr_t>* rgbIV) {
		return ((T (*)(RC2CryptoServiceProvider*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3046A4C))(this, rgbKey, rgbIV);
	}
	template <typename T = uintptr_t> T CreateEncryptor(Il2CppArray<uintptr_t>* rgbKey, Il2CppArray<uintptr_t>* rgbIV) {
		return ((T (*)(RC2CryptoServiceProvider*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x30473D0))(this, rgbKey, rgbIV);
	}
	template <typename T = void> T GenerateIV() {
		return ((T (*)(RC2CryptoServiceProvider*))(Il2CppBase() + 0x304747C))(this);
	}
	template <typename T = void> T GenerateKey() {
		return ((T (*)(RC2CryptoServiceProvider*))(Il2CppBase() + 0x30474A4))(this);
	}

};

}
