#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class FsmTexture
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "FsmTexture"));
	}


	template <typename T = uintptr_t> T get_Value() {
		return ((T (*)(FsmTexture*))(Il2CppBase() + 0x2F12F7C))(this);
	}
	template <typename T = void> T set_Value(uintptr_t value) {
		return ((T (*)(FsmTexture*, uintptr_t))(Il2CppBase() + 0x2EE0824))(this, value);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(FsmTexture*))(Il2CppBase() + 0x2F16DF4))(this);
	}
	template <typename T = uintptr_t> T get_VariableType() {
		return ((T (*)(FsmTexture*))(Il2CppBase() + 0x2F16E84))(this);
	}
	template <typename T = bool> T TestTypeConstraint(uintptr_t variableType, uintptr_t _objectType) {
		return ((T (*)(FsmTexture*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2F16E8C))(this, variableType, _objectType);
	}

};

}
