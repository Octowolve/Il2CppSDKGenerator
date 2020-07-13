#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class Dns
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "Dns"));
	}


	template <typename T = bool> static T GetHostByName_internal(Il2CppString* host, uintptr_t* h_name, Il2CppArray<uintptr_t>** h_aliases, Il2CppArray<uintptr_t>** h_addr_list) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*, Il2CppArray<uintptr_t>**, Il2CppArray<uintptr_t>**))(Il2CppBase() + 0x42C1B04))(0, host, h_name, h_aliases, h_addr_list);
	}
	template <typename T = bool> static T GetHostByAddr_internal(Il2CppString* addr, uintptr_t* h_name, Il2CppArray<uintptr_t>** h_aliases, Il2CppArray<uintptr_t>** h_addr_list) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*, Il2CppArray<uintptr_t>**, Il2CppArray<uintptr_t>**))(Il2CppBase() + 0x42C1B1C))(0, addr, h_name, h_aliases, h_addr_list);
	}
	template <typename T = bool> static T GetHostName_internal(uintptr_t* h_name) {
		return ((T (*)(void *, uintptr_t*))(Il2CppBase() + 0x42C1B34))(0, h_name);
	}
	template <typename T = uintptr_t> static T hostent_to_IPHostEntry(Il2CppString* h_name, Il2CppArray<uintptr_t>* h_aliases, Il2CppArray<uintptr_t>* h_addrlist) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x42C1B3C))(0, h_name, h_aliases, h_addrlist);
	}
	template <typename T = uintptr_t> static T GetHostByAddressFromString(Il2CppString* address, bool parse) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x42C2080))(0, address, parse);
	}
	template <typename T = uintptr_t> static T GetHostEntry(Il2CppString* hostNameOrAddress) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x42C2278))(0, hostNameOrAddress);
	}
	template <typename T = uintptr_t> static T GetHostEntry_1(uintptr_t address) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x42C26A4))(0, address);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetHostAddresses(Il2CppString* hostNameOrAddress) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x42C2954))(0, hostNameOrAddress);
	}
	template <typename T = uintptr_t> static T GetHostByName(Il2CppString* hostName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x42C27B8))(0, hostName);
	}
	template <typename T = Il2CppString*> static T GetHostName() {
		return ((T (*)(void *))(Il2CppBase() + 0x42C2C84))(0);
	}

};

}
