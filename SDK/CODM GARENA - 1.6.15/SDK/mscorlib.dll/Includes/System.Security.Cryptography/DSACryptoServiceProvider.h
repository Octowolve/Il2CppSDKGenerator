#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class DSACryptoServiceProvider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "DSACryptoServiceProvider"));
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
	template <typename T = uintptr_t> T& dsa() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> static T& useMachineKeyStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Finalize() {
		return ((T (*)(DSACryptoServiceProvider*))(Il2CppBase() + 0x303E670))(this);
	}
	template <typename T = int32_t> T get_KeySize() {
		return ((T (*)(DSACryptoServiceProvider*))(Il2CppBase() + 0x303E754))(this);
	}
	template <typename T = bool> T get_PublicOnly() {
		return ((T (*)(DSACryptoServiceProvider*))(Il2CppBase() + 0x303E788))(this);
	}
	template <typename T = uintptr_t> T ExportParameters(bool includePrivateParameters) {
		return ((T (*)(DSACryptoServiceProvider*, bool))(Il2CppBase() + 0x303E7B4))(this, includePrivateParameters);
	}
	template <typename T = void> T ImportParameters(uintptr_t parameters) {
		return ((T (*)(DSACryptoServiceProvider*, uintptr_t))(Il2CppBase() + 0x303E8D0))(this, parameters);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T CreateSignature(Il2CppArray<uintptr_t>* rgbHash) {
		return ((T (*)(DSACryptoServiceProvider*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x303E92C))(this, rgbHash);
	}
	template <typename T = bool> T VerifySignature(Il2CppArray<uintptr_t>* rgbHash, Il2CppArray<uintptr_t>* rgbSignature) {
		return ((T (*)(DSACryptoServiceProvider*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x303E960))(this, rgbHash, rgbSignature);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(DSACryptoServiceProvider*, bool))(Il2CppBase() + 0x303E6D8))(this, disposing);
	}
	template <typename T = void> T OnKeyGenerated(uintptr_t sender, uintptr_t e) {
		return ((T (*)(DSACryptoServiceProvider*, uintptr_t, uintptr_t))(Il2CppBase() + 0x303E994))(this, sender, e);
	}

};

}
