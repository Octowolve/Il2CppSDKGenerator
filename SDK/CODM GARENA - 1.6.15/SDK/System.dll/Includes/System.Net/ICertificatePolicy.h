#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class ICertificatePolicy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "ICertificatePolicy"));
	}


	template <typename T = bool> T CheckValidationResult(uintptr_t srvPoint, uintptr_t certificate, uintptr_t request, int32_t certificateProblem) {
		return ((T (*)(ICertificatePolicy*, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x0))(this, srvPoint, certificate, request, certificateProblem);
	}

};

}
