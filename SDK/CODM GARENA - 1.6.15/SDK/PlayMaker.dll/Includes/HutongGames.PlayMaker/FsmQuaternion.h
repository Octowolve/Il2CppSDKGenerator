#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class FsmQuaternion
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "FsmQuaternion"));
	}

	template <typename T = Il2CppQuaternion> T& value() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppQuaternion> T get_Value() {
		return ((T (*)(FsmQuaternion*))(Il2CppBase() + 0x2F12F6C))(this);
	}
	template <typename T = void> T set_Value(Il2CppQuaternion value) {
		return ((T (*)(FsmQuaternion*, Il2CppQuaternion))(Il2CppBase() + 0x2EE07EC))(this, value);
	}
	template <typename T = uintptr_t> T get_RawValue() {
		return ((T (*)(FsmQuaternion*))(Il2CppBase() + 0x2F1482C))(this);
	}
	template <typename T = void> T set_RawValue(uintptr_t value) {
		return ((T (*)(FsmQuaternion*, uintptr_t))(Il2CppBase() + 0x2F148C4))(this, value);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(FsmQuaternion*))(Il2CppBase() + 0x2F1495C))(this);
	}
	template <typename T = uintptr_t> T get_VariableType() {
		return ((T (*)(FsmQuaternion*))(Il2CppBase() + 0x2F149EC))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(FsmQuaternion*))(Il2CppBase() + 0x2F149F4))(this);
	}
	template <typename T = uintptr_t> static T op_Implicit(Il2CppQuaternion value) {
		return ((T (*)(void *, Il2CppQuaternion))(Il2CppBase() + 0x2F14A44))(0, value);
	}

};

}
