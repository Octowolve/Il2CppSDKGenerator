#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ICSharpCode.SharpZipLib.Encryption {

class PkzipClassicDecryptCryptoTransform
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "ICSharpCode.SharpZipLib.Encryption", "PkzipClassicDecryptCryptoTransform"));
	}


	template <typename T = Il2CppArray<uintptr_t>*> T TransformFinalBlock(Il2CppArray<uintptr_t>* inputBuffer, int32_t inputOffset, int32_t inputCount) {
		return ((T (*)(PkzipClassicDecryptCryptoTransform*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4A6D7BC))(this, inputBuffer, inputOffset, inputCount);
	}
	template <typename T = int32_t> T TransformBlock(Il2CppArray<uintptr_t>* inputBuffer, int32_t inputOffset, int32_t inputCount, Il2CppArray<uintptr_t>* outputBuffer, int32_t outputOffset) {
		return ((T (*)(PkzipClassicDecryptCryptoTransform*, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4A6D888))(this, inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset);
	}
	template <typename T = bool> T get_CanReuseTransform() {
		return ((T (*)(PkzipClassicDecryptCryptoTransform*))(Il2CppBase() + 0x4A6D94C))(this);
	}
	template <typename T = int32_t> T get_InputBlockSize() {
		return ((T (*)(PkzipClassicDecryptCryptoTransform*))(Il2CppBase() + 0x4A6D954))(this);
	}
	template <typename T = int32_t> T get_OutputBlockSize() {
		return ((T (*)(PkzipClassicDecryptCryptoTransform*))(Il2CppBase() + 0x4A6D95C))(this);
	}
	template <typename T = bool> T get_CanTransformMultipleBlocks() {
		return ((T (*)(PkzipClassicDecryptCryptoTransform*))(Il2CppBase() + 0x4A6D964))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(PkzipClassicDecryptCryptoTransform*))(Il2CppBase() + 0x4A6D96C))(this);
	}

};

}
