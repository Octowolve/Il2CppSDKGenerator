#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.X509 {

class X509Certificate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.X509", "X509Certificate"));
	}

	template <typename T = uintptr_t> T& decoder() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_encodedcert() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_from() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_until() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& issuer() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& m_issuername() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& m_keyalgo() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_keyalgoparams() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& subject() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& m_subject() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_publickey() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& signature() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& m_signaturealgo() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_signaturealgoparams() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& certhash() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _rsa() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& _dsa() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& version() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& serialnumber() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& issuerUniqueID() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& subjectUniqueID() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& extensions() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppString*> static T& encoding_error() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$mapF() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map10() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map11() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Parse(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(X509Certificate*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4C0D31C))(this, data);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetUnsignedBigInteger(Il2CppArray<uintptr_t>* integer) {
		return ((T (*)(X509Certificate*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4C0E070))(this, integer);
	}
	template <typename T = uintptr_t> T get_DSA() {
		return ((T (*)(X509Certificate*))(Il2CppBase() + 0x4C042C0))(this);
	}
	template <typename T = void> T set_DSA(uintptr_t value) {
		return ((T (*)(X509Certificate*, uintptr_t))(Il2CppBase() + 0x4C0E174))(this, value);
	}
	template <typename T = uintptr_t> T get_Extensions() {
		return ((T (*)(X509Certificate*))(Il2CppBase() + 0x4C0E188))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Hash() {
		return ((T (*)(X509Certificate*))(Il2CppBase() + 0x4C0E190))(this);
	}
	template <typename T = Il2CppString*> T get_IssuerName() {
		return ((T (*)(X509Certificate*))(Il2CppBase() + 0x4C0E620))(this);
	}
	template <typename T = Il2CppString*> T get_KeyAlgorithm() {
		return ((T (*)(X509Certificate*))(Il2CppBase() + 0x4C0E628))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_KeyAlgorithmParameters() {
		return ((T (*)(X509Certificate*))(Il2CppBase() + 0x4C0E630))(this);
	}
	template <typename T = void> T set_KeyAlgorithmParameters(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(X509Certificate*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4C0E6CC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_PublicKey() {
		return ((T (*)(X509Certificate*))(Il2CppBase() + 0x4C0E6D4))(this);
	}
	template <typename T = uintptr_t> T get_RSA() {
		return ((T (*)(X509Certificate*))(Il2CppBase() + 0x4C0E770))(this);
	}
	template <typename T = void> T set_RSA(uintptr_t value) {
		return ((T (*)(X509Certificate*, uintptr_t))(Il2CppBase() + 0x4C0E9A0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_RawData() {
		return ((T (*)(X509Certificate*))(Il2CppBase() + 0x4C0E9B4))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SerialNumber() {
		return ((T (*)(X509Certificate*))(Il2CppBase() + 0x4C0EA50))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Signature() {
		return ((T (*)(X509Certificate*))(Il2CppBase() + 0x4C0EAEC))(this);
	}
	template <typename T = Il2CppString*> T get_SignatureAlgorithm() {
		return ((T (*)(X509Certificate*))(Il2CppBase() + 0x4C0F0A4))(this);
	}
	template <typename T = Il2CppString*> T get_SubjectName() {
		return ((T (*)(X509Certificate*))(Il2CppBase() + 0x4C0F0AC))(this);
	}
	template <typename T = uintptr_t> T get_ValidFrom() {
		return ((T (*)(X509Certificate*))(Il2CppBase() + 0x4C0F0B4))(this);
	}
	template <typename T = uintptr_t> T get_ValidUntil() {
		return ((T (*)(X509Certificate*))(Il2CppBase() + 0x4C0F0C4))(this);
	}
	template <typename T = int32_t> T get_Version() {
		return ((T (*)(X509Certificate*))(Il2CppBase() + 0x4C0F0D4))(this);
	}
	template <typename T = bool> T get_IsCurrent() {
		return ((T (*)(X509Certificate*))(Il2CppBase() + 0x4C0F0DC))(this);
	}
	template <typename T = bool> T WasCurrent(uintptr_t instant) {
		return ((T (*)(X509Certificate*, uintptr_t))(Il2CppBase() + 0x4C0F1A8))(this, instant);
	}
	template <typename T = bool> T VerifySignature(uintptr_t dsa) {
		return ((T (*)(X509Certificate*, uintptr_t))(Il2CppBase() + 0x4C0F318))(this, dsa);
	}
	template <typename T = bool> T VerifySignature_1(uintptr_t rsa) {
		return ((T (*)(X509Certificate*, uintptr_t))(Il2CppBase() + 0x4C0F42C))(this, rsa);
	}
	template <typename T = bool> T VerifySignature_2(uintptr_t aa) {
		return ((T (*)(X509Certificate*, uintptr_t))(Il2CppBase() + 0x4C0F9B4))(this, aa);
	}
	template <typename T = bool> T get_IsSelfSigned() {
		return ((T (*)(X509Certificate*))(Il2CppBase() + 0x4C0FBBC))(this);
	}
	template <typename T = uintptr_t> T GetIssuerName() {
		return ((T (*)(X509Certificate*))(Il2CppBase() + 0x4C0FCA4))(this);
	}
	template <typename T = uintptr_t> T GetSubjectName() {
		return ((T (*)(X509Certificate*))(Il2CppBase() + 0x4C0FCAC))(this);
	}
	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(X509Certificate*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C0FCB4))(this, info, context);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T PEM(Il2CppString* type, Il2CppArray<uintptr_t>* data) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4C0D114))(0, type, data);
	}

};

}
