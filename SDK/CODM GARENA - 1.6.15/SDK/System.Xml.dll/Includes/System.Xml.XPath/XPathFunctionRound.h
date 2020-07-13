#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class XPathFunctionRound
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "XPathFunctionRound"));
	}

	template <typename T = uintptr_t> T& arg0() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T get_HasStaticValue() {
		return ((T (*)(XPathFunctionRound*))(Il2CppBase() + 0x5219B6C))(this);
	}
	template <typename T = double> T get_StaticValueAsNumber() {
		return ((T (*)(XPathFunctionRound*))(Il2CppBase() + 0x5219BA0))(this);
	}
	template <typename T = bool> T get_Peer() {
		return ((T (*)(XPathFunctionRound*))(Il2CppBase() + 0x5219D14))(this);
	}
	template <typename T = uintptr_t> T Evaluate(uintptr_t iter) {
		return ((T (*)(XPathFunctionRound*, uintptr_t))(Il2CppBase() + 0x5219D48))(this, iter);
	}
	template <typename T = double> T Round(double arg) {
		return ((T (*)(XPathFunctionRound*, double))(Il2CppBase() + 0x5219C18))(this, arg);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(XPathFunctionRound*))(Il2CppBase() + 0x5219E18))(this);
	}

};

}
