#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls {

class SecurityParameters
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls", "SecurityParameters"));
	}

	template <typename T = uintptr_t> T& cipher() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& clientWriteMAC() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& serverWriteMAC() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_Cipher() {
		return ((T (*)(SecurityParameters*))(Il2CppBase() + 0x47DD4C0))(this);
	}
	template <typename T = void> T set_Cipher(uintptr_t value) {
		return ((T (*)(SecurityParameters*, uintptr_t))(Il2CppBase() + 0x47E1364))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ClientWriteMAC() {
		return ((T (*)(SecurityParameters*))(Il2CppBase() + 0x47D86A8))(this);
	}
	template <typename T = void> T set_ClientWriteMAC(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SecurityParameters*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47E9A40))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ServerWriteMAC() {
		return ((T (*)(SecurityParameters*))(Il2CppBase() + 0x47D86B0))(this);
	}
	template <typename T = void> T set_ServerWriteMAC(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SecurityParameters*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47E9A48))(this, value);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(SecurityParameters*))(Il2CppBase() + 0x47DD534))(this);
	}

};

}
