#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetAnimatorLeftFootBottomHeight
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetAnimatorLeftFootBottomHeight"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& leftFootHeight() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetAnimatorLeftFootBottomHeight*))(Il2CppBase() + 0x5059CA8))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetAnimatorLeftFootBottomHeight*))(Il2CppBase() + 0x5059CBC))(this);
	}
	template <typename T = void> T OnLateUpdate() {
		return ((T (*)(GetAnimatorLeftFootBottomHeight*))(Il2CppBase() + 0x5059F28))(this);
	}
	template <typename T = void> T _getLeftFootBottonHeight() {
		return ((T (*)(GetAnimatorLeftFootBottomHeight*))(Il2CppBase() + 0x5059E34))(this);
	}

};

}
