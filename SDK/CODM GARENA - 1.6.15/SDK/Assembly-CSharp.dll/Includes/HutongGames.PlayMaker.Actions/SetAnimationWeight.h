#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetAnimationWeight
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetAnimationWeight"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& animName() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& weight() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetAnimationWeight*))(Il2CppBase() + 0x4FB1458))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetAnimationWeight*))(Il2CppBase() + 0x4FB148C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetAnimationWeight*))(Il2CppBase() + 0x4FB16EC))(this);
	}
	template <typename T = void> T DoSetAnimationWeight(uintptr_t go) {
		return ((T (*)(SetAnimationWeight*, uintptr_t))(Il2CppBase() + 0x4FB151C))(this, go);
	}

};

}
