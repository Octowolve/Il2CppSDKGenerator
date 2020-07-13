#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls.Handshake.Server {

class TlsServerCertificateRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls.Handshake.Server", "TlsServerCertificateRequest"));
	}


	template <typename T = void> T ProcessAsSsl3() {
		return ((T (*)(TlsServerCertificateRequest*))(Il2CppBase() + 0x47E4408))(this);
	}
	template <typename T = void> T ProcessAsTls1() {
		return ((T (*)(TlsServerCertificateRequest*))(Il2CppBase() + 0x47E4418))(this);
	}

};

}
