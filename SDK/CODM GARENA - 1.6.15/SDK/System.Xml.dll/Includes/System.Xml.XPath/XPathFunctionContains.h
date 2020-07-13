#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class XPathFunctionContains
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "XPathFunctionContains"));
	}

	template <typename T = uintptr_t> T& arg0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& arg1() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_ReturnType() {
		return ((T (*)(XPathFunctionContains*))(Il2CppBase() + 0x4D11338))(this);
	}
	template <typename T = bool> T get_Peer() {
		return ((T (*)(XPathFunctionContains*))(Il2CppBase() + 0x4D11340))(this);
	}
	template <typename T = uintptr_t> T Evaluate(uintptr_t iter) {
		return ((T (*)(XPathFunctionContains*, uintptr_t))(Il2CppBase() + 0x4D113A4))(this, iter);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(XPathFunctionContains*))(Il2CppBase() + 0x4D114AC))(this);
	}

};

}
