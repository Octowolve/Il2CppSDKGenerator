#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FucFinishCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FucFinishCallback"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(FucFinishCallback*))(Il2CppBase() + 0x16A189C))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(FucFinishCallback*, uintptr_t, uintptr_t))(Il2CppBase() + 0x16A192C))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(FucFinishCallback*, uintptr_t))(Il2CppBase() + 0x16A1958))(this, result);
	}

};

}
