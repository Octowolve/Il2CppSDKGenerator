#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class AnimatorPlay
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "AnimatorPlay"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& stateName() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& layer() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& normalizedTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(AnimatorPlay*))(Il2CppBase() + 0x4F2F02C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(AnimatorPlay*))(Il2CppBase() + 0x4F2F138))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(AnimatorPlay*))(Il2CppBase() + 0x4F2F3F4))(this);
	}
	template <typename T = void> T DoAnimatorPlay() {
		return ((T (*)(AnimatorPlay*))(Il2CppBase() + 0x4F2F26C))(this);
	}

};

}
