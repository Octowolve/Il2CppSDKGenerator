#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class ExprNEG
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "ExprNEG"));
	}

	template <typename T = uintptr_t> T& _expr() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ExprNEG*))(Il2CppBase() + 0x4D094FC))(this);
	}
	template <typename T = uintptr_t> T get_ReturnType() {
		return ((T (*)(ExprNEG*))(Il2CppBase() + 0x4D095EC))(this);
	}
	template <typename T = uintptr_t> T Optimize() {
		return ((T (*)(ExprNEG*))(Il2CppBase() + 0x4D095F4))(this);
	}
	template <typename T = bool> T get_Peer() {
		return ((T (*)(ExprNEG*))(Il2CppBase() + 0x4D09714))(this);
	}
	template <typename T = bool> T get_HasStaticValue() {
		return ((T (*)(ExprNEG*))(Il2CppBase() + 0x4D09748))(this);
	}
	template <typename T = double> T get_StaticValueAsNumber() {
		return ((T (*)(ExprNEG*))(Il2CppBase() + 0x4D0977C))(this);
	}
	template <typename T = uintptr_t> T Evaluate(uintptr_t iter) {
		return ((T (*)(ExprNEG*, uintptr_t))(Il2CppBase() + 0x4D097EC))(this, iter);
	}
	template <typename T = double> T EvaluateNumber(uintptr_t iter) {
		return ((T (*)(ExprNEG*, uintptr_t))(Il2CppBase() + 0x4D098B4))(this, iter);
	}

};

}
