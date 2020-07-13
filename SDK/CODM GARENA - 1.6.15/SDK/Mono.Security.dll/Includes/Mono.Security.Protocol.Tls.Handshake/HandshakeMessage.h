#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls.Handshake {

class HandshakeMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls.Handshake", "HandshakeMessage"));
	}

	template <typename T = uintptr_t> T& context() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& handshakeType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& contentType() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& cache() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uintptr_t> T get_Context() {
		return ((T (*)(HandshakeMessage*))(Il2CppBase() + 0x47DD838))(this);
	}
	template <typename T = uintptr_t> T get_HandshakeType() {
		return ((T (*)(HandshakeMessage*))(Il2CppBase() + 0x47E1AF0))(this);
	}
	template <typename T = uintptr_t> T get_ContentType() {
		return ((T (*)(HandshakeMessage*))(Il2CppBase() + 0x47E1AF8))(this);
	}
	template <typename T = void> T ProcessAsTls1() {
		return ((T (*)(HandshakeMessage*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T ProcessAsSsl3() {
		return ((T (*)(HandshakeMessage*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Process() {
		return ((T (*)(HandshakeMessage*))(Il2CppBase() + 0x47DB0F0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(HandshakeMessage*))(Il2CppBase() + 0x47DD7A8))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T EncodeMessage() {
		return ((T (*)(HandshakeMessage*))(Il2CppBase() + 0x47E1B00))(this);
	}
	template <typename T = bool> static T Compare(Il2CppArray<uintptr_t>* buffer1, Il2CppArray<uintptr_t>* buffer2) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47E0ED8))(0, buffer1, buffer2);
	}

};

}
