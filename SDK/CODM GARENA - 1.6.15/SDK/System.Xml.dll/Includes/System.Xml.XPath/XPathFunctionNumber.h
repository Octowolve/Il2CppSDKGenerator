#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class XPathFunctionNumber
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "XPathFunctionNumber"));
	}

	template <typename T = uintptr_t> T& arg0() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T Optimize() {
		return ((T (*)(XPathFunctionNumber*))(Il2CppBase() + 0x5219060))(this);
	}
	template <typename T = bool> T get_HasStaticValue() {
		return ((T (*)(XPathFunctionNumber*))(Il2CppBase() + 0x5219170))(this);
	}
	template <typename T = double> T get_StaticValueAsNumber() {
		return ((T (*)(XPathFunctionNumber*))(Il2CppBase() + 0x52191A4))(this);
	}
	template <typename T = bool> T get_Peer() {
		return ((T (*)(XPathFunctionNumber*))(Il2CppBase() + 0x52191CC))(this);
	}
	template <typename T = uintptr_t> T Evaluate(uintptr_t iter) {
		return ((T (*)(XPathFunctionNumber*, uintptr_t))(Il2CppBase() + 0x5219200))(this, iter);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(XPathFunctionNumber*))(Il2CppBase() + 0x5219644))(this);
	}

};

}
