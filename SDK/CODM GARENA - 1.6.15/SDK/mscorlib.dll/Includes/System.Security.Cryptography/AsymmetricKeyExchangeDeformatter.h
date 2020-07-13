#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class AsymmetricKeyExchangeDeformatter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "AsymmetricKeyExchangeDeformatter"));
	}


	template <typename T = Il2CppArray<uintptr_t>*> T DecryptKeyExchange(Il2CppArray<uintptr_t>* rgb) {
		return ((T (*)(AsymmetricKeyExchangeDeformatter*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, rgb);
	}
	template <typename T = void> T SetKey(uintptr_t key) {
		return ((T (*)(AsymmetricKeyExchangeDeformatter*, uintptr_t))(Il2CppBase() + 0x0))(this, key);
	}

};

}
