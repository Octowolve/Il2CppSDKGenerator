#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class RSAOAEPKeyExchangeFormatter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "RSAOAEPKeyExchangeFormatter"));
	}

	template <typename T = uintptr_t> T& rsa() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& random() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T CreateKeyExchange(Il2CppArray<uintptr_t>* rgbData) {
		return ((T (*)(RSAOAEPKeyExchangeFormatter*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4272620))(this, rgbData);
	}
	template <typename T = void> T SetKey(uintptr_t key) {
		return ((T (*)(RSAOAEPKeyExchangeFormatter*, uintptr_t))(Il2CppBase() + 0x42727F8))(this, key);
	}

};

}
