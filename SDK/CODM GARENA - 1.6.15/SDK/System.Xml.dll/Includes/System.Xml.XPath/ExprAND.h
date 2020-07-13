#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class ExprAND
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "ExprAND"));
	}


	template <typename T = Il2CppString*> T get_Operator() {
		return ((T (*)(ExprAND*))(Il2CppBase() + 0x4D03F00))(this);
	}
	template <typename T = bool> T get_StaticValueAsBoolean() {
		return ((T (*)(ExprAND*))(Il2CppBase() + 0x4D03F78))(this);
	}
	template <typename T = bool> T EvaluateBoolean(uintptr_t iter) {
		return ((T (*)(ExprAND*, uintptr_t))(Il2CppBase() + 0x4D03FFC))(this, iter);
	}

};

}
