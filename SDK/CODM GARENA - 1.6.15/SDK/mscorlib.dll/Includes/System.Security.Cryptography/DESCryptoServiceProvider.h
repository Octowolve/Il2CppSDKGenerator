#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class DESCryptoServiceProvider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "DESCryptoServiceProvider"));
	}


	template <typename T = uintptr_t> T CreateDecryptor(Il2CppArray<uintptr_t>* rgbKey, Il2CppArray<uintptr_t>* rgbIV) {
		return ((T (*)(DESCryptoServiceProvider*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x303B2C0))(this, rgbKey, rgbIV);
	}
	template <typename T = uintptr_t> T CreateEncryptor(Il2CppArray<uintptr_t>* rgbKey, Il2CppArray<uintptr_t>* rgbIV) {
		return ((T (*)(DESCryptoServiceProvider*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x303B688))(this, rgbKey, rgbIV);
	}
	template <typename T = void> T GenerateIV() {
		return ((T (*)(DESCryptoServiceProvider*))(Il2CppBase() + 0x303B734))(this);
	}
	template <typename T = void> T GenerateKey() {
		return ((T (*)(DESCryptoServiceProvider*))(Il2CppBase() + 0x303B7F8))(this);
	}

};

}
