#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class MD5CryptoServiceProvider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "MD5CryptoServiceProvider"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _H() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& buff() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint64_t> T& count() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _ProcessingBuffer() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _ProcessingBufferCount() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& K() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Finalize() {
		return ((T (*)(MD5CryptoServiceProvider*))(Il2CppBase() + 0x30438F8))(this);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(MD5CryptoServiceProvider*, bool))(Il2CppBase() + 0x3043908))(this, disposing);
	}
	template <typename T = void> T HashCore(Il2CppArray<uintptr_t>* rgb, int32_t ibStart, int32_t cbSize) {
		return ((T (*)(MD5CryptoServiceProvider*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x30439A8))(this, rgb, ibStart, cbSize);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T HashFinal() {
		return ((T (*)(MD5CryptoServiceProvider*))(Il2CppBase() + 0x304609C))(this);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(MD5CryptoServiceProvider*))(Il2CppBase() + 0x3043754))(this);
	}
	template <typename T = void> T ProcessBlock(Il2CppArray<uintptr_t>* inputBuffer, int32_t inputOffset) {
		return ((T (*)(MD5CryptoServiceProvider*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x3043AB8))(this, inputBuffer, inputOffset);
	}
	template <typename T = void> T ProcessFinalBlock(Il2CppArray<uintptr_t>* inputBuffer, int32_t inputOffset, int32_t inputCount) {
		return ((T (*)(MD5CryptoServiceProvider*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x3046204))(this, inputBuffer, inputOffset, inputCount);
	}
	template <typename T = void> T AddLength(uint64_t length, Il2CppArray<uintptr_t>* buffer, int32_t position) {
		return ((T (*)(MD5CryptoServiceProvider*, uint64_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x3046434))(this, length, buffer, position);
	}

};

}
