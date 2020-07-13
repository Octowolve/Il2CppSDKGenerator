#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnGeometryUpdated
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnGeometryUpdated"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(OnGeometryUpdated*))(Il2CppBase() + 0x2F78538))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnGeometryUpdated*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2F7B0B0))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnGeometryUpdated*, uintptr_t))(Il2CppBase() + 0x2F7B0DC))(this, result);
	}

};

}
