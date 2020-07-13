#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class IPv6Address
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "IPv6Address"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& address() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& prefixLength() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int64_t> T& scopeId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& Loopback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& Unspecified() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> static T Parse(Il2CppString* ipString) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3E481B8))(0, ipString);
	}
	template <typename T = int32_t> static T Fill(Il2CppArray<uintptr_t>* addr, Il2CppString* ipString) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x3E48AA0))(0, addr, ipString);
	}
	template <typename T = bool> static T TryParse(Il2CppString* prefix, uintptr_t* res) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x3E48C74))(0, prefix, res);
	}
	template <typename T = bool> static T TryParse_1(Il2CppString* ipString, uintptr_t* result) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x3E48310))(0, ipString, result);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Address() {
		return ((T (*)(IPv6Address*))(Il2CppBase() + 0x3E48D40))(this);
	}
	template <typename T = int64_t> T get_ScopeId() {
		return ((T (*)(IPv6Address*))(Il2CppBase() + 0x3E48D48))(this);
	}
	template <typename T = void> T set_ScopeId(int64_t value) {
		return ((T (*)(IPv6Address*, int64_t))(Il2CppBase() + 0x3E48D50))(this, value);
	}
	template <typename T = bool> static T IsLoopback(uintptr_t addr) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3E48D60))(0, addr);
	}
	template <typename T = uint16_t> static T SwapUShort(uint16_t number) {
		return ((T (*)(void *, uint16_t))(Il2CppBase() + 0x3E48EB0))(0, number);
	}
	template <typename T = int32_t> T AsIPv4Int() {
		return ((T (*)(IPv6Address*))(Il2CppBase() + 0x3E48EB8))(this);
	}
	template <typename T = bool> T IsIPv4Compatible() {
		return ((T (*)(IPv6Address*))(Il2CppBase() + 0x3E48FC8))(this);
	}
	template <typename T = bool> T IsIPv4Mapped() {
		return ((T (*)(IPv6Address*))(Il2CppBase() + 0x3E49048))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(IPv6Address*))(Il2CppBase() + 0x3E490E0))(this);
	}
	template <typename T = Il2CppString*> T ToString_1(bool fullLength) {
		return ((T (*)(IPv6Address*, bool))(Il2CppBase() + 0x3E494C8))(this, fullLength);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(IPv6Address*, uintptr_t))(Il2CppBase() + 0x3E496D0))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(IPv6Address*))(Il2CppBase() + 0x3E49980))(this);
	}
	template <typename T = int32_t> static T Hash(int32_t i, int32_t j, int32_t k, int32_t l) {
		return ((T (*)(void *, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x3E49BB8))(0, i, j, k, l);
	}

};

}
