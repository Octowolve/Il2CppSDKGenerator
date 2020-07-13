#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FucTraversingEx
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FucTraversingEx"));
	}


	template <typename T = bool> T Invoke(int32_t ID, float delta, uintptr_t inObj, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(FucTraversingEx*, int32_t, float, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x48D390C))(this, ID, delta, inObj, args);
	}
	template <typename T = uintptr_t> T BeginInvoke(int32_t ID, float delta, uintptr_t inObj, Il2CppArray<uintptr_t>* args, uintptr_t callback, uintptr_t object) {
		return ((T (*)(FucTraversingEx*, int32_t, float, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x48D39C0))(this, ID, delta, inObj, args, callback, object);
	}
	template <typename T = bool> T EndInvoke(uintptr_t inObj, uintptr_t result) {
		return ((T (*)(FucTraversingEx*, uintptr_t, uintptr_t))(Il2CppBase() + 0x48D3AB8))(this, inObj, result);
	}

};

}
