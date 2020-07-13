#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnInitProgresFunc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnInitProgresFunc"));
	}


	template <typename T = void> T Invoke(uintptr_t callback, uint32_t stage, uint32_t nowSize, uint32_t totalSize) {
		return ((T (*)(OnInitProgresFunc*, uintptr_t, uint32_t, uint32_t, uint32_t))(Il2CppBase() + 0x49937FC))(this, callback, stage, nowSize, totalSize);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uint32_t stage, uint32_t nowSize, uint32_t totalSize, uintptr_t _callback, uintptr_t object) {
		return ((T (*)(OnInitProgresFunc*, uintptr_t, uint32_t, uint32_t, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x49938B0))(this, callback, stage, nowSize, totalSize, _callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnInitProgresFunc*, uintptr_t))(Il2CppBase() + 0x49939BC))(this, result);
	}

};

}
