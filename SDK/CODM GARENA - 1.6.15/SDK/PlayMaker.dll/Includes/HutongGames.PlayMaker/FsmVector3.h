#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class FsmVector3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "FsmVector3"));
	}

	template <typename T = Il2CppVector3> T& value() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppVector3> T get_Value() {
		return ((T (*)(FsmVector3*))(Il2CppBase() + 0x2EE87F4))(this);
	}
	template <typename T = void> T set_Value(Il2CppVector3 value) {
		return ((T (*)(FsmVector3*, Il2CppVector3))(Il2CppBase() + 0x2EE073C))(this, value);
	}
	template <typename T = uintptr_t> T get_RawValue() {
		return ((T (*)(FsmVector3*))(Il2CppBase() + 0x2F220EC))(this);
	}
	template <typename T = void> T set_RawValue(uintptr_t value) {
		return ((T (*)(FsmVector3*, uintptr_t))(Il2CppBase() + 0x2F22188))(this, value);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(FsmVector3*))(Il2CppBase() + 0x2F22220))(this);
	}
	template <typename T = uintptr_t> T get_VariableType() {
		return ((T (*)(FsmVector3*))(Il2CppBase() + 0x2F222C8))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(FsmVector3*))(Il2CppBase() + 0x2F222D0))(this);
	}
	template <typename T = uintptr_t> static T op_Implicit(Il2CppVector3 value) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x2F222DC))(0, value);
	}

};

}
