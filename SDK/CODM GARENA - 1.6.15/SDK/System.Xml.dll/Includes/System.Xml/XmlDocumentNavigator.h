#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class XmlDocumentNavigator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "XmlDocumentNavigator"));
	}

	template <typename T = uintptr_t> T& node() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& nsNode() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& iteratedNsNames() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T System_Xml_IHasXmlNode_GetNode() {
		return ((T (*)(XmlDocumentNavigator*))(Il2CppBase() + 0x37D5BCC))(this);
	}
	template <typename T = uintptr_t> T get_Document() {
		return ((T (*)(XmlDocumentNavigator*))(Il2CppBase() + 0x37D5BF4))(this);
	}
	template <typename T = bool> T get_HasAttributes() {
		return ((T (*)(XmlDocumentNavigator*))(Il2CppBase() + 0x37D5D00))(this);
	}
	template <typename T = bool> T get_HasChildren() {
		return ((T (*)(XmlDocumentNavigator*))(Il2CppBase() + 0x37D5EF8))(this);
	}
	template <typename T = uintptr_t> T get_NsNode() {
		return ((T (*)(XmlDocumentNavigator*))(Il2CppBase() + 0x37D5EF0))(this);
	}
	template <typename T = void> T set_NsNode(uintptr_t value) {
		return ((T (*)(XmlDocumentNavigator*, uintptr_t))(Il2CppBase() + 0x37D6330))(this, value);
	}
	template <typename T = Il2CppString*> T get_LocalName() {
		return ((T (*)(XmlDocumentNavigator*))(Il2CppBase() + 0x37D647C))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(XmlDocumentNavigator*))(Il2CppBase() + 0x37D66A8))(this);
	}
	template <typename T = Il2CppString*> T get_NamespaceURI() {
		return ((T (*)(XmlDocumentNavigator*))(Il2CppBase() + 0x37D67D4))(this);
	}
	template <typename T = uintptr_t> T get_NodeType() {
		return ((T (*)(XmlDocumentNavigator*))(Il2CppBase() + 0x37D68C0))(this);
	}
	template <typename T = Il2CppString*> T get_Value() {
		return ((T (*)(XmlDocumentNavigator*))(Il2CppBase() + 0x37D6AB0))(this);
	}
	template <typename T = Il2CppString*> T get_XmlLang() {
		return ((T (*)(XmlDocumentNavigator*))(Il2CppBase() + 0x37D6D20))(this);
	}
	template <typename T = bool> T CheckNsNameAppearance(Il2CppString* name, Il2CppString* ns) {
		return ((T (*)(XmlDocumentNavigator*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x37D6D54))(this, name, ns);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(XmlDocumentNavigator*))(Il2CppBase() + 0x37D6F34))(this);
	}
	template <typename T = bool> T IsDescendant(uintptr_t other) {
		return ((T (*)(XmlDocumentNavigator*, uintptr_t))(Il2CppBase() + 0x37D7060))(this, other);
	}
	template <typename T = bool> T IsSamePosition(uintptr_t other) {
		return ((T (*)(XmlDocumentNavigator*, uintptr_t))(Il2CppBase() + 0x37D71FC))(this, other);
	}
	template <typename T = bool> T MoveTo(uintptr_t other) {
		return ((T (*)(XmlDocumentNavigator*, uintptr_t))(Il2CppBase() + 0x37D72D4))(this, other);
	}
	template <typename T = bool> T MoveToAttribute(Il2CppString* localName, Il2CppString* namespaceURI) {
		return ((T (*)(XmlDocumentNavigator*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x37D73C0))(this, localName, namespaceURI);
	}
	template <typename T = bool> T MoveToFirstAttribute() {
		return ((T (*)(XmlDocumentNavigator*))(Il2CppBase() + 0x37D74A0))(this);
	}
	template <typename T = bool> T MoveToFirstChild() {
		return ((T (*)(XmlDocumentNavigator*))(Il2CppBase() + 0x37D7708))(this);
	}
	template <typename T = bool> T MoveToFirstNamespace(uintptr_t namespaceScope) {
		return ((T (*)(XmlDocumentNavigator*, uintptr_t))(Il2CppBase() + 0x37D7754))(this, namespaceScope);
	}
	template <typename T = bool> T MoveToId(Il2CppString* id) {
		return ((T (*)(XmlDocumentNavigator*, Il2CppString*))(Il2CppBase() + 0x37D7B48))(this, id);
	}
	template <typename T = bool> T MoveToNamespace(Il2CppString* name) {
		return ((T (*)(XmlDocumentNavigator*, Il2CppString*))(Il2CppBase() + 0x37D7B9C))(this, name);
	}
	template <typename T = bool> T MoveToNext() {
		return ((T (*)(XmlDocumentNavigator*))(Il2CppBase() + 0x37D7F10))(this);
	}
	template <typename T = bool> T MoveToNextAttribute() {
		return ((T (*)(XmlDocumentNavigator*))(Il2CppBase() + 0x37D7FC8))(this);
	}
	template <typename T = bool> T MoveToNextNamespace(uintptr_t namespaceScope) {
		return ((T (*)(XmlDocumentNavigator*, uintptr_t))(Il2CppBase() + 0x37D829C))(this, namespaceScope);
	}
	template <typename T = bool> T MoveToParent() {
		return ((T (*)(XmlDocumentNavigator*))(Il2CppBase() + 0x37D8810))(this);
	}
	template <typename T = void> T MoveToRoot() {
		return ((T (*)(XmlDocumentNavigator*))(Il2CppBase() + 0x37D89EC))(this);
	}
	template <typename T = uintptr_t> T get_Node() {
		return ((T (*)(XmlDocumentNavigator*))(Il2CppBase() + 0x37D5BE0))(this);
	}
	template <typename T = uintptr_t> T GetFirstChild(uintptr_t n) {
		return ((T (*)(XmlDocumentNavigator*, uintptr_t))(Il2CppBase() + 0x37D5F50))(this, n);
	}
	template <typename T = uintptr_t> T GetNextSibling(uintptr_t n) {
		return ((T (*)(XmlDocumentNavigator*, uintptr_t))(Il2CppBase() + 0x37D6994))(this, n);
	}
	template <typename T = uintptr_t> T GetParentNode(uintptr_t n) {
		return ((T (*)(XmlDocumentNavigator*, uintptr_t))(Il2CppBase() + 0x37D7AC0))(this, n);
	}
	template <typename T = Il2CppString*> T LookupNamespace(Il2CppString* prefix) {
		return ((T (*)(XmlDocumentNavigator*, Il2CppString*))(Il2CppBase() + 0x37D8B24))(this, prefix);
	}

};

}
