#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography.X509Certificates {

class X509Certificate2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Security.Cryptography.X509Certificates", "X509Certificate2"));
	}

	template <typename T = bool> T& _archived() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& _extensions() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& _name() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& _serial() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _publicKey() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& issuer_name() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& subject_name() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& signature_algorithm() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _cert() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> static T& empty_error() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& commonName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& email() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& signedData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T get_Extensions() {
		return ((T (*)(X509Certificate2*))(Il2CppBase() + 0x3E5827C))(this);
	}
	template <typename T = uintptr_t> T get_IssuerName() {
		return ((T (*)(X509Certificate2*))(Il2CppBase() + 0x3E7E23C))(this);
	}
	template <typename T = uintptr_t> T get_NotAfter() {
		return ((T (*)(X509Certificate2*))(Il2CppBase() + 0x3E7E3AC))(this);
	}
	template <typename T = uintptr_t> T get_NotBefore() {
		return ((T (*)(X509Certificate2*))(Il2CppBase() + 0x3E7E4F4))(this);
	}
	template <typename T = uintptr_t> T get_PrivateKey() {
		return ((T (*)(X509Certificate2*))(Il2CppBase() + 0x3E528A8))(this);
	}
	template <typename T = uintptr_t> T get_PublicKey() {
		return ((T (*)(X509Certificate2*))(Il2CppBase() + 0x3E7E63C))(this);
	}
	template <typename T = Il2CppString*> T get_SerialNumber() {
		return ((T (*)(X509Certificate2*))(Il2CppBase() + 0x3E7E878))(this);
	}
	template <typename T = uintptr_t> T get_SignatureAlgorithm() {
		return ((T (*)(X509Certificate2*))(Il2CppBase() + 0x3E7EA78))(this);
	}
	template <typename T = uintptr_t> T get_SubjectName() {
		return ((T (*)(X509Certificate2*))(Il2CppBase() + 0x3E7EBCC))(this);
	}
	template <typename T = Il2CppString*> T get_Thumbprint() {
		return ((T (*)(X509Certificate2*))(Il2CppBase() + 0x3E7ED3C))(this);
	}
	template <typename T = int32_t> T get_Version() {
		return ((T (*)(X509Certificate2*))(Il2CppBase() + 0x3E58174))(this);
	}
	template <typename T = Il2CppString*> T GetNameInfo(uintptr_t nameType, bool forIssuer) {
		return ((T (*)(X509Certificate2*, uintptr_t, bool))(Il2CppBase() + 0x3E7ED44))(this, nameType, forIssuer);
	}
	template <typename T = uintptr_t> T Find(Il2CppArray<uintptr_t>* oid, uintptr_t dn) {
		return ((T (*)(X509Certificate2*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3E7F2D0))(this, oid, dn);
	}
	template <typename T = Il2CppString*> T GetValueAsString(uintptr_t pair) {
		return ((T (*)(X509Certificate2*, uintptr_t))(Il2CppBase() + 0x3E7F3D4))(this, pair);
	}
	template <typename T = void> T ImportPkcs12(Il2CppArray<uintptr_t>* rawData, Il2CppString* password) {
		return ((T (*)(X509Certificate2*, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x3E7F680))(this, rawData, password);
	}
	template <typename T = void> T Import(Il2CppArray<uintptr_t>* rawData, Il2CppString* password, uintptr_t keyStorageFlags) {
		return ((T (*)(X509Certificate2*, Il2CppArray<uintptr_t>*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3E7F900))(this, rawData, password, keyStorageFlags);
	}
	template <typename T = void> T Import_1(Il2CppString* fileName, Il2CppString* password, uintptr_t keyStorageFlags) {
		return ((T (*)(X509Certificate2*, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3E7FC3C))(this, fileName, password, keyStorageFlags);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T Load(Il2CppString* fileName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3E7FD14))(0, fileName);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(X509Certificate2*))(Il2CppBase() + 0x3E7FF74))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(X509Certificate2*))(Il2CppBase() + 0x3E80058))(this);
	}
	template <typename T = Il2CppString*> T ToString_1(bool verbose) {
		return ((T (*)(X509Certificate2*, bool))(Il2CppBase() + 0x3E800F4))(this, verbose);
	}
	template <typename T = void> static T AppendBuffer(uintptr_t sb, Il2CppArray<uintptr_t>* buffer) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3E8064C))(0, sb, buffer);
	}
	template <typename T = bool> T Verify() {
		return ((T (*)(X509Certificate2*))(Il2CppBase() + 0x3E8076C))(this);
	}
	template <typename T = uintptr_t> T get_MonoCertificate() {
		return ((T (*)(X509Certificate2*))(Il2CppBase() + 0x3E808FC))(this);
	}

};

}
