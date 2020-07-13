#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls {

class SslCipherSuite
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls", "SslCipherSuite"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& pad1() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& pad2() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& header() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T ComputeServerRecordMAC(uintptr_t contentType, Il2CppArray<uintptr_t>* fragment) {
		return ((T (*)(SslCipherSuite*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4BEEEE8))(this, contentType, fragment);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ComputeClientRecordMAC(uintptr_t contentType, Il2CppArray<uintptr_t>* fragment) {
		return ((T (*)(SslCipherSuite*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4BEF2C8))(this, contentType, fragment);
	}
	template <typename T = void> T ComputeMasterSecret(Il2CppArray<uintptr_t>* preMasterSecret) {
		return ((T (*)(SslCipherSuite*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4BEF6A8))(this, preMasterSecret);
	}
	template <typename T = void> T ComputeKeys() {
		return ((T (*)(SslCipherSuite*))(Il2CppBase() + 0x4BEFBC4))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T prf(Il2CppArray<uintptr_t>* secret, Il2CppString* label, Il2CppArray<uintptr_t>* random) {
		return ((T (*)(SslCipherSuite*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4BEF950))(this, secret, label, random);
	}

};

}
