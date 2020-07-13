#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChainValidationHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "", "ChainValidationHelper"));
	}

	template <typename T = uintptr_t> T& sender() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& host() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> static T& is_macosx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& s_flags() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> T get_Host() {
		return ((T (*)(ChainValidationHelper*))(Il2CppBase() + 0x3E56828))(this);
	}
	template <typename T = uintptr_t> T ValidateChain(uintptr_t certs) {
		return ((T (*)(ChainValidationHelper*, uintptr_t))(Il2CppBase() + 0x3E5693C))(this, certs);
	}
	template <typename T = int32_t> static T GetStatusFromChain(uintptr_t chain) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3E57FB4))(0, chain);
	}
	template <typename T = uintptr_t> static T GetErrorsFromChain(uintptr_t chain) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3E573D4))(0, chain);
	}
	template <typename T = bool> static T CheckCertificateUsage(uintptr_t cert) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3E57450))(0, cert);
	}
	template <typename T = bool> static T CheckServerIdentity(uintptr_t cert, Il2CppString* targetHost) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x3E57B64))(0, cert, targetHost);
	}
	template <typename T = bool> static T CheckDomainName(Il2CppString* subjectName, Il2CppString* targetHost) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3E596C0))(0, subjectName, targetHost);
	}
	template <typename T = bool> static T Match(Il2CppString* hostname, Il2CppString* pattern) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3E592D8))(0, hostname, pattern);
	}

};

}
