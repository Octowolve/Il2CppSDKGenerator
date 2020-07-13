#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class AuthenticationSchemeSelector
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "AuthenticationSchemeSelector"));
	}


	template <typename T = uintptr_t> T Invoke(uintptr_t httpRequest) {
		return ((T (*)(AuthenticationSchemeSelector*, uintptr_t))(Il2CppBase() + 0x42B69AC))(this, httpRequest);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t httpRequest, uintptr_t callback, uintptr_t object) {
		return ((T (*)(AuthenticationSchemeSelector*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x42B6A44))(this, httpRequest, callback, object);
	}
	template <typename T = uintptr_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(AuthenticationSchemeSelector*, uintptr_t))(Il2CppBase() + 0x42B6A70))(this, result);
	}

};

}
