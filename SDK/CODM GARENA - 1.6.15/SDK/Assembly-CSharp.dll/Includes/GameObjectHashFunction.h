#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameObjectHashFunction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameObjectHashFunction"));
	}


	template <typename T = uint64_t> T Invoke(uintptr_t gameObject) {
		return ((T (*)(GameObjectHashFunction*, uintptr_t))(Il2CppBase() + 0x227C9D4))(this, gameObject);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t gameObject, uintptr_t callback, uintptr_t object) {
		return ((T (*)(GameObjectHashFunction*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x227D194))(this, gameObject, callback, object);
	}
	template <typename T = uint64_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(GameObjectHashFunction*, uintptr_t))(Il2CppBase() + 0x227D1C0))(this, result);
	}

};

}
