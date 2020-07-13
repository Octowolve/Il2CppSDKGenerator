#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class AsymmetricSignatureDeformatter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "AsymmetricSignatureDeformatter"));
	}


	template <typename T = void> T SetHashAlgorithm(Il2CppString* strName) {
		return ((T (*)(AsymmetricSignatureDeformatter*, Il2CppString*))(Il2CppBase() + 0x0))(this, strName);
	}
	template <typename T = void> T SetKey(uintptr_t key) {
		return ((T (*)(AsymmetricSignatureDeformatter*, uintptr_t))(Il2CppBase() + 0x0))(this, key);
	}
	template <typename T = bool> T VerifySignature(Il2CppArray<uintptr_t>* rgbHash, Il2CppArray<uintptr_t>* rgbSignature) {
		return ((T (*)(AsymmetricSignatureDeformatter*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, rgbHash, rgbSignature);
	}

};

}
