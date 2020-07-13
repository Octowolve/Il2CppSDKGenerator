#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class XPathFunctionTranslate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "XPathFunctionTranslate"));
	}

	template <typename T = uintptr_t> T& arg0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& arg1() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& arg2() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_ReturnType() {
		return ((T (*)(XPathFunctionTranslate*))(Il2CppBase() + 0x521D2B4))(this);
	}
	template <typename T = bool> T get_Peer() {
		return ((T (*)(XPathFunctionTranslate*))(Il2CppBase() + 0x521D2BC))(this);
	}
	template <typename T = uintptr_t> T Evaluate(uintptr_t iter) {
		return ((T (*)(XPathFunctionTranslate*, uintptr_t))(Il2CppBase() + 0x521D348))(this, iter);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(XPathFunctionTranslate*))(Il2CppBase() + 0x521D534))(this);
	}

};

}
