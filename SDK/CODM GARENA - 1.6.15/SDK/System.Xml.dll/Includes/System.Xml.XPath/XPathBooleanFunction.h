#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class XPathBooleanFunction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "XPathBooleanFunction"));
	}


	template <typename T = uintptr_t> T get_ReturnType() {
		return ((T (*)(XPathBooleanFunction*))(Il2CppBase() + 0x4D10298))(this);
	}
	template <typename T = uintptr_t> T get_StaticValue() {
		return ((T (*)(XPathBooleanFunction*))(Il2CppBase() + 0x4D102A0))(this);
	}

};

}
