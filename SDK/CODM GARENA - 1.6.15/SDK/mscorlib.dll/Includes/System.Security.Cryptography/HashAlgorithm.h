#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class HashAlgorithm
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "HashAlgorithm"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& HashValue() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& HashSizeValue() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& State() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& disposed() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(HashAlgorithm*))(Il2CppBase() + 0x3040A9C))(this);
	}
	template <typename T = bool> T get_CanTransformMultipleBlocks() {
		return ((T (*)(HashAlgorithm*))(Il2CppBase() + 0x3040AD4))(this);
	}
	template <typename T = bool> T get_CanReuseTransform() {
		return ((T (*)(HashAlgorithm*))(Il2CppBase() + 0x3040ADC))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(HashAlgorithm*))(Il2CppBase() + 0x3040AE4))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ComputeHash(Il2CppArray<uintptr_t>* buffer) {
		return ((T (*)(HashAlgorithm*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3040AF8))(this, buffer);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ComputeHash_1(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count) {
		return ((T (*)(HashAlgorithm*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x3040BD0))(this, buffer, offset, count);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ComputeHash_2(uintptr_t inputStream) {
		return ((T (*)(HashAlgorithm*, uintptr_t))(Il2CppBase() + 0x3040E74))(this, inputStream);
	}
	template <typename T = uintptr_t> static T Create(Il2CppString* hashName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3041034))(0, hashName);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Hash() {
		return ((T (*)(HashAlgorithm*))(Il2CppBase() + 0x30410F4))(this);
	}
	template <typename T = void> T HashCore(Il2CppArray<uintptr_t>* array, int32_t ibStart, int32_t cbSize) {
		return ((T (*)(HashAlgorithm*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x0))(this, array, ibStart, cbSize);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T HashFinal() {
		return ((T (*)(HashAlgorithm*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_HashSize() {
		return ((T (*)(HashAlgorithm*))(Il2CppBase() + 0x30411B8))(this);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(HashAlgorithm*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(HashAlgorithm*, bool))(Il2CppBase() + 0x30411C0))(this, disposing);
	}
	template <typename T = int32_t> T get_InputBlockSize() {
		return ((T (*)(HashAlgorithm*))(Il2CppBase() + 0x30411CC))(this);
	}
	template <typename T = int32_t> T get_OutputBlockSize() {
		return ((T (*)(HashAlgorithm*))(Il2CppBase() + 0x30411D4))(this);
	}
	template <typename T = int32_t> T TransformBlock(Il2CppArray<uintptr_t>* inputBuffer, int32_t inputOffset, int32_t inputCount, Il2CppArray<uintptr_t>* outputBuffer, int32_t outputOffset) {
		return ((T (*)(HashAlgorithm*, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x30411DC))(this, inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T TransformFinalBlock(Il2CppArray<uintptr_t>* inputBuffer, int32_t inputOffset, int32_t inputCount) {
		return ((T (*)(HashAlgorithm*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x30414C4))(this, inputBuffer, inputOffset, inputCount);
	}

};

}
