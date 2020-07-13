#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ICSharpCode.SharpZipLib.Encryption {

class ZipAESTransform
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "ICSharpCode.SharpZipLib.Encryption", "ZipAESTransform"));
	}

	template <typename T = int32_t> T& _blockSize() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _encryptor() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _counterNonce() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _encryptBuffer() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _encrPos() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _pwdVerifier() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& _hmacsha1() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _authCode() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& _writeMode() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = int32_t> T TransformBlock(Il2CppArray<uintptr_t>* inputBuffer, int32_t inputOffset, int32_t inputCount, Il2CppArray<uintptr_t>* outputBuffer, int32_t outputOffset) {
		return ((T (*)(ZipAESTransform*, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4A6E830))(this, inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_PwdVerifier() {
		return ((T (*)(ZipAESTransform*))(Il2CppBase() + 0x4A6F21C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetAuthCode() {
		return ((T (*)(ZipAESTransform*))(Il2CppBase() + 0x4A6EB10))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T TransformFinalBlock(Il2CppArray<uintptr_t>* inputBuffer, int32_t inputOffset, int32_t inputCount) {
		return ((T (*)(ZipAESTransform*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4A6F300))(this, inputBuffer, inputOffset, inputCount);
	}
	template <typename T = int32_t> T get_InputBlockSize() {
		return ((T (*)(ZipAESTransform*))(Il2CppBase() + 0x4A6F3E8))(this);
	}
	template <typename T = int32_t> T get_OutputBlockSize() {
		return ((T (*)(ZipAESTransform*))(Il2CppBase() + 0x4A6F3F0))(this);
	}
	template <typename T = bool> T get_CanTransformMultipleBlocks() {
		return ((T (*)(ZipAESTransform*))(Il2CppBase() + 0x4A6F3F8))(this);
	}
	template <typename T = bool> T get_CanReuseTransform() {
		return ((T (*)(ZipAESTransform*))(Il2CppBase() + 0x4A6F400))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(ZipAESTransform*))(Il2CppBase() + 0x4A6F408))(this);
	}

};

}
