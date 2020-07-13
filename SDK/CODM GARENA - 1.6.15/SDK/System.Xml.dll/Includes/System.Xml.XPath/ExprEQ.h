#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class ExprEQ
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "ExprEQ"));
	}


	template <typename T = Il2CppString*> T get_Operator() {
		return ((T (*)(ExprEQ*))(Il2CppBase() + 0x4D04A0C))(this);
	}

};

}
