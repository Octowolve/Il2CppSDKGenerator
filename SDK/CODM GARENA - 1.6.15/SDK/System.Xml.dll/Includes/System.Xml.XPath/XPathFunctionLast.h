#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class XPathFunctionLast
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "XPathFunctionLast"));
	}


	template <typename T = uintptr_t> T get_ReturnType() {
		return ((T (*)(XPathFunctionLast*))(Il2CppBase() + 0x4D12ADC))(this);
	}
	template <typename T = bool> T get_Peer() {
		return ((T (*)(XPathFunctionLast*))(Il2CppBase() + 0x4D12AE4))(this);
	}
	template <typename T = uintptr_t> T Evaluate(uintptr_t iter) {
		return ((T (*)(XPathFunctionLast*, uintptr_t))(Il2CppBase() + 0x4D12AEC))(this, iter);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(XPathFunctionLast*))(Il2CppBase() + 0x4D12BAC))(this);
	}

};

}
