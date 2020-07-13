#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class FromBase64Transform
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "FromBase64Transform"));
	}

	template <typename T = uintptr_t> T& mode() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& accumulator() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& accPtr() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_disposed() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& lookupTable() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(FromBase64Transform*))(Il2CppBase() + 0x303FA64))(this);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(FromBase64Transform*))(Il2CppBase() + 0x303FA9C))(this);
	}
	template <typename T = bool> T get_CanTransformMultipleBlocks() {
		return ((T (*)(FromBase64Transform*))(Il2CppBase() + 0x303FB08))(this);
	}
	template <typename T = bool> T get_CanReuseTransform() {
		return ((T (*)(FromBase64Transform*))(Il2CppBase() + 0x303FB10))(this);
	}
	template <typename T = int32_t> T get_InputBlockSize() {
		return ((T (*)(FromBase64Transform*))(Il2CppBase() + 0x303FB18))(this);
	}
	template <typename T = int32_t> T get_OutputBlockSize() {
		return ((T (*)(FromBase64Transform*))(Il2CppBase() + 0x303FB20))(this);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(FromBase64Transform*, bool))(Il2CppBase() + 0x303FB28))(this, disposing);
	}
	template <typename T = unsigned char> T lookup(unsigned char input) {
		return ((T (*)(FromBase64Transform*, unsigned char))(Il2CppBase() + 0x303FB88))(this, input);
	}
	template <typename T = int32_t> T ProcessBlock(Il2CppArray<uintptr_t>* output, int32_t offset) {
		return ((T (*)(FromBase64Transform*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x303FCA0))(this, output, offset);
	}
	template <typename T = void> T CheckInputParameters(Il2CppArray<uintptr_t>* inputBuffer, int32_t inputOffset, int32_t inputCount) {
		return ((T (*)(FromBase64Transform*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x30400D0))(this, inputBuffer, inputOffset, inputCount);
	}
	template <typename T = int32_t> T TransformBlock(Il2CppArray<uintptr_t>* inputBuffer, int32_t inputOffset, int32_t inputCount, Il2CppArray<uintptr_t>* outputBuffer, int32_t outputOffset) {
		return ((T (*)(FromBase64Transform*, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x3040368))(this, inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T TransformFinalBlock(Il2CppArray<uintptr_t>* inputBuffer, int32_t inputOffset, int32_t inputCount) {
		return ((T (*)(FromBase64Transform*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x3040668))(this, inputBuffer, inputOffset, inputCount);
	}

};

}
