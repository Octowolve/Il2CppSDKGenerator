#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SkinChangedDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "", "SkinChangedDelegate"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(SkinChangedDelegate*))(Il2CppBase() + 0x479A0E4))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(SkinChangedDelegate*, uintptr_t, uintptr_t))(Il2CppBase() + 0x479A294))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(SkinChangedDelegate*, uintptr_t))(Il2CppBase() + 0x479A2C0))(this, result);
	}

};

}
