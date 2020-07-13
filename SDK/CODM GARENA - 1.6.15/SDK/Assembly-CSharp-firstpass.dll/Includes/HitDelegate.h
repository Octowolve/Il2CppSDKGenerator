#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HitDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "", "HitDelegate"));
	}


	template <typename T = void> T Invoke(uintptr_t hit) {
		return ((T (*)(HitDelegate*, uintptr_t))(Il2CppBase() + 0x38A5ED8))(this, hit);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t hit, uintptr_t callback, uintptr_t object) {
		return ((T (*)(HitDelegate*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x38A8980))(this, hit, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(HitDelegate*, uintptr_t))(Il2CppBase() + 0x38A8A60))(this, result);
	}

};

}
