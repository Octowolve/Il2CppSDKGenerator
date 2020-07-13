#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class ExprMINUS
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "ExprMINUS"));
	}


	template <typename T = Il2CppString*> T get_Operator() {
		return ((T (*)(ExprMINUS*))(Il2CppBase() + 0x4D08F48))(this);
	}
	template <typename T = double> T get_StaticValueAsNumber() {
		return ((T (*)(ExprMINUS*))(Il2CppBase() + 0x4D08FC0))(this);
	}
	template <typename T = double> T EvaluateNumber(uintptr_t iter) {
		return ((T (*)(ExprMINUS*, uintptr_t))(Il2CppBase() + 0x4D09054))(this, iter);
	}

};

}
