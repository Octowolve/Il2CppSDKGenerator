#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class DigestClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "DigestClient"));
	}

	template <typename T = uintptr_t> static T& cache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T get_Cache() {
		return ((T (*)(void *))(Il2CppBase() + 0x42BEA9C))(0);
	}
	template <typename T = void> static T CheckExpired(int32_t count) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x42BEC98))(0, count);
	}
	template <typename T = uintptr_t> T Authenticate(Il2CppString* challenge, uintptr_t webRequest, uintptr_t credentials) {
		return ((T (*)(DigestClient*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42BF744))(this, challenge, webRequest, credentials);
	}
	template <typename T = uintptr_t> T PreAuthenticate(uintptr_t webRequest, uintptr_t credentials) {
		return ((T (*)(DigestClient*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42C02D0))(this, webRequest, credentials);
	}
	template <typename T = Il2CppString*> T get_AuthenticationType() {
		return ((T (*)(DigestClient*))(Il2CppBase() + 0x42C04AC))(this);
	}

};

}
