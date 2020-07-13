#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class ExprGT
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "ExprGT"));
	}


	template <typename T = Il2CppString*> T get_Operator() {
		return ((T (*)(ExprGT*))(Il2CppBase() + 0x4D08BEC))(this);
	}
	template <typename T = bool> T Compare(double arg1, double arg2) {
		return ((T (*)(ExprGT*, double, double))(Il2CppBase() + 0x4D08C64))(this, arg1, arg2);
	}

};

}
