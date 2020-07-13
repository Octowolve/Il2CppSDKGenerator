#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Cryptography {

class SymmetricTransform
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "Mono.Security.Cryptography", "SymmetricTransform"));
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

	template <typename T = void> T System_IDisposable_Dispose_1() {
		return ((T (*)(SymmetricTransform*))(Il2CppBase() + 0x4EC0A98))(this);
	}
	template <typename T = void> T Finalize_1() {
		return ((T (*)(SymmetricTransform*))(Il2CppBase() + 0x4EC0AD0))(this);
	}
	template <typename T = void> T Dispose_1(bool disposing) {
		return ((T (*)(SymmetricTransform*, bool))(Il2CppBase() + 0x4EC0B3C))(this, disposing);
	}
	template <typename T = bool> T get_CanTransformMultipleBlocks_1() {
		return ((T (*)(SymmetricTransform*))(Il2CppBase() + 0x4EC0BAC))(this);
	}
	template <typename T = bool> T get_CanReuseTransform_1() {
		return ((T (*)(SymmetricTransform*))(Il2CppBase() + 0x4EC0BB4))(this);
	}
	template <typename T = int32_t> T get_InputBlockSize_1() {
		return ((T (*)(SymmetricTransform*))(Il2CppBase() + 0x4EC0BBC))(this);
	}
	template <typename T = int32_t> T get_OutputBlockSize_1() {
		return ((T (*)(SymmetricTransform*))(Il2CppBase() + 0x4EC0BC4))(this);
	}
	template <typename T = void> T Transform_1(Il2CppArray<uintptr_t>* input, Il2CppArray<uintptr_t>* output) {
		return ((T (*)(SymmetricTransform*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EC0BCC))(this, input, output);
	}
	template <typename T = void> T ECB_1(Il2CppArray<uintptr_t>* input, Il2CppArray<uintptr_t>* output) {
		return ((T (*)(SymmetricTransform*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, input, output);
	}
	template <typename T = void> T CBC_1(Il2CppArray<uintptr_t>* input, Il2CppArray<uintptr_t>* output) {
		return ((T (*)(SymmetricTransform*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EC0DEC))(this, input, output);
	}
	template <typename T = void> T CFB_1(Il2CppArray<uintptr_t>* input, Il2CppArray<uintptr_t>* output) {
		return ((T (*)(SymmetricTransform*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EC0FBC))(this, input, output);
	}
	template <typename T = void> T OFB_1(Il2CppArray<uintptr_t>* input, Il2CppArray<uintptr_t>* output) {
		return ((T (*)(SymmetricTransform*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EC1284))(this, input, output);
	}
	template <typename T = void> T CTS_1(Il2CppArray<uintptr_t>* input, Il2CppArray<uintptr_t>* output) {
		return ((T (*)(SymmetricTransform*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EC132C))(this, input, output);
	}
	template <typename T = void> T CheckInput_1(Il2CppArray<uintptr_t>* inputBuffer, int32_t inputOffset, int32_t inputCount) {
		return ((T (*)(SymmetricTransform*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4EC13D4))(this, inputBuffer, inputOffset, inputCount);
	}
	template <typename T = int32_t> T TransformBlock_1(Il2CppArray<uintptr_t>* inputBuffer, int32_t inputOffset, int32_t inputCount, Il2CppArray<uintptr_t>* outputBuffer, int32_t outputOffset) {
		return ((T (*)(SymmetricTransform*, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4EC1594))(this, inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset);
	}
	template <typename T = bool> T get_KeepLastBlock_1() {
		return ((T (*)(SymmetricTransform*))(Il2CppBase() + 0x4EC1890))(this);
	}
	template <typename T = int32_t> T InternalTransformBlock_1(Il2CppArray<uintptr_t>* inputBuffer, int32_t inputOffset, int32_t inputCount, Il2CppArray<uintptr_t>* outputBuffer, int32_t outputOffset) {
		return ((T (*)(SymmetricTransform*, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4EC190C))(this, inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset);
	}
	template <typename T = void> T Random_1(Il2CppArray<uintptr_t>* buffer, int32_t start, int32_t length) {
		return ((T (*)(SymmetricTransform*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4EC1B78))(this, buffer, start, length);
	}
	template <typename T = void> T ThrowBadPaddingException_1(uintptr_t padding, int32_t length, int32_t position) {
		return ((T (*)(SymmetricTransform*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x4EC1C8C))(this, padding, length, position);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T FinalEncrypt_1(Il2CppArray<uintptr_t>* inputBuffer, int32_t inputOffset, int32_t inputCount) {
		return ((T (*)(SymmetricTransform*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4EC1ED8))(this, inputBuffer, inputOffset, inputCount);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T FinalDecrypt_1(Il2CppArray<uintptr_t>* inputBuffer, int32_t inputOffset, int32_t inputCount) {
		return ((T (*)(SymmetricTransform*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4EC22C0))(this, inputBuffer, inputOffset, inputCount);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T TransformFinalBlock_1(Il2CppArray<uintptr_t>* inputBuffer, int32_t inputOffset, int32_t inputCount) {
		return ((T (*)(SymmetricTransform*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4EC26BC))(this, inputBuffer, inputOffset, inputCount);
	}

};

}
