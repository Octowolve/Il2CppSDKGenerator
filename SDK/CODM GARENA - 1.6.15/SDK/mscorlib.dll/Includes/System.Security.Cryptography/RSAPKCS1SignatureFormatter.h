#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class RSAPKCS1SignatureFormatter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "RSAPKCS1SignatureFormatter"));
	}

	template <typename T = uintptr_t> T& rsa() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& hash() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T CreateSignature(Il2CppArray<uintptr_t>* rgbHash) {
		return ((T (*)(RSAPKCS1SignatureFormatter*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4273A38))(this, rgbHash);
	}
	template <typename T = void> T SetHashAlgorithm(Il2CppString* strName) {
		return ((T (*)(RSAPKCS1SignatureFormatter*, Il2CppString*))(Il2CppBase() + 0x4273BE0))(this, strName);
	}
	template <typename T = void> T SetKey(uintptr_t key) {
		return ((T (*)(RSAPKCS1SignatureFormatter*, uintptr_t))(Il2CppBase() + 0x4273C00))(this, key);
	}

};

}
