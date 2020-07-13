#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI.CoroutineTween {

class TweenRunner1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI.CoroutineTween", "TweenRunner`1"));
	}

	template <typename T = uintptr_t> T& m_CoroutineContainer() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& m_Tween() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> static T Start(uintptr_t tweenInfo) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x518CBE4))(0, tweenInfo);
	}
	template <typename T = void> T Init(uintptr_t coroutineContainer) {
		return ((T (*)(TweenRunner1*, uintptr_t))(Il2CppBase() + 0x518D078))(this, coroutineContainer);
	}
	template <typename T = void> T StartTween(uintptr_t info) {
		return ((T (*)(TweenRunner1*, uintptr_t))(Il2CppBase() + 0x518D080))(this, info);
	}
	template <typename T = void> T StopTween() {
		return ((T (*)(TweenRunner1*))(Il2CppBase() + 0x518CF64))(this);
	}

};

}
