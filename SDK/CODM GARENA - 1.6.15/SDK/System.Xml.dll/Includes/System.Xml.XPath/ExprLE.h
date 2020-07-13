#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class ExprLE
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "ExprLE"));
	}


	template <typename T = Il2CppString*> T get_Operator() {
		return ((T (*)(ExprLE*))(Il2CppBase() + 0x4D08CA8))(this);
	}
	template <typename T = bool> T Compare(double arg1, double arg2) {
		return ((T (*)(ExprLE*, double, double))(Il2CppBase() + 0x4D08D20))(this, arg1, arg2);
	}

};

}
