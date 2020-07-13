#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class XPathFunctionNamespaceUri
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "XPathFunctionNamespaceUri"));
	}

	template <typename T = uintptr_t> T& arg0() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T get_Peer() {
		return ((T (*)(XPathFunctionNamespaceUri*))(Il2CppBase() + 0x4D13194))(this);
	}
	template <typename T = uintptr_t> T get_ReturnType() {
		return ((T (*)(XPathFunctionNamespaceUri*))(Il2CppBase() + 0x4D131C8))(this);
	}
	template <typename T = uintptr_t> T Evaluate(uintptr_t iter) {
		return ((T (*)(XPathFunctionNamespaceUri*, uintptr_t))(Il2CppBase() + 0x4D131D0))(this, iter);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(XPathFunctionNamespaceUri*))(Il2CppBase() + 0x4D13314))(this);
	}

};

}
