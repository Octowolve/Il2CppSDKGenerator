#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class DSASignatureFormatter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "DSASignatureFormatter"));
	}

	template <typename T = uintptr_t> T& dsa() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T CreateSignature(Il2CppArray<uintptr_t>* rgbHash) {
		return ((T (*)(DSASignatureFormatter*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x303F628))(this, rgbHash);
	}
	template <typename T = void> T SetHashAlgorithm(Il2CppString* strName) {
		return ((T (*)(DSASignatureFormatter*, Il2CppString*))(Il2CppBase() + 0x303F708))(this, strName);
	}
	template <typename T = void> T SetKey(uintptr_t key) {
		return ((T (*)(DSASignatureFormatter*, uintptr_t))(Il2CppBase() + 0x303F8C4))(this, key);
	}

};

}
