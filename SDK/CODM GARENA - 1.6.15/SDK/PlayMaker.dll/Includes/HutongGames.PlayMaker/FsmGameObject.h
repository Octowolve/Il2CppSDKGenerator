#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class FsmGameObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "FsmGameObject"));
	}

	template <typename T = uintptr_t> T& value() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_Value() {
		return ((T (*)(FsmGameObject*))(Il2CppBase() + 0x2EE8730))(this);
	}
	template <typename T = void> T set_Value(uintptr_t value) {
		return ((T (*)(FsmGameObject*, uintptr_t))(Il2CppBase() + 0x2EE072C))(this, value);
	}
	template <typename T = uintptr_t> T get_RawValue() {
		return ((T (*)(FsmGameObject*))(Il2CppBase() + 0x2F0CA0C))(this);
	}
	template <typename T = void> T set_RawValue(uintptr_t value) {
		return ((T (*)(FsmGameObject*, uintptr_t))(Il2CppBase() + 0x2F0CA14))(this, value);
	}
	template <typename T = void> T SafeAssign(uintptr_t val) {
		return ((T (*)(FsmGameObject*, uintptr_t))(Il2CppBase() + 0x2F0CAB4))(this, val);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(FsmGameObject*))(Il2CppBase() + 0x2F0CB58))(this);
	}
	template <typename T = uintptr_t> T get_VariableType() {
		return ((T (*)(FsmGameObject*))(Il2CppBase() + 0x2F0CBF4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(FsmGameObject*))(Il2CppBase() + 0x2F0CBFC))(this);
	}
	template <typename T = uintptr_t> static T op_Implicit(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F0CCF4))(0, value);
	}

};

}
