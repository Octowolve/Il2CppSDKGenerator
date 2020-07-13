#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class DefaultCertificatePolicy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "DefaultCertificatePolicy"));
	}


	template <typename T = bool> T CheckValidationResult(uintptr_t point, uintptr_t certificate, uintptr_t request, int32_t certificateProblem) {
		return ((T (*)(DefaultCertificatePolicy*, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x42BE8F4))(this, point, certificate, request, certificateProblem);
	}

};

}
