#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ReapplyDrivenProperties
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "", "ReapplyDrivenProperties"));
	}


	template <typename T = void> T Invoke(uintptr_t driven) {
		return ((T (*)(ReapplyDrivenProperties*, uintptr_t))(Il2CppBase() + 0x4ACDE70))(this, driven);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t driven, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ReapplyDrivenProperties*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4ACE7F0))(this, driven, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(ReapplyDrivenProperties*, uintptr_t))(Il2CppBase() + 0x4ACE81C))(this, result);
	}

};

}
