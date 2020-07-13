#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class FsmObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "FsmObject"));
	}

	template <typename T = Il2CppString*> T& typeName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& value() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& objectType() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> T get_ObjectType() {
		return ((T (*)(FsmObject*))(Il2CppBase() + 0x2F0F71C))(this);
	}
	template <typename T = void> T set_ObjectType(uintptr_t value) {
		return ((T (*)(FsmObject*, uintptr_t))(Il2CppBase() + 0x2F0F8CC))(this, value);
	}
	template <typename T = Il2CppString*> T get_TypeName() {
		return ((T (*)(FsmObject*))(Il2CppBase() + 0x2F0FA60))(this);
	}
	template <typename T = uintptr_t> T get_Value() {
		return ((T (*)(FsmObject*))(Il2CppBase() + 0x2F0F53C))(this);
	}
	template <typename T = void> T set_Value(uintptr_t value) {
		return ((T (*)(FsmObject*, uintptr_t))(Il2CppBase() + 0x2EE082C))(this, value);
	}
	template <typename T = uintptr_t> T get_RawValue() {
		return ((T (*)(FsmObject*))(Il2CppBase() + 0x2F0FA68))(this);
	}
	template <typename T = void> T set_RawValue(uintptr_t value) {
		return ((T (*)(FsmObject*, uintptr_t))(Il2CppBase() + 0x2F0FA70))(this, value);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(FsmObject*))(Il2CppBase() + 0x2F0FAFC))(this);
	}
	template <typename T = uintptr_t> T get_VariableType() {
		return ((T (*)(FsmObject*))(Il2CppBase() + 0x2F0FB8C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(FsmObject*))(Il2CppBase() + 0x2F0FB94))(this);
	}
	template <typename T = uintptr_t> static T op_Implicit(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F0FC94))(0, value);
	}
	template <typename T = bool> T TestTypeConstraint(uintptr_t variableType, uintptr_t _objectType) {
		return ((T (*)(FsmObject*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2F0FD34))(this, variableType, _objectType);
	}

};

}
