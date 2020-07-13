#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CollisionImpulseDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "", "CollisionImpulseDelegate"));
	}


	template <typename T = void> T Invoke(uintptr_t m, float impulse) {
		return ((T (*)(CollisionImpulseDelegate*, uintptr_t, float))(Il2CppBase() + 0x38AEDB0))(this, m, impulse);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t m, float impulse, uintptr_t callback, uintptr_t object) {
		return ((T (*)(CollisionImpulseDelegate*, uintptr_t, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x38AF7B4))(this, m, impulse, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(CollisionImpulseDelegate*, uintptr_t))(Il2CppBase() + 0x38AF89C))(this, result);
	}

};

}
