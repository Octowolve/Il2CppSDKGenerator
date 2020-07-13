#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class DESTransform
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "DESTransform"));
	}

	template <typename T = int32_t> static T& KEY_BIT_SIZE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& KEY_BYTE_SIZE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& BLOCK_BIT_SIZE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& BLOCK_BYTE_SIZE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& keySchedule() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& byteBuff() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& dwordBuff() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& spBoxes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& PC1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& leftRotTotal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& PC2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ipTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& fpTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = uint32_t> T CipherFunct(uint32_t r, int32_t n) {
		return ((T (*)(DESTransform*, uint32_t, int32_t))(Il2CppBase() + 0x303C2BC))(this, r, n);
	}
	template <typename T = void> static T Permutation(Il2CppArray<uintptr_t>* input, Il2CppArray<uintptr_t>* output, Il2CppArray<uintptr_t>* permTab, bool preSwap) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x303C744))(0, input, output, permTab, preSwap);
	}
	template <typename T = void> static T BSwap(Il2CppArray<uintptr_t>* byteBuff) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x303CD70))(0, byteBuff);
	}
	template <typename T = void> T SetKey(Il2CppArray<uintptr_t>* key) {
		return ((T (*)(DESTransform*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x303BA48))(this, key);
	}
	template <typename T = void> T ProcessBlock(Il2CppArray<uintptr_t>* input, Il2CppArray<uintptr_t>* output) {
		return ((T (*)(DESTransform*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x303CF64))(this, input, output);
	}
	template <typename T = void> T ECB(Il2CppArray<uintptr_t>* input, Il2CppArray<uintptr_t>* output) {
		return ((T (*)(DESTransform*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x303D3E4))(this, input, output);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetStrongKey() {
		return ((T (*)(void *))(Il2CppBase() + 0x303B898))(0);
	}

};

}
