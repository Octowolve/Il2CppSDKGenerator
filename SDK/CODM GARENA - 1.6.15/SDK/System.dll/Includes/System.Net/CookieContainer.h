#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class CookieContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "CookieContainer"));
	}

	template <typename T = int32_t> T& capacity() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& perDomainCapacity() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& maxCookieSize() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& cookies() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T AddCookie(uintptr_t cookie) {
		return ((T (*)(CookieContainer*, uintptr_t))(Il2CppBase() + 0x42BC40C))(this, cookie);
	}
	template <typename T = int32_t> T CountDomain(Il2CppString* domain) {
		return ((T (*)(CookieContainer*, Il2CppString*))(Il2CppBase() + 0x42BC950))(this, domain);
	}
	template <typename T = void> T RemoveOldest(Il2CppString* domain) {
		return ((T (*)(CookieContainer*, Il2CppString*))(Il2CppBase() + 0x42BC650))(this, domain);
	}
	template <typename T = void> T CheckExpiration() {
		return ((T (*)(CookieContainer*))(Il2CppBase() + 0x42BCD18))(this);
	}
	template <typename T = void> T Cook(uintptr_t uri, uintptr_t cookie) {
		return ((T (*)(CookieContainer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42BD0A4))(this, uri, cookie);
	}
	template <typename T = void> T Add(uintptr_t uri, uintptr_t cookie) {
		return ((T (*)(CookieContainer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42BD468))(this, uri, cookie);
	}
	template <typename T = Il2CppString*> T GetCookieHeader(uintptr_t uri) {
		return ((T (*)(CookieContainer*, uintptr_t))(Il2CppBase() + 0x42BD5D0))(this, uri);
	}
	template <typename T = bool> static T CheckDomain(Il2CppString* domain, Il2CppString* host, bool exact) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x42BCE6C))(0, domain, host, exact);
	}
	template <typename T = uintptr_t> T GetCookies(uintptr_t uri) {
		return ((T (*)(CookieContainer*, uintptr_t))(Il2CppBase() + 0x42BDB64))(this, uri);
	}
	template <typename T = bool> static T IsNullOrEmpty(Il2CppString* s) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x42BD434))(0, s);
	}

};

}
