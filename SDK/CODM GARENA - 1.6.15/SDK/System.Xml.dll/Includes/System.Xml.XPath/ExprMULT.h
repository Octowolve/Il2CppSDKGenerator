#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class ExprMULT
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "ExprMULT"));
	}


	template <typename T = Il2CppString*> T get_Operator() {
		return ((T (*)(ExprMULT*))(Il2CppBase() + 0x4D092AC))(this);
	}
	template <typename T = double> T get_StaticValueAsNumber() {
		return ((T (*)(ExprMULT*))(Il2CppBase() + 0x4D09324))(this);
	}
	template <typename T = double> T EvaluateNumber(uintptr_t iter) {
		return ((T (*)(ExprMULT*, uintptr_t))(Il2CppBase() + 0x4D093B8))(this, iter);
	}

};

}
