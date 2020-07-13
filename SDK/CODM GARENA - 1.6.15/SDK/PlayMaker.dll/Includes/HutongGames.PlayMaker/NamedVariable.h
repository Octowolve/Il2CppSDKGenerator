#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class NamedVariable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "NamedVariable"));
	}

	template <typename T = bool> T& useVariable() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& tooltip() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& showInInspector() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& networkSync() {
		return *(T*)((uintptr_t)this + 0x15);
	}

	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(NamedVariable*))(Il2CppBase() + 0x2ED9BC4))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(NamedVariable*, Il2CppString*))(Il2CppBase() + 0x2F22828))(this, value);
	}
	template <typename T = uintptr_t> T get_VariableType() {
		return ((T (*)(NamedVariable*))(Il2CppBase() + 0x2F22830))(this);
	}
	template <typename T = uintptr_t> T get_ObjectType() {
		return ((T (*)(NamedVariable*))(Il2CppBase() + 0x2F2295C))(this);
	}
	template <typename T = void> T set_ObjectType(uintptr_t value) {
		return ((T (*)(NamedVariable*, uintptr_t))(Il2CppBase() + 0x2F22964))(this, value);
	}
	template <typename T = uintptr_t> T get_TypeConstraint() {
		return ((T (*)(NamedVariable*))(Il2CppBase() + 0x2F22968))(this);
	}
	template <typename T = void> T set_RawValue(uintptr_t value) {
		return ((T (*)(NamedVariable*, uintptr_t))(Il2CppBase() + 0x2F22978))(this, value);
	}
	template <typename T = uintptr_t> T get_RawValue() {
		return ((T (*)(NamedVariable*))(Il2CppBase() + 0x2F22A0C))(this);
	}
	template <typename T = Il2CppString*> T get_Tooltip() {
		return ((T (*)(NamedVariable*))(Il2CppBase() + 0x2F22AA0))(this);
	}
	template <typename T = void> T set_Tooltip(Il2CppString* value) {
		return ((T (*)(NamedVariable*, Il2CppString*))(Il2CppBase() + 0x2F22AA8))(this, value);
	}
	template <typename T = bool> T get_UseVariable() {
		return ((T (*)(NamedVariable*))(Il2CppBase() + 0x2F1427C))(this);
	}
	template <typename T = void> T set_UseVariable(bool value) {
		return ((T (*)(NamedVariable*, bool))(Il2CppBase() + 0x2F18530))(this, value);
	}
	template <typename T = bool> T get_ShowInInspector() {
		return ((T (*)(NamedVariable*))(Il2CppBase() + 0x2F16B70))(this);
	}
	template <typename T = void> T set_ShowInInspector(bool value) {
		return ((T (*)(NamedVariable*, bool))(Il2CppBase() + 0x2F22AB0))(this, value);
	}
	template <typename T = bool> T get_NetworkSync() {
		return ((T (*)(NamedVariable*))(Il2CppBase() + 0x2F22AB8))(this);
	}
	template <typename T = void> T set_NetworkSync(bool value) {
		return ((T (*)(NamedVariable*, bool))(Il2CppBase() + 0x2F22AC0))(this, value);
	}
	template <typename T = bool> static T IsNullOrNone(uintptr_t variable) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F22AC8))(0, variable);
	}
	template <typename T = bool> T get_IsNone() {
		return ((T (*)(NamedVariable*))(Il2CppBase() + 0x2EE8738))(this);
	}
	template <typename T = bool> T get_UsesVariable() {
		return ((T (*)(NamedVariable*))(Il2CppBase() + 0x2EDAA48))(this);
	}
	template <typename T = bool> T TestTypeConstraint(uintptr_t variableType, uintptr_t objectType) {
		return ((T (*)(NamedVariable*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2F05684))(this, variableType, objectType);
	}
	template <typename T = void> T SafeAssign(uintptr_t val) {
		return ((T (*)(NamedVariable*, uintptr_t))(Il2CppBase() + 0x2F22AE4))(this, val);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(NamedVariable*))(Il2CppBase() + 0x2F22B78))(this);
	}
	template <typename T = Il2CppString*> T GetDisplayName() {
		return ((T (*)(NamedVariable*))(Il2CppBase() + 0x2F22C0C))(this);
	}
	template <typename T = int32_t> T CompareTo(uintptr_t obj) {
		return ((T (*)(NamedVariable*, uintptr_t))(Il2CppBase() + 0x2F22CD8))(this, obj);
	}

};

}
