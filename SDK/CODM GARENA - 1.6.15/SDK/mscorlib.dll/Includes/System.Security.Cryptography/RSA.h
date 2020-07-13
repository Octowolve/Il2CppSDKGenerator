#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class RSA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "RSA"));
	}


	template <typename T = uintptr_t> static T Create() {
		return ((T (*)(void *))(Il2CppBase() + 0x42705FC))(0);
	}
	template <typename T = uintptr_t> static T Create_1(Il2CppString* algName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4270678))(0, algName);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T EncryptValue(Il2CppArray<uintptr_t>* rgb) {
		return ((T (*)(RSA*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, rgb);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T DecryptValue(Il2CppArray<uintptr_t>* rgb) {
		return ((T (*)(RSA*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, rgb);
	}
	template <typename T = uintptr_t> T ExportParameters(bool includePrivateParameters) {
		return ((T (*)(RSA*, bool))(Il2CppBase() + 0x0))(this, includePrivateParameters);
	}
	template <typename T = void> T ImportParameters(uintptr_t parameters) {
		return ((T (*)(RSA*, uintptr_t))(Il2CppBase() + 0x0))(this, parameters);
	}
	template <typename T = void> T ZeroizePrivateKey(uintptr_t parameters) {
		return ((T (*)(RSA*, uintptr_t))(Il2CppBase() + 0x4270740))(this, parameters);
	}
	template <typename T = void> T FromXmlString(Il2CppString* xmlString) {
		return ((T (*)(RSA*, Il2CppString*))(Il2CppBase() + 0x427083C))(this, xmlString);
	}
	template <typename T = Il2CppString*> T ToXmlString(bool includePrivateParameters) {
		return ((T (*)(RSA*, bool))(Il2CppBase() + 0x4270CF4))(this, includePrivateParameters);
	}

};

}
