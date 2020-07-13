#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.XPath {

class XmlDocumentEditableNavigator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.XPath", "XmlDocumentEditableNavigator"));
	}

	template <typename T = bool> static T& isXmlDocumentNavigatorImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& document() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& navigator() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppString*> T get_LocalName() {
		return ((T (*)(XmlDocumentEditableNavigator*))(Il2CppBase() + 0x2A82FEC))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(XmlDocumentEditableNavigator*))(Il2CppBase() + 0x2A83020))(this);
	}
	template <typename T = Il2CppString*> T get_NamespaceURI() {
		return ((T (*)(XmlDocumentEditableNavigator*))(Il2CppBase() + 0x2A83054))(this);
	}
	template <typename T = uintptr_t> T get_NodeType() {
		return ((T (*)(XmlDocumentEditableNavigator*))(Il2CppBase() + 0x2A83088))(this);
	}
	template <typename T = Il2CppString*> T get_Value() {
		return ((T (*)(XmlDocumentEditableNavigator*))(Il2CppBase() + 0x2A830BC))(this);
	}
	template <typename T = Il2CppString*> T get_XmlLang() {
		return ((T (*)(XmlDocumentEditableNavigator*))(Il2CppBase() + 0x2A830F0))(this);
	}
	template <typename T = bool> T get_HasChildren() {
		return ((T (*)(XmlDocumentEditableNavigator*))(Il2CppBase() + 0x2A83124))(this);
	}
	template <typename T = bool> T get_HasAttributes() {
		return ((T (*)(XmlDocumentEditableNavigator*))(Il2CppBase() + 0x2A83158))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(XmlDocumentEditableNavigator*))(Il2CppBase() + 0x2A8318C))(this);
	}
	template <typename T = uintptr_t> T GetNode() {
		return ((T (*)(XmlDocumentEditableNavigator*))(Il2CppBase() + 0x2A8321C))(this);
	}
	template <typename T = bool> T IsSamePosition(uintptr_t other) {
		return ((T (*)(XmlDocumentEditableNavigator*, uintptr_t))(Il2CppBase() + 0x2A83340))(this, other);
	}
	template <typename T = bool> T MoveTo(uintptr_t other) {
		return ((T (*)(XmlDocumentEditableNavigator*, uintptr_t))(Il2CppBase() + 0x2A8343C))(this, other);
	}
	template <typename T = bool> T MoveToFirstAttribute() {
		return ((T (*)(XmlDocumentEditableNavigator*))(Il2CppBase() + 0x2A83538))(this);
	}
	template <typename T = bool> T MoveToFirstChild() {
		return ((T (*)(XmlDocumentEditableNavigator*))(Il2CppBase() + 0x2A8356C))(this);
	}
	template <typename T = bool> T MoveToFirstNamespace(uintptr_t scope) {
		return ((T (*)(XmlDocumentEditableNavigator*, uintptr_t))(Il2CppBase() + 0x2A835A0))(this, scope);
	}
	template <typename T = bool> T MoveToId(Il2CppString* id) {
		return ((T (*)(XmlDocumentEditableNavigator*, Il2CppString*))(Il2CppBase() + 0x2A835D4))(this, id);
	}
	template <typename T = bool> T MoveToNext() {
		return ((T (*)(XmlDocumentEditableNavigator*))(Il2CppBase() + 0x2A83608))(this);
	}
	template <typename T = bool> T MoveToNextAttribute() {
		return ((T (*)(XmlDocumentEditableNavigator*))(Il2CppBase() + 0x2A8363C))(this);
	}
	template <typename T = bool> T MoveToNextNamespace(uintptr_t scope) {
		return ((T (*)(XmlDocumentEditableNavigator*, uintptr_t))(Il2CppBase() + 0x2A83670))(this, scope);
	}
	template <typename T = bool> T MoveToParent() {
		return ((T (*)(XmlDocumentEditableNavigator*))(Il2CppBase() + 0x2A836A4))(this);
	}
	template <typename T = void> T MoveToRoot() {
		return ((T (*)(XmlDocumentEditableNavigator*))(Il2CppBase() + 0x2A836D8))(this);
	}
	template <typename T = bool> T MoveToNamespace(Il2CppString* name) {
		return ((T (*)(XmlDocumentEditableNavigator*, Il2CppString*))(Il2CppBase() + 0x2A8370C))(this, name);
	}
	template <typename T = bool> T MoveToFirst() {
		return ((T (*)(XmlDocumentEditableNavigator*))(Il2CppBase() + 0x2A83740))(this);
	}
	template <typename T = bool> T MoveToAttribute(Il2CppString* localName, Il2CppString* namespaceURI) {
		return ((T (*)(XmlDocumentEditableNavigator*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2A83774))(this, localName, namespaceURI);
	}
	template <typename T = bool> T IsDescendant(uintptr_t nav) {
		return ((T (*)(XmlDocumentEditableNavigator*, uintptr_t))(Il2CppBase() + 0x2A837A8))(this, nav);
	}
	template <typename T = uintptr_t> T ComparePosition(uintptr_t nav) {
		return ((T (*)(XmlDocumentEditableNavigator*, uintptr_t))(Il2CppBase() + 0x2A838A4))(this, nav);
	}

};

}
