#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class PlayRandomAnimation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "PlayRandomAnimation"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& animations() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& weights() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& playMode() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& blendTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& finishEvent() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& loopEvent() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& stopOnExit() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& prevAnimtTime() {
		return *(T*)((uintptr_t)this + 0x54);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(PlayRandomAnimation*))(Il2CppBase() + 0x4D7DC98))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(PlayRandomAnimation*))(Il2CppBase() + 0x4D7DD88))(this);
	}
	template <typename T = void> T DoPlayRandomAnimation() {
		return ((T (*)(PlayRandomAnimation*))(Il2CppBase() + 0x4D7DD8C))(this);
	}
	template <typename T = void> T DoPlayAnimation(Il2CppString* animName) {
		return ((T (*)(PlayRandomAnimation*, Il2CppString*))(Il2CppBase() + 0x4D7DE24))(this, animName);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(PlayRandomAnimation*))(Il2CppBase() + 0x4D7E0CC))(this);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(PlayRandomAnimation*))(Il2CppBase() + 0x4D7E324))(this);
	}
	template <typename T = void> T StopAnimation() {
		return ((T (*)(PlayRandomAnimation*))(Il2CppBase() + 0x4D7E334))(this);
	}

};

}
