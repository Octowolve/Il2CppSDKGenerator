#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls {

class ValidationResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls", "ValidationResult"));
	}

	template <typename T = bool> T& trusted() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& user_denied() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = int32_t> T& error_code() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T get_Trusted() {
		return ((T (*)(ValidationResult*))(Il2CppBase() + 0x4BFB3A0))(this);
	}
	template <typename T = int32_t> T get_ErrorCode() {
		return ((T (*)(ValidationResult*))(Il2CppBase() + 0x4BFB3A8))(this);
	}

};

}
