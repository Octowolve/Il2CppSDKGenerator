#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetAnimatorFeetPivotActive
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetAnimatorFeetPivotActive"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& feetPivotActive() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetAnimatorFeetPivotActive*))(Il2CppBase() + 0x4FB25D8))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetAnimatorFeetPivotActive*))(Il2CppBase() + 0x4FB25E4))(this);
	}
	template <typename T = void> T DoFeetPivotActive() {
		return ((T (*)(SetAnimatorFeetPivotActive*))(Il2CppBase() + 0x4FB274C))(this);
	}

};

}
