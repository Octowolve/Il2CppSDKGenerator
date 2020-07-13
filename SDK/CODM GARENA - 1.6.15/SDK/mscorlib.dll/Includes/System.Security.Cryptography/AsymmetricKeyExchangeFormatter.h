#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class AsymmetricKeyExchangeFormatter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "AsymmetricKeyExchangeFormatter"));
	}


	template <typename T = Il2CppArray<uintptr_t>*> T CreateKeyExchange(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(AsymmetricKeyExchangeFormatter*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, data);
	}
	template <typename T = void> T SetKey(uintptr_t key) {
		return ((T (*)(AsymmetricKeyExchangeFormatter*, uintptr_t))(Il2CppBase() + 0x0))(this, key);
	}

};

}
