#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls.Handshake.Client {

class TlsServerCertificateRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls.Handshake.Client", "TlsServerCertificateRequest"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& certificateTypes() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& distinguisedNames() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = void> T Update() {
		return ((T (*)(TlsServerCertificateRequest*))(Il2CppBase() + 0x47E07A8))(this);
	}
	template <typename T = void> T ProcessAsSsl3() {
		return ((T (*)(TlsServerCertificateRequest*))(Il2CppBase() + 0x47E0828))(this);
	}
	template <typename T = void> T ProcessAsTls1() {
		return ((T (*)(TlsServerCertificateRequest*))(Il2CppBase() + 0x47E0838))(this);
	}

};

}
