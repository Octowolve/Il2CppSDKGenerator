#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetAnimatorFeetPivotActive
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetAnimatorFeetPivotActive"));
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
		return ((T (*)(GetAnimatorFeetPivotActive*))(Il2CppBase() + 0x505749C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetAnimatorFeetPivotActive*))(Il2CppBase() + 0x50574A8))(this);
	}
	template <typename T = void> T DoGetFeetPivotActive() {
		return ((T (*)(GetAnimatorFeetPivotActive*))(Il2CppBase() + 0x5057610))(this);
	}

};

}
