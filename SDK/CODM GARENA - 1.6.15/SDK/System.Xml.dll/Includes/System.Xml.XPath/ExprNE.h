#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class ExprNE
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "ExprNE"));
	}


	template <typename T = Il2CppString*> T get_Operator() {
		return ((T (*)(ExprNE*))(Il2CppBase() + 0x4D09464))(this);
	}

};

}
