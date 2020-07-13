#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetAnimatorPivot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetAnimatorPivot"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& pivotWeight() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& pivotPosition() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetAnimatorPivot*))(Il2CppBase() + 0x505A548))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetAnimatorPivot*))(Il2CppBase() + 0x505A564))(this);
	}
	template <typename T = void> T OnActionUpdate() {
		return ((T (*)(GetAnimatorPivot*))(Il2CppBase() + 0x505A848))(this);
	}
	template <typename T = void> T DoCheckPivot() {
		return ((T (*)(GetAnimatorPivot*))(Il2CppBase() + 0x505A6DC))(this);
	}

};

}
