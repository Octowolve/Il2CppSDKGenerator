#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class FsmMaterial
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "FsmMaterial"));
	}


	template <typename T = uintptr_t> T get_Value() {
		return ((T (*)(FsmMaterial*))(Il2CppBase() + 0x2F0F484))(this);
	}
	template <typename T = void> T set_Value(uintptr_t value) {
		return ((T (*)(FsmMaterial*, uintptr_t))(Il2CppBase() + 0x2EE081C))(this, value);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(FsmMaterial*))(Il2CppBase() + 0x2F0F664))(this);
	}
	template <typename T = uintptr_t> T get_VariableType() {
		return ((T (*)(FsmMaterial*))(Il2CppBase() + 0x2F0F6F4))(this);
	}
	template <typename T = bool> T TestTypeConstraint(uintptr_t variableType, uintptr_t _objectType) {
		return ((T (*)(FsmMaterial*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2F0F6FC))(this, variableType, _objectType);
	}

};

}
