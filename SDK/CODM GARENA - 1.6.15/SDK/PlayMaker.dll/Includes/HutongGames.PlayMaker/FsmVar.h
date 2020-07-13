#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class FsmVar
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "FsmVar"));
	}

	template <typename T = Il2CppString*> T& variableName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& objectType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& useVariable() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& namedVar() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& namedVarType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& enumType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& enumValue() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _objectType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& floatValue() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& intValue() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& boolValue() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& stringValue() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& vector4Value() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& objectReference() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& arrayValue() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppVector2> T& vector2() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppVector3> T& vector3() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppRect> T& rect() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = uintptr_t> T get_NamedVar() {
		return ((T (*)(FsmVar*))(Il2CppBase() + 0x2EDBF6C))(this);
	}
	template <typename T = void> T set_NamedVar(uintptr_t value) {
		return ((T (*)(FsmVar*, uintptr_t))(Il2CppBase() + 0x2EDBF94))(this, value);
	}
	template <typename T = uintptr_t> T get_NamedVarType() {
		return ((T (*)(FsmVar*))(Il2CppBase() + 0x2F19420))(this);
	}
	template <typename T = uintptr_t> T get_EnumType() {
		return ((T (*)(FsmVar*))(Il2CppBase() + 0x2F1947C))(this);
	}
	template <typename T = void> T set_EnumType(uintptr_t value) {
		return ((T (*)(FsmVar*, uintptr_t))(Il2CppBase() + 0x2F19638))(this, value);
	}
	template <typename T = uintptr_t> T get_EnumValue() {
		return ((T (*)(FsmVar*))(Il2CppBase() + 0x2F19970))(this);
	}
	template <typename T = void> T set_EnumValue(uintptr_t value) {
		return ((T (*)(FsmVar*, uintptr_t))(Il2CppBase() + 0x2F19A7C))(this, value);
	}
	template <typename T = uintptr_t> T get_ObjectType() {
		return ((T (*)(FsmVar*))(Il2CppBase() + 0x2F19B90))(this);
	}
	template <typename T = void> T set_ObjectType(uintptr_t value) {
		return ((T (*)(FsmVar*, uintptr_t))(Il2CppBase() + 0x2F19838))(this, value);
	}
	template <typename T = uintptr_t> T get_Type() {
		return ((T (*)(FsmVar*))(Il2CppBase() + 0x2F19D08))(this);
	}
	template <typename T = void> T set_Type(uintptr_t value) {
		return ((T (*)(FsmVar*, uintptr_t))(Il2CppBase() + 0x2F19D10))(this, value);
	}
	template <typename T = uintptr_t> T get_RealType() {
		return ((T (*)(FsmVar*))(Il2CppBase() + 0x2F19D24))(this);
	}
	template <typename T = bool> T get_IsNone() {
		return ((T (*)(FsmVar*))(Il2CppBase() + 0x2F1A204))(this);
	}
	template <typename T = Il2CppVector2> T get_vector2Value() {
		return ((T (*)(FsmVar*))(Il2CppBase() + 0x2F1A2C0))(this);
	}
	template <typename T = void> T set_vector2Value(Il2CppVector2 value) {
		return ((T (*)(FsmVar*, Il2CppVector2))(Il2CppBase() + 0x2F1A2F4))(this, value);
	}
	template <typename T = Il2CppVector3> T get_vector3Value() {
		return ((T (*)(FsmVar*))(Il2CppBase() + 0x2F1A320))(this);
	}
	template <typename T = void> T set_vector3Value(Il2CppVector3 value) {
		return ((T (*)(FsmVar*, Il2CppVector3))(Il2CppBase() + 0x2F1A364))(this, value);
	}
	template <typename T = uintptr_t> T get_colorValue() {
		return ((T (*)(FsmVar*))(Il2CppBase() + 0x2F1A38C))(this);
	}
	template <typename T = void> T set_colorValue(uintptr_t value) {
		return ((T (*)(FsmVar*, uintptr_t))(Il2CppBase() + 0x2F1A3CC))(this, value);
	}
	template <typename T = Il2CppRect> T get_rectValue() {
		return ((T (*)(FsmVar*))(Il2CppBase() + 0x2F1A3F4))(this);
	}
	template <typename T = void> T set_rectValue(Il2CppRect value) {
		return ((T (*)(FsmVar*, Il2CppRect))(Il2CppBase() + 0x2F1A440))(this, value);
	}
	template <typename T = Il2CppQuaternion> T get_quaternionValue() {
		return ((T (*)(FsmVar*))(Il2CppBase() + 0x2F1A4C4))(this);
	}
	template <typename T = void> T set_quaternionValue(Il2CppQuaternion value) {
		return ((T (*)(FsmVar*, Il2CppQuaternion))(Il2CppBase() + 0x2F1A504))(this, value);
	}
	template <typename T = uintptr_t> T get_gameObjectValue() {
		return ((T (*)(FsmVar*))(Il2CppBase() + 0x2F1A52C))(this);
	}
	template <typename T = void> T set_gameObjectValue(uintptr_t value) {
		return ((T (*)(FsmVar*, uintptr_t))(Il2CppBase() + 0x2F1A5C8))(this, value);
	}
	template <typename T = uintptr_t> T get_materialValue() {
		return ((T (*)(FsmVar*))(Il2CppBase() + 0x2F1A5D0))(this);
	}
	template <typename T = void> T set_materialValue(uintptr_t value) {
		return ((T (*)(FsmVar*, uintptr_t))(Il2CppBase() + 0x2F1A688))(this, value);
	}
	template <typename T = uintptr_t> T get_textureValue() {
		return ((T (*)(FsmVar*))(Il2CppBase() + 0x2F1A690))(this);
	}
	template <typename T = void> T set_textureValue(uintptr_t value) {
		return ((T (*)(FsmVar*, uintptr_t))(Il2CppBase() + 0x2F1A748))(this, value);
	}
	template <typename T = void> T Init(uintptr_t variable) {
		return ((T (*)(FsmVar*, uintptr_t))(Il2CppBase() + 0x2F1B3C8))(this, variable);
	}
	template <typename T = void> T UpdateType(uintptr_t sourceVar) {
		return ((T (*)(FsmVar*, uintptr_t))(Il2CppBase() + 0x2F1927C))(this, sourceVar);
	}
	template <typename T = void> T InitNamedVar() {
		return ((T (*)(FsmVar*))(Il2CppBase() + 0x2F18BF0))(this);
	}
	template <typename T = void> T InitEnumType() {
		return ((T (*)(FsmVar*))(Il2CppBase() + 0x2F194B0))(this);
	}
	template <typename T = uintptr_t> T GetValue() {
		return ((T (*)(FsmVar*))(Il2CppBase() + 0x2F1B488))(this);
	}
	template <typename T = void> T GetValueFrom(uintptr_t variable) {
		return ((T (*)(FsmVar*, uintptr_t))(Il2CppBase() + 0x2F1AAB0))(this, variable);
	}
	template <typename T = void> T UpdateValue() {
		return ((T (*)(FsmVar*))(Il2CppBase() + 0x2F16C8C))(this);
	}
	template <typename T = void> T ApplyValueTo(uintptr_t targetVariable) {
		return ((T (*)(FsmVar*, uintptr_t))(Il2CppBase() + 0x2F1B81C))(this, targetVariable);
	}
	template <typename T = Il2CppString*> T DebugString() {
		return ((T (*)(FsmVar*))(Il2CppBase() + 0x2F1BF74))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(FsmVar*))(Il2CppBase() + 0x2F1C0D4))(this);
	}
	template <typename T = void> T SetValue(uintptr_t value) {
		return ((T (*)(FsmVar*, uintptr_t))(Il2CppBase() + 0x2F1C184))(this, value);
	}
	template <typename T = void> T DebugLog() {
		return ((T (*)(FsmVar*))(Il2CppBase() + 0x2F1C940))(this);
	}
	template <typename T = uintptr_t> static T GetVariableType(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F11424))(0, type);
	}

};

}
