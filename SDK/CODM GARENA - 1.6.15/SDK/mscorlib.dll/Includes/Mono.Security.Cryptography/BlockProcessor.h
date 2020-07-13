#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Cryptography {

class BlockProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "Mono.Security.Cryptography", "BlockProcessor"));
	}

	template <typename T = uintptr_t> T& transform() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& block() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& blockSize() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& blockCount() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T Finalize() {
		return ((T (*)(BlockProcessor*))(Il2CppBase() + 0x3FA2B88))(this);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(BlockProcessor*))(Il2CppBase() + 0x3FA2C0C))(this);
	}
	template <typename T = void> T Core(Il2CppArray<uintptr_t>* rgb) {
		return ((T (*)(BlockProcessor*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3FA2C44))(this, rgb);
	}
	template <typename T = void> T Core_1(Il2CppArray<uintptr_t>* rgb, int32_t ib, int32_t cb) {
		return ((T (*)(BlockProcessor*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x3FA2C78))(this, rgb, ib, cb);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T Final() {
		return ((T (*)(BlockProcessor*))(Il2CppBase() + 0x3FA2F3C))(this);
	}

};

}
