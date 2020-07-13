#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class IPAddress
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "IPAddress"));
	}

	template <typename T = int64_t> T& m_Address() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_Family() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_Numbers() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int64_t> T& m_ScopeId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& Any() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& Broadcast() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& Loopback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& None() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& IPv6Any() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& IPv6Loopback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& IPv6None() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = int32_t> T& m_HashCode() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = int16_t> static T SwapShort(int16_t number) {
		return ((T (*)(void *, int16_t))(Il2CppBase() + 0x42E67F0))(0, number);
	}
	template <typename T = int32_t> static T SwapInt(int32_t number) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x42E67F8))(0, number);
	}
	template <typename T = int64_t> static T SwapLong(int64_t number) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x42E6800))(0, number);
	}
	template <typename T = int16_t> static T HostToNetworkOrder(int16_t host) {
		return ((T (*)(void *, int16_t))(Il2CppBase() + 0x42E6464))(0, host);
	}
	template <typename T = int32_t> static T HostToNetworkOrder_1(int32_t host) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x42E680C))(0, host);
	}
	template <typename T = int64_t> static T HostToNetworkOrder_2(int64_t host) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x42E690C))(0, host);
	}
	template <typename T = int16_t> static T NetworkToHostOrder(int16_t network) {
		return ((T (*)(void *, int16_t))(Il2CppBase() + 0x42E6A18))(0, network);
	}
	template <typename T = int32_t> static T NetworkToHostOrder_1(int32_t network) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x42E6B18))(0, network);
	}
	template <typename T = int64_t> static T NetworkToHostOrder_2(int64_t network) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x42E6C18))(0, network);
	}
	template <typename T = uintptr_t> static T Parse(Il2CppString* ipString) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x42C1F64))(0, ipString);
	}
	template <typename T = bool> static T TryParse(Il2CppString* ipString, uintptr_t* address) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x42C2548))(0, ipString, address);
	}
	template <typename T = uintptr_t> static T ParseIPV4(Il2CppString* ip) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x42E6D24))(0, ip);
	}
	template <typename T = uintptr_t> static T ParseIPV6(Il2CppString* ip) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x42E66B4))(0, ip);
	}
	template <typename T = int64_t> T get_InternalIPv4Address() {
		return ((T (*)(IPAddress*))(Il2CppBase() + 0x42E74EC))(this);
	}
	template <typename T = int64_t> T get_ScopeId() {
		return ((T (*)(IPAddress*))(Il2CppBase() + 0x42E74F4))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetAddressBytes() {
		return ((T (*)(IPAddress*))(Il2CppBase() + 0x42E75B0))(this);
	}
	template <typename T = uintptr_t> T get_AddressFamily() {
		return ((T (*)(IPAddress*))(Il2CppBase() + 0x42C2070))(this);
	}
	template <typename T = bool> static T IsLoopback(uintptr_t addr) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x42E771C))(0, addr);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(IPAddress*))(Il2CppBase() + 0x42E7878))(this);
	}
	template <typename T = Il2CppString*> static T ToString_1(int64_t addr) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x42E7A80))(0, addr);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(IPAddress*, uintptr_t))(Il2CppBase() + 0x42E7E44))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(IPAddress*))(Il2CppBase() + 0x42E7FB4))(this);
	}
	template <typename T = int32_t> static T Hash(int32_t i, int32_t j, int32_t k, int32_t l) {
		return ((T (*)(void *, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x42E8200))(0, i, j, k, l);
	}

};

}
