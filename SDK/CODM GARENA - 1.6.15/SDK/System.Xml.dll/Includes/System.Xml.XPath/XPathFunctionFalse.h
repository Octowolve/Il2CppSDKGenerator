#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class XPathFunctionFalse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "XPathFunctionFalse"));
	}


	template <typename T = bool> T get_HasStaticValue() {
		return ((T (*)(XPathFunctionFalse*))(Il2CppBase() + 0x4D11A60))(this);
	}
	template <typename T = bool> T get_StaticValueAsBoolean() {
		return ((T (*)(XPathFunctionFalse*))(Il2CppBase() + 0x4D11A68))(this);
	}
	template <typename T = bool> T get_Peer() {
		return ((T (*)(XPathFunctionFalse*))(Il2CppBase() + 0x4D11A70))(this);
	}
	template <typename T = uintptr_t> T Evaluate(uintptr_t iter) {
		return ((T (*)(XPathFunctionFalse*, uintptr_t))(Il2CppBase() + 0x4D11A78))(this, iter);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(XPathFunctionFalse*))(Il2CppBase() + 0x4D11B08))(this);
	}

};

}
