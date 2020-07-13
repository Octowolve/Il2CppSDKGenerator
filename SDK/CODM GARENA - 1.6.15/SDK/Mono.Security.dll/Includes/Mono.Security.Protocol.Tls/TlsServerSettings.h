#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls {

class TlsServerSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls", "TlsServerSettings"));
	}

	template <typename T = uintptr_t> T& certificates() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& certificateRSA() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& rsaParameters() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& signedParams() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& distinguisedNames() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& serverKeyExchange() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& certificateRequest() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& certificateTypes() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = bool> T get_ServerKeyExchange() {
		return ((T (*)(TlsServerSettings*))(Il2CppBase() + 0x4BFA4F8))(this);
	}
	template <typename T = void> T set_ServerKeyExchange(bool value) {
		return ((T (*)(TlsServerSettings*, bool))(Il2CppBase() + 0x4BFA500))(this, value);
	}
	template <typename T = uintptr_t> T get_Certificates() {
		return ((T (*)(TlsServerSettings*))(Il2CppBase() + 0x4BF5780))(this);
	}
	template <typename T = void> T set_Certificates(uintptr_t value) {
		return ((T (*)(TlsServerSettings*, uintptr_t))(Il2CppBase() + 0x4BFA508))(this, value);
	}
	template <typename T = uintptr_t> T get_CertificateRSA() {
		return ((T (*)(TlsServerSettings*))(Il2CppBase() + 0x4BFA510))(this);
	}
	template <typename T = uintptr_t> T get_RsaParameters() {
		return ((T (*)(TlsServerSettings*))(Il2CppBase() + 0x4BFA518))(this);
	}
	template <typename T = void> T set_RsaParameters(uintptr_t value) {
		return ((T (*)(TlsServerSettings*, uintptr_t))(Il2CppBase() + 0x4BFA538))(this, value);
	}
	template <typename T = void> T set_SignedParams(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(TlsServerSettings*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4BFA570))(this, value);
	}
	template <typename T = bool> T get_CertificateRequest() {
		return ((T (*)(TlsServerSettings*))(Il2CppBase() + 0x4BF2A84))(this);
	}
	template <typename T = void> T set_CertificateRequest(bool value) {
		return ((T (*)(TlsServerSettings*, bool))(Il2CppBase() + 0x4BFA578))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_CertificateTypes() {
		return ((T (*)(TlsServerSettings*))(Il2CppBase() + 0x4BFA580))(this);
	}
	template <typename T = void> T set_CertificateTypes(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(TlsServerSettings*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4BFA588))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_DistinguisedNames() {
		return ((T (*)(TlsServerSettings*))(Il2CppBase() + 0x4BFA590))(this);
	}
	template <typename T = void> T set_DistinguisedNames(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(TlsServerSettings*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4BFA598))(this, value);
	}
	template <typename T = void> T UpdateCertificateRSA() {
		return ((T (*)(TlsServerSettings*))(Il2CppBase() + 0x4BFA5A0))(this);
	}

};

}
