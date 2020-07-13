#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class FsmEnum
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "FsmEnum"));
	}

	template <typename T = Il2CppString*> T& enumName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& intValue() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& value() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& enumType() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = uintptr_t> T get_RawValue() {
		return ((T (*)(FsmEnum*))(Il2CppBase() + 0x2F067A0))(this);
	}
	template <typename T = void> T set_RawValue(uintptr_t value) {
		return ((T (*)(FsmEnum*, uintptr_t))(Il2CppBase() + 0x2F068E0))(this, value);
	}
	template <typename T = uintptr_t> T get_EnumType() {
		return ((T (*)(FsmEnum*))(Il2CppBase() + 0x2F06A28))(this);
	}
	template <typename T = void> T set_EnumType(uintptr_t value) {
		return ((T (*)(FsmEnum*, uintptr_t))(Il2CppBase() + 0x2F06C2C))(this, value);
	}
	template <typename T = void> T InitEnumType() {
		return ((T (*)(FsmEnum*))(Il2CppBase() + 0x2F06AA4))(this);
	}
	template <typename T = Il2CppString*> T get_EnumName() {
		return ((T (*)(FsmEnum*))(Il2CppBase() + 0x2F06DFC))(this);
	}
	template <typename T = void> T set_EnumName(Il2CppString* value) {
		return ((T (*)(FsmEnum*, Il2CppString*))(Il2CppBase() + 0x2F06DF4))(this, value);
	}
	template <typename T = uintptr_t> T get_Value() {
		return ((T (*)(FsmEnum*))(Il2CppBase() + 0x2F067A4))(this);
	}
	template <typename T = void> T set_Value(uintptr_t value) {
		return ((T (*)(FsmEnum*, uintptr_t))(Il2CppBase() + 0x2F06974))(this, value);
	}
	template <typename T = void> T ResetValue() {
		return ((T (*)(FsmEnum*))(Il2CppBase() + 0x2F06E04))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(FsmEnum*))(Il2CppBase() + 0x2F07050))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(FsmEnum*))(Il2CppBase() + 0x2F070E0))(this);
	}
	template <typename T = uintptr_t> T get_VariableType() {
		return ((T (*)(FsmEnum*))(Il2CppBase() + 0x2F07114))(this);
	}
	template <typename T = uintptr_t> T get_ObjectType() {
		return ((T (*)(FsmEnum*))(Il2CppBase() + 0x2F0711C))(this);
	}
	template <typename T = void> T set_ObjectType(uintptr_t value) {
		return ((T (*)(FsmEnum*, uintptr_t))(Il2CppBase() + 0x2F07120))(this, value);
	}
	template <typename T = bool> T TestTypeConstraint(uintptr_t variableType, uintptr_t _enumType) {
		return ((T (*)(FsmEnum*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2F07124))(this, variableType, _enumType);
	}
	template <typename T = uintptr_t> static T op_Implicit(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F0727C))(0, value);
	}

};

}
