#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls {

class ClientSessionCache
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls", "ClientSessionCache"));
	}

	template <typename T = uintptr_t> static T& cache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& locker() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> static T Add(Il2CppString* host, Il2CppArray<uintptr_t>* id) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47DB56C))(0, host, id);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T FromHost(Il2CppString* host) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x47DBB60))(0, host);
	}
	template <typename T = uintptr_t> static T FromContext(uintptr_t context, bool checkValidity) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x47DC1B0))(0, context, checkValidity);
	}
	template <typename T = bool> static T SetContextInCache(uintptr_t context) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x47DC464))(0, context);
	}
	template <typename T = bool> static T SetContextFromCache(uintptr_t context) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x47DC698))(0, context);
	}

};

}
