#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening {

class TweenCallback1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening", "TweenCallback`1"));
	}


	template <typename T = void> T Invoke(uintptr_t value) {
		return ((T (*)(TweenCallback1*, uintptr_t))(Il2CppBase() + 0x48D2494))(this, value);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t value, uintptr_t callback, uintptr_t object) {
		return ((T (*)(TweenCallback1*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x48D252C))(this, value, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(TweenCallback1*, uintptr_t))(Il2CppBase() + 0x48D2558))(this, result);
	}

};

}
