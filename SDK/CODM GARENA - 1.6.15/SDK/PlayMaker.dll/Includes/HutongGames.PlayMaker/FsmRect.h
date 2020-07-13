#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class FsmRect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "FsmRect"));
	}

	template <typename T = Il2CppRect> T& value() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppRect> T get_Value() {
		return ((T (*)(FsmRect*))(Il2CppBase() + 0x2F12F5C))(this);
	}
	template <typename T = void> T set_Value(Il2CppRect value) {
		return ((T (*)(FsmRect*, Il2CppRect))(Il2CppBase() + 0x2EE0754))(this, value);
	}
	template <typename T = uintptr_t> T get_RawValue() {
		return ((T (*)(FsmRect*))(Il2CppBase() + 0x2F14B54))(this);
	}
	template <typename T = void> T set_RawValue(uintptr_t value) {
		return ((T (*)(FsmRect*, uintptr_t))(Il2CppBase() + 0x2F14BEC))(this, value);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(FsmRect*))(Il2CppBase() + 0x2F14C84))(this);
	}
	template <typename T = uintptr_t> T get_VariableType() {
		return ((T (*)(FsmRect*))(Il2CppBase() + 0x2F14D14))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(FsmRect*))(Il2CppBase() + 0x2F14D1C))(this);
	}
	template <typename T = uintptr_t> static T op_Implicit(Il2CppRect value) {
		return ((T (*)(void *, Il2CppRect))(Il2CppBase() + 0x2F14D28))(0, value);
	}

};

}
