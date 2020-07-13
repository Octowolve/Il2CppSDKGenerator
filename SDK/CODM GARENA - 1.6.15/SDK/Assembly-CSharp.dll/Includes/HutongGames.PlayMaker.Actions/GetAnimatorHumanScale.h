#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetAnimatorHumanScale
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetAnimatorHumanScale"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& humanScale() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetAnimatorHumanScale*))(Il2CppBase() + 0x5057C5C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetAnimatorHumanScale*))(Il2CppBase() + 0x5057C68))(this);
	}
	template <typename T = void> T DoGetHumanScale() {
		return ((T (*)(GetAnimatorHumanScale*))(Il2CppBase() + 0x5057DD0))(this);
	}

};

}
