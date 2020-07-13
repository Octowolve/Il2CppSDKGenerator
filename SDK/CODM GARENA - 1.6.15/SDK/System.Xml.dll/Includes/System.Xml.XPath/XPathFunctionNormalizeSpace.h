#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class XPathFunctionNormalizeSpace
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "XPathFunctionNormalizeSpace"));
	}

	template <typename T = uintptr_t> T& arg0() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T get_ReturnType() {
		return ((T (*)(XPathFunctionNormalizeSpace*))(Il2CppBase() + 0x4D13420))(this);
	}
	template <typename T = bool> T get_Peer() {
		return ((T (*)(XPathFunctionNormalizeSpace*))(Il2CppBase() + 0x4D13428))(this);
	}
	template <typename T = uintptr_t> T Evaluate(uintptr_t iter) {
		return ((T (*)(XPathFunctionNormalizeSpace*, uintptr_t))(Il2CppBase() + 0x4D1345C))(this, iter);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(XPathFunctionNormalizeSpace*))(Il2CppBase() + 0x4D13630))(this);
	}

};

}
