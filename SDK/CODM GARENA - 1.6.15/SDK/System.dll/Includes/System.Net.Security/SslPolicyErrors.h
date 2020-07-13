#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net.Security {

class SslPolicyErrors
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net.Security", "SslPolicyErrors"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& None() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& RemoteCertificateNotAvailable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& RemoteCertificateNameMismatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& RemoteCertificateChainErrors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
