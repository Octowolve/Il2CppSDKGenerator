#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Cryptography {

class ARC4Managed
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Cryptography", "ARC4Managed"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& key() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& state() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = unsigned char> T& x() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = unsigned char> T& y() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = bool> T& m_disposed() {
		return *(T*)((uintptr_t)this + 0x3A);
	}

	template <typename T = void> T Finalize() {
		return ((T (*)(ARC4Managed*))(Il2CppBase() + 0x47CC2FC))(this);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(ARC4Managed*, bool))(Il2CppBase() + 0x47CC368))(this, disposing);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Key() {
		return ((T (*)(ARC4Managed*))(Il2CppBase() + 0x47CC404))(this);
	}
	template <typename T = void> T set_Key(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ARC4Managed*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47CC4A4))(this, value);
	}
	template <typename T = bool> T get_CanReuseTransform() {
		return ((T (*)(ARC4Managed*))(Il2CppBase() + 0x47CC714))(this);
	}
	template <typename T = uintptr_t> T CreateEncryptor(Il2CppArray<uintptr_t>* rgbKey, Il2CppArray<uintptr_t>* rgvIV) {
		return ((T (*)(ARC4Managed*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47CC71C))(this, rgbKey, rgvIV);
	}
	template <typename T = uintptr_t> T CreateDecryptor(Il2CppArray<uintptr_t>* rgbKey, Il2CppArray<uintptr_t>* rgvIV) {
		return ((T (*)(ARC4Managed*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47CC744))(this, rgbKey, rgvIV);
	}
	template <typename T = void> T GenerateIV() {
		return ((T (*)(ARC4Managed*))(Il2CppBase() + 0x47CC77C))(this);
	}
	template <typename T = void> T GenerateKey() {
		return ((T (*)(ARC4Managed*))(Il2CppBase() + 0x47CC824))(this);
	}
	template <typename T = bool> T get_CanTransformMultipleBlocks() {
		return ((T (*)(ARC4Managed*))(Il2CppBase() + 0x47CC91C))(this);
	}
	template <typename T = int32_t> T get_InputBlockSize() {
		return ((T (*)(ARC4Managed*))(Il2CppBase() + 0x47CC924))(this);
	}
	template <typename T = int32_t> T get_OutputBlockSize() {
		return ((T (*)(ARC4Managed*))(Il2CppBase() + 0x47CC92C))(this);
	}
	template <typename T = void> T KeySetup(Il2CppArray<uintptr_t>* key) {
		return ((T (*)(ARC4Managed*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47CC558))(this, key);
	}
	template <typename T = void> T CheckInput(Il2CppArray<uintptr_t>* inputBuffer, int32_t inputOffset, int32_t inputCount) {
		return ((T (*)(ARC4Managed*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x47CC934))(this, inputBuffer, inputOffset, inputCount);
	}
	template <typename T = int32_t> T TransformBlock(Il2CppArray<uintptr_t>* inputBuffer, int32_t inputOffset, int32_t inputCount, Il2CppArray<uintptr_t>* outputBuffer, int32_t outputOffset) {
		return ((T (*)(ARC4Managed*, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x47CCAF4))(this, inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset);
	}
	template <typename T = int32_t> T InternalTransformBlock(Il2CppArray<uintptr_t>* inputBuffer, int32_t inputOffset, int32_t inputCount, Il2CppArray<uintptr_t>* outputBuffer, int32_t outputOffset) {
		return ((T (*)(ARC4Managed*, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x47CCCC0))(this, inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T TransformFinalBlock(Il2CppArray<uintptr_t>* inputBuffer, int32_t inputOffset, int32_t inputCount) {
		return ((T (*)(ARC4Managed*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x47CCF14))(this, inputBuffer, inputOffset, inputCount);
	}

};

}
