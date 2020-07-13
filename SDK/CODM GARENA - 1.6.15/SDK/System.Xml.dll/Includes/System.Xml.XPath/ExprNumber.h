#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class ExprNumber
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "ExprNumber"));
	}

	template <typename T = double> T& _value() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ExprNumber*))(Il2CppBase() + 0x4D098F4))(this);
	}
	template <typename T = uintptr_t> T get_ReturnType() {
		return ((T (*)(ExprNumber*))(Il2CppBase() + 0x4D09900))(this);
	}
	template <typename T = bool> T get_Peer() {
		return ((T (*)(ExprNumber*))(Il2CppBase() + 0x4D09908))(this);
	}
	template <typename T = bool> T get_HasStaticValue() {
		return ((T (*)(ExprNumber*))(Il2CppBase() + 0x4D09910))(this);
	}
	template <typename T = double> T get_StaticValueAsNumber() {
		return ((T (*)(ExprNumber*))(Il2CppBase() + 0x4D09918))(this);
	}
	template <typename T = uintptr_t> T Evaluate(uintptr_t iter) {
		return ((T (*)(ExprNumber*, uintptr_t))(Il2CppBase() + 0x4D099BC))(this, iter);
	}
	template <typename T = double> T EvaluateNumber(uintptr_t iter) {
		return ((T (*)(ExprNumber*, uintptr_t))(Il2CppBase() + 0x4D09A50))(this, iter);
	}

};

}
