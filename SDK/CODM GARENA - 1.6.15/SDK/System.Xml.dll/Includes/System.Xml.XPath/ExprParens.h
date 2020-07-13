#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class ExprParens
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "ExprParens"));
	}

	template <typename T = uintptr_t> T& _expr() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T Optimize() {
		return ((T (*)(ExprParens*))(Il2CppBase() + 0x4D09D9C))(this);
	}
	template <typename T = bool> T get_HasStaticValue() {
		return ((T (*)(ExprParens*))(Il2CppBase() + 0x4D09DD8))(this);
	}
	template <typename T = uintptr_t> T get_StaticValue() {
		return ((T (*)(ExprParens*))(Il2CppBase() + 0x4D09E0C))(this);
	}
	template <typename T = Il2CppString*> T get_StaticValueAsString() {
		return ((T (*)(ExprParens*))(Il2CppBase() + 0x4D09E40))(this);
	}
	template <typename T = double> T get_StaticValueAsNumber() {
		return ((T (*)(ExprParens*))(Il2CppBase() + 0x4D09E74))(this);
	}
	template <typename T = bool> T get_StaticValueAsBoolean() {
		return ((T (*)(ExprParens*))(Il2CppBase() + 0x4D09EA8))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ExprParens*))(Il2CppBase() + 0x4D09EDC))(this);
	}
	template <typename T = uintptr_t> T get_ReturnType() {
		return ((T (*)(ExprParens*))(Il2CppBase() + 0x4D09FE8))(this);
	}
	template <typename T = uintptr_t> T Evaluate(uintptr_t iter) {
		return ((T (*)(ExprParens*, uintptr_t))(Il2CppBase() + 0x4D0A01C))(this, iter);
	}
	template <typename T = bool> T get_Peer() {
		return ((T (*)(ExprParens*))(Il2CppBase() + 0x4D0A204))(this);
	}

};

}
