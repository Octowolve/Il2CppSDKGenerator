#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class SHA1Internal
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "SHA1Internal"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _H() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& count() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _ProcessingBuffer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _ProcessingBufferCount() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& buff() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T HashCore(Il2CppArray<uintptr_t>* rgb, int32_t ibStart, int32_t cbSize) {
		return ((T (*)(SHA1Internal*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4274004))(this, rgb, ibStart, cbSize);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T HashFinal() {
		return ((T (*)(SHA1Internal*))(Il2CppBase() + 0x427413C))(this);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(SHA1Internal*))(Il2CppBase() + 0x42742CC))(this);
	}
	template <typename T = void> T ProcessBlock(Il2CppArray<uintptr_t>* inputBuffer, uint32_t inputOffset) {
		return ((T (*)(SHA1Internal*, Il2CppArray<uintptr_t>*, uint32_t))(Il2CppBase() + 0x42743D4))(this, inputBuffer, inputOffset);
	}
	template <typename T = void> static T InitialiseBuff(Il2CppArray<uintptr_t>* buff, Il2CppArray<uintptr_t>* input, uint32_t inputOffset) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uint32_t))(Il2CppBase() + 0x4274EF8))(0, buff, input, inputOffset);
	}
	template <typename T = void> static T FillBuff(Il2CppArray<uintptr_t>* buff) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x42759B0))(0, buff);
	}
	template <typename T = void> T ProcessFinalBlock(Il2CppArray<uintptr_t>* inputBuffer, int32_t inputOffset, int32_t inputCount) {
		return ((T (*)(SHA1Internal*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4274CB0))(this, inputBuffer, inputOffset, inputCount);
	}
	template <typename T = void> T AddLength(uint64_t length, Il2CppArray<uintptr_t>* buffer, int32_t position) {
		return ((T (*)(SHA1Internal*, uint64_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4275F04))(this, length, buffer, position);
	}

};

}
