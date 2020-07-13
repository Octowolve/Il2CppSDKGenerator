#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class XmlNode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "XmlNode"));
	}

	template <typename T = uintptr_t> static T& emptyList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& ownerDocument() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& parentNode() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& childNodes() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map44() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map46() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T System_ICloneable_Clone() {
		return ((T (*)(XmlNode*))(Il2CppBase() + 0x37E03C4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(XmlNode*))(Il2CppBase() + 0x37E03D4))(this);
	}
	template <typename T = uintptr_t> T get_Attributes() {
		return ((T (*)(XmlNode*))(Il2CppBase() + 0x37E0418))(this);
	}
	template <typename T = Il2CppString*> T get_BaseURI() {
		return ((T (*)(XmlNode*))(Il2CppBase() + 0x37DB1D0))(this);
	}
	template <typename T = Il2CppString*> T get_ChildrenBaseURI() {
		return ((T (*)(XmlNode*))(Il2CppBase() + 0x37E0420))(this);
	}
	template <typename T = uintptr_t> T get_ChildNodes() {
		return ((T (*)(XmlNode*))(Il2CppBase() + 0x37E0430))(this);
	}
	template <typename T = uintptr_t> T get_FirstChild() {
		return ((T (*)(XmlNode*))(Il2CppBase() + 0x37E057C))(this);
	}
	template <typename T = bool> T get_HasChildNodes() {
		return ((T (*)(XmlNode*))(Il2CppBase() + 0x37E0690))(this);
	}
	template <typename T = Il2CppString*> T get_InnerText() {
		return ((T (*)(XmlNode*))(Il2CppBase() + 0x37D98C0))(this);
	}
	template <typename T = void> T AppendChildValues(uintptr_t builder) {
		return ((T (*)(XmlNode*, uintptr_t))(Il2CppBase() + 0x37E06B4))(this, builder);
	}
	template <typename T = bool> T get_IsReadOnly() {
		return ((T (*)(XmlNode*))(Il2CppBase() + 0x37E0804))(this);
	}
	template <typename T = uintptr_t> T get_LastChild() {
		return ((T (*)(XmlNode*))(Il2CppBase() + 0x37E0924))(this);
	}
	template <typename T = Il2CppString*> T get_LocalName() {
		return ((T (*)(XmlNode*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(XmlNode*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_NamespaceURI() {
		return ((T (*)(XmlNode*))(Il2CppBase() + 0x37E0A30))(this);
	}
	template <typename T = uintptr_t> T get_NextSibling() {
		return ((T (*)(XmlNode*))(Il2CppBase() + 0x37E0AE0))(this);
	}
	template <typename T = uintptr_t> T get_NodeType() {
		return ((T (*)(XmlNode*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_XPathNodeType() {
		return ((T (*)(XmlNode*))(Il2CppBase() + 0x37E0AE8))(this);
	}
	template <typename T = uintptr_t> T get_OwnerDocument() {
		return ((T (*)(XmlNode*))(Il2CppBase() + 0x37C57E4))(this);
	}
	template <typename T = uintptr_t> T get_ParentNode() {
		return ((T (*)(XmlNode*))(Il2CppBase() + 0x37C7FB4))(this);
	}
	template <typename T = Il2CppString*> T get_Prefix() {
		return ((T (*)(XmlNode*))(Il2CppBase() + 0x37E0C14))(this);
	}
	template <typename T = uintptr_t> T get_PreviousSibling() {
		return ((T (*)(XmlNode*))(Il2CppBase() + 0x37E0CC4))(this);
	}
	template <typename T = Il2CppString*> T get_Value() {
		return ((T (*)(XmlNode*))(Il2CppBase() + 0x37E0CCC))(this);
	}
	template <typename T = void> T set_Value(Il2CppString* value) {
		return ((T (*)(XmlNode*, Il2CppString*))(Il2CppBase() + 0x37E0CD4))(this, value);
	}
	template <typename T = Il2CppString*> T get_XmlLang() {
		return ((T (*)(XmlNode*))(Il2CppBase() + 0x37E0D7C))(this);
	}
	template <typename T = uintptr_t> T get_XmlSpace() {
		return ((T (*)(XmlNode*))(Il2CppBase() + 0x37E0F80))(this);
	}
	template <typename T = void> T set_SchemaInfo(uintptr_t value) {
		return ((T (*)(XmlNode*, uintptr_t))(Il2CppBase() + 0x37E1378))(this, value);
	}
	template <typename T = uintptr_t> T AppendChild(uintptr_t newChild) {
		return ((T (*)(XmlNode*, uintptr_t))(Il2CppBase() + 0x37C5D60))(this, newChild);
	}
	template <typename T = uintptr_t> T AppendChild_1(uintptr_t newChild, bool checkNodeType) {
		return ((T (*)(XmlNode*, uintptr_t, bool))(Il2CppBase() + 0x37C5BAC))(this, newChild, checkNodeType);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(XmlNode*))(Il2CppBase() + 0x37E137C))(this);
	}
	template <typename T = uintptr_t> T CloneNode(bool deep) {
		return ((T (*)(XmlNode*, bool))(Il2CppBase() + 0x0))(this, deep);
	}
	template <typename T = uintptr_t> T CreateNavigator() {
		return ((T (*)(XmlNode*))(Il2CppBase() + 0x37E1390))(this);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(XmlNode*))(Il2CppBase() + 0x37E03D8))(this);
	}
	template <typename T = Il2CppString*> T GetPrefixOfNamespace(Il2CppString* namespaceURI) {
		return ((T (*)(XmlNode*, Il2CppString*))(Il2CppBase() + 0x37E13DC))(this, namespaceURI);
	}
	template <typename T = uintptr_t> T InsertBefore(uintptr_t newChild, uintptr_t refChild) {
		return ((T (*)(XmlNode*, uintptr_t, uintptr_t))(Il2CppBase() + 0x37C5D98))(this, newChild, refChild);
	}
	template <typename T = bool> T IsAncestor(uintptr_t newChild) {
		return ((T (*)(XmlNode*, uintptr_t))(Il2CppBase() + 0x37E1A84))(this, newChild);
	}
	template <typename T = uintptr_t> T InsertBefore_1(uintptr_t newChild, uintptr_t refChild, bool checkNodeType, bool raiseEvent) {
		return ((T (*)(XmlNode*, uintptr_t, uintptr_t, bool, bool))(Il2CppBase() + 0x37D4DB0))(this, newChild, refChild, checkNodeType, raiseEvent);
	}
	template <typename T = void> T CheckNodeInsertion(uintptr_t newChild, uintptr_t refChild) {
		return ((T (*)(XmlNode*, uintptr_t, uintptr_t))(Il2CppBase() + 0x37E1AC4))(this, newChild, refChild);
	}
	template <typename T = void> T RemoveAll() {
		return ((T (*)(XmlNode*))(Il2CppBase() + 0x37DA028))(this);
	}
	template <typename T = uintptr_t> T RemoveChild(uintptr_t oldChild) {
		return ((T (*)(XmlNode*, uintptr_t))(Il2CppBase() + 0x37C5DC4))(this, oldChild);
	}
	template <typename T = void> T CheckNodeRemoval() {
		return ((T (*)(XmlNode*))(Il2CppBase() + 0x37E2768))(this);
	}
	template <typename T = uintptr_t> T RemoveChild_1(uintptr_t oldChild, bool checkNodeType) {
		return ((T (*)(XmlNode*, uintptr_t, bool))(Il2CppBase() + 0x37E2074))(this, oldChild, checkNodeType);
	}
	template <typename T = uintptr_t> T get_AttributeOwnerElement() {
		return ((T (*)(XmlNode*))(Il2CppBase() + 0x37C57F0))(this);
	}
	template <typename T = void> T set_AttributeOwnerElement(uintptr_t value) {
		return ((T (*)(XmlNode*, uintptr_t))(Il2CppBase() + 0x37C73D8))(this, value);
	}
	template <typename T = uintptr_t> T SelectSingleNode(Il2CppString* xpath) {
		return ((T (*)(XmlNode*, Il2CppString*))(Il2CppBase() + 0x37E29A4))(this, xpath);
	}
	template <typename T = uintptr_t> T SelectSingleNode_1(Il2CppString* xpath, uintptr_t nsmgr) {
		return ((T (*)(XmlNode*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x37E29AC))(this, xpath, nsmgr);
	}
	template <typename T = void> T WriteContentTo(uintptr_t w) {
		return ((T (*)(XmlNode*, uintptr_t))(Il2CppBase() + 0x0))(this, w);
	}
	template <typename T = void> T WriteTo(uintptr_t w) {
		return ((T (*)(XmlNode*, uintptr_t))(Il2CppBase() + 0x0))(this, w);
	}
	template <typename T = uintptr_t> T ConstructNamespaceManager() {
		return ((T (*)(XmlNode*))(Il2CppBase() + 0x37DA96C))(this);
	}

};

}
