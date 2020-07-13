#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class FsmBool
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "FsmBool"));
	}

	template <typename T = bool> T& value() {
		return *(T*)((uintptr_t)this + 0x16);
	}

	template <typename T = bool> T get_Value() {
		return ((T (*)(FsmBool*))(Il2CppBase() + 0x2EF9EB0))(this);
	}
	template <typename T = void> T set_Value(bool value) {
		return ((T (*)(FsmBool*, bool))(Il2CppBase() + 0x2EE0724))(this, value);
	}
	template <typename T = uintptr_t> T get_RawValue() {
		return ((T (*)(FsmBool*))(Il2CppBase() + 0x2F05C0C))(this);
	}
	template <typename T = void> T set_RawValue(uintptr_t value) {
		return ((T (*)(FsmBool*, uintptr_t))(Il2CppBase() + 0x2F05CA0))(this, value);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(FsmBool*))(Il2CppBase() + 0x2F05D34))(this);
	}
	template <typename T = uintptr_t> T get_VariableType() {
		return ((T (*)(FsmBool*))(Il2CppBase() + 0x2F05DD0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(FsmBool*))(Il2CppBase() + 0x2F05DD8))(this);
	}
	template <typename T = uintptr_t> static T op_Implicit(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x2F05DE4))(0, value);
	}

};

}
