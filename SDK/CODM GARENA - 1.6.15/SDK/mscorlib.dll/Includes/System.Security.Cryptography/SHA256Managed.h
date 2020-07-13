#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class SHA256Managed
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "SHA256Managed"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _H() {
		return *(T*)((uintptr_t)this + 0x18);
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
	template <typename T = Il2CppArray<uintptr_t>*> T& buff() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T HashCore(Il2CppArray<uintptr_t>* rgb, int32_t ibStart, int32_t cbSize) {
		return ((T (*)(SHA256Managed*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x42763F0))(this, rgb, ibStart, cbSize);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T HashFinal() {
		return ((T (*)(SHA256Managed*))(Il2CppBase() + 0x4276BE4))(this);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(SHA256Managed*))(Il2CppBase() + 0x4276F84))(this);
	}
	template <typename T = void> T ProcessBlock(Il2CppArray<uintptr_t>* inputBuffer, int32_t inputOffset) {
		return ((T (*)(SHA256Managed*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4276500))(this, inputBuffer, inputOffset);
	}
	template <typename T = void> T ProcessFinalBlock(Il2CppArray<uintptr_t>* inputBuffer, int32_t inputOffset, int32_t inputCount) {
		return ((T (*)(SHA256Managed*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4276D54))(this, inputBuffer, inputOffset, inputCount);
	}
	template <typename T = void> T AddLength(uint64_t length, Il2CppArray<uintptr_t>* buffer, int32_t position) {
		return ((T (*)(SHA256Managed*, uint64_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4277110))(this, length, buffer, position);
	}

};

}
