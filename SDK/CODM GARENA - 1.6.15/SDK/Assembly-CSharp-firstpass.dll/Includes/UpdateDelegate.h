#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "", "UpdateDelegate"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(UpdateDelegate*))(Il2CppBase() + 0x38C1BC8))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(UpdateDelegate*, uintptr_t, uintptr_t))(Il2CppBase() + 0x38D0198))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(UpdateDelegate*, uintptr_t))(Il2CppBase() + 0x38D01C4))(this, result);
	}

};

}
