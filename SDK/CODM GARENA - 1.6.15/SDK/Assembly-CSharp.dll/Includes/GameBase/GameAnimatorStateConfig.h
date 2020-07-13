#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class GameAnimatorStateConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "GameAnimatorStateConfig"));
	}

	template <typename T = bool> T& IsRunning() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& LeftHandHoldType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& IsRunningChangClip() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& IsStopTransition() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
