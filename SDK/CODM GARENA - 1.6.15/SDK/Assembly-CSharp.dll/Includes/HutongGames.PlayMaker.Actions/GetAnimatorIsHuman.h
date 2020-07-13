#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetAnimatorIsHuman
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetAnimatorIsHuman"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& isHuman() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& isHumanEvent() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& isGenericEvent() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetAnimatorIsHuman*))(Il2CppBase() + 0x50586DC))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetAnimatorIsHuman*))(Il2CppBase() + 0x50586EC))(this);
	}
	template <typename T = void> T DoCheckIsHuman() {
		return ((T (*)(GetAnimatorIsHuman*))(Il2CppBase() + 0x5058854))(this);
	}

};

}
