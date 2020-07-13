#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnProgressFunc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnProgressFunc"));
	}


	template <typename T = void> T Invoke(uintptr_t callback, uintptr_t curVersionStage, uint64_t totalSize, uint64_t nowSize) {
		return ((T (*)(OnProgressFunc*, uintptr_t, uintptr_t, uint64_t, uint64_t))(Il2CppBase() + 0x4990E78))(this, callback, curVersionStage, totalSize, nowSize);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t curVersionStage, uint64_t totalSize, uint64_t nowSize, uintptr_t _callback, uintptr_t object) {
		return ((T (*)(OnProgressFunc*, uintptr_t, uintptr_t, uint64_t, uint64_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4990F40))(this, callback, curVersionStage, totalSize, nowSize, _callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnProgressFunc*, uintptr_t))(Il2CppBase() + 0x4991068))(this, result);
	}

};

}
