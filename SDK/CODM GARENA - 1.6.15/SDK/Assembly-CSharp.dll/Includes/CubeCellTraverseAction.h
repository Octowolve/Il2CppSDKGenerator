#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CubeCellTraverseAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CubeCellTraverseAction"));
	}


	template <typename T = void> T Invoke(int32_t hash) {
		return ((T (*)(CubeCellTraverseAction*, int32_t))(Il2CppBase() + 0x415B328))(this, hash);
	}
	template <typename T = uintptr_t> T BeginInvoke(int32_t hash, uintptr_t callback, uintptr_t object) {
		return ((T (*)(CubeCellTraverseAction*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x415B954))(this, hash, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(CubeCellTraverseAction*, uintptr_t))(Il2CppBase() + 0x415BA10))(this, result);
	}

};

}
