#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class ExprMOD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "ExprMOD"));
	}


	template <typename T = Il2CppString*> T get_Operator() {
		return ((T (*)(ExprMOD*))(Il2CppBase() + 0x4D090F8))(this);
	}
	template <typename T = double> T get_StaticValueAsNumber() {
		return ((T (*)(ExprMOD*))(Il2CppBase() + 0x4D09170))(this);
	}
	template <typename T = double> T EvaluateNumber(uintptr_t iter) {
		return ((T (*)(ExprMOD*, uintptr_t))(Il2CppBase() + 0x4D09208))(this, iter);
	}

};

}
