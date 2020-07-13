#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class EndPointManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "EndPointManager"));
	}

	template <typename T = uintptr_t> static T& ip_to_endpoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T AddListener(uintptr_t listener) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x42C66F8))(0, listener);
	}
	template <typename T = void> static T AddPrefix(Il2CppString* prefix, uintptr_t listener) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x42C7404))(0, prefix, listener);
	}
	template <typename T = void> static T AddPrefixInternal(Il2CppString* p, uintptr_t listener) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x42C706C))(0, p, listener);
	}
	template <typename T = uintptr_t> static T GetEPListener(uintptr_t addr, int32_t port, uintptr_t listener, bool secure) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t, bool))(Il2CppBase() + 0x42C7554))(0, addr, port, listener, secure);
	}
	template <typename T = void> static T RemoveEndPoint(uintptr_t epl, uintptr_t ep) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x42C5C2C))(0, epl, ep);
	}
	template <typename T = void> static T RemoveListener(uintptr_t listener) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x42C7960))(0, listener);
	}
	template <typename T = void> static T RemovePrefix(Il2CppString* prefix, uintptr_t listener) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x42C72BC))(0, prefix, listener);
	}
	template <typename T = void> static T RemovePrefixInternal(Il2CppString* prefix, uintptr_t listener) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x42C7CF0))(0, prefix, listener);
	}

};

}
