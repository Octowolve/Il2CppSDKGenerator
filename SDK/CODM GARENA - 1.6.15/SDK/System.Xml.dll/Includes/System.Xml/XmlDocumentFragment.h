#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class XmlDocumentFragment
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "XmlDocumentFragment"));
	}

	template <typename T = uintptr_t> T& lastLinkedChild() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uintptr_t> T System_Xml_IHasXmlChildNode_get_LastLinkedChild() {
		return ((T (*)(XmlDocumentFragment*))(Il2CppBase() + 0x37D560C))(this);
	}
	template <typename T = void> T System_Xml_IHasXmlChildNode_set_LastLinkedChild(uintptr_t value) {
		return ((T (*)(XmlDocumentFragment*, uintptr_t))(Il2CppBase() + 0x37D5614))(this, value);
	}
	template <typename T = Il2CppString*> T get_LocalName() {
		return ((T (*)(XmlDocumentFragment*))(Il2CppBase() + 0x37D561C))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(XmlDocumentFragment*))(Il2CppBase() + 0x37D5694))(this);
	}
	template <typename T = uintptr_t> T get_NodeType() {
		return ((T (*)(XmlDocumentFragment*))(Il2CppBase() + 0x37D570C))(this);
	}
	template <typename T = uintptr_t> T get_OwnerDocument() {
		return ((T (*)(XmlDocumentFragment*))(Il2CppBase() + 0x37D5714))(this);
	}
	template <typename T = uintptr_t> T get_ParentNode() {
		return ((T (*)(XmlDocumentFragment*))(Il2CppBase() + 0x37D571C))(this);
	}
	template <typename T = uintptr_t> T get_XPathNodeType() {
		return ((T (*)(XmlDocumentFragment*))(Il2CppBase() + 0x37D5724))(this);
	}
	template <typename T = uintptr_t> T CloneNode(bool deep) {
		return ((T (*)(XmlDocumentFragment*, bool))(Il2CppBase() + 0x37D572C))(this, deep);
	}
	template <typename T = void> T WriteContentTo(uintptr_t w) {
		return ((T (*)(XmlDocumentFragment*, uintptr_t))(Il2CppBase() + 0x37D58A0))(this, w);
	}
	template <typename T = void> T WriteTo(uintptr_t w) {
		return ((T (*)(XmlDocumentFragment*, uintptr_t))(Il2CppBase() + 0x37D5964))(this, w);
	}

};

}
