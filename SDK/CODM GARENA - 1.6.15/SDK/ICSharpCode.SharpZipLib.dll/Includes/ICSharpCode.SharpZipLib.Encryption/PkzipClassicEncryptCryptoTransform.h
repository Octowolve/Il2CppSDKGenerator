#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ICSharpCode.SharpZipLib.Encryption {

class PkzipClassicEncryptCryptoTransform
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "ICSharpCode.SharpZipLib.Encryption", "PkzipClassicEncryptCryptoTransform"));
	}


	template <typename T = Il2CppArray<uintptr_t>*> T TransformFinalBlock(Il2CppArray<uintptr_t>* inputBuffer, int32_t inputOffset, int32_t inputCount) {
		return ((T (*)(PkzipClassicEncryptCryptoTransform*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4A6D998))(this, inputBuffer, inputOffset, inputCount);
	}
	template <typename T = int32_t> T TransformBlock(Il2CppArray<uintptr_t>* inputBuffer, int32_t inputOffset, int32_t inputCount, Il2CppArray<uintptr_t>* outputBuffer, int32_t outputOffset) {
		return ((T (*)(PkzipClassicEncryptCryptoTransform*, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4A6DA64))(this, inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset);
	}
	template <typename T = bool> T get_CanReuseTransform() {
		return ((T (*)(PkzipClassicEncryptCryptoTransform*))(Il2CppBase() + 0x4A6DB4C))(this);
	}
	template <typename T = int32_t> T get_InputBlockSize() {
		return ((T (*)(PkzipClassicEncryptCryptoTransform*))(Il2CppBase() + 0x4A6DB54))(this);
	}
	template <typename T = int32_t> T get_OutputBlockSize() {
		return ((T (*)(PkzipClassicEncryptCryptoTransform*))(Il2CppBase() + 0x4A6DB5C))(this);
	}
	template <typename T = bool> T get_CanTransformMultipleBlocks() {
		return ((T (*)(PkzipClassicEncryptCryptoTransform*))(Il2CppBase() + 0x4A6DB64))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(PkzipClassicEncryptCryptoTransform*))(Il2CppBase() + 0x4A6DB6C))(this);
	}

};

}
