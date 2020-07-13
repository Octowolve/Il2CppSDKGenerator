#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class RSAPKCS1SignatureDeformatter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "RSAPKCS1SignatureDeformatter"));
	}

	template <typename T = uintptr_t> T& rsa() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& hashName() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T SetHashAlgorithm(Il2CppString* strName) {
		return ((T (*)(RSAPKCS1SignatureDeformatter*, Il2CppString*))(Il2CppBase() + 0x42736A0))(this, strName);
	}
	template <typename T = void> T SetKey(uintptr_t key) {
		return ((T (*)(RSAPKCS1SignatureDeformatter*, uintptr_t))(Il2CppBase() + 0x427375C))(this, key);
	}
	template <typename T = bool> T VerifySignature(Il2CppArray<uintptr_t>* rgbHash, Il2CppArray<uintptr_t>* rgbSignature) {
		return ((T (*)(RSAPKCS1SignatureDeformatter*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4273840))(this, rgbHash, rgbSignature);
	}

};

}
