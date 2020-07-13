#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetAnimationTime
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetAnimationTime"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& animName() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& time() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& normalized() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x3D);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetAnimationTime*))(Il2CppBase() + 0x4FB10B8))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetAnimationTime*))(Il2CppBase() + 0x4FB10D0))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetAnimationTime*))(Il2CppBase() + 0x4FB13B0))(this);
	}
	template <typename T = void> T DoSetAnimationTime(uintptr_t go) {
		return ((T (*)(SetAnimationTime*, uintptr_t))(Il2CppBase() + 0x4FB1160))(this, go);
	}

};

}
