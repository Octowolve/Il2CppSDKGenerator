#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AsyncBankHandle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AsyncBankHandle"));
	}

	template <typename T = uintptr_t> T& bankCallback() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T GlobalBankCallback(uint32_t in_bankID, uintptr_t in_pInMemoryBankPtr, uintptr_t in_eLoadResult, uint32_t in_memPoolId, uintptr_t in_Cookie) {
		return ((T (*)(void *, uint32_t, uintptr_t, uintptr_t, uint32_t, uintptr_t))(Il2CppBase() + 0x4A2B2BC))(0, in_bankID, in_pInMemoryBankPtr, in_eLoadResult, in_memPoolId, in_Cookie);
	}
	template <typename T = uintptr_t> T DoLoadBank() {
		return ((T (*)(AsyncBankHandle*))(Il2CppBase() + 0x4A2BA30))(this);
	}

};

}
