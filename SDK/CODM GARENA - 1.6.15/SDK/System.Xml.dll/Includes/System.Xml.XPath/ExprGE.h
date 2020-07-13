#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class ExprGE
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "ExprGE"));
	}


	template <typename T = Il2CppString*> T get_Operator() {
		return ((T (*)(ExprGE*))(Il2CppBase() + 0x4D08B30))(this);
	}
	template <typename T = bool> T Compare(double arg1, double arg2) {
		return ((T (*)(ExprGE*, double, double))(Il2CppBase() + 0x4D08BA8))(this, arg1, arg2);
	}

};

}
