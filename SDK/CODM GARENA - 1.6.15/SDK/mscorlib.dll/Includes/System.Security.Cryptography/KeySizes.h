#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class KeySizes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "KeySizes"));
	}

	template <typename T = int32_t> T& _maxSize() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _minSize() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _skipSize() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_MaxSize() {
		return ((T (*)(KeySizes*))(Il2CppBase() + 0x3042E6C))(this);
	}
	template <typename T = int32_t> T get_MinSize() {
		return ((T (*)(KeySizes*))(Il2CppBase() + 0x3042E74))(this);
	}
	template <typename T = int32_t> T get_SkipSize() {
		return ((T (*)(KeySizes*))(Il2CppBase() + 0x3042E7C))(this);
	}
	template <typename T = bool> T IsLegal(int32_t keySize) {
		return ((T (*)(KeySizes*, int32_t))(Il2CppBase() + 0x3042E84))(this, keySize);
	}
	template <typename T = bool> static T IsLegalKeySize(Il2CppArray<uintptr_t>* legalKeys, int32_t size) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x3035484))(0, legalKeys, size);
	}

};

}
