#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class XPathFunctionTrue
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "XPathFunctionTrue"));
	}


	template <typename T = bool> T get_HasStaticValue() {
		return ((T (*)(XPathFunctionTrue*))(Il2CppBase() + 0x521D9B4))(this);
	}
	template <typename T = bool> T get_StaticValueAsBoolean() {
		return ((T (*)(XPathFunctionTrue*))(Il2CppBase() + 0x521D9BC))(this);
	}
	template <typename T = bool> T get_Peer() {
		return ((T (*)(XPathFunctionTrue*))(Il2CppBase() + 0x521D9C4))(this);
	}
	template <typename T = uintptr_t> T Evaluate(uintptr_t iter) {
		return ((T (*)(XPathFunctionTrue*, uintptr_t))(Il2CppBase() + 0x521D9CC))(this, iter);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(XPathFunctionTrue*))(Il2CppBase() + 0x521DA5C))(this);
	}

};

}
