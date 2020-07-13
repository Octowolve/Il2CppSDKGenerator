#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.X509 {

class X509Crl
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.X509", "X509Crl"));
	}

	template <typename T = Il2CppString*> T& issuer() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = unsigned char> T& version() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& thisUpdate() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& nextUpdate() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& entries() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& signatureOID() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& signature() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& extensions() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& encoded() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& hash_value() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map13() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Parse(Il2CppArray<uintptr_t>* crl) {
		return ((T (*)(X509Crl*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4C11658))(this, crl);
	}
	template <typename T = uintptr_t> T get_Extensions() {
		return ((T (*)(X509Crl*))(Il2CppBase() + 0x4C12004))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Hash() {
		return ((T (*)(X509Crl*))(Il2CppBase() + 0x4C1200C))(this);
	}
	template <typename T = Il2CppString*> T get_IssuerName() {
		return ((T (*)(X509Crl*))(Il2CppBase() + 0x4C123CC))(this);
	}
	template <typename T = uintptr_t> T get_NextUpdate() {
		return ((T (*)(X509Crl*))(Il2CppBase() + 0x4C123D4))(this);
	}
	template <typename T = bool> T Compare(Il2CppArray<uintptr_t>* array1, Il2CppArray<uintptr_t>* array2) {
		return ((T (*)(X509Crl*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4C123E4))(this, array1, array2);
	}
	template <typename T = uintptr_t> T GetCrlEntry(uintptr_t x509) {
		return ((T (*)(X509Crl*, uintptr_t))(Il2CppBase() + 0x4C12480))(this, x509);
	}
	template <typename T = uintptr_t> T GetCrlEntry_1(Il2CppArray<uintptr_t>* serialNumber) {
		return ((T (*)(X509Crl*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4C1255C))(this, serialNumber);
	}
	template <typename T = Il2CppString*> T GetHashName() {
		return ((T (*)(X509Crl*))(Il2CppBase() + 0x4C1211C))(this);
	}
	template <typename T = bool> T VerifySignature(uintptr_t dsa) {
		return ((T (*)(X509Crl*, uintptr_t))(Il2CppBase() + 0x4C1276C))(this, dsa);
	}
	template <typename T = bool> T VerifySignature_1(uintptr_t rsa) {
		return ((T (*)(X509Crl*, uintptr_t))(Il2CppBase() + 0x4C12B08))(this, rsa);
	}
	template <typename T = bool> T VerifySignature_2(uintptr_t aa) {
		return ((T (*)(X509Crl*, uintptr_t))(Il2CppBase() + 0x4C12BF4))(this, aa);
	}

};

}
