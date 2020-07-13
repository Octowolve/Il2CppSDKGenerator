#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class XPathFunctionLocalName
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "XPathFunctionLocalName"));
	}

	template <typename T = uintptr_t> T& arg0() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T get_ReturnType() {
		return ((T (*)(XPathFunctionLocalName*))(Il2CppBase() + 0x4D12C24))(this);
	}
	template <typename T = bool> T get_Peer() {
		return ((T (*)(XPathFunctionLocalName*))(Il2CppBase() + 0x4D12C2C))(this);
	}
	template <typename T = uintptr_t> T Evaluate(uintptr_t iter) {
		return ((T (*)(XPathFunctionLocalName*, uintptr_t))(Il2CppBase() + 0x4D12C60))(this, iter);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(XPathFunctionLocalName*))(Il2CppBase() + 0x4D12DA4))(this);
	}

};

}
