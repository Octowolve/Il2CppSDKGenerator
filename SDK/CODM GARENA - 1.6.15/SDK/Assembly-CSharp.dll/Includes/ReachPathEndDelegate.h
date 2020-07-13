#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ReachPathEndDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ReachPathEndDelegate"));
	}


	template <typename T = void> T Invoke(uintptr_t path) {
		return ((T (*)(ReachPathEndDelegate*, uintptr_t))(Il2CppBase() + 0x4382664))(this, path);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t path, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ReachPathEndDelegate*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x43826FC))(this, path, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(ReachPathEndDelegate*, uintptr_t))(Il2CppBase() + 0x4382728))(this, result);
	}

};

}
