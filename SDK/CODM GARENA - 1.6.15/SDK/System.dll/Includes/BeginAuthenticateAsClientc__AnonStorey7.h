#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BeginAuthenticateAsClientcAnonStorey7
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "", "<BeginAuthenticateAsClient>c__AnonStorey7"));
	}

	template <typename T = uintptr_t> T& clientCertificates() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T m__7(uintptr_t cert, Il2CppString* host) {
		return ((T (*)(BeginAuthenticateAsClientcAnonStorey7*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x3E52314))(this, cert, host);
	}
	template <typename T = bool> T m__8(uintptr_t cert, Il2CppArray<uintptr_t>* certErrors) {
		return ((T (*)(BeginAuthenticateAsClientcAnonStorey7*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3E52DEC))(this, cert, certErrors);
	}

};

}
