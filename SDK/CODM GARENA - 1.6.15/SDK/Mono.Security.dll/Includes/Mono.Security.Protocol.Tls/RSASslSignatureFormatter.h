#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls {

class RSASslSignatureFormatter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls", "RSASslSignatureFormatter"));
	}

	template <typename T = uintptr_t> T& key() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& hash() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map16() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T CreateSignature(Il2CppArray<uintptr_t>* rgbHash) {
		return ((T (*)(RSASslSignatureFormatter*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47E95D8))(this, rgbHash);
	}
	template <typename T = void> T SetHashAlgorithm(Il2CppString* strName) {
		return ((T (*)(RSASslSignatureFormatter*, Il2CppString*))(Il2CppBase() + 0x47E976C))(this, strName);
	}
	template <typename T = void> T SetKey(uintptr_t key) {
		return ((T (*)(RSASslSignatureFormatter*, uintptr_t))(Il2CppBase() + 0x47E9940))(this, key);
	}

};

}
