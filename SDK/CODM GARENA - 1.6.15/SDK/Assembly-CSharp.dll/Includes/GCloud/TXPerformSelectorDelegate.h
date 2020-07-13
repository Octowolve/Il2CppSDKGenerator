#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class TXPerformSelectorDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "TXPerformSelectorDelegate"));
	}


	template <typename T = void> T Invoke(uintptr_t selector) {
		return ((T (*)(TXPerformSelectorDelegate*, uintptr_t))(Il2CppBase() + 0x44441DC))(this, selector);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t selector, uintptr_t callback, uintptr_t object) {
		return ((T (*)(TXPerformSelectorDelegate*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x444424C))(this, selector, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(TXPerformSelectorDelegate*, uintptr_t))(Il2CppBase() + 0x4444308))(this, result);
	}

};

}
