#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HitCheck
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HitCheck"));
	}


	template <typename T = bool> T Invoke(Il2CppVector3 worldPos) {
		return ((T (*)(HitCheck*, Il2CppVector3))(Il2CppBase() + 0x4205888))(this, worldPos);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppVector3 worldPos, uintptr_t callback, uintptr_t object) {
		return ((T (*)(HitCheck*, Il2CppVector3, uintptr_t, uintptr_t))(Il2CppBase() + 0x4205930))(this, worldPos, callback, object);
	}
	template <typename T = bool> T EndInvoke(uintptr_t result) {
		return ((T (*)(HitCheck*, uintptr_t))(Il2CppBase() + 0x42059F0))(this, result);
	}

};

}
