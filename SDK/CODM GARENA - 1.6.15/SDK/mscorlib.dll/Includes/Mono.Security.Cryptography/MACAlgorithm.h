#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Cryptography {

class MACAlgorithm
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "Mono.Security.Cryptography", "MACAlgorithm"));
	}

	template <typename T = uintptr_t> T& algo() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& enc() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& block() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& blockSize() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& blockCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Initialize(Il2CppArray<uintptr_t>* key) {
		return ((T (*)(MACAlgorithm*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3FA9A3C))(this, key);
	}
	template <typename T = void> T Core(Il2CppArray<uintptr_t>* rgb, int32_t ib, int32_t cb) {
		return ((T (*)(MACAlgorithm*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x3FA9AC8))(this, rgb, ib, cb);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T Final() {
		return ((T (*)(MACAlgorithm*))(Il2CppBase() + 0x3FA9D80))(this);
	}

};

}
