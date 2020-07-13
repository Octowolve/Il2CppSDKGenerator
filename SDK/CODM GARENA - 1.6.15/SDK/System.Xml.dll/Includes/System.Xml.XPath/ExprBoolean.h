#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class ExprBoolean
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "ExprBoolean"));
	}


	template <typename T = uintptr_t> T Optimize() {
		return ((T (*)(ExprBoolean*))(Il2CppBase() + 0x4D044AC))(this);
	}
	template <typename T = uintptr_t> T get_ReturnType() {
		return ((T (*)(ExprBoolean*))(Il2CppBase() + 0x4D04678))(this);
	}
	template <typename T = uintptr_t> T Evaluate(uintptr_t iter) {
		return ((T (*)(ExprBoolean*, uintptr_t))(Il2CppBase() + 0x4D04680))(this, iter);
	}
	template <typename T = double> T EvaluateNumber(uintptr_t iter) {
		return ((T (*)(ExprBoolean*, uintptr_t))(Il2CppBase() + 0x4D0472C))(this, iter);
	}
	template <typename T = Il2CppString*> T EvaluateString(uintptr_t iter) {
		return ((T (*)(ExprBoolean*, uintptr_t))(Il2CppBase() + 0x4D0475C))(this, iter);
	}

};

}
