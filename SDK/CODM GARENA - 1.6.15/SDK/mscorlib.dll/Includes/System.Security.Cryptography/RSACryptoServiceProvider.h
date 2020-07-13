#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class RSACryptoServiceProvider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "RSACryptoServiceProvider"));
	}

	template <typename T = uintptr_t> T& store() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& persistKey() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& persisted() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = bool> T& privateKeyExportable() {
		return *(T*)((uintptr_t)this + 0x16);
	}
	template <typename T = bool> T& m_disposed() {
		return *(T*)((uintptr_t)this + 0x17);
	}
	template <typename T = uintptr_t> T& rsa() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> static T& useMachineKeyStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Common(int32_t dwKeySize, uintptr_t p) {
		return ((T (*)(RSACryptoServiceProvider*, int32_t, uintptr_t))(Il2CppBase() + 0x427165C))(this, dwKeySize, p);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(RSACryptoServiceProvider*))(Il2CppBase() + 0x4271A68))(this);
	}
	template <typename T = int32_t> T get_KeySize() {
		return ((T (*)(RSACryptoServiceProvider*))(Il2CppBase() + 0x4271A44))(this);
	}
	template <typename T = bool> T get_PublicOnly() {
		return ((T (*)(RSACryptoServiceProvider*))(Il2CppBase() + 0x4271B40))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T DecryptValue(Il2CppArray<uintptr_t>* rgb) {
		return ((T (*)(RSACryptoServiceProvider*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4271B6C))(this, rgb);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T Encrypt(Il2CppArray<uintptr_t>* rgb, bool fOAEP) {
		return ((T (*)(RSACryptoServiceProvider*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x4271C68))(this, rgb, fOAEP);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T EncryptValue(Il2CppArray<uintptr_t>* rgb) {
		return ((T (*)(RSACryptoServiceProvider*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4271DE4))(this, rgb);
	}
	template <typename T = uintptr_t> T ExportParameters(bool includePrivateParameters) {
		return ((T (*)(RSACryptoServiceProvider*, bool))(Il2CppBase() + 0x4271E18))(this, includePrivateParameters);
	}
	template <typename T = void> T ImportParameters(uintptr_t parameters) {
		return ((T (*)(RSACryptoServiceProvider*, uintptr_t))(Il2CppBase() + 0x4271F10))(this, parameters);
	}
	template <typename T = uintptr_t> T GetHash(uintptr_t halg) {
		return ((T (*)(RSACryptoServiceProvider*, uintptr_t))(Il2CppBase() + 0x4271F6C))(this, halg);
	}
	template <typename T = bool> T VerifyData(Il2CppArray<uintptr_t>* buffer, uintptr_t halg, Il2CppArray<uintptr_t>* signature) {
		return ((T (*)(RSACryptoServiceProvider*, Il2CppArray<uintptr_t>*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4272154))(this, buffer, halg, signature);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(RSACryptoServiceProvider*, bool))(Il2CppBase() + 0x4271AD0))(this, disposing);
	}
	template <typename T = void> T OnKeyGenerated(uintptr_t sender, uintptr_t e) {
		return ((T (*)(RSACryptoServiceProvider*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42722DC))(this, sender, e);
	}
	template <typename T = void> T ImportCspBlob(Il2CppArray<uintptr_t>* keyBlob) {
		return ((T (*)(RSACryptoServiceProvider*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4272374))(this, keyBlob);
	}

};

}
