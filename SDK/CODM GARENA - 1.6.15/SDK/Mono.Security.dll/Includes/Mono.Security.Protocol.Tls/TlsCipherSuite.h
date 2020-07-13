#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls {

class TlsCipherSuite
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls", "TlsCipherSuite"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& header() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& headerLock() {
		return *(T*)((uintptr_t)this + 0x54);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T ComputeServerRecordMAC(uintptr_t contentType, Il2CppArray<uintptr_t>* fragment) {
		return ((T (*)(TlsCipherSuite*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4BF8E00))(this, contentType, fragment);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ComputeClientRecordMAC(uintptr_t contentType, Il2CppArray<uintptr_t>* fragment) {
		return ((T (*)(TlsCipherSuite*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4BF9188))(this, contentType, fragment);
	}
	template <typename T = void> T ComputeMasterSecret(Il2CppArray<uintptr_t>* preMasterSecret) {
		return ((T (*)(TlsCipherSuite*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4BF9510))(this, preMasterSecret);
	}
	template <typename T = void> T ComputeKeys() {
		return ((T (*)(TlsCipherSuite*))(Il2CppBase() + 0x4BF9664))(this);
	}

};

}
