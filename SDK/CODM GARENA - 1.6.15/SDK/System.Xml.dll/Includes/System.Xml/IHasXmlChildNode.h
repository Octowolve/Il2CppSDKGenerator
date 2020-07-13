#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class IHasXmlChildNode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "IHasXmlChildNode"));
	}


	template <typename T = uintptr_t> T get_LastLinkedChild() {
		return ((T (*)(IHasXmlChildNode*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_LastLinkedChild(uintptr_t value) {
		return ((T (*)(IHasXmlChildNode*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}

};

}
