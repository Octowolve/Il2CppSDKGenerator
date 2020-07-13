#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.X509.Extensions {

class AuthorityKeyIdentifierExtension
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.X509.Extensions", "AuthorityKeyIdentifierExtension"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& aki() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T Decode() {
		return ((T (*)(AuthorityKeyIdentifierExtension*))(Il2CppBase() + 0x4BFB5AC))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Identifier() {
		return ((T (*)(AuthorityKeyIdentifierExtension*))(Il2CppBase() + 0x4BFB72C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(AuthorityKeyIdentifierExtension*))(Il2CppBase() + 0x4BFB7C8))(this);
	}

};

}
