#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetAnimatorLayersAffectMassCenter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetAnimatorLayersAffectMassCenter"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& affectMassCenter() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetAnimatorLayersAffectMassCenter*))(Il2CppBase() + 0x4FB36F0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetAnimatorLayersAffectMassCenter*))(Il2CppBase() + 0x4FB36FC))(this);
	}
	template <typename T = void> T SetAffectMassCenter() {
		return ((T (*)(SetAnimatorLayersAffectMassCenter*))(Il2CppBase() + 0x4FB3864))(this);
	}

};

}
