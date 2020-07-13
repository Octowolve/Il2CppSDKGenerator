#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class AsymmetricSignatureFormatter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "AsymmetricSignatureFormatter"));
	}


	template <typename T = void> T SetHashAlgorithm(Il2CppString* strName) {
		return ((T (*)(AsymmetricSignatureFormatter*, Il2CppString*))(Il2CppBase() + 0x0))(this, strName);
	}
	template <typename T = void> T SetKey(uintptr_t key) {
		return ((T (*)(AsymmetricSignatureFormatter*, uintptr_t))(Il2CppBase() + 0x0))(this, key);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T CreateSignature(Il2CppArray<uintptr_t>* rgbHash) {
		return ((T (*)(AsymmetricSignatureFormatter*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, rgbHash);
	}

};

}
