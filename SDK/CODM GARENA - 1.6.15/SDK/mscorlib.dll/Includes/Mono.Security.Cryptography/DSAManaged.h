#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Cryptography {

class DSAManaged
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "Mono.Security.Cryptography", "DSAManaged"));
	}

	template <typename T = bool> T& keypairGenerated() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_disposed() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = uintptr_t> T& p() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& q() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& g() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& x() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& y() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& j() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& seed() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& counter() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& j_missing() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& rng() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& KeyGenerated() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T add_KeyGenerated(uintptr_t value) {
		return ((T (*)(DSAManaged*, uintptr_t))(Il2CppBase() + 0x3FA4C54))(this, value);
	}
	template <typename T = void> T remove_KeyGenerated(uintptr_t value) {
		return ((T (*)(DSAManaged*, uintptr_t))(Il2CppBase() + 0x3FA4DE0))(this, value);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(DSAManaged*))(Il2CppBase() + 0x3FA4F6C))(this);
	}
	template <typename T = void> T Generate() {
		return ((T (*)(DSAManaged*))(Il2CppBase() + 0x3FA4FD8))(this);
	}
	template <typename T = void> T GenerateKeyPair() {
		return ((T (*)(DSAManaged*))(Il2CppBase() + 0x3FA577C))(this);
	}
	template <typename T = void> T add(Il2CppArray<uintptr_t>* a, Il2CppArray<uintptr_t>* b, int32_t value) {
		return ((T (*)(DSAManaged*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x3FA59BC))(this, a, b, value);
	}
	template <typename T = void> T GenerateParams(int32_t keyLength) {
		return ((T (*)(DSAManaged*, int32_t))(Il2CppBase() + 0x3FA5028))(this, keyLength);
	}
	template <typename T = uintptr_t> T get_Random() {
		return ((T (*)(DSAManaged*))(Il2CppBase() + 0x3FA5AA0))(this);
	}
	template <typename T = int32_t> T get_KeySize() {
		return ((T (*)(DSAManaged*))(Il2CppBase() + 0x3FA5ACC))(this);
	}
	template <typename T = bool> T get_PublicOnly() {
		return ((T (*)(DSAManaged*))(Il2CppBase() + 0x3FA5B0C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T NormalizeArray(Il2CppArray<uintptr_t>* array) {
		return ((T (*)(DSAManaged*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3FA5BC4))(this, array);
	}
	template <typename T = uintptr_t> T ExportParameters(bool includePrivateParameters) {
		return ((T (*)(DSAManaged*, bool))(Il2CppBase() + 0x3FA5CC8))(this, includePrivateParameters);
	}
	template <typename T = void> T ImportParameters(uintptr_t parameters) {
		return ((T (*)(DSAManaged*, uintptr_t))(Il2CppBase() + 0x3FA600C))(this, parameters);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T CreateSignature(Il2CppArray<uintptr_t>* rgbHash) {
		return ((T (*)(DSAManaged*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3FA6384))(this, rgbHash);
	}
	template <typename T = bool> T VerifySignature(Il2CppArray<uintptr_t>* rgbHash, Il2CppArray<uintptr_t>* rgbSignature) {
		return ((T (*)(DSAManaged*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3FA67A8))(this, rgbHash, rgbSignature);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(DSAManaged*, bool))(Il2CppBase() + 0x3FA6D98))(this, disposing);
	}

};

}
