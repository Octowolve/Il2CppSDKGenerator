#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class NodeSet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "NodeSet"));
	}


	template <typename T = uintptr_t> T get_ReturnType() {
		return ((T (*)(NodeSet*))(Il2CppBase() + 0x4D0D328))(this);
	}
	template <typename T = bool> T get_Subtree() {
		return ((T (*)(NodeSet*))(Il2CppBase() + 0x0))(this);
	}

};

}
