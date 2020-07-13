#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.X509 {

class PKCS12
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.X509", "PKCS12"));
	}

	template <typename T = int32_t> static T& recommendedIterationCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _password() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _keyBags() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _secretBags() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _certs() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& _keyBagsChanged() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& _secretBagsChanged() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = bool> T& _certsChanged() {
		return *(T*)((uintptr_t)this + 0x1A);
	}
	template <typename T = int32_t> T& _iterations() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& _safeBags() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _rng() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> static T& password_max_length() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map6() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map7() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$mapC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Decode(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(PKCS12*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4C00430))(this, data);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(PKCS12*))(Il2CppBase() + 0x4C01F14))(this);
	}
	template <typename T = void> T set_Password(Il2CppString* value) {
		return ((T (*)(PKCS12*, Il2CppString*))(Il2CppBase() + 0x4C0020C))(this, value);
	}
	template <typename T = int32_t> T get_IterationCount() {
		return ((T (*)(PKCS12*))(Il2CppBase() + 0x4C02058))(this);
	}
	template <typename T = void> T set_IterationCount(int32_t value) {
		return ((T (*)(PKCS12*, int32_t))(Il2CppBase() + 0x4C02060))(this, value);
	}
	template <typename T = uintptr_t> T get_Keys() {
		return ((T (*)(PKCS12*))(Il2CppBase() + 0x4C02068))(this);
	}
	template <typename T = uintptr_t> T get_Certificates() {
		return ((T (*)(PKCS12*))(Il2CppBase() + 0x4C02C18))(this);
	}
	template <typename T = uintptr_t> T get_RNG() {
		return ((T (*)(PKCS12*))(Il2CppBase() + 0x4C03188))(this);
	}
	template <typename T = bool> T Compare(Il2CppArray<uintptr_t>* expected, Il2CppArray<uintptr_t>* actual) {
		return ((T (*)(PKCS12*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4C01138))(this, expected, actual);
	}
	template <typename T = uintptr_t> T GetSymmetricAlgorithm(Il2CppString* algorithmOid, Il2CppArray<uintptr_t>* salt, int32_t iterationCount) {
		return ((T (*)(PKCS12*, Il2CppString*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4C031B4))(this, algorithmOid, salt, iterationCount);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T Decrypt(Il2CppString* algorithmOid, Il2CppArray<uintptr_t>* salt, int32_t iterationCount, Il2CppArray<uintptr_t>* encryptedData) {
		return ((T (*)(PKCS12*, Il2CppString*, Il2CppArray<uintptr_t>*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4C02A40))(this, algorithmOid, salt, iterationCount, encryptedData);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T Decrypt_1(uintptr_t ed) {
		return ((T (*)(PKCS12*, uintptr_t))(Il2CppBase() + 0x4C01E18))(this, ed);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T Encrypt(Il2CppString* algorithmOid, Il2CppArray<uintptr_t>* salt, int32_t iterationCount, Il2CppArray<uintptr_t>* data) {
		return ((T (*)(PKCS12*, Il2CppString*, Il2CppArray<uintptr_t>*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4C03BC4))(this, algorithmOid, salt, iterationCount, data);
	}
	template <typename T = uintptr_t> T GetExistingParameters(uintptr_t* found) {
		return ((T (*)(PKCS12*, uintptr_t*))(Il2CppBase() + 0x4C03E08))(this, found);
	}
	template <typename T = void> T AddPrivateKey(uintptr_t pki) {
		return ((T (*)(PKCS12*, uintptr_t))(Il2CppBase() + 0x4C04770))(this, pki);
	}
	template <typename T = void> T ReadSafeBag(uintptr_t safeBag) {
		return ((T (*)(PKCS12*, uintptr_t))(Il2CppBase() + 0x4C011D4))(this, safeBag);
	}
	template <typename T = uintptr_t> T CertificateSafeBag(uintptr_t x509, uintptr_t attributes) {
		return ((T (*)(PKCS12*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C04978))(this, x509, attributes);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T MAC(Il2CppArray<uintptr_t>* password, Il2CppArray<uintptr_t>* salt, int32_t iterations, Il2CppArray<uintptr_t>* data) {
		return ((T (*)(PKCS12*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4C00FD4))(this, password, salt, iterations, data);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetBytes() {
		return ((T (*)(PKCS12*))(Il2CppBase() + 0x4C05AB8))(this);
	}
	template <typename T = uintptr_t> T EncryptedContentInfo(uintptr_t safeBags, Il2CppString* algorithmOid) {
		return ((T (*)(PKCS12*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4C07F40))(this, safeBags, algorithmOid);
	}
	template <typename T = void> T AddCertificate(uintptr_t cert) {
		return ((T (*)(PKCS12*, uintptr_t))(Il2CppBase() + 0x4C07F38))(this, cert);
	}
	template <typename T = void> T AddCertificate_1(uintptr_t cert, uintptr_t attributes) {
		return ((T (*)(PKCS12*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C0830C))(this, cert, attributes);
	}
	template <typename T = void> T RemoveCertificate(uintptr_t cert) {
		return ((T (*)(PKCS12*, uintptr_t))(Il2CppBase() + 0x4C07F30))(this, cert);
	}
	template <typename T = void> T RemoveCertificate_1(uintptr_t cert, uintptr_t attrs) {
		return ((T (*)(PKCS12*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C085DC))(this, cert, attrs);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(PKCS12*))(Il2CppBase() + 0x4C08B5C))(this);
	}
	template <typename T = int32_t> static T get_MaximumPasswordLength() {
		return ((T (*)(void *))(Il2CppBase() + 0x4C01FA8))(0);
	}

};

}
