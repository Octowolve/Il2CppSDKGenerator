#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class ExprOR
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "ExprOR"));
	}


	template <typename T = Il2CppString*> T get_Operator() {
		return ((T (*)(ExprOR*))(Il2CppBase() + 0x4D09C0C))(this);
	}
	template <typename T = bool> T get_StaticValueAsBoolean() {
		return ((T (*)(ExprOR*))(Il2CppBase() + 0x4D09C84))(this);
	}
	template <typename T = bool> T EvaluateBoolean(uintptr_t iter) {
		return ((T (*)(ExprOR*, uintptr_t))(Il2CppBase() + 0x4D09D0C))(this, iter);
	}

};

}
