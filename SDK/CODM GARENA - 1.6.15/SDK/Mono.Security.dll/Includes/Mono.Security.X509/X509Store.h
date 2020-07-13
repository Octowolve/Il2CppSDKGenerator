#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.X509 {

class X509Store
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.X509", "X509Store"));
	}

	template <typename T = Il2CppString*> T& _storePath() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _certificates() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _crls() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& _crl() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uintptr_t> T get_Certificates() {
		return ((T (*)(X509Store*))(Il2CppBase() + 0x4C13A74))(this);
	}
	template <typename T = uintptr_t> T get_Crls() {
		return ((T (*)(X509Store*))(Il2CppBase() + 0x4C13CC8))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T Load(Il2CppString* filename) {
		return ((T (*)(X509Store*, Il2CppString*))(Il2CppBase() + 0x4C13FC8))(this, filename);
	}
	template <typename T = uintptr_t> T LoadCertificate(Il2CppString* filename) {
		return ((T (*)(X509Store*, Il2CppString*))(Il2CppBase() + 0x4C14228))(this, filename);
	}
	template <typename T = uintptr_t> T LoadCrl(Il2CppString* filename) {
		return ((T (*)(X509Store*, Il2CppString*))(Il2CppBase() + 0x4C142C4))(this, filename);
	}
	template <typename T = bool> T CheckStore(Il2CppString* path, bool throwException) {
		return ((T (*)(X509Store*, Il2CppString*, bool))(Il2CppBase() + 0x4C14360))(this, path, throwException);
	}
	template <typename T = uintptr_t> T BuildCertificatesCollection(Il2CppString* storeName) {
		return ((T (*)(X509Store*, Il2CppString*))(Il2CppBase() + 0x4C13AA0))(this, storeName);
	}
	template <typename T = uintptr_t> T BuildCrlsCollection(Il2CppString* storeName) {
		return ((T (*)(X509Store*, Il2CppString*))(Il2CppBase() + 0x4C13D8C))(this, storeName);
	}

};

}
