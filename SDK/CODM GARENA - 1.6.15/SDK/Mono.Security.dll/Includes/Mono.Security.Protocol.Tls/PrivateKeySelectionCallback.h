#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls {

class PrivateKeySelectionCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls", "PrivateKeySelectionCallback"));
	}


	template <typename T = uintptr_t> T Invoke(uintptr_t certificate, Il2CppString* targetHost) {
		return ((T (*)(PrivateKeySelectionCallback*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x47E520C))(this, certificate, targetHost);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t certificate, Il2CppString* targetHost, uintptr_t callback, uintptr_t object) {
		return ((T (*)(PrivateKeySelectionCallback*, uintptr_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x47E5BB0))(this, certificate, targetHost, callback, object);
	}
	template <typename T = uintptr_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(PrivateKeySelectionCallback*, uintptr_t))(Il2CppBase() + 0x47E5BE8))(this, result);
	}

};

}
