#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetAnimatorLayersAffectMassCenter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetAnimatorLayersAffectMassCenter"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& affectMassCenter() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& affectMassCenterEvent() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& doNotAffectMassCenterEvent() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetAnimatorLayersAffectMassCenter*))(Il2CppBase() + 0x505974C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetAnimatorLayersAffectMassCenter*))(Il2CppBase() + 0x505975C))(this);
	}
	template <typename T = void> T CheckAffectMassCenter() {
		return ((T (*)(GetAnimatorLayersAffectMassCenter*))(Il2CppBase() + 0x50598C4))(this);
	}

};

}
