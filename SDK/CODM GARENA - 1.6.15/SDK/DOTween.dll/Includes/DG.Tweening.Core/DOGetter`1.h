#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening.Core {

class DOGetter1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening.Core", "DOGetter`1"));
	}


	template <typename T = uintptr_t> T Invoke() {
		return ((T (*)(DOGetter1*))(Il2CppBase() + 0x4735FD8))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(DOGetter1*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4736068))(this, callback, object);
	}
	template <typename T = uintptr_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(DOGetter1*, uintptr_t))(Il2CppBase() + 0x4736094))(this, result);
	}

};

}
