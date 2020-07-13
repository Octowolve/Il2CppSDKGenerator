#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class SymmetricAlgorithm
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "SymmetricAlgorithm"));
	}

	template <typename T = int32_t> T& BlockSizeValue() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& IVValue() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& KeySizeValue() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& KeyValue() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LegalBlockSizesValue() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LegalKeySizesValue() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& FeedbackSizeValue() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& ModeValue() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& PaddingValue() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& m_disposed() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(SymmetricAlgorithm*))(Il2CppBase() + 0x42799E8))(this);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(SymmetricAlgorithm*))(Il2CppBase() + 0x4279A20))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(SymmetricAlgorithm*))(Il2CppBase() + 0x4279A8C))(this);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(SymmetricAlgorithm*, bool))(Il2CppBase() + 0x4279AA0))(this, disposing);
	}
	template <typename T = int32_t> T get_BlockSize() {
		return ((T (*)(SymmetricAlgorithm*))(Il2CppBase() + 0x4279AF4))(this);
	}
	template <typename T = void> T set_BlockSize(int32_t value) {
		return ((T (*)(SymmetricAlgorithm*, int32_t))(Il2CppBase() + 0x4279AFC))(this, value);
	}
	template <typename T = int32_t> T get_FeedbackSize() {
		return ((T (*)(SymmetricAlgorithm*))(Il2CppBase() + 0x4279BF0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_IV() {
		return ((T (*)(SymmetricAlgorithm*))(Il2CppBase() + 0x4279BF8))(this);
	}
	template <typename T = void> T set_IV(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SymmetricAlgorithm*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4279CB8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Key() {
		return ((T (*)(SymmetricAlgorithm*))(Il2CppBase() + 0x4279E14))(this);
	}
	template <typename T = void> T set_Key(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SymmetricAlgorithm*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4279ED4))(this, value);
	}
	template <typename T = int32_t> T get_KeySize() {
		return ((T (*)(SymmetricAlgorithm*))(Il2CppBase() + 0x427A048))(this);
	}
	template <typename T = void> T set_KeySize(int32_t value) {
		return ((T (*)(SymmetricAlgorithm*, int32_t))(Il2CppBase() + 0x427A050))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_LegalKeySizes() {
		return ((T (*)(SymmetricAlgorithm*))(Il2CppBase() + 0x427A138))(this);
	}
	template <typename T = uintptr_t> T get_Mode() {
		return ((T (*)(SymmetricAlgorithm*))(Il2CppBase() + 0x427A140))(this);
	}
	template <typename T = void> T set_Mode(uintptr_t value) {
		return ((T (*)(SymmetricAlgorithm*, uintptr_t))(Il2CppBase() + 0x427A148))(this, value);
	}
	template <typename T = uintptr_t> T get_Padding() {
		return ((T (*)(SymmetricAlgorithm*))(Il2CppBase() + 0x427A2CC))(this);
	}
	template <typename T = void> T set_Padding(uintptr_t value) {
		return ((T (*)(SymmetricAlgorithm*, uintptr_t))(Il2CppBase() + 0x427A2D4))(this, value);
	}
	template <typename T = uintptr_t> T CreateDecryptor() {
		return ((T (*)(SymmetricAlgorithm*))(Il2CppBase() + 0x427A458))(this);
	}
	template <typename T = uintptr_t> T CreateDecryptor_1(Il2CppArray<uintptr_t>* rgbKey, Il2CppArray<uintptr_t>* rgbIV) {
		return ((T (*)(SymmetricAlgorithm*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, rgbKey, rgbIV);
	}
	template <typename T = uintptr_t> T CreateEncryptor() {
		return ((T (*)(SymmetricAlgorithm*))(Il2CppBase() + 0x427A4B0))(this);
	}
	template <typename T = uintptr_t> T CreateEncryptor_1(Il2CppArray<uintptr_t>* rgbKey, Il2CppArray<uintptr_t>* rgbIV) {
		return ((T (*)(SymmetricAlgorithm*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, rgbKey, rgbIV);
	}
	template <typename T = void> T GenerateIV() {
		return ((T (*)(SymmetricAlgorithm*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T GenerateKey() {
		return ((T (*)(SymmetricAlgorithm*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> static T Create(Il2CppString* algName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x427A508))(0, algName);
	}

};

}
