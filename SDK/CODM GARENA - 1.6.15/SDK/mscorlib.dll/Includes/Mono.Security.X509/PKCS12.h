#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.X509 {

class PKCS12
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "Mono.Security.X509", "PKCS12"));
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
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map9() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$mapA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$mapB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$mapF() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Decode_1(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(PKCS12*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3FB809C))(this, data);
	}
	template <typename T = void> T Finalize_1() {
		return ((T (*)(PKCS12*))(Il2CppBase() + 0x3FB9A60))(this);
	}
	template <typename T = void> T set_Password_1(Il2CppString* value) {
		return ((T (*)(PKCS12*, Il2CppString*))(Il2CppBase() + 0x3FB7E78))(this, value);
	}
	template <typename T = int32_t> T get_IterationCount_1() {
		return ((T (*)(PKCS12*))(Il2CppBase() + 0x3FB9BA4))(this);
	}
	template <typename T = void> T set_IterationCount_1(int32_t value) {
		return ((T (*)(PKCS12*, int32_t))(Il2CppBase() + 0x3FB9BAC))(this, value);
	}
	template <typename T = uintptr_t> T get_Certificates_1() {
		return ((T (*)(PKCS12*))(Il2CppBase() + 0x3FB9BB4))(this);
	}
	template <typename T = uintptr_t> T get_RNG_1() {
		return ((T (*)(PKCS12*))(Il2CppBase() + 0x3FBA340))(this);
	}
	template <typename T = bool> T Compare_1(Il2CppArray<uintptr_t>* expected, Il2CppArray<uintptr_t>* actual) {
		return ((T (*)(PKCS12*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3FB8D2C))(this, expected, actual);
	}
	template <typename T = uintptr_t> T GetSymmetricAlgorithm_1(Il2CppString* algorithmOid, Il2CppArray<uintptr_t>* salt, int32_t iterationCount) {
		return ((T (*)(PKCS12*, Il2CppString*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x3FBA36C))(this, algorithmOid, salt, iterationCount);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T Decrypt_2(Il2CppString* algorithmOid, Il2CppArray<uintptr_t>* salt, int32_t iterationCount, Il2CppArray<uintptr_t>* encryptedData) {
		return ((T (*)(PKCS12*, Il2CppString*, Il2CppArray<uintptr_t>*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3FBAD7C))(this, algorithmOid, salt, iterationCount, encryptedData);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T Decrypt_3(uintptr_t ed) {
		return ((T (*)(PKCS12*, uintptr_t))(Il2CppBase() + 0x3FB99B8))(this, ed);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T Encrypt_1(Il2CppString* algorithmOid, Il2CppArray<uintptr_t>* salt, int32_t iterationCount, Il2CppArray<uintptr_t>* data) {
		return ((T (*)(PKCS12*, Il2CppString*, Il2CppArray<uintptr_t>*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3FBAF54))(this, algorithmOid, salt, iterationCount, data);
	}
	template <typename T = uintptr_t> T GetExistingParameters_1(uintptr_t* found) {
		return ((T (*)(PKCS12*, uintptr_t*))(Il2CppBase() + 0x3FBB198))(this, found);
	}
	template <typename T = void> T AddPrivateKey_1(uintptr_t pki) {
		return ((T (*)(PKCS12*, uintptr_t))(Il2CppBase() + 0x3FBBAAC))(this, pki);
	}
	template <typename T = void> T ReadSafeBag_1(uintptr_t safeBag) {
		return ((T (*)(PKCS12*, uintptr_t))(Il2CppBase() + 0x3FB8DC8))(this, safeBag);
	}
	template <typename T = uintptr_t> T CertificateSafeBag_1(uintptr_t x509, uintptr_t attributes) {
		return ((T (*)(PKCS12*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3FBBCA0))(this, x509, attributes);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T MAC_1(Il2CppArray<uintptr_t>* password, Il2CppArray<uintptr_t>* salt, int32_t iterations, Il2CppArray<uintptr_t>* data) {
		return ((T (*)(PKCS12*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3FB8BC8))(this, password, salt, iterations, data);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetBytes_1() {
		return ((T (*)(PKCS12*))(Il2CppBase() + 0x3FBCDF0))(this);
	}
	template <typename T = uintptr_t> T EncryptedContentInfo_1(uintptr_t safeBags, Il2CppString* algorithmOid) {
		return ((T (*)(PKCS12*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x3FBF22C))(this, safeBags, algorithmOid);
	}
	template <typename T = void> T AddCertificate_2(uintptr_t cert) {
		return ((T (*)(PKCS12*, uintptr_t))(Il2CppBase() + 0x3FBF224))(this, cert);
	}
	template <typename T = void> T AddCertificate_3(uintptr_t cert, uintptr_t attributes) {
		return ((T (*)(PKCS12*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3FBF5F4))(this, cert, attributes);
	}
	template <typename T = void> T RemoveCertificate_2(uintptr_t cert) {
		return ((T (*)(PKCS12*, uintptr_t))(Il2CppBase() + 0x3FBF21C))(this, cert);
	}
	template <typename T = void> T RemoveCertificate_3(uintptr_t cert, uintptr_t attrs) {
		return ((T (*)(PKCS12*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3FBF8A4))(this, cert, attrs);
	}
	template <typename T = uintptr_t> T Clone_1() {
		return ((T (*)(PKCS12*))(Il2CppBase() + 0x3FBFE5C))(this);
	}
	template <typename T = int32_t> static T get_MaximumPasswordLength_1() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FB9AF4))(0);
	}

};

}
