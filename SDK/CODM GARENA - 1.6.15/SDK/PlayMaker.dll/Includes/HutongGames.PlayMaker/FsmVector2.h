#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class FsmVector2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "FsmVector2"));
	}

	template <typename T = Il2CppVector2> T& value() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppVector2> T get_Value() {
		return ((T (*)(FsmVector2*))(Il2CppBase() + 0x2F12F48))(this);
	}
	template <typename T = void> T set_Value(Il2CppVector2 value) {
		return ((T (*)(FsmVector2*, Il2CppVector2))(Il2CppBase() + 0x2EE0748))(this, value);
	}
	template <typename T = uintptr_t> T get_RawValue() {
		return ((T (*)(FsmVector2*))(Il2CppBase() + 0x2F21E0C))(this);
	}
	template <typename T = void> T set_RawValue(uintptr_t value) {
		return ((T (*)(FsmVector2*, uintptr_t))(Il2CppBase() + 0x2F21EA4))(this, value);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(FsmVector2*))(Il2CppBase() + 0x2F21F34))(this);
	}
	template <typename T = uintptr_t> T get_VariableType() {
		return ((T (*)(FsmVector2*))(Il2CppBase() + 0x2F21FD8))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(FsmVector2*))(Il2CppBase() + 0x2F21FE0))(this);
	}
	template <typename T = uintptr_t> static T op_Implicit(Il2CppVector2 value) {
		return ((T (*)(void *, Il2CppVector2))(Il2CppBase() + 0x2F21FEC))(0, value);
	}

};

}
