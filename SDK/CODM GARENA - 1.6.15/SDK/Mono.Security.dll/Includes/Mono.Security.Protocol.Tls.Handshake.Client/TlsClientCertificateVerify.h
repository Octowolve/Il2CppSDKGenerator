#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls.Handshake.Client {

class TlsClientCertificateVerify
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls.Handshake.Client", "TlsClientCertificateVerify"));
	}


	template <typename T = void> T Update() {
		return ((T (*)(TlsClientCertificateVerify*))(Il2CppBase() + 0x47DDD34))(this);
	}
	template <typename T = void> T ProcessAsSsl3() {
		return ((T (*)(TlsClientCertificateVerify*))(Il2CppBase() + 0x47DDD54))(this);
	}
	template <typename T = void> T ProcessAsTls1() {
		return ((T (*)(TlsClientCertificateVerify*))(Il2CppBase() + 0x47DE2D0))(this);
	}
	template <typename T = uintptr_t> T getClientCertRSA(uintptr_t privKey) {
		return ((T (*)(TlsClientCertificateVerify*, uintptr_t))(Il2CppBase() + 0x47DE0AC))(this, privKey);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T getUnsignedBigInteger(Il2CppArray<uintptr_t>* integer) {
		return ((T (*)(TlsClientCertificateVerify*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47DE614))(this, integer);
	}

};

}
