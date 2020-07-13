#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class RijndaelManagedTransform
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "RijndaelManagedTransform"));
	}

	template <typename T = uintptr_t> T& _st() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _bs() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(RijndaelManagedTransform*))(Il2CppBase() + 0x304A21C))(this);
	}
	template <typename T = bool> T get_CanTransformMultipleBlocks() {
		return ((T (*)(RijndaelManagedTransform*))(Il2CppBase() + 0x304A268))(this);
	}
	template <typename T = bool> T get_CanReuseTransform() {
		return ((T (*)(RijndaelManagedTransform*))(Il2CppBase() + 0x304A29C))(this);
	}
	template <typename T = int32_t> T get_InputBlockSize() {
		return ((T (*)(RijndaelManagedTransform*))(Il2CppBase() + 0x304A2D0))(this);
	}
	template <typename T = int32_t> T get_OutputBlockSize() {
		return ((T (*)(RijndaelManagedTransform*))(Il2CppBase() + 0x304A304))(this);
	}
	template <typename T = int32_t> T TransformBlock(Il2CppArray<uintptr_t>* inputBuffer, int32_t inputOffset, int32_t inputCount, Il2CppArray<uintptr_t>* outputBuffer, int32_t outputOffset) {
		return ((T (*)(RijndaelManagedTransform*, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x304A338))(this, inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T TransformFinalBlock(Il2CppArray<uintptr_t>* inputBuffer, int32_t inputOffset, int32_t inputCount) {
		return ((T (*)(RijndaelManagedTransform*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x304A388))(this, inputBuffer, inputOffset, inputCount);
	}

};

}
