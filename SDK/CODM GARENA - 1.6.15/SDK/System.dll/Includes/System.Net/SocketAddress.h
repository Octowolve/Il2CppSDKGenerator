#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class SocketAddress
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "SocketAddress"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& data() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T get_Family() {
		return ((T (*)(SocketAddress*))(Il2CppBase() + 0x3E59B7C))(this);
	}
	template <typename T = int32_t> T get_Size() {
		return ((T (*)(SocketAddress*))(Il2CppBase() + 0x3E59BE8))(this);
	}
	template <typename T = unsigned char> T get_Item(int32_t offset) {
		return ((T (*)(SocketAddress*, int32_t))(Il2CppBase() + 0x3E59C0C))(this, offset);
	}
	template <typename T = void> T set_Item(int32_t offset, unsigned char value) {
		return ((T (*)(SocketAddress*, int32_t, unsigned char))(Il2CppBase() + 0x3E59C50))(this, offset, value);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(SocketAddress*))(Il2CppBase() + 0x3E59C98))(this);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(SocketAddress*, uintptr_t))(Il2CppBase() + 0x3E5A130))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(SocketAddress*))(Il2CppBase() + 0x3E5A284))(this);
	}

};

}
