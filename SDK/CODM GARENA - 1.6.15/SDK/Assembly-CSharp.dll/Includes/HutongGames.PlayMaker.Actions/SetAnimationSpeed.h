#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetAnimationSpeed
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetAnimationSpeed"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& animName() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& speed() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetAnimationSpeed*))(Il2CppBase() + 0x4FB0DA4))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetAnimationSpeed*))(Il2CppBase() + 0x4FB0DD8))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetAnimationSpeed*))(Il2CppBase() + 0x4FB1038))(this);
	}
	template <typename T = void> T DoSetAnimationSpeed(uintptr_t go) {
		return ((T (*)(SetAnimationSpeed*, uintptr_t))(Il2CppBase() + 0x4FB0E68))(this, go);
	}

};

}
