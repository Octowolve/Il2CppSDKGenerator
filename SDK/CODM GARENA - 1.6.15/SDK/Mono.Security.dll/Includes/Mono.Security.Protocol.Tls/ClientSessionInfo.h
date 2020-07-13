#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls {

class ClientSessionInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls", "ClientSessionInfo"));
	}

	template <typename T = int32_t> static T& ValidityInterval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& disposed() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& validuntil() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& host() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& sid() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& masterSecret() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Finalize() {
		return ((T (*)(ClientSessionInfo*))(Il2CppBase() + 0x47DCA68))(this);
	}
	template <typename T = Il2CppString*> T get_HostName() {
		return ((T (*)(ClientSessionInfo*))(Il2CppBase() + 0x47DB9E0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Id() {
		return ((T (*)(ClientSessionInfo*))(Il2CppBase() + 0x47DC1A8))(this);
	}
	template <typename T = bool> T get_Valid() {
		return ((T (*)(ClientSessionInfo*))(Il2CppBase() + 0x47DC0B0))(this);
	}
	template <typename T = void> T GetContext(uintptr_t context) {
		return ((T (*)(ClientSessionInfo*, uintptr_t))(Il2CppBase() + 0x47DC5E0))(this, context);
	}
	template <typename T = void> T SetContext(uintptr_t context) {
		return ((T (*)(ClientSessionInfo*, uintptr_t))(Il2CppBase() + 0x47DC814))(this, context);
	}
	template <typename T = void> T KeepAlive() {
		return ((T (*)(ClientSessionInfo*))(Il2CppBase() + 0x47DB9E8))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(ClientSessionInfo*))(Il2CppBase() + 0x47DBB38))(this);
	}
	template <typename T = void> T Dispose_1(bool disposing) {
		return ((T (*)(ClientSessionInfo*, bool))(Il2CppBase() + 0x47DCAD0))(this, disposing);
	}
	template <typename T = void> T CheckDisposed() {
		return ((T (*)(ClientSessionInfo*))(Il2CppBase() + 0x47DCBDC))(this);
	}

};

}
