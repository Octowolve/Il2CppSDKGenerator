#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class INamedVariable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "INamedVariable"));
	}


	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(INamedVariable*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_UseVariable() {
		return ((T (*)(INamedVariable*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_UseVariable(bool value) {
		return ((T (*)(INamedVariable*, bool))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = bool> T get_UsesVariable() {
		return ((T (*)(INamedVariable*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_NetworkSync() {
		return ((T (*)(INamedVariable*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_NetworkSync(bool value) {
		return ((T (*)(INamedVariable*, bool))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = bool> T get_IsNone() {
		return ((T (*)(INamedVariable*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetDisplayName() {
		return ((T (*)(INamedVariable*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_VariableType() {
		return ((T (*)(INamedVariable*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_TypeConstraint() {
		return ((T (*)(INamedVariable*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_ObjectType() {
		return ((T (*)(INamedVariable*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_ObjectType(uintptr_t value) {
		return ((T (*)(INamedVariable*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = uintptr_t> T get_RawValue() {
		return ((T (*)(INamedVariable*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_RawValue(uintptr_t value) {
		return ((T (*)(INamedVariable*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = bool> T TestTypeConstraint(uintptr_t variableType, uintptr_t objectType) {
		return ((T (*)(INamedVariable*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, variableType, objectType);
	}
	template <typename T = void> T SafeAssign(uintptr_t val) {
		return ((T (*)(INamedVariable*, uintptr_t))(Il2CppBase() + 0x0))(this, val);
	}

};

}
