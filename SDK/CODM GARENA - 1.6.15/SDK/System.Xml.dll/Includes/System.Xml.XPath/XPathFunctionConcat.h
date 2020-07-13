#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class XPathFunctionConcat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "XPathFunctionConcat"));
	}

	template <typename T = uintptr_t> T& rgs() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T get_ReturnType() {
		return ((T (*)(XPathFunctionConcat*))(Il2CppBase() + 0x4D10CC4))(this);
	}
	template <typename T = bool> T get_Peer() {
		return ((T (*)(XPathFunctionConcat*))(Il2CppBase() + 0x4D10CCC))(this);
	}
	template <typename T = uintptr_t> T Evaluate(uintptr_t iter) {
		return ((T (*)(XPathFunctionConcat*, uintptr_t))(Il2CppBase() + 0x4D10E00))(this, iter);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(XPathFunctionConcat*))(Il2CppBase() + 0x4D10F84))(this);
	}

};

}
