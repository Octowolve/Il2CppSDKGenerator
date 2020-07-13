#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.X509 {

class X509StoreManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.X509", "X509StoreManager"));
	}

	template <typename T = uintptr_t> static T& _userStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _machineStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> static T get_CurrentUser() {
		return ((T (*)(void *))(Il2CppBase() + 0x4C144B8))(0);
	}
	template <typename T = uintptr_t> static T get_LocalMachine() {
		return ((T (*)(void *))(Il2CppBase() + 0x4C1463C))(0);
	}
	template <typename T = uintptr_t> static T get_TrustedRootCertificates() {
		return ((T (*)(void *))(Il2CppBase() + 0x4C108B0))(0);
	}

};

}
