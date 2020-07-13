#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDReplaceDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDReplaceDelegate"));
	}


	template <typename T = bool> T Invoke(uint32_t srcPlayerID, uintptr_t* destPlayerID) {
		return ((T (*)(IDReplaceDelegate*, uint32_t, uintptr_t*))(Il2CppBase() + 0x4831314))(this, srcPlayerID, destPlayerID);
	}
	template <typename T = uintptr_t> T BeginInvoke(uint32_t srcPlayerID, uintptr_t* destPlayerID, uintptr_t callback, uintptr_t object) {
		return ((T (*)(IDReplaceDelegate*, uint32_t, uintptr_t*, uintptr_t, uintptr_t))(Il2CppBase() + 0x48314DC))(this, srcPlayerID, destPlayerID, callback, object);
	}
	template <typename T = bool> T EndInvoke(uintptr_t* destPlayerID, uintptr_t result) {
		return ((T (*)(IDReplaceDelegate*, uintptr_t*, uintptr_t))(Il2CppBase() + 0x48315B0))(this, destPlayerID, result);
	}

};

}
