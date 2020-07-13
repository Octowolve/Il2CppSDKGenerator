#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class IPHostEntry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "IPHostEntry"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& addressList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& aliases() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& hostName() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_AddressList() {
		return ((T (*)(IPHostEntry*))(Il2CppBase() + 0x42C2C7C))(this);
	}
	template <typename T = void> T set_AddressList(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(IPHostEntry*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x42C2078))(this, value);
	}
	template <typename T = void> T set_Aliases(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(IPHostEntry*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x42C1F5C))(this, value);
	}
	template <typename T = void> T set_HostName(Il2CppString* value) {
		return ((T (*)(IPHostEntry*, Il2CppString*))(Il2CppBase() + 0x42C1F54))(this, value);
	}

};

}
