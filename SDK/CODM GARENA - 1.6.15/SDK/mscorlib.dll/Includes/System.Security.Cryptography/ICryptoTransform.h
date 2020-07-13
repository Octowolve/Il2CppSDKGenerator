#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class ICryptoTransform
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "ICryptoTransform"));
	}


	template <typename T = bool> T get_CanReuseTransform() {
		return ((T (*)(ICryptoTransform*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_CanTransformMultipleBlocks() {
		return ((T (*)(ICryptoTransform*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_InputBlockSize() {
		return ((T (*)(ICryptoTransform*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_OutputBlockSize() {
		return ((T (*)(ICryptoTransform*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T TransformBlock(Il2CppArray<uintptr_t>* inputBuffer, int32_t inputOffset, int32_t inputCount, Il2CppArray<uintptr_t>* outputBuffer, int32_t outputOffset) {
		return ((T (*)(ICryptoTransform*, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x0))(this, inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T TransformFinalBlock(Il2CppArray<uintptr_t>* inputBuffer, int32_t inputOffset, int32_t inputCount) {
		return ((T (*)(ICryptoTransform*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x0))(this, inputBuffer, inputOffset, inputCount);
	}

};

}
