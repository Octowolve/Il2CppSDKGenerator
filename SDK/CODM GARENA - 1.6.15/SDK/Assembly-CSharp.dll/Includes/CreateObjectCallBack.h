#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreateObjectCallBack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CreateObjectCallBack"));
	}


	template <typename T = void> T Invoke(uint32_t actorID, uintptr_t obj, uintptr_t cb) {
		return ((T (*)(CreateObjectCallBack*, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2B1B308))(this, actorID, obj, cb);
	}
	template <typename T = uintptr_t> T BeginInvoke(uint32_t actorID, uintptr_t obj, uintptr_t cb, uintptr_t callback, uintptr_t object) {
		return ((T (*)(CreateObjectCallBack*, uint32_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2B1B3B0))(this, actorID, obj, cb, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(CreateObjectCallBack*, uintptr_t))(Il2CppBase() + 0x2B1B474))(this, result);
	}

};

}
