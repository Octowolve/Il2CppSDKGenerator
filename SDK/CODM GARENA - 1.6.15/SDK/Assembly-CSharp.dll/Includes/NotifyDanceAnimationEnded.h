#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NotifyDanceAnimationEnded
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NotifyDanceAnimationEnded"));
	}


	template <typename T = void> T Invoke(Il2CppArray<uintptr_t>* args) {
		return ((T (*)(NotifyDanceAnimationEnded*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3D41C98))(this, args);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppArray<uintptr_t>* args, uintptr_t callback, uintptr_t object) {
		return ((T (*)(NotifyDanceAnimationEnded*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3D42120))(this, args, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(NotifyDanceAnimationEnded*, uintptr_t))(Il2CppBase() + 0x3D4214C))(this, result);
	}

};

}
