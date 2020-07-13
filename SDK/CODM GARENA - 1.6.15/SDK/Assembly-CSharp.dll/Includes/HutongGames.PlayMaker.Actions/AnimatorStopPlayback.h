#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class AnimatorStopPlayback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "AnimatorStopPlayback"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(AnimatorStopPlayback*))(Il2CppBase() + 0x4F2F748))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(AnimatorStopPlayback*))(Il2CppBase() + 0x4F2F754))(this);
	}

};

}
