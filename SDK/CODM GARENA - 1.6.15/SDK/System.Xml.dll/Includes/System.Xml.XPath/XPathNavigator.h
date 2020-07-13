#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class XPathNavigator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "XPathNavigator"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& escape_text_chars() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& escape_attr_chars() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T System_ICloneable_Clone() {
		return ((T (*)(XPathNavigator*))(Il2CppBase() + 0x521DE5C))(this);
	}
	template <typename T = bool> T get_HasAttributes() {
		return ((T (*)(XPathNavigator*))(Il2CppBase() + 0x521DE6C))(this);
	}
	template <typename T = bool> T get_HasChildren() {
		return ((T (*)(XPathNavigator*))(Il2CppBase() + 0x521DEB8))(this);
	}
	template <typename T = Il2CppString*> T get_LocalName() {
		return ((T (*)(XPathNavigator*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(XPathNavigator*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_NamespaceURI() {
		return ((T (*)(XPathNavigator*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_NodeType() {
		return ((T (*)(XPathNavigator*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_XmlLang() {
		return ((T (*)(XPathNavigator*))(Il2CppBase() + 0x521DF04))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(XPathNavigator*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T ComparePosition(uintptr_t nav) {
		return ((T (*)(XPathNavigator*, uintptr_t))(Il2CppBase() + 0x521E090))(this, nav);
	}
	template <typename T = uintptr_t> T Compile(Il2CppString* xpath) {
		return ((T (*)(XPathNavigator*, Il2CppString*))(Il2CppBase() + 0x521E4F0))(this, xpath);
	}
	template <typename T = bool> T IsDescendant(uintptr_t nav) {
		return ((T (*)(XPathNavigator*, uintptr_t))(Il2CppBase() + 0x521E4FC))(this, nav);
	}
	template <typename T = bool> T IsSamePosition(uintptr_t other) {
		return ((T (*)(XPathNavigator*, uintptr_t))(Il2CppBase() + 0x0))(this, other);
	}
	template <typename T = bool> T MoveTo(uintptr_t other) {
		return ((T (*)(XPathNavigator*, uintptr_t))(Il2CppBase() + 0x0))(this, other);
	}
	template <typename T = bool> T MoveToAttribute(Il2CppString* localName, Il2CppString* namespaceURI) {
		return ((T (*)(XPathNavigator*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x521E590))(this, localName, namespaceURI);
	}
	template <typename T = bool> T MoveToNamespace(Il2CppString* name) {
		return ((T (*)(XPathNavigator*, Il2CppString*))(Il2CppBase() + 0x521E728))(this, name);
	}
	template <typename T = bool> T MoveToFirst() {
		return ((T (*)(XPathNavigator*))(Il2CppBase() + 0x521E870))(this);
	}
	template <typename T = void> T MoveToRoot() {
		return ((T (*)(XPathNavigator*))(Il2CppBase() + 0x521E8E0))(this);
	}
	template <typename T = bool> T MoveToFirstImpl() {
		return ((T (*)(XPathNavigator*))(Il2CppBase() + 0x521E874))(this);
	}
	template <typename T = bool> T MoveToFirstAttribute() {
		return ((T (*)(XPathNavigator*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T MoveToFirstChild() {
		return ((T (*)(XPathNavigator*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T MoveToFirstNamespace() {
		return ((T (*)(XPathNavigator*))(Il2CppBase() + 0x521E85C))(this);
	}
	template <typename T = bool> T MoveToFirstNamespace_1(uintptr_t namespaceScope) {
		return ((T (*)(XPathNavigator*, uintptr_t))(Il2CppBase() + 0x0))(this, namespaceScope);
	}
	template <typename T = bool> T MoveToId(Il2CppString* id) {
		return ((T (*)(XPathNavigator*, Il2CppString*))(Il2CppBase() + 0x0))(this, id);
	}
	template <typename T = bool> T MoveToNext() {
		return ((T (*)(XPathNavigator*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T MoveToNextAttribute() {
		return ((T (*)(XPathNavigator*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T MoveToNextNamespace() {
		return ((T (*)(XPathNavigator*))(Il2CppBase() + 0x521E4DC))(this);
	}
	template <typename T = bool> T MoveToNextNamespace_1(uintptr_t namespaceScope) {
		return ((T (*)(XPathNavigator*, uintptr_t))(Il2CppBase() + 0x0))(this, namespaceScope);
	}
	template <typename T = bool> T MoveToParent() {
		return ((T (*)(XPathNavigator*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T Select(uintptr_t expr) {
		return ((T (*)(XPathNavigator*, uintptr_t))(Il2CppBase() + 0x521E90C))(this, expr);
	}
	template <typename T = uintptr_t> T Select_1(uintptr_t expr, uintptr_t ctx) {
		return ((T (*)(XPathNavigator*, uintptr_t, uintptr_t))(Il2CppBase() + 0x521E914))(this, expr, ctx);
	}
	template <typename T = uintptr_t> static T EnumerateChildren(uintptr_t n, uintptr_t type) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x521EA1C))(0, n, type);
	}
	template <typename T = uintptr_t> T SelectChildren(uintptr_t type) {
		return ((T (*)(XPathNavigator*, uintptr_t))(Il2CppBase() + 0x521EAE0))(this, type);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(XPathNavigator*))(Il2CppBase() + 0x521EC48))(this);
	}
	template <typename T = Il2CppString*> T LookupNamespace(Il2CppString* prefix) {
		return ((T (*)(XPathNavigator*, Il2CppString*))(Il2CppBase() + 0x521EC58))(this, prefix);
	}

};

}
