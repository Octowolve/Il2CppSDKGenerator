#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class TutorialFinalLockButtonAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "TutorialFinalLockButtonAction"));
	}

	template <typename T = bool> T& IsLockFire() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = bool> T& IsLockLeftFire() {
		return *(T*)((uintptr_t)this + 0x26);
	}
	template <typename T = bool> T& IsLockAim() {
		return *(T*)((uintptr_t)this + 0x27);
	}
	template <typename T = bool> T& IsLockSettings() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(TutorialFinalLockButtonAction*))(Il2CppBase() + 0x4F1A5A4))(this);
	}

};

}
