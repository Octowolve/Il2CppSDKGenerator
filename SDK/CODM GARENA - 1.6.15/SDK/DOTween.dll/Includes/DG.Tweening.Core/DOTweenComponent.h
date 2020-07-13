#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening.Core {

class DOTweenComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening.Core", "DOTweenComponent"));
	}

	template <typename T = int32_t> T& inspectorUpdater() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& _unscaledTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& _unscaledDeltaTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& _duplicateToDestroy() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(DOTweenComponent*))(Il2CppBase() + 0x449C6A4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(DOTweenComponent*))(Il2CppBase() + 0x449C6CC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(DOTweenComponent*))(Il2CppBase() + 0x449C82C))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(DOTweenComponent*))(Il2CppBase() + 0x449D4C8))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(DOTweenComponent*))(Il2CppBase() + 0x449D6A8))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(DOTweenComponent*))(Il2CppBase() + 0x449D92C))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(DOTweenComponent*))(Il2CppBase() + 0x449DB34))(this);
	}
	template <typename T = void> T OnApplicationQuit() {
		return ((T (*)(DOTweenComponent*))(Il2CppBase() + 0x449DF90))(this);
	}
	template <typename T = uintptr_t> T SetCapacity(int32_t tweenersCapacity, int32_t sequencesCapacity) {
		return ((T (*)(DOTweenComponent*, int32_t, int32_t))(Il2CppBase() + 0x449E044))(this, tweenersCapacity, sequencesCapacity);
	}
	template <typename T = uintptr_t> T WaitForCompletion(uintptr_t t) {
		return ((T (*)(DOTweenComponent*, uintptr_t))(Il2CppBase() + 0x449E264))(this, t);
	}
	template <typename T = uintptr_t> T WaitForRewind(uintptr_t t) {
		return ((T (*)(DOTweenComponent*, uintptr_t))(Il2CppBase() + 0x449E330))(this, t);
	}
	template <typename T = uintptr_t> T WaitForKill(uintptr_t t) {
		return ((T (*)(DOTweenComponent*, uintptr_t))(Il2CppBase() + 0x449E3FC))(this, t);
	}
	template <typename T = uintptr_t> T WaitForElapsedLoops(uintptr_t t, int32_t elapsedLoops) {
		return ((T (*)(DOTweenComponent*, uintptr_t, int32_t))(Il2CppBase() + 0x449E4C8))(this, t, elapsedLoops);
	}
	template <typename T = uintptr_t> T WaitForPosition(uintptr_t t, float position) {
		return ((T (*)(DOTweenComponent*, uintptr_t, float))(Il2CppBase() + 0x449E59C))(this, t, position);
	}
	template <typename T = uintptr_t> T WaitForStart(uintptr_t t) {
		return ((T (*)(DOTweenComponent*, uintptr_t))(Il2CppBase() + 0x449E674))(this, t);
	}
	template <typename T = void> static T Create() {
		return ((T (*)(void *))(Il2CppBase() + 0x449E740))(0);
	}
	template <typename T = void> static T DestroyInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x449E934))(0);
	}

};

}
