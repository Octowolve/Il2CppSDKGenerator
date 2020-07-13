#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography.X509Certificates {

class X509Certificate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography.X509Certificates", "X509Certificate"));
	}

	template <typename T = uintptr_t> T& x509() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& hideDates() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& cachedCertificateHash() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& issuer_name() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& subject_name() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(uintptr_t sender) {
		return ((T (*)(X509Certificate*, uintptr_t))(Il2CppBase() + 0x427C5B0))(this, sender);
	}
	template <typename T = void> T System_Runtime_Serialization_ISerializable_GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(X509Certificate*, uintptr_t, uintptr_t))(Il2CppBase() + 0x427C5B4))(this, info, context);
	}
	template <typename T = Il2CppString*> T tostr(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(X509Certificate*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x427C674))(this, data);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(X509Certificate*, uintptr_t))(Il2CppBase() + 0x427C798))(this, other);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCertHash() {
		return ((T (*)(X509Certificate*))(Il2CppBase() + 0x427C9B8))(this);
	}
	template <typename T = Il2CppString*> T GetCertHashString() {
		return ((T (*)(X509Certificate*))(Il2CppBase() + 0x427CADC))(this);
	}
	template <typename T = Il2CppString*> T GetEffectiveDateString() {
		return ((T (*)(X509Certificate*))(Il2CppBase() + 0x427CB00))(this);
	}
	template <typename T = Il2CppString*> T GetExpirationDateString() {
		return ((T (*)(X509Certificate*))(Il2CppBase() + 0x427CC40))(this);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(X509Certificate*))(Il2CppBase() + 0x427CD80))(this);
	}
	template <typename T = Il2CppString*> T GetIssuerName() {
		return ((T (*)(X509Certificate*))(Il2CppBase() + 0x427CE40))(this);
	}
	template <typename T = Il2CppString*> T GetName() {
		return ((T (*)(X509Certificate*))(Il2CppBase() + 0x427CF1C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetPublicKey() {
		return ((T (*)(X509Certificate*))(Il2CppBase() + 0x427CFF8))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetRawCertData() {
		return ((T (*)(X509Certificate*))(Il2CppBase() + 0x427D0D4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(X509Certificate*))(Il2CppBase() + 0x427D1B0))(this);
	}
	template <typename T = Il2CppString*> T ToString_1(bool fVerbose) {
		return ((T (*)(X509Certificate*, bool))(Il2CppBase() + 0x427D1B8))(this, fVerbose);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T Load(Il2CppString* fileName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x427D7C8))(0, fileName);
	}
	template <typename T = Il2CppString*> T get_Issuer() {
		return ((T (*)(X509Certificate*))(Il2CppBase() + 0x427D660))(this);
	}
	template <typename T = Il2CppString*> T get_Subject() {
		return ((T (*)(X509Certificate*))(Il2CppBase() + 0x427D3A8))(this);
	}
	template <typename T = bool> T Equals_1(uintptr_t obj) {
		return ((T (*)(X509Certificate*, uintptr_t))(Il2CppBase() + 0x427DA28))(this, obj);
	}
	template <typename T = void> T Import(Il2CppArray<uintptr_t>* rawData, Il2CppString* password, uintptr_t keyStorageFlags) {
		return ((T (*)(X509Certificate*, Il2CppArray<uintptr_t>*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x427DAF4))(this, rawData, password, keyStorageFlags);
	}
	template <typename T = void> T Import_1(Il2CppString* fileName, Il2CppString* password, uintptr_t keyStorageFlags) {
		return ((T (*)(X509Certificate*, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x427DF54))(this, fileName, password, keyStorageFlags);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(X509Certificate*))(Il2CppBase() + 0x427DF9C))(this);
	}

};

}
