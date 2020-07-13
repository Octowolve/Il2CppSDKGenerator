#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class ExprLiteral
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "ExprLiteral"));
	}

	template <typename T = Il2CppString*> T& _value() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ExprLiteral*))(Il2CppBase() + 0x4D08D5C))(this);
	}
	template <typename T = uintptr_t> T get_ReturnType() {
		return ((T (*)(ExprLiteral*))(Il2CppBase() + 0x4D08E34))(this);
	}
	template <typename T = bool> T get_Peer() {
		return ((T (*)(ExprLiteral*))(Il2CppBase() + 0x4D08E3C))(this);
	}
	template <typename T = bool> T get_HasStaticValue() {
		return ((T (*)(ExprLiteral*))(Il2CppBase() + 0x4D08E44))(this);
	}
	template <typename T = Il2CppString*> T get_StaticValueAsString() {
		return ((T (*)(ExprLiteral*))(Il2CppBase() + 0x4D08E4C))(this);
	}
	template <typename T = uintptr_t> T Evaluate(uintptr_t iter) {
		return ((T (*)(ExprLiteral*, uintptr_t))(Il2CppBase() + 0x4D08E54))(this, iter);
	}
	template <typename T = Il2CppString*> T EvaluateString(uintptr_t iter) {
		return ((T (*)(ExprLiteral*, uintptr_t))(Il2CppBase() + 0x4D08E5C))(this, iter);
	}

};

}
