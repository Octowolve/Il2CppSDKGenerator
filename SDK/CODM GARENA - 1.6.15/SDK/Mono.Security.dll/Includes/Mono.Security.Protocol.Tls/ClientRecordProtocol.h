#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls {

class ClientRecordProtocol
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls", "ClientRecordProtocol"));
	}


	template <typename T = uintptr_t> T GetMessage(uintptr_t type) {
		return ((T (*)(ClientRecordProtocol*, uintptr_t))(Il2CppBase() + 0x47DA7E8))(this, type);
	}
	template <typename T = void> T ProcessHandshakeMessage(uintptr_t handMsg) {
		return ((T (*)(ClientRecordProtocol*, uintptr_t))(Il2CppBase() + 0x47DAA9C))(this, handMsg);
	}
	template <typename T = uintptr_t> T createClientHandshakeMessage(uintptr_t type) {
		return ((T (*)(ClientRecordProtocol*, uintptr_t))(Il2CppBase() + 0x47DA7EC))(this, type);
	}
	template <typename T = uintptr_t> T createServerHandshakeMessage(uintptr_t type, Il2CppArray<uintptr_t>* buffer) {
		return ((T (*)(ClientRecordProtocol*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47DAC78))(this, type, buffer);
	}

};

}
