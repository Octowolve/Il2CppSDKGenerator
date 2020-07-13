#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NotifyDanceAnimationMileStone
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NotifyDanceAnimationMileStone"));
	}


	template <typename T = void> T Invoke(Il2CppArray<uintptr_t>* args) {
		return ((T (*)(NotifyDanceAnimationMileStone*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3D41A14))(this, args);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppArray<uintptr_t>* args, uintptr_t callback, uintptr_t object) {
		return ((T (*)(NotifyDanceAnimationMileStone*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3D4216C))(this, args, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(NotifyDanceAnimationMileStone*, uintptr_t))(Il2CppBase() + 0x3D42198))(this, result);
	}

};

}
