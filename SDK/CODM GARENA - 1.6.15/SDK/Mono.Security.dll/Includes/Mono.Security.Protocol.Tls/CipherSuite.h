#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls {

class CipherSuite
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls", "CipherSuite"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& EmptyArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int16_t> T& code() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& cipherAlgorithmType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& hashAlgorithmType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& exchangeAlgorithmType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& isExportable() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& cipherMode() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = unsigned char> T& keyMaterialSize() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& keyBlockSize() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = unsigned char> T& expandedKeyMaterialSize() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int16_t> T& effectiveKeyBits() {
		return *(T*)((uintptr_t)this + 0x2E);
	}
	template <typename T = unsigned char> T& ivSize() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = unsigned char> T& blockSize() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = uintptr_t> T& context() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& encryptionAlgorithm() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& encryptionCipher() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& decryptionAlgorithm() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& decryptionCipher() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& clientHMAC() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& serverHMAC() {
		return *(T*)((uintptr_t)this + 0x4C);
	}

	template <typename T = uintptr_t> T get_EncryptionCipher() {
		return ((T (*)(CipherSuite*))(Il2CppBase() + 0x47D6BB4))(this);
	}
	template <typename T = uintptr_t> T get_DecryptionCipher() {
		return ((T (*)(CipherSuite*))(Il2CppBase() + 0x47D6BBC))(this);
	}
	template <typename T = uintptr_t> T get_ClientHMAC() {
		return ((T (*)(CipherSuite*))(Il2CppBase() + 0x47D6BC4))(this);
	}
	template <typename T = uintptr_t> T get_ServerHMAC() {
		return ((T (*)(CipherSuite*))(Il2CppBase() + 0x47D6BCC))(this);
	}
	template <typename T = uintptr_t> T get_CipherAlgorithmType() {
		return ((T (*)(CipherSuite*))(Il2CppBase() + 0x47D6BD4))(this);
	}
	template <typename T = Il2CppString*> T get_HashAlgorithmName() {
		return ((T (*)(CipherSuite*))(Il2CppBase() + 0x47D6BDC))(this);
	}
	template <typename T = uintptr_t> T get_HashAlgorithmType() {
		return ((T (*)(CipherSuite*))(Il2CppBase() + 0x47D6C7C))(this);
	}
	template <typename T = int32_t> T get_HashSize() {
		return ((T (*)(CipherSuite*))(Il2CppBase() + 0x47D6AF4))(this);
	}
	template <typename T = uintptr_t> T get_ExchangeAlgorithmType() {
		return ((T (*)(CipherSuite*))(Il2CppBase() + 0x47D6C84))(this);
	}
	template <typename T = uintptr_t> T get_CipherMode() {
		return ((T (*)(CipherSuite*))(Il2CppBase() + 0x47D6C8C))(this);
	}
	template <typename T = int16_t> T get_Code() {
		return ((T (*)(CipherSuite*))(Il2CppBase() + 0x47D6C94))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(CipherSuite*))(Il2CppBase() + 0x47D6C9C))(this);
	}
	template <typename T = bool> T get_IsExportable() {
		return ((T (*)(CipherSuite*))(Il2CppBase() + 0x47D6CA4))(this);
	}
	template <typename T = unsigned char> T get_KeyMaterialSize() {
		return ((T (*)(CipherSuite*))(Il2CppBase() + 0x47D6CAC))(this);
	}
	template <typename T = int32_t> T get_KeyBlockSize() {
		return ((T (*)(CipherSuite*))(Il2CppBase() + 0x47D6CB4))(this);
	}
	template <typename T = unsigned char> T get_ExpandedKeyMaterialSize() {
		return ((T (*)(CipherSuite*))(Il2CppBase() + 0x47D6CBC))(this);
	}
	template <typename T = int16_t> T get_EffectiveKeyBits() {
		return ((T (*)(CipherSuite*))(Il2CppBase() + 0x47D6CC4))(this);
	}
	template <typename T = unsigned char> T get_IvSize() {
		return ((T (*)(CipherSuite*))(Il2CppBase() + 0x47D6CCC))(this);
	}
	template <typename T = uintptr_t> T get_Context() {
		return ((T (*)(CipherSuite*))(Il2CppBase() + 0x47D6CD4))(this);
	}
	template <typename T = void> T set_Context(uintptr_t value) {
		return ((T (*)(CipherSuite*, uintptr_t))(Il2CppBase() + 0x47D6CDC))(this, value);
	}
	template <typename T = void> T Write(Il2CppArray<uintptr_t>* array, int32_t offset, int16_t value) {
		return ((T (*)(CipherSuite*, Il2CppArray<uintptr_t>*, int32_t, int16_t))(Il2CppBase() + 0x47D6CE4))(this, array, offset, value);
	}
	template <typename T = void> T Write_1(Il2CppArray<uintptr_t>* array, int32_t offset, uint64_t value) {
		return ((T (*)(CipherSuite*, Il2CppArray<uintptr_t>*, int32_t, uint64_t))(Il2CppBase() + 0x47D6E00))(this, array, offset, value);
	}
	template <typename T = void> T InitializeCipher() {
		return ((T (*)(CipherSuite*))(Il2CppBase() + 0x47D6FFC))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T EncryptRecord(Il2CppArray<uintptr_t>* fragment, Il2CppArray<uintptr_t>* mac) {
		return ((T (*)(CipherSuite*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47D77B0))(this, fragment, mac);
	}
	template <typename T = void> T DecryptRecord(Il2CppArray<uintptr_t>* fragment, Il2CppArray<uintptr_t>** dcrFragment, Il2CppArray<uintptr_t>** dcrMAC) {
		return ((T (*)(CipherSuite*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>**, Il2CppArray<uintptr_t>**))(Il2CppBase() + 0x47D7A04))(this, fragment, dcrFragment, dcrMAC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ComputeClientRecordMAC(uintptr_t contentType, Il2CppArray<uintptr_t>* fragment) {
		return ((T (*)(CipherSuite*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, contentType, fragment);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ComputeServerRecordMAC(uintptr_t contentType, Il2CppArray<uintptr_t>* fragment) {
		return ((T (*)(CipherSuite*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, contentType, fragment);
	}
	template <typename T = void> T ComputeMasterSecret(Il2CppArray<uintptr_t>* preMasterSecret) {
		return ((T (*)(CipherSuite*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, preMasterSecret);
	}
	template <typename T = void> T ComputeKeys() {
		return ((T (*)(CipherSuite*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T CreatePremasterSecret() {
		return ((T (*)(CipherSuite*))(Il2CppBase() + 0x47D7CBC))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T PRF(Il2CppArray<uintptr_t>* secret, Il2CppString* label, Il2CppArray<uintptr_t>* data, int32_t length) {
		return ((T (*)(CipherSuite*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x47D7E80))(this, secret, label, data, length);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T Expand(Il2CppString* hashName, Il2CppArray<uintptr_t>* secret, Il2CppArray<uintptr_t>* seed, int32_t length) {
		return ((T (*)(CipherSuite*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x47D8184))(this, hashName, secret, seed, length);
	}
	template <typename T = void> T createEncryptionCipher() {
		return ((T (*)(CipherSuite*))(Il2CppBase() + 0x47D7018))(this);
	}
	template <typename T = void> T createDecryptionCipher() {
		return ((T (*)(CipherSuite*))(Il2CppBase() + 0x47D73E4))(this);
	}

};

}
