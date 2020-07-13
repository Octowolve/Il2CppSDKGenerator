#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography.X509Certificates {

class X509ChainPolicy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Security.Cryptography.X509Certificates", "X509ChainPolicy"));
	}

	template <typename T = uintptr_t> T& apps() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& cert() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& store() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& rflag() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& mode() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& timeout() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& vflags() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& vtime() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = uintptr_t> T get_ExtraStore() {
		return ((T (*)(X509ChainPolicy*))(Il2CppBase() + 0x3E572DC))(this);
	}
	template <typename T = uintptr_t> T get_RevocationFlag() {
		return ((T (*)(X509ChainPolicy*))(Il2CppBase() + 0x3E86E30))(this);
	}
	template <typename T = void> T set_RevocationFlag(uintptr_t value) {
		return ((T (*)(X509ChainPolicy*, uintptr_t))(Il2CppBase() + 0x3E88E20))(this, value);
	}
	template <typename T = uintptr_t> T get_RevocationMode() {
		return ((T (*)(X509ChainPolicy*))(Il2CppBase() + 0x3E86E28))(this);
	}
	template <typename T = void> T set_RevocationMode(uintptr_t value) {
		return ((T (*)(X509ChainPolicy*, uintptr_t))(Il2CppBase() + 0x3E5316C))(this, value);
	}
	template <typename T = void> T set_UrlRetrievalTimeout(uintptr_t value) {
		return ((T (*)(X509ChainPolicy*, uintptr_t))(Il2CppBase() + 0x3E88EDC))(this, value);
	}
	template <typename T = uintptr_t> T get_VerificationFlags() {
		return ((T (*)(X509ChainPolicy*))(Il2CppBase() + 0x3E84110))(this);
	}
	template <typename T = void> T set_VerificationFlags(uintptr_t value) {
		return ((T (*)(X509ChainPolicy*, uintptr_t))(Il2CppBase() + 0x3E88EEC))(this, value);
	}
	template <typename T = uintptr_t> T get_VerificationTime() {
		return ((T (*)(X509ChainPolicy*))(Il2CppBase() + 0x3E853C8))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(X509ChainPolicy*))(Il2CppBase() + 0x3E88C94))(this);
	}

};

}
