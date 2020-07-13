#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class AuthenticationManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "AuthenticationManager"));
	}

	template <typename T = uintptr_t> static T& modules() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& locker() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& credential_policy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> static T EnsureModules() {
		return ((T (*)(void *))(Il2CppBase() + 0x42B5B60))(0);
	}
	template <typename T = uintptr_t> static T Authenticate(Il2CppString* challenge, uintptr_t request, uintptr_t credentials) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42B5E28))(0, challenge, request, credentials);
	}
	template <typename T = uintptr_t> static T DoAuthenticate(Il2CppString* challenge, uintptr_t request, uintptr_t credentials) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42B5FA0))(0, challenge, request, credentials);
	}
	template <typename T = uintptr_t> static T PreAuthenticate(uintptr_t request, uintptr_t credentials) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x42B6468))(0, request, credentials);
	}

};

}
