#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SwipeGestureEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SwipeGestureEvent"));
	}

	template <typename T = uintptr_t> T& minSwipeDistance() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& swipeLeftEvent() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& swipeRightEvent() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& swipeUpEvent() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& swipeDownEvent() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& screenDiagonalSize() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& minSwipeDistancePixels() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& touchStarted() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppVector2> T& touchStartPos() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SwipeGestureEvent*))(Il2CppBase() + 0x4F16D04))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SwipeGestureEvent*))(Il2CppBase() + 0x4F16D38))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SwipeGestureEvent*))(Il2CppBase() + 0x4F16E70))(this);
	}
	template <typename T = void> T TestForSwipeGesture(uintptr_t touch) {
		return ((T (*)(SwipeGestureEvent*, uintptr_t))(Il2CppBase() + 0x4F1708C))(this, touch);
	}

};

}
