#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Cryptography {

class RSAManaged
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Cryptography", "RSAManaged"));
	}

	template <typename T = bool> T& isCRTpossible() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& keyBlinding() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = bool> T& keypairGenerated() {
		return *(T*)((uintptr_t)this + 0x12);
	}
	template <typename T = bool> T& m_disposed() {
		return *(T*)((uintptr_t)this + 0x13);
	}
	template <typename T = uintptr_t> T& d() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& p() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& q() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& dp() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& dq() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& qInv() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& n() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& e() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& KeyGenerated() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Finalize() {
		return ((T (*)(RSAManaged*))(Il2CppBase() + 0x47D3830))(this);
	}
	template <typename T = void> T GenerateKeyPair() {
		return ((T (*)(RSAManaged*))(Il2CppBase() + 0x47D389C))(this);
	}
	template <typename T = int32_t> T get_KeySize() {
		return ((T (*)(RSAManaged*))(Il2CppBase() + 0x47D3D10))(this);
	}
	template <typename T = bool> T get_PublicOnly() {
		return ((T (*)(RSAManaged*))(Il2CppBase() + 0x47D3D5C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T DecryptValue(Il2CppArray<uintptr_t>* rgb) {
		return ((T (*)(RSAManaged*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47D3E64))(this, rgb);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T EncryptValue(Il2CppArray<uintptr_t>* rgb) {
		return ((T (*)(RSAManaged*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47D43C4))(this, rgb);
	}
	template <typename T = uintptr_t> T ExportParameters(bool includePrivateParameters) {
		return ((T (*)(RSAManaged*, bool))(Il2CppBase() + 0x47D452C))(this, includePrivateParameters);
	}
	template <typename T = void> T ImportParameters(uintptr_t parameters) {
		return ((T (*)(RSAManaged*, uintptr_t))(Il2CppBase() + 0x47D49E0))(this, parameters);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(RSAManaged*, bool))(Il2CppBase() + 0x47D5074))(this, disposing);
	}
	template <typename T = Il2CppString*> T ToXmlString(bool includePrivateParameters) {
		return ((T (*)(RSAManaged*, bool))(Il2CppBase() + 0x47D5408))(this, includePrivateParameters);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetPaddedValue(uintptr_t value, int32_t length) {
		return ((T (*)(RSAManaged*, uintptr_t, int32_t))(Il2CppBase() + 0x47D42A4))(this, value, length);
	}

};

}
