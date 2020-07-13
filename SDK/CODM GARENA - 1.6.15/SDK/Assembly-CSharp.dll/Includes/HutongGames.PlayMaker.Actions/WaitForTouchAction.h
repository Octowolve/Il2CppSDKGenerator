#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class WaitForTouchAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "WaitForTouchAction"));
	}

	template <typename T = bool> T& ShowTips() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = bool> T& FinishSign() {
		return *(T*)((uintptr_t)this + 0x26);
	}
	template <typename T = uintptr_t> T& finishEvent() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& waitTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& waitEvent() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& startTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& gameUIScene() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& lastTouchFingerId() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& waitForTouchEnd() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& lastTouchTime() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(WaitForTouchAction*))(Il2CppBase() + 0x4F1FB48))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(WaitForTouchAction*))(Il2CppBase() + 0x4F1FD54))(this);
	}
	template <typename T = bool> T IsTouchClicked() {
		return ((T (*)(WaitForTouchAction*))(Il2CppBase() + 0x4F200C4))(this);
	}

};

}
