#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class IAuthenticationModule
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "IAuthenticationModule"));
	}


	template <typename T = uintptr_t> T Authenticate(Il2CppString* challenge, uintptr_t request, uintptr_t credentials) {
		return ((T (*)(IAuthenticationModule*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, challenge, request, credentials);
	}
	template <typename T = uintptr_t> T PreAuthenticate(uintptr_t request, uintptr_t credentials) {
		return ((T (*)(IAuthenticationModule*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, request, credentials);
	}
	template <typename T = Il2CppString*> T get_AuthenticationType() {
		return ((T (*)(IAuthenticationModule*))(Il2CppBase() + 0x0))(this);
	}

};

}
