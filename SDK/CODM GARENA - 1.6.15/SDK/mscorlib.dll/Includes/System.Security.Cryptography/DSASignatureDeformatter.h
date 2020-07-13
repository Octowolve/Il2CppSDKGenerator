#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class DSASignatureDeformatter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "DSASignatureDeformatter"));
	}

	template <typename T = uintptr_t> T& dsa() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T SetHashAlgorithm(Il2CppString* strName) {
		return ((T (*)(DSASignatureDeformatter*, Il2CppString*))(Il2CppBase() + 0x303F1B0))(this, strName);
	}
	template <typename T = void> T SetKey(uintptr_t key) {
		return ((T (*)(DSASignatureDeformatter*, uintptr_t))(Il2CppBase() + 0x303F36C))(this, key);
	}
	template <typename T = bool> T VerifySignature(Il2CppArray<uintptr_t>* rgbHash, Il2CppArray<uintptr_t>* rgbSignature) {
		return ((T (*)(DSASignatureDeformatter*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x303F450))(this, rgbHash, rgbSignature);
	}

};

}
