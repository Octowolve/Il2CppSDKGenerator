#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class ExprLT
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "ExprLT"));
	}


	template <typename T = Il2CppString*> T get_Operator() {
		return ((T (*)(ExprLT*))(Il2CppBase() + 0x4D08E8C))(this);
	}
	template <typename T = bool> T Compare(double arg1, double arg2) {
		return ((T (*)(ExprLT*, double, double))(Il2CppBase() + 0x4D08F04))(this, arg1, arg2);
	}

};

}
