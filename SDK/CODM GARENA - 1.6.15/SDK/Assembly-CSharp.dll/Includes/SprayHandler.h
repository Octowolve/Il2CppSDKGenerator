#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SprayHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SprayHandler"));
	}


	template <typename T = void> T Invoke(Il2CppVector3 pos) {
		return ((T (*)(SprayHandler*, Il2CppVector3))(Il2CppBase() + 0x35A8730))(this, pos);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppVector3 pos, uintptr_t callback, uintptr_t object) {
		return ((T (*)(SprayHandler*, Il2CppVector3, uintptr_t, uintptr_t))(Il2CppBase() + 0x35A8804))(this, pos, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(SprayHandler*, uintptr_t))(Il2CppBase() + 0x35A88C4))(this, result);
	}

};

}
