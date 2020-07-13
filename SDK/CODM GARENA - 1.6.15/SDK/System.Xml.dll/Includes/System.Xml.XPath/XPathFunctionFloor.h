#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class XPathFunctionFloor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "XPathFunctionFloor"));
	}

	template <typename T = uintptr_t> T& arg0() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T get_HasStaticValue() {
		return ((T (*)(XPathFunctionFloor*))(Il2CppBase() + 0x4D11B80))(this);
	}
	template <typename T = double> T get_StaticValueAsNumber() {
		return ((T (*)(XPathFunctionFloor*))(Il2CppBase() + 0x4D11BB4))(this);
	}
	template <typename T = bool> T get_Peer() {
		return ((T (*)(XPathFunctionFloor*))(Il2CppBase() + 0x4D11C18))(this);
	}
	template <typename T = uintptr_t> T Evaluate(uintptr_t iter) {
		return ((T (*)(XPathFunctionFloor*, uintptr_t))(Il2CppBase() + 0x4D11C4C))(this, iter);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(XPathFunctionFloor*))(Il2CppBase() + 0x4D11D10))(this);
	}

};

}
