#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class AnimatorMatchTarget
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "AnimatorMatchTarget"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& bodyPart() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& targetPosition() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& targetRotation() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& positionWeight() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& rotationWeight() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& startNormalizedTime() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& targetNormalizedTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _transform() {
		return *(T*)((uintptr_t)this + 0x54);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(AnimatorMatchTarget*))(Il2CppBase() + 0x4F2E918))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(AnimatorMatchTarget*))(Il2CppBase() + 0x4F2EA78))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(AnimatorMatchTarget*))(Il2CppBase() + 0x4F2F020))(this);
	}
	template <typename T = void> T DoMatchTarget() {
		return ((T (*)(AnimatorMatchTarget*))(Il2CppBase() + 0x4F2EC6C))(this);
	}

};

}
