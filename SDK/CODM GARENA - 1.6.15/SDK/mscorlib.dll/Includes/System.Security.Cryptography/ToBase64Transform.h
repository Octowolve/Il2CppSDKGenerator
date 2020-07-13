#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class ToBase64Transform
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "ToBase64Transform"));
	}

	template <typename T = bool> T& m_disposed() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(ToBase64Transform*))(Il2CppBase() + 0x427A5D0))(this);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(ToBase64Transform*))(Il2CppBase() + 0x427A608))(this);
	}
	template <typename T = bool> T get_CanTransformMultipleBlocks() {
		return ((T (*)(ToBase64Transform*))(Il2CppBase() + 0x427A674))(this);
	}
	template <typename T = bool> T get_CanReuseTransform() {
		return ((T (*)(ToBase64Transform*))(Il2CppBase() + 0x427A67C))(this);
	}
	template <typename T = int32_t> T get_InputBlockSize() {
		return ((T (*)(ToBase64Transform*))(Il2CppBase() + 0x427A684))(this);
	}
	template <typename T = int32_t> T get_OutputBlockSize() {
		return ((T (*)(ToBase64Transform*))(Il2CppBase() + 0x427A68C))(this);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(ToBase64Transform*, bool))(Il2CppBase() + 0x427A694))(this, disposing);
	}
	template <typename T = int32_t> T TransformBlock(Il2CppArray<uintptr_t>* inputBuffer, int32_t inputOffset, int32_t inputCount, Il2CppArray<uintptr_t>* outputBuffer, int32_t outputOffset) {
		return ((T (*)(ToBase64Transform*, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x427A6A8))(this, inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset);
	}
	template <typename T = void> static T InternalTransformBlock(Il2CppArray<uintptr_t>* inputBuffer, int32_t inputOffset, int32_t inputCount, Il2CppArray<uintptr_t>* outputBuffer, int32_t outputOffset) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x427AA1C))(0, inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T TransformFinalBlock(Il2CppArray<uintptr_t>* inputBuffer, int32_t inputOffset, int32_t inputCount) {
		return ((T (*)(ToBase64Transform*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x427AC78))(this, inputBuffer, inputOffset, inputCount);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T InternalTransformFinalBlock(Il2CppArray<uintptr_t>* inputBuffer, int32_t inputOffset, int32_t inputCount) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x427AED8))(0, inputBuffer, inputOffset, inputCount);
	}

};

}
