#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class XPathFunctionCount
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "XPathFunctionCount"));
	}

	template <typename T = uintptr_t> T& arg0() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T get_ReturnType() {
		return ((T (*)(XPathFunctionCount*))(Il2CppBase() + 0x4D117A0))(this);
	}
	template <typename T = bool> T get_Peer() {
		return ((T (*)(XPathFunctionCount*))(Il2CppBase() + 0x4D117A8))(this);
	}
	template <typename T = uintptr_t> T Evaluate(uintptr_t iter) {
		return ((T (*)(XPathFunctionCount*, uintptr_t))(Il2CppBase() + 0x4D117DC))(this, iter);
	}
	template <typename T = bool> T EvaluateBoolean(uintptr_t iter) {
		return ((T (*)(XPathFunctionCount*, uintptr_t))(Il2CppBase() + 0x4D118BC))(this, iter);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(XPathFunctionCount*))(Il2CppBase() + 0x4D11954))(this);
	}

};

}
