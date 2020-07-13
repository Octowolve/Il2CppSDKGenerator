#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RemoveTouchDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RemoveTouchDelegate"));
	}


	template <typename T = void> T Invoke(int32_t id) {
		return ((T (*)(RemoveTouchDelegate*, int32_t))(Il2CppBase() + 0x39BE8EC))(this, id);
	}
	template <typename T = uintptr_t> T BeginInvoke(int32_t id, uintptr_t callback, uintptr_t object) {
		return ((T (*)(RemoveTouchDelegate*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x39C46FC))(this, id, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(RemoveTouchDelegate*, uintptr_t))(Il2CppBase() + 0x39C47B8))(this, result);
	}

};

}
