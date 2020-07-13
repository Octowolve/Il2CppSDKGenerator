#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class XmlAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "XmlAttribute"));
	}

	template <typename T = uintptr_t> T& name() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& isDefault() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& lastLinkedChild() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& schemaInfo() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> T System_Xml_IHasXmlChildNode_get_LastLinkedChild() {
		return ((T (*)(XmlAttribute*))(Il2CppBase() + 0x37C55DC))(this);
	}
	template <typename T = void> T System_Xml_IHasXmlChildNode_set_LastLinkedChild(uintptr_t value) {
		return ((T (*)(XmlAttribute*, uintptr_t))(Il2CppBase() + 0x37C55E4))(this, value);
	}
	template <typename T = Il2CppString*> T get_BaseURI() {
		return ((T (*)(XmlAttribute*))(Il2CppBase() + 0x37C55EC))(this);
	}
	template <typename T = Il2CppString*> T get_LocalName() {
		return ((T (*)(XmlAttribute*))(Il2CppBase() + 0x37C56F8))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(XmlAttribute*))(Il2CppBase() + 0x37C571C))(this);
	}
	template <typename T = Il2CppString*> T get_NamespaceURI() {
		return ((T (*)(XmlAttribute*))(Il2CppBase() + 0x37C57A8))(this);
	}
	template <typename T = uintptr_t> T get_NodeType() {
		return ((T (*)(XmlAttribute*))(Il2CppBase() + 0x37C57CC))(this);
	}
	template <typename T = uintptr_t> T get_XPathNodeType() {
		return ((T (*)(XmlAttribute*))(Il2CppBase() + 0x37C57D4))(this);
	}
	template <typename T = uintptr_t> T get_OwnerDocument() {
		return ((T (*)(XmlAttribute*))(Il2CppBase() + 0x37C57DC))(this);
	}
	template <typename T = uintptr_t> T get_OwnerElement() {
		return ((T (*)(XmlAttribute*))(Il2CppBase() + 0x37C57EC))(this);
	}
	template <typename T = uintptr_t> T get_ParentNode() {
		return ((T (*)(XmlAttribute*))(Il2CppBase() + 0x37C5874))(this);
	}
	template <typename T = Il2CppString*> T get_Prefix() {
		return ((T (*)(XmlAttribute*))(Il2CppBase() + 0x37C587C))(this);
	}
	template <typename T = void> T set_SchemaInfo(uintptr_t value) {
		return ((T (*)(XmlAttribute*, uintptr_t))(Il2CppBase() + 0x37C58A0))(this, value);
	}
	template <typename T = bool> T get_Specified() {
		return ((T (*)(XmlAttribute*))(Il2CppBase() + 0x37C58A8))(this);
	}
	template <typename T = Il2CppString*> T get_Value() {
		return ((T (*)(XmlAttribute*))(Il2CppBase() + 0x37C58BC))(this);
	}
	template <typename T = void> T set_Value(Il2CppString* value) {
		return ((T (*)(XmlAttribute*, Il2CppString*))(Il2CppBase() + 0x37C58CC))(this, value);
	}
	template <typename T = Il2CppString*> T get_XmlLang() {
		return ((T (*)(XmlAttribute*))(Il2CppBase() + 0x37C5BD4))(this);
	}
	template <typename T = uintptr_t> T get_XmlSpace() {
		return ((T (*)(XmlAttribute*))(Il2CppBase() + 0x37C5CE0))(this);
	}
	template <typename T = uintptr_t> T AppendChild(uintptr_t child) {
		return ((T (*)(XmlAttribute*, uintptr_t))(Il2CppBase() + 0x37C5D4C))(this, child);
	}
	template <typename T = uintptr_t> T InsertBefore(uintptr_t newChild, uintptr_t refChild) {
		return ((T (*)(XmlAttribute*, uintptr_t, uintptr_t))(Il2CppBase() + 0x37C5D74))(this, newChild, refChild);
	}
	template <typename T = uintptr_t> T RemoveChild(uintptr_t node) {
		return ((T (*)(XmlAttribute*, uintptr_t))(Il2CppBase() + 0x37C5DBC))(this, node);
	}
	template <typename T = uintptr_t> T CloneNode(bool deep) {
		return ((T (*)(XmlAttribute*, bool))(Il2CppBase() + 0x37C5DCC))(this, deep);
	}
	template <typename T = void> T SetDefault() {
		return ((T (*)(XmlAttribute*))(Il2CppBase() + 0x37C5FB4))(this);
	}
	template <typename T = void> T WriteContentTo(uintptr_t w) {
		return ((T (*)(XmlAttribute*, uintptr_t))(Il2CppBase() + 0x37C5FC0))(this, w);
	}
	template <typename T = void> T WriteTo(uintptr_t w) {
		return ((T (*)(XmlAttribute*, uintptr_t))(Il2CppBase() + 0x37C6018))(this, w);
	}
	template <typename T = uintptr_t> T GetAttributeDefinition() {
		return ((T (*)(XmlAttribute*))(Il2CppBase() + 0x37C618C))(this);
	}

};

}
