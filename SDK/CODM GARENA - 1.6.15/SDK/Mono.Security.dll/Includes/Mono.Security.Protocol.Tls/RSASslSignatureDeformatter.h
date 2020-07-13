#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls {

class RSASslSignatureDeformatter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls", "RSASslSignatureDeformatter"));
	}

	template <typename T = uintptr_t> T& key() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& hash() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map15() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T VerifySignature(Il2CppArray<uintptr_t>* rgbHash, Il2CppArray<uintptr_t>* rgbSignature) {
		return ((T (*)(RSASslSignatureDeformatter*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47E9168))(this, rgbHash, rgbSignature);
	}
	template <typename T = void> T SetHashAlgorithm(Il2CppString* strName) {
		return ((T (*)(RSASslSignatureDeformatter*, Il2CppString*))(Il2CppBase() + 0x47E9304))(this, strName);
	}
	template <typename T = void> T SetKey(uintptr_t key) {
		return ((T (*)(RSASslSignatureDeformatter*, uintptr_t))(Il2CppBase() + 0x47E94D8))(this, key);
	}

};

}
