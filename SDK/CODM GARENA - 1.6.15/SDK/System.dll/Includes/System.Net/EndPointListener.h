#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class EndPointListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "EndPointListener"));
	}

	template <typename T = uintptr_t> T& endpoint() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& sock() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& prefixes() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& unhandled() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& all() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& cert() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& key() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& secure() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = void> T LoadCertificateAndKey(uintptr_t addr, int32_t port) {
		return ((T (*)(EndPointListener*, uintptr_t, int32_t))(Il2CppBase() + 0x42C31DC))(this, addr, port);
	}
	template <typename T = void> static T OnAccept(uintptr_t ares) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x42C35E0))(0, ares);
	}
	template <typename T = bool> T BindContext(uintptr_t context) {
		return ((T (*)(EndPointListener*, uintptr_t))(Il2CppBase() + 0x42C401C))(this, context);
	}
	template <typename T = void> T UnbindContext(uintptr_t context) {
		return ((T (*)(EndPointListener*, uintptr_t))(Il2CppBase() + 0x42C4DD8))(this, context);
	}
	template <typename T = uintptr_t> T SearchListener(Il2CppString* host, uintptr_t uri, uintptr_t* prefix) {
		return ((T (*)(EndPointListener*, Il2CppString*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x42C4150))(this, host, uri, prefix);
	}
	template <typename T = uintptr_t> T MatchFromList(Il2CppString* host, Il2CppString* path, uintptr_t list, uintptr_t* prefix) {
		return ((T (*)(EndPointListener*, Il2CppString*, Il2CppString*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x42C4F70))(this, host, path, list, prefix);
	}
	template <typename T = void> T AddSpecial(uintptr_t coll, uintptr_t prefix) {
		return ((T (*)(EndPointListener*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42C53F0))(this, coll, prefix);
	}
	template <typename T = void> T RemoveSpecial(uintptr_t coll, uintptr_t prefix) {
		return ((T (*)(EndPointListener*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42C5898))(this, coll, prefix);
	}
	template <typename T = void> T CheckIfRemove() {
		return ((T (*)(EndPointListener*))(Il2CppBase() + 0x42C5B08))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(EndPointListener*))(Il2CppBase() + 0x42C5EFC))(this);
	}
	template <typename T = void> T AddPrefix(uintptr_t prefix, uintptr_t listener) {
		return ((T (*)(EndPointListener*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42C5F28))(this, prefix, listener);
	}
	template <typename T = void> T RemovePrefix(uintptr_t prefix, uintptr_t listener) {
		return ((T (*)(EndPointListener*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42C63F8))(this, prefix, listener);
	}

};

}
