#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class DSA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "DSA"));
	}


	template <typename T = uintptr_t> static T Create() {
		return ((T (*)(void *))(Il2CppBase() + 0x303D504))(0);
	}
	template <typename T = uintptr_t> static T Create_1(Il2CppString* algName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x303D580))(0, algName);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T CreateSignature(Il2CppArray<uintptr_t>* rgbHash) {
		return ((T (*)(DSA*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, rgbHash);
	}
	template <typename T = uintptr_t> T ExportParameters(bool includePrivateParameters) {
		return ((T (*)(DSA*, bool))(Il2CppBase() + 0x0))(this, includePrivateParameters);
	}
	template <typename T = void> T ZeroizePrivateKey(uintptr_t parameters) {
		return ((T (*)(DSA*, uintptr_t))(Il2CppBase() + 0x303D640))(this, parameters);
	}
	template <typename T = void> T FromXmlString(Il2CppString* xmlString) {
		return ((T (*)(DSA*, Il2CppString*))(Il2CppBase() + 0x303D678))(this, xmlString);
	}
	template <typename T = void> T ImportParameters(uintptr_t parameters) {
		return ((T (*)(DSA*, uintptr_t))(Il2CppBase() + 0x0))(this, parameters);
	}
	template <typename T = Il2CppString*> T ToXmlString(bool includePrivateParameters) {
		return ((T (*)(DSA*, bool))(Il2CppBase() + 0x303DB28))(this, includePrivateParameters);
	}
	template <typename T = bool> T VerifySignature(Il2CppArray<uintptr_t>* rgbHash, Il2CppArray<uintptr_t>* rgbSignature) {
		return ((T (*)(DSA*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, rgbHash, rgbSignature);
	}

};

}
