#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Cryptography {

class SymmetricTransform
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "Mono.Security.Cryptography", "SymmetricTransform"));
	}

	template <typename T = uintptr_t> T& algo() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& encrypt() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& BlockSizeByte() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& temp() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& temp2() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& workBuff() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& workout() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& FeedBackByte() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& FeedBackIter() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& m_disposed() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& lastBlock() {
		return *(T*)((uintptr_t)this + 0x2D);
	}
	template <typename T = uintptr_t> T& _rng() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(SymmetricTransform*))(Il2CppBase() + 0x3FAFC38))(this);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(SymmetricTransform*))(Il2CppBase() + 0x3FAFC70))(this);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(SymmetricTransform*, bool))(Il2CppBase() + 0x3FAFCDC))(this, disposing);
	}
	template <typename T = bool> T get_CanTransformMultipleBlocks() {
		return ((T (*)(SymmetricTransform*))(Il2CppBase() + 0x3FAFD4C))(this);
	}
	template <typename T = bool> T get_CanReuseTransform() {
		return ((T (*)(SymmetricTransform*))(Il2CppBase() + 0x3FAFD54))(this);
	}
	template <typename T = int32_t> T get_InputBlockSize() {
		return ((T (*)(SymmetricTransform*))(Il2CppBase() + 0x3FAFD5C))(this);
	}
	template <typename T = int32_t> T get_OutputBlockSize() {
		return ((T (*)(SymmetricTransform*))(Il2CppBase() + 0x3FAFD64))(this);
	}
	template <typename T = void> T Transform(Il2CppArray<uintptr_t>* input, Il2CppArray<uintptr_t>* output) {
		return ((T (*)(SymmetricTransform*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3FAFD6C))(this, input, output);
	}
	template <typename T = void> T ECB(Il2CppArray<uintptr_t>* input, Il2CppArray<uintptr_t>* output) {
		return ((T (*)(SymmetricTransform*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, input, output);
	}
	template <typename T = void> T CBC(Il2CppArray<uintptr_t>* input, Il2CppArray<uintptr_t>* output) {
		return ((T (*)(SymmetricTransform*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3FAFF8C))(this, input, output);
	}
	template <typename T = void> T CFB(Il2CppArray<uintptr_t>* input, Il2CppArray<uintptr_t>* output) {
		return ((T (*)(SymmetricTransform*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3FB015C))(this, input, output);
	}
	template <typename T = void> T OFB(Il2CppArray<uintptr_t>* input, Il2CppArray<uintptr_t>* output) {
		return ((T (*)(SymmetricTransform*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3FB0424))(this, input, output);
	}
	template <typename T = void> T CTS(Il2CppArray<uintptr_t>* input, Il2CppArray<uintptr_t>* output) {
		return ((T (*)(SymmetricTransform*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3FB04CC))(this, input, output);
	}
	template <typename T = void> T CheckInput(Il2CppArray<uintptr_t>* inputBuffer, int32_t inputOffset, int32_t inputCount) {
		return ((T (*)(SymmetricTransform*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x3FB0574))(this, inputBuffer, inputOffset, inputCount);
	}
	template <typename T = int32_t> T TransformBlock(Il2CppArray<uintptr_t>* inputBuffer, int32_t inputOffset, int32_t inputCount, Il2CppArray<uintptr_t>* outputBuffer, int32_t outputOffset) {
		return ((T (*)(SymmetricTransform*, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x3FB0734))(this, inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset);
	}
	template <typename T = bool> T get_KeepLastBlock() {
		return ((T (*)(SymmetricTransform*))(Il2CppBase() + 0x3FB0A30))(this);
	}
	template <typename T = int32_t> T InternalTransformBlock(Il2CppArray<uintptr_t>* inputBuffer, int32_t inputOffset, int32_t inputCount, Il2CppArray<uintptr_t>* outputBuffer, int32_t outputOffset) {
		return ((T (*)(SymmetricTransform*, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x3FB0AAC))(this, inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset);
	}
	template <typename T = void> T Random(Il2CppArray<uintptr_t>* buffer, int32_t start, int32_t length) {
		return ((T (*)(SymmetricTransform*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x3FB0D18))(this, buffer, start, length);
	}
	template <typename T = void> T ThrowBadPaddingException(uintptr_t padding, int32_t length, int32_t position) {
		return ((T (*)(SymmetricTransform*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x3FB0E2C))(this, padding, length, position);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T FinalEncrypt(Il2CppArray<uintptr_t>* inputBuffer, int32_t inputOffset, int32_t inputCount) {
		return ((T (*)(SymmetricTransform*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x3FB1078))(this, inputBuffer, inputOffset, inputCount);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T FinalDecrypt(Il2CppArray<uintptr_t>* inputBuffer, int32_t inputOffset, int32_t inputCount) {
		return ((T (*)(SymmetricTransform*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x3FB1460))(this, inputBuffer, inputOffset, inputCount);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T TransformFinalBlock(Il2CppArray<uintptr_t>* inputBuffer, int32_t inputOffset, int32_t inputCount) {
		return ((T (*)(SymmetricTransform*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x3FB185C))(this, inputBuffer, inputOffset, inputCount);
	}

};

}
