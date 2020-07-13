#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetAnimatorIsParameterControlledByCurve
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetAnimatorIsParameterControlledByCurve"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& parameterName() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& isControlledByCurve() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& isControlledByCurveEvent() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& isNotControlledByCurveEvent() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetAnimatorIsParameterControlledByCurve*))(Il2CppBase() + 0x5058F78))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetAnimatorIsParameterControlledByCurve*))(Il2CppBase() + 0x5058F90))(this);
	}
	template <typename T = void> T DoCheckIsParameterControlledByCurve() {
		return ((T (*)(GetAnimatorIsParameterControlledByCurve*))(Il2CppBase() + 0x50590F8))(this);
	}

};

}
