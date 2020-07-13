#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class WaitForDialogAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "WaitForDialogAction"));
	}

	template <typename T = uintptr_t> T& gameUIScene() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& lastTouchFingerId() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& waitForTouchEnd() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& lastTouchTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(WaitForDialogAction*))(Il2CppBase() + 0x4F1F2B8))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(WaitForDialogAction*))(Il2CppBase() + 0x4F1F3D0))(this);
	}
	template <typename T = bool> T IsTouchClicked() {
		return ((T (*)(WaitForDialogAction*))(Il2CppBase() + 0x4F1F520))(this);
	}

};

}
