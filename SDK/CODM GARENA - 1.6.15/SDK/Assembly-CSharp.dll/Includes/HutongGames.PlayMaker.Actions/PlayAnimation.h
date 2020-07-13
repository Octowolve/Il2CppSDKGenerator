#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class PlayAnimation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "PlayAnimation"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& animName() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& playMode() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& blendTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& finishEvent() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& loopEvent() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& stopOnExit() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& prevAnimtTime() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(PlayAnimation*))(Il2CppBase() + 0x4D7BD0C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(PlayAnimation*))(Il2CppBase() + 0x4D7BD54))(this);
	}
	template <typename T = void> T DoPlayAnimation() {
		return ((T (*)(PlayAnimation*))(Il2CppBase() + 0x4D7BD58))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(PlayAnimation*))(Il2CppBase() + 0x4D7C064))(this);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(PlayAnimation*))(Il2CppBase() + 0x4D7C2BC))(this);
	}
	template <typename T = void> T StopAnimation() {
		return ((T (*)(PlayAnimation*))(Il2CppBase() + 0x4D7C2CC))(this);
	}

};

}
