#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnCreateMaterial
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnCreateMaterial"));
	}


	template <typename T = uintptr_t> T Invoke(uintptr_t widget, uintptr_t mat) {
		return ((T (*)(OnCreateMaterial*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2F74FAC))(this, widget, mat);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t widget, uintptr_t mat, uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnCreateMaterial*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2F7B04C))(this, widget, mat, callback, object);
	}
	template <typename T = uintptr_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnCreateMaterial*, uintptr_t))(Il2CppBase() + 0x2F7B084))(this, result);
	}

};

}
