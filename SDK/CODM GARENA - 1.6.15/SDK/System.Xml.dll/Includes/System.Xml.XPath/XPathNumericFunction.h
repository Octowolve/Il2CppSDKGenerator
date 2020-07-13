#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class XPathNumericFunction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "XPathNumericFunction"));
	}


	template <typename T = uintptr_t> T get_ReturnType() {
		return ((T (*)(XPathNumericFunction*))(Il2CppBase() + 0x521F92C))(this);
	}
	template <typename T = uintptr_t> T get_StaticValue() {
		return ((T (*)(XPathNumericFunction*))(Il2CppBase() + 0x521F934))(this);
	}

};

}
