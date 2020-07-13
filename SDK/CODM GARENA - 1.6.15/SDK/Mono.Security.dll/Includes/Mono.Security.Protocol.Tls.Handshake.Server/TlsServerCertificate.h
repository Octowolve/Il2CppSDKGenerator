#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls.Handshake.Server {

class TlsServerCertificate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls.Handshake.Server", "TlsServerCertificate"));
	}


	template <typename T = void> T ProcessAsSsl3() {
		return ((T (*)(TlsServerCertificate*))(Il2CppBase() + 0x47E40A4))(this);
	}
	template <typename T = void> T ProcessAsTls1() {
		return ((T (*)(TlsServerCertificate*))(Il2CppBase() + 0x47E40B4))(this);
	}

};

}
