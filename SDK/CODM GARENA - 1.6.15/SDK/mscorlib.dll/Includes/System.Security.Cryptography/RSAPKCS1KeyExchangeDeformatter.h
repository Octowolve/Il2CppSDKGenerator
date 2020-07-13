#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class RSAPKCS1KeyExchangeDeformatter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "RSAPKCS1KeyExchangeDeformatter"));
	}

	template <typename T = uintptr_t> T& rsa() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T DecryptKeyExchange(Il2CppArray<uintptr_t>* rgbIn) {
		return ((T (*)(RSAPKCS1KeyExchangeDeformatter*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x42730E4))(this, rgbIn);
	}
	template <typename T = void> T SetKey(uintptr_t key) {
		return ((T (*)(RSAPKCS1KeyExchangeDeformatter*, uintptr_t))(Il2CppBase() + 0x4273258))(this, key);
	}

};

}
