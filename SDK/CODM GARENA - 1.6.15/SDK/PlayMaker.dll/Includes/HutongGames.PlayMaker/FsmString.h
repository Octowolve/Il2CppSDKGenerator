#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class FsmString
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "FsmString"));
	}

	template <typename T = Il2CppString*> T& value() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppString*> T get_Value() {
		return ((T (*)(FsmString*))(Il2CppBase() + 0x2EFA418))(this);
	}
	template <typename T = void> T set_Value(Il2CppString* value) {
		return ((T (*)(FsmString*, Il2CppString*))(Il2CppBase() + 0x2EE070C))(this, value);
	}
	template <typename T = uintptr_t> T get_RawValue() {
		return ((T (*)(FsmString*))(Il2CppBase() + 0x2F15EA0))(this);
	}
	template <typename T = void> T set_RawValue(uintptr_t value) {
		return ((T (*)(FsmString*, uintptr_t))(Il2CppBase() + 0x2F15EA8))(this, value);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(FsmString*))(Il2CppBase() + 0x2F160B0))(this);
	}
	template <typename T = uintptr_t> T get_VariableType() {
		return ((T (*)(FsmString*))(Il2CppBase() + 0x2F16140))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(FsmString*))(Il2CppBase() + 0x2F16148))(this);
	}
	template <typename T = uintptr_t> static T op_Implicit(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2F0C0E4))(0, value);
	}
	template <typename T = bool> static T IsNullOrEmpty(uintptr_t fsmString) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F1475C))(0, fsmString);
	}

};

}
