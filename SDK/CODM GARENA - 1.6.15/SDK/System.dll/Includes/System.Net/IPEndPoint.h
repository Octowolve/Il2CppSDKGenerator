#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class IPEndPoint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "IPEndPoint"));
	}

	template <typename T = uintptr_t> T& address() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& port() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_Address() {
		return ((T (*)(IPEndPoint*))(Il2CppBase() + 0x42C7950))(this);
	}
	template <typename T = void> T set_Address(uintptr_t value) {
		return ((T (*)(IPEndPoint*, uintptr_t))(Il2CppBase() + 0x42E822C))(this, value);
	}
	template <typename T = uintptr_t> T get_AddressFamily() {
		return ((T (*)(IPEndPoint*))(Il2CppBase() + 0x42E83B4))(this);
	}
	template <typename T = int32_t> T get_Port() {
		return ((T (*)(IPEndPoint*))(Il2CppBase() + 0x42C7958))(this);
	}
	template <typename T = void> T set_Port(int32_t value) {
		return ((T (*)(IPEndPoint*, int32_t))(Il2CppBase() + 0x42E8234))(this, value);
	}
	template <typename T = uintptr_t> T Create(uintptr_t socketAddress) {
		return ((T (*)(IPEndPoint*, uintptr_t))(Il2CppBase() + 0x42E83D8))(this, socketAddress);
	}
	template <typename T = uintptr_t> T Serialize() {
		return ((T (*)(IPEndPoint*))(Il2CppBase() + 0x42E8A58))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(IPEndPoint*))(Il2CppBase() + 0x42E8CF4))(this);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(IPEndPoint*, uintptr_t))(Il2CppBase() + 0x42E8E18))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(IPEndPoint*))(Il2CppBase() + 0x42E8F08))(this);
	}

};

}
