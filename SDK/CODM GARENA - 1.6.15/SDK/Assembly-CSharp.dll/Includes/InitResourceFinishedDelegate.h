#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InitResourceFinishedDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InitResourceFinishedDelegate"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(InitResourceFinishedDelegate*))(Il2CppBase() + 0x27A0344))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(InitResourceFinishedDelegate*, uintptr_t, uintptr_t))(Il2CppBase() + 0x27A5508))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(InitResourceFinishedDelegate*, uintptr_t))(Il2CppBase() + 0x27A5534))(this, result);
	}

};

}
