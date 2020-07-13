#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class Expression
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "Expression"));
	}


	template <typename T = uintptr_t> T get_ReturnType() {
		return ((T (*)(Expression*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetReturnType(uintptr_t iter) {
		return ((T (*)(Expression*, uintptr_t))(Il2CppBase() + 0x4D04A84))(this, iter);
	}
	template <typename T = uintptr_t> T Optimize() {
		return ((T (*)(Expression*))(Il2CppBase() + 0x4D04A94))(this);
	}
	template <typename T = bool> T get_HasStaticValue() {
		return ((T (*)(Expression*))(Il2CppBase() + 0x4D04A98))(this);
	}
	template <typename T = uintptr_t> T get_StaticValue() {
		return ((T (*)(Expression*))(Il2CppBase() + 0x4D04AA0))(this);
	}
	template <typename T = Il2CppString*> T get_StaticValueAsString() {
		return ((T (*)(Expression*))(Il2CppBase() + 0x4D04BD0))(this);
	}
	template <typename T = double> T get_StaticValueAsNumber() {
		return ((T (*)(Expression*))(Il2CppBase() + 0x4D04C24))(this);
	}
	template <typename T = bool> T get_StaticValueAsBoolean() {
		return ((T (*)(Expression*))(Il2CppBase() + 0x4D04C80))(this);
	}
	template <typename T = uintptr_t> T get_StaticValueAsNavigator() {
		return ((T (*)(Expression*))(Il2CppBase() + 0x4D04CD8))(this);
	}
	template <typename T = uintptr_t> T Evaluate(uintptr_t iter) {
		return ((T (*)(Expression*, uintptr_t))(Il2CppBase() + 0x0))(this, iter);
	}
	template <typename T = uintptr_t> T EvaluateNodeSet(uintptr_t iter) {
		return ((T (*)(Expression*, uintptr_t))(Il2CppBase() + 0x4D04DA4))(this, iter);
	}
	template <typename T = uintptr_t> static T GetReturnType_1(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D03C90))(0, obj);
	}
	template <typename T = bool> T get_Peer() {
		return ((T (*)(Expression*))(Il2CppBase() + 0x4D05170))(this);
	}
	template <typename T = double> T EvaluateNumber(uintptr_t iter) {
		return ((T (*)(Expression*, uintptr_t))(Il2CppBase() + 0x4D05178))(this, iter);
	}
	template <typename T = Il2CppString*> T EvaluateString(uintptr_t iter) {
		return ((T (*)(Expression*, uintptr_t))(Il2CppBase() + 0x4D05648))(this, iter);
	}
	template <typename T = bool> T EvaluateBoolean(uintptr_t iter) {
		return ((T (*)(Expression*, uintptr_t))(Il2CppBase() + 0x4D05A3C))(this, iter);
	}
	template <typename T = uintptr_t> T EvaluateAs(uintptr_t iter, uintptr_t type) {
		return ((T (*)(Expression*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D05EC4))(this, iter, type);
	}
	template <typename T = bool> T get_RequireSorting() {
		return ((T (*)(Expression*))(Il2CppBase() + 0x4D06028))(this);
	}

};

}
