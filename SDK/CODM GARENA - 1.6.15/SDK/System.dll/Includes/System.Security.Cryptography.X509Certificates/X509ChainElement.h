#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography.X509Certificates {

class X509ChainElement
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Security.Cryptography.X509Certificates", "X509ChainElement"));
	}

	template <typename T = uintptr_t> T& certificate() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& status() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& info() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& compressed_status_flags() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uintptr_t> T get_Certificate() {
		return ((T (*)(X509ChainElement*))(Il2CppBase() + 0x3E85774))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ChainElementStatus() {
		return ((T (*)(X509ChainElement*))(Il2CppBase() + 0x3E84014))(this);
	}
	template <typename T = uintptr_t> T get_StatusFlags() {
		return ((T (*)(X509ChainElement*))(Il2CppBase() + 0x3E85188))(this);
	}
	template <typename T = void> T set_StatusFlags(uintptr_t value) {
		return ((T (*)(X509ChainElement*, uintptr_t))(Il2CppBase() + 0x3E85190))(this, value);
	}
	template <typename T = int32_t> T Count(uintptr_t flags) {
		return ((T (*)(X509ChainElement*, uintptr_t))(Il2CppBase() + 0x3E88604))(this, flags);
	}
	template <typename T = void> T Set(Il2CppArray<uintptr_t>* status, uintptr_t position, uintptr_t flags, uintptr_t mask) {
		return ((T (*)(X509ChainElement*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E8862C))(this, status, position, flags, mask);
	}
	template <typename T = void> T UncompressFlags() {
		return ((T (*)(X509ChainElement*))(Il2CppBase() + 0x3E85B44))(this);
	}

};

}
