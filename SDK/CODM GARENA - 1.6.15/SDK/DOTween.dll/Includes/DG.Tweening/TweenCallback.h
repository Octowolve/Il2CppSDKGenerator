#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening {

class TweenCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening", "TweenCallback"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(TweenCallback*))(Il2CppBase() + 0x51D5CFC))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(TweenCallback*, uintptr_t, uintptr_t))(Il2CppBase() + 0x51D5DC8))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(TweenCallback*, uintptr_t))(Il2CppBase() + 0x51D5DF4))(this, result);
	}

};

}
