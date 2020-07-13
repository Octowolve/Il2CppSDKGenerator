#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.XPath {

class XPathEditableDocument
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.XPath", "XPathEditableDocument"));
	}

	template <typename T = uintptr_t> T& node() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T get_Node() {
		return ((T (*)(XPathEditableDocument*))(Il2CppBase() + 0x2A82D20))(this);
	}
	template <typename T = uintptr_t> T CreateNavigator() {
		return ((T (*)(XPathEditableDocument*))(Il2CppBase() + 0x2A82D28))(this);
	}

};

}
