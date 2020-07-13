#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class XmlLinkedNode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "XmlLinkedNode"));
	}

	template <typename T = uintptr_t> T& nextSibling() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = bool> T get_IsRooted() {
		return ((T (*)(XmlLinkedNode*))(Il2CppBase() + 0x37D2C7C))(this);
	}
	template <typename T = uintptr_t> T get_NextSibling() {
		return ((T (*)(XmlLinkedNode*))(Il2CppBase() + 0x37DDBDC))(this);
	}
	template <typename T = uintptr_t> T get_NextLinkedSibling() {
		return ((T (*)(XmlLinkedNode*))(Il2CppBase() + 0x37D9D6C))(this);
	}
	template <typename T = void> T set_NextLinkedSibling(uintptr_t value) {
		return ((T (*)(XmlLinkedNode*, uintptr_t))(Il2CppBase() + 0x37DDC50))(this, value);
	}
	template <typename T = uintptr_t> T get_PreviousSibling() {
		return ((T (*)(XmlLinkedNode*))(Il2CppBase() + 0x37DDC58))(this);
	}

};

}
