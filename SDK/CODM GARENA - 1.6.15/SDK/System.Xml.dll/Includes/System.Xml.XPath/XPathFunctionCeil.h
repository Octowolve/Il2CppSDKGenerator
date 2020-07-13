#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class XPathFunctionCeil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "XPathFunctionCeil"));
	}

	template <typename T = uintptr_t> T& arg0() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T get_HasStaticValue() {
		return ((T (*)(XPathFunctionCeil*))(Il2CppBase() + 0x4D1090C))(this);
	}
	template <typename T = double> T get_StaticValueAsNumber() {
		return ((T (*)(XPathFunctionCeil*))(Il2CppBase() + 0x4D10940))(this);
	}
	template <typename T = bool> T get_Peer() {
		return ((T (*)(XPathFunctionCeil*))(Il2CppBase() + 0x4D109A4))(this);
	}
	template <typename T = uintptr_t> T Evaluate(uintptr_t iter) {
		return ((T (*)(XPathFunctionCeil*, uintptr_t))(Il2CppBase() + 0x4D109D8))(this, iter);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(XPathFunctionCeil*))(Il2CppBase() + 0x4D10A9C))(this);
	}

};

}
