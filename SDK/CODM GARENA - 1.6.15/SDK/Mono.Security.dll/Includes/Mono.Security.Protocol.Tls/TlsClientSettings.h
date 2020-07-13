#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls {

class TlsClientSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls", "TlsClientSettings"));
	}

	template <typename T = Il2CppString*> T& targetHost() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& certificates() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& clientCertificate() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& certificateRSA() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = Il2CppString*> T get_TargetHost() {
		return ((T (*)(TlsClientSettings*))(Il2CppBase() + 0x4BF9F94))(this);
	}
	template <typename T = void> T set_TargetHost(Il2CppString* value) {
		return ((T (*)(TlsClientSettings*, Il2CppString*))(Il2CppBase() + 0x4BF9F9C))(this, value);
	}
	template <typename T = uintptr_t> T get_Certificates() {
		return ((T (*)(TlsClientSettings*))(Il2CppBase() + 0x4BF1E98))(this);
	}
	template <typename T = void> T set_Certificates(uintptr_t value) {
		return ((T (*)(TlsClientSettings*, uintptr_t))(Il2CppBase() + 0x4BF9FA4))(this, value);
	}
	template <typename T = uintptr_t> T get_ClientCertificate() {
		return ((T (*)(TlsClientSettings*))(Il2CppBase() + 0x4BF1ED4))(this);
	}
	template <typename T = void> T set_ClientCertificate(uintptr_t value) {
		return ((T (*)(TlsClientSettings*, uintptr_t))(Il2CppBase() + 0x4BF9FAC))(this, value);
	}
	template <typename T = uintptr_t> T get_CertificateRSA() {
		return ((T (*)(TlsClientSettings*))(Il2CppBase() + 0x4BFA170))(this);
	}
	template <typename T = void> T UpdateCertificateRSA() {
		return ((T (*)(TlsClientSettings*))(Il2CppBase() + 0x4BF9FB4))(this);
	}

};

}
