#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BankCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BankCallback"));
	}


	template <typename T = void> T Invoke(uint32_t in_bankID, uintptr_t in_InMemoryBankPtr, uintptr_t in_eLoadResult, uint32_t in_memPoolId, uintptr_t in_Cookie) {
		return ((T (*)(BankCallback*, uint32_t, uintptr_t, uintptr_t, uint32_t, uintptr_t))(Il2CppBase() + 0x4A2B96C))(this, in_bankID, in_InMemoryBankPtr, in_eLoadResult, in_memPoolId, in_Cookie);
	}
	template <typename T = uintptr_t> T BeginInvoke(uint32_t in_bankID, uintptr_t in_InMemoryBankPtr, uintptr_t in_eLoadResult, uint32_t in_memPoolId, uintptr_t in_Cookie, uintptr_t callback, uintptr_t object) {
		return ((T (*)(BankCallback*, uint32_t, uintptr_t, uintptr_t, uint32_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4A319C0))(this, in_bankID, in_InMemoryBankPtr, in_eLoadResult, in_memPoolId, in_Cookie, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(BankCallback*, uintptr_t))(Il2CppBase() + 0x4A31AE8))(this, result);
	}

};

}
