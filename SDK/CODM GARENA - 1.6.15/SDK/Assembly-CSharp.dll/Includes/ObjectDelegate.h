#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ObjectDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectDelegate"));
	}


	template <typename T = void> T Invoke(uintptr_t go, uintptr_t obj) {
		return ((T (*)(ObjectDelegate*, uintptr_t, uintptr_t))(Il2CppBase() + 0x39C11C8))(this, go, obj);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t go, uintptr_t obj, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ObjectDelegate*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x39C45A0))(this, go, obj, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(ObjectDelegate*, uintptr_t))(Il2CppBase() + 0x39C45D8))(this, result);
	}

};

}
