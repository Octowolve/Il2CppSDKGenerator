#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetAnimatorRightFootBottomHeight
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetAnimatorRightFootBottomHeight"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& rightFootHeight() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetAnimatorRightFootBottomHeight*))(Il2CppBase() + 0x50841F4))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetAnimatorRightFootBottomHeight*))(Il2CppBase() + 0x508421C))(this);
	}
	template <typename T = void> T OnLateUpdate() {
		return ((T (*)(GetAnimatorRightFootBottomHeight*))(Il2CppBase() + 0x5084488))(this);
	}
	template <typename T = void> T _getRightFootBottonHeight() {
		return ((T (*)(GetAnimatorRightFootBottomHeight*))(Il2CppBase() + 0x5084394))(this);
	}

};

}
