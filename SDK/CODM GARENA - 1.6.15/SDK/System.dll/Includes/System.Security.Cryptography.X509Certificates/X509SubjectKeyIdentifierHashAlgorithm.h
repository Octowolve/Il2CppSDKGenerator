#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography.X509Certificates {

class X509SubjectKeyIdentifierHashAlgorithm
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Security.Cryptography.X509Certificates", "X509SubjectKeyIdentifierHashAlgorithm"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& Sha1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ShortSha1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& CapiSha1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
