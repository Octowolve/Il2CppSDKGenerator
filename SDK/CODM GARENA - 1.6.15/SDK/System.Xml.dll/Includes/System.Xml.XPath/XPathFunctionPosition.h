#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class XPathFunctionPosition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "XPathFunctionPosition"));
	}


	template <typename T = uintptr_t> T get_ReturnType() {
		return ((T (*)(XPathFunctionPosition*))(Il2CppBase() + 0x5219934))(this);
	}
	template <typename T = bool> T get_Peer() {
		return ((T (*)(XPathFunctionPosition*))(Il2CppBase() + 0x521993C))(this);
	}
	template <typename T = uintptr_t> T Evaluate(uintptr_t iter) {
		return ((T (*)(XPathFunctionPosition*, uintptr_t))(Il2CppBase() + 0x5219944))(this, iter);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(XPathFunctionPosition*))(Il2CppBase() + 0x5219A04))(this);
	}

};

}
