#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class XPathFunctionName
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "XPathFunctionName"));
	}

	template <typename T = uintptr_t> T& arg0() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T get_ReturnType() {
		return ((T (*)(XPathFunctionName*))(Il2CppBase() + 0x4D12EB0))(this);
	}
	template <typename T = bool> T get_Peer() {
		return ((T (*)(XPathFunctionName*))(Il2CppBase() + 0x4D12EB8))(this);
	}
	template <typename T = uintptr_t> T Evaluate(uintptr_t iter) {
		return ((T (*)(XPathFunctionName*, uintptr_t))(Il2CppBase() + 0x4D12EEC))(this, iter);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(XPathFunctionName*))(Il2CppBase() + 0x4D13030))(this);
	}

};

}