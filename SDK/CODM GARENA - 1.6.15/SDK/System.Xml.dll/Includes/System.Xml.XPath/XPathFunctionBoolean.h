#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class XPathFunctionBoolean
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "XPathFunctionBoolean"));
	}

	template <typename T = uintptr_t> T& arg0() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T get_Peer() {
		return ((T (*)(XPathFunctionBoolean*))(Il2CppBase() + 0x4D10588))(this);
	}
	template <typename T = uintptr_t> T Evaluate(uintptr_t iter) {
		return ((T (*)(XPathFunctionBoolean*, uintptr_t))(Il2CppBase() + 0x4D105BC))(this, iter);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(XPathFunctionBoolean*))(Il2CppBase() + 0x4D106E4))(this);
	}

};

}
