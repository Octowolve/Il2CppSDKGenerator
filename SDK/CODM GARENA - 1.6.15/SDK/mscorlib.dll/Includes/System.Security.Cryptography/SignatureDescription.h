#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class SignatureDescription
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "SignatureDescription"));
	}

	template <typename T = Il2CppString*> T& _DeformatterAlgorithm() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& _DigestAlgorithm() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& _FormatterAlgorithm() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& _KeyAlgorithm() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T set_DeformatterAlgorithm(Il2CppString* value) {
		return ((T (*)(SignatureDescription*, Il2CppString*))(Il2CppBase() + 0x4273644))(this, value);
	}
	template <typename T = void> T set_DigestAlgorithm(Il2CppString* value) {
		return ((T (*)(SignatureDescription*, Il2CppString*))(Il2CppBase() + 0x427364C))(this, value);
	}
	template <typename T = void> T set_FormatterAlgorithm(Il2CppString* value) {
		return ((T (*)(SignatureDescription*, Il2CppString*))(Il2CppBase() + 0x4273654))(this, value);
	}
	template <typename T = void> T set_KeyAlgorithm(Il2CppString* value) {
		return ((T (*)(SignatureDescription*, Il2CppString*))(Il2CppBase() + 0x427365C))(this, value);
	}

};

}
