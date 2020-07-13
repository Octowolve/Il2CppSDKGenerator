#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class ExprDIV
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "ExprDIV"));
	}


	template <typename T = Il2CppString*> T get_Operator() {
		return ((T (*)(ExprDIV*))(Il2CppBase() + 0x4D04854))(this);
	}
	template <typename T = double> T get_StaticValueAsNumber() {
		return ((T (*)(ExprDIV*))(Il2CppBase() + 0x4D048CC))(this);
	}
	template <typename T = double> T EvaluateNumber(uintptr_t iter) {
		return ((T (*)(ExprDIV*, uintptr_t))(Il2CppBase() + 0x4D04960))(this, iter);
	}

};

}
