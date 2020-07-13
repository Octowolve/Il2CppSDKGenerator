#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Cryptography {

class RSAManaged
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "Mono.Security.Cryptography", "RSAManaged"));
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

	template <typename T = void> T add_KeyGenerated(uintptr_t value) {
		return ((T (*)(RSAManaged*, uintptr_t))(Il2CppBase() + 0x3FAD14C))(this, value);
	}
	template <typename T = void> T remove_KeyGenerated(uintptr_t value) {
		return ((T (*)(RSAManaged*, uintptr_t))(Il2CppBase() + 0x3FAD2D8))(this, value);
	}
	template <typename T = void> T Finalize_1() {
		return ((T (*)(RSAManaged*))(Il2CppBase() + 0x3FAD464))(this);
	}
	template <typename T = void> T GenerateKeyPair_1() {
		return ((T (*)(RSAManaged*))(Il2CppBase() + 0x3FAD4D0))(this);
	}
	template <typename T = int32_t> T get_KeySize_1() {
		return ((T (*)(RSAManaged*))(Il2CppBase() + 0x3FAD944))(this);
	}
	template <typename T = bool> T get_PublicOnly_1() {
		return ((T (*)(RSAManaged*))(Il2CppBase() + 0x3FAD990))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T DecryptValue_1(Il2CppArray<uintptr_t>* rgb) {
		return ((T (*)(RSAManaged*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3FADA98))(this, rgb);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T EncryptValue_1(Il2CppArray<uintptr_t>* rgb) {
		return ((T (*)(RSAManaged*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3FADFF8))(this, rgb);
	}
	template <typename T = uintptr_t> T ExportParameters_1(bool includePrivateParameters) {
		return ((T (*)(RSAManaged*, bool))(Il2CppBase() + 0x3FAE160))(this, includePrivateParameters);
	}
	template <typename T = void> T ImportParameters_1(uintptr_t parameters) {
		return ((T (*)(RSAManaged*, uintptr_t))(Il2CppBase() + 0x3FAE614))(this, parameters);
	}
	template <typename T = void> T Dispose_1(bool disposing) {
		return ((T (*)(RSAManaged*, bool))(Il2CppBase() + 0x3FAECA8))(this, disposing);
	}
	template <typename T = Il2CppString*> T ToXmlString_1(bool includePrivateParameters) {
		return ((T (*)(RSAManaged*, bool))(Il2CppBase() + 0x3FAF03C))(this, includePrivateParameters);
	}
	template <typename T = bool> T get_IsCrtPossible() {
		return ((T (*)(RSAManaged*))(Il2CppBase() + 0x3FAF834))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetPaddedValue_1(uintptr_t value, int32_t length) {
		return ((T (*)(RSAManaged*, uintptr_t, int32_t))(Il2CppBase() + 0x3FADED8))(this, value, length);
	}

};

}
