#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security {

class StrongName
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "Mono.Security", "StrongName"));
	}

	template <typename T = uintptr_t> T& rsa() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& publicKey() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& keyToken() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& tokenAlgorithm() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& lockObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& initialized() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T InvalidateCache() {
		return ((T (*)(StrongName*))(Il2CppBase() + 0x3FB2584))(this);
	}
	template <typename T = void> T set_RSA(uintptr_t value) {
		return ((T (*)(StrongName*, uintptr_t))(Il2CppBase() + 0x3FB23EC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_PublicKey() {
		return ((T (*)(StrongName*))(Il2CppBase() + 0x3FB2590))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_PublicKeyToken() {
		return ((T (*)(StrongName*))(Il2CppBase() + 0x3FB29E0))(this);
	}
	template <typename T = Il2CppString*> T get_TokenAlgorithm() {
		return ((T (*)(StrongName*))(Il2CppBase() + 0x3FB2BBC))(this);
	}

};

}
