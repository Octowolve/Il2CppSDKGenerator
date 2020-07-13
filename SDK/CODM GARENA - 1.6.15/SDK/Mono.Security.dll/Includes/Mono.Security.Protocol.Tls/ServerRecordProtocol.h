#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls {

class ServerRecordProtocol
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls", "ServerRecordProtocol"));
	}


	template <typename T = uintptr_t> T GetMessage(uintptr_t type) {
		return ((T (*)(ServerRecordProtocol*, uintptr_t))(Il2CppBase() + 0x47E9F38))(this, type);
	}
	template <typename T = void> T ProcessHandshakeMessage(uintptr_t handMsg) {
		return ((T (*)(ServerRecordProtocol*, uintptr_t))(Il2CppBase() + 0x47EA290))(this, handMsg);
	}
	template <typename T = uintptr_t> T createClientHandshakeMessage(uintptr_t type, Il2CppArray<uintptr_t>* buffer) {
		return ((T (*)(ServerRecordProtocol*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47EA454))(this, type, buffer);
	}
	template <typename T = uintptr_t> T createServerHandshakeMessage(uintptr_t type) {
		return ((T (*)(ServerRecordProtocol*, uintptr_t))(Il2CppBase() + 0x47E9F3C))(this, type);
	}

};

}
