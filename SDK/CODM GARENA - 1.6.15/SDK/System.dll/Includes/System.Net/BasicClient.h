#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class BasicClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "BasicClient"));
	}


	template <typename T = uintptr_t> T Authenticate(Il2CppString* challenge, uintptr_t webRequest, uintptr_t credentials) {
		return ((T (*)(BasicClient*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42B6B4C))(this, challenge, webRequest, credentials);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetBytes(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x42B7290))(0, str);
	}
	template <typename T = uintptr_t> static T InternalAuthenticate(uintptr_t webRequest, uintptr_t credentials) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x42B6C30))(0, webRequest, credentials);
	}
	template <typename T = uintptr_t> T PreAuthenticate(uintptr_t webRequest, uintptr_t credentials) {
		return ((T (*)(BasicClient*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42B73A8))(this, webRequest, credentials);
	}
	template <typename T = Il2CppString*> T get_AuthenticationType() {
		return ((T (*)(BasicClient*))(Il2CppBase() + 0x42B73AC))(this);
	}

};

}
