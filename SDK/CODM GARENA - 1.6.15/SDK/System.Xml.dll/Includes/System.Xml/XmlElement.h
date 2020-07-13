#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class XmlElement
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "XmlElement"));
	}

	template <typename T = uintptr_t> T& attributes() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& name() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& lastLinkedChild() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& isNotEmpty() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& schemaInfo() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uintptr_t> T System_Xml_IHasXmlChildNode_get_LastLinkedChild() {
		return ((T (*)(XmlElement*))(Il2CppBase() + 0x37D97CC))(this);
	}
	template <typename T = void> T System_Xml_IHasXmlChildNode_set_LastLinkedChild(uintptr_t value) {
		return ((T (*)(XmlElement*, uintptr_t))(Il2CppBase() + 0x37D97D4))(this, value);
	}
	template <typename T = uintptr_t> T get_Attributes() {
		return ((T (*)(XmlElement*))(Il2CppBase() + 0x37D97DC))(this);
	}
	template <typename T = bool> T get_HasAttributes() {
		return ((T (*)(XmlElement*))(Il2CppBase() + 0x37D987C))(this);
	}
	template <typename T = Il2CppString*> T get_InnerText() {
		return ((T (*)(XmlElement*))(Il2CppBase() + 0x37D98BC))(this);
	}
	template <typename T = bool> T get_IsEmpty() {
		return ((T (*)(XmlElement*))(Il2CppBase() + 0x37D9B40))(this);
	}
	template <typename T = void> T set_IsEmpty(bool value) {
		return ((T (*)(XmlElement*, bool))(Il2CppBase() + 0x37D4D34))(this, value);
	}
	template <typename T = Il2CppString*> T get_LocalName() {
		return ((T (*)(XmlElement*))(Il2CppBase() + 0x37D9B7C))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(XmlElement*))(Il2CppBase() + 0x37D9BA0))(this);
	}
	template <typename T = Il2CppString*> T get_NamespaceURI() {
		return ((T (*)(XmlElement*))(Il2CppBase() + 0x37D9BE4))(this);
	}
	template <typename T = uintptr_t> T get_NextSibling() {
		return ((T (*)(XmlElement*))(Il2CppBase() + 0x37D9C08))(this);
	}
	template <typename T = uintptr_t> T get_NodeType() {
		return ((T (*)(XmlElement*))(Il2CppBase() + 0x37D9D74))(this);
	}
	template <typename T = uintptr_t> T get_XPathNodeType() {
		return ((T (*)(XmlElement*))(Il2CppBase() + 0x37D9D7C))(this);
	}
	template <typename T = uintptr_t> T get_OwnerDocument() {
		return ((T (*)(XmlElement*))(Il2CppBase() + 0x37D9D84))(this);
	}
	template <typename T = Il2CppString*> T get_Prefix() {
		return ((T (*)(XmlElement*))(Il2CppBase() + 0x37D9D8C))(this);
	}
	template <typename T = uintptr_t> T get_ParentNode() {
		return ((T (*)(XmlElement*))(Il2CppBase() + 0x37D9DB0))(this);
	}
	template <typename T = void> T set_SchemaInfo(uintptr_t value) {
		return ((T (*)(XmlElement*, uintptr_t))(Il2CppBase() + 0x37D9DB8))(this, value);
	}
	template <typename T = uintptr_t> T CloneNode(bool deep) {
		return ((T (*)(XmlElement*, bool))(Il2CppBase() + 0x37D9DC0))(this, deep);
	}
	template <typename T = void> T RemoveAll() {
		return ((T (*)(XmlElement*))(Il2CppBase() + 0x37DA024))(this);
	}
	template <typename T = void> T SetAttribute(Il2CppString* name, Il2CppString* value) {
		return ((T (*)(XmlElement*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x37DA0DC))(this, name, value);
	}
	template <typename T = uintptr_t> T SetAttributeNode(uintptr_t newAttr) {
		return ((T (*)(XmlElement*, uintptr_t))(Il2CppBase() + 0x37DA1B0))(this, newAttr);
	}
	template <typename T = void> T WriteContentTo(uintptr_t w) {
		return ((T (*)(XmlElement*, uintptr_t))(Il2CppBase() + 0x37DA318))(this, w);
	}
	template <typename T = void> T WriteTo(uintptr_t w) {
		return ((T (*)(XmlElement*, uintptr_t))(Il2CppBase() + 0x37DA370))(this, w);
	}

};

}
