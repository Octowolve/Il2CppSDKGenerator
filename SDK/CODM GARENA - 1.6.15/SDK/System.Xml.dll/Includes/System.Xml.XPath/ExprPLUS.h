#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class ExprPLUS
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "ExprPLUS"));
	}


	template <typename T = Il2CppString*> T get_Operator() {
		return ((T (*)(ExprPLUS*))(Il2CppBase() + 0x4D0A260))(this);
	}
	template <typename T = double> T get_StaticValueAsNumber() {
		return ((T (*)(ExprPLUS*))(Il2CppBase() + 0x4D0A2D8))(this);
	}
	template <typename T = double> T EvaluateNumber(uintptr_t iter) {
		return ((T (*)(ExprPLUS*, uintptr_t))(Il2CppBase() + 0x4D0A36C))(this, iter);
	}

};

}
