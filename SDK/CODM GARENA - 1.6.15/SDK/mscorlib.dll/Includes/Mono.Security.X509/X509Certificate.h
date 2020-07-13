#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.X509 {

class X509Certificate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "Mono.Security.X509", "X509Certificate"));
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
	template <typename T = uintptr_t> T& _dsa() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& version() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& serialnumber() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& issuerUniqueID() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& subjectUniqueID() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& extensions() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppString*> static T& encoding_error() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Parse_1(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(X509Certificate*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3FC2508))(this, data);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetUnsignedBigInteger_1(Il2CppArray<uintptr_t>* integer) {
		return ((T (*)(X509Certificate*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3FC3190))(this, integer);
	}
	template <typename T = uintptr_t> T get_DSA_1() {
		return ((T (*)(X509Certificate*))(Il2CppBase() + 0x3FBB650))(this);
	}
	template <typename T = Il2CppString*> T get_IssuerName_1() {
		return ((T (*)(X509Certificate*))(Il2CppBase() + 0x3FC3294))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_KeyAlgorithmParameters_1() {
		return ((T (*)(X509Certificate*))(Il2CppBase() + 0x3FC329C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_PublicKey_1() {
		return ((T (*)(X509Certificate*))(Il2CppBase() + 0x3FC3338))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_RawData_1() {
		return ((T (*)(X509Certificate*))(Il2CppBase() + 0x3FC33D4))(this);
	}
	template <typename T = Il2CppString*> T get_SubjectName_1() {
		return ((T (*)(X509Certificate*))(Il2CppBase() + 0x3FC3470))(this);
	}
	template <typename T = uintptr_t> T get_ValidFrom_1() {
		return ((T (*)(X509Certificate*))(Il2CppBase() + 0x3FC3478))(this);
	}
	template <typename T = uintptr_t> T get_ValidUntil_1() {
		return ((T (*)(X509Certificate*))(Il2CppBase() + 0x3FC3488))(this);
	}
	template <typename T = uintptr_t> T GetIssuerName_1() {
		return ((T (*)(X509Certificate*))(Il2CppBase() + 0x3FC3498))(this);
	}
	template <typename T = uintptr_t> T GetSubjectName_1() {
		return ((T (*)(X509Certificate*))(Il2CppBase() + 0x3FC34A0))(this);
	}
	template <typename T = void> T GetObjectData_1(uintptr_t info, uintptr_t context) {
		return ((T (*)(X509Certificate*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3FC34A8))(this, info, context);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T PEM_1(Il2CppString* type, Il2CppArray<uintptr_t>* data) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3FC2300))(0, type, data);
	}

};

}
