#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CollisionDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "", "CollisionDelegate"));
	}


	template <typename T = void> T Invoke(uintptr_t collision) {
		return ((T (*)(CollisionDelegate*, uintptr_t))(Il2CppBase() + 0x38A608C))(this, collision);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t collision, uintptr_t callback, uintptr_t object) {
		return ((T (*)(CollisionDelegate*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x38A8850))(this, collision, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(CollisionDelegate*, uintptr_t))(Il2CppBase() + 0x38A8910))(this, result);
	}

};

}
