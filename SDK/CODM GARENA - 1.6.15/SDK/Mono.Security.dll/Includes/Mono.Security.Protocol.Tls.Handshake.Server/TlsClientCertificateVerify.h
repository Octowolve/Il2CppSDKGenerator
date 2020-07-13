#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls.Handshake.Server {

class TlsClientCertificateVerify
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls.Handshake.Server", "TlsClientCertificateVerify"));
	}


	template <typename T = void> T ProcessAsSsl3() {
		return ((T (*)(TlsClientCertificateVerify*))(Il2CppBase() + 0x47E2DE8))(this);
	}
	template <typename T = void> T ProcessAsTls1() {
		return ((T (*)(TlsClientCertificateVerify*))(Il2CppBase() + 0x47E2FB8))(this);
	}

};

}
