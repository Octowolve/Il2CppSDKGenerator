#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class XmlDocument
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "XmlDocument"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& optimal_create_types() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& optimal_create_element() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& optimal_create_attribute() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = uintptr_t> T& nameTable() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& baseURI() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& implementation() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& preserveWhitespace() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& resolver() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& idTable() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& nameCache() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& lastLinkedChild() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& nsNodeXml() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& schemas() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& schemaInfo() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& loadMode() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& NodeChanged() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& NodeChanging() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& NodeInserted() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& NodeInserting() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& NodeRemoved() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& NodeRemoving() {
		return *(T*)((uintptr_t)this + 0x5C);
	}

	template <typename T = uintptr_t> T System_Xml_IHasXmlChildNode_get_LastLinkedChild() {
		return ((T (*)(XmlDocument*))(Il2CppBase() + 0x37D07F8))(this);
	}
	template <typename T = void> T System_Xml_IHasXmlChildNode_set_LastLinkedChild(uintptr_t value) {
		return ((T (*)(XmlDocument*, uintptr_t))(Il2CppBase() + 0x37D0800))(this, value);
	}
	template <typename T = uintptr_t> T get_NsNodeXml() {
		return ((T (*)(XmlDocument*))(Il2CppBase() + 0x37D0808))(this);
	}
	template <typename T = Il2CppString*> T get_BaseURI() {
		return ((T (*)(XmlDocument*))(Il2CppBase() + 0x37D0918))(this);
	}
	template <typename T = uintptr_t> T get_DocumentElement() {
		return ((T (*)(XmlDocument*))(Il2CppBase() + 0x37D0920))(this);
	}
	template <typename T = uintptr_t> T get_DocumentType() {
		return ((T (*)(XmlDocument*))(Il2CppBase() + 0x37D09FC))(this);
	}
	template <typename T = bool> T get_IsReadOnly() {
		return ((T (*)(XmlDocument*))(Il2CppBase() + 0x37D0B04))(this);
	}
	template <typename T = Il2CppString*> T get_LocalName() {
		return ((T (*)(XmlDocument*))(Il2CppBase() + 0x37D0B0C))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(XmlDocument*))(Il2CppBase() + 0x37D0B84))(this);
	}
	template <typename T = uintptr_t> T get_NameCache() {
		return ((T (*)(XmlDocument*))(Il2CppBase() + 0x37C544C))(this);
	}
	template <typename T = uintptr_t> T get_NameTable() {
		return ((T (*)(XmlDocument*))(Il2CppBase() + 0x37C5444))(this);
	}
	template <typename T = uintptr_t> T get_NodeType() {
		return ((T (*)(XmlDocument*))(Il2CppBase() + 0x37D0BFC))(this);
	}
	template <typename T = uintptr_t> T get_XPathNodeType() {
		return ((T (*)(XmlDocument*))(Il2CppBase() + 0x37D0C04))(this);
	}
	template <typename T = uintptr_t> T get_OwnerDocument() {
		return ((T (*)(XmlDocument*))(Il2CppBase() + 0x37D0C0C))(this);
	}
	template <typename T = bool> T get_PreserveWhitespace() {
		return ((T (*)(XmlDocument*))(Il2CppBase() + 0x37D0C14))(this);
	}
	template <typename T = uintptr_t> T get_Resolver() {
		return ((T (*)(XmlDocument*))(Il2CppBase() + 0x37D0C1C))(this);
	}
	template <typename T = Il2CppString*> T get_XmlLang() {
		return ((T (*)(XmlDocument*))(Il2CppBase() + 0x37D0C24))(this);
	}
	template <typename T = void> T set_XmlResolver(uintptr_t value) {
		return ((T (*)(XmlDocument*, uintptr_t))(Il2CppBase() + 0x37D0CD4))(this, value);
	}
	template <typename T = uintptr_t> T get_XmlSpace() {
		return ((T (*)(XmlDocument*))(Il2CppBase() + 0x37D0CDC))(this);
	}
	template <typename T = uintptr_t> T get_ParentNode() {
		return ((T (*)(XmlDocument*))(Il2CppBase() + 0x37D0CE4))(this);
	}
	template <typename T = void> T set_SchemaInfo(uintptr_t value) {
		return ((T (*)(XmlDocument*, uintptr_t))(Il2CppBase() + 0x37D0CEC))(this, value);
	}
	template <typename T = void> T AddIdenticalAttribute(uintptr_t attr) {
		return ((T (*)(XmlDocument*, uintptr_t))(Il2CppBase() + 0x37C7C20))(this, attr);
	}
	template <typename T = uintptr_t> T CloneNode(bool deep) {
		return ((T (*)(XmlDocument*, bool))(Il2CppBase() + 0x37D0CF4))(this, deep);
	}
	template <typename T = uintptr_t> T CreateAttribute(Il2CppString* name) {
		return ((T (*)(XmlDocument*, Il2CppString*))(Il2CppBase() + 0x37D0E54))(this, name);
	}
	template <typename T = uintptr_t> T CreateAttribute_1(Il2CppString* qualifiedName, Il2CppString* namespaceURI) {
		return ((T (*)(XmlDocument*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x37B8A54))(this, qualifiedName, namespaceURI);
	}
	template <typename T = uintptr_t> T CreateAttribute_2(Il2CppString* prefix, Il2CppString* localName, Il2CppString* namespaceURI) {
		return ((T (*)(XmlDocument*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x37D1208))(this, prefix, localName, namespaceURI);
	}
	template <typename T = uintptr_t> T CreateAttribute_3(Il2CppString* prefix, Il2CppString* localName, Il2CppString* namespaceURI, bool atomizedNames, bool checkNamespace) {
		return ((T (*)(XmlDocument*, Il2CppString*, Il2CppString*, Il2CppString*, bool, bool))(Il2CppBase() + 0x37C5EC0))(this, prefix, localName, namespaceURI, atomizedNames, checkNamespace);
	}
	template <typename T = uintptr_t> T CreateCDataSection(Il2CppString* data) {
		return ((T (*)(XmlDocument*, Il2CppString*))(Il2CppBase() + 0x37D1390))(this, data);
	}
	template <typename T = uintptr_t> T CreateComment(Il2CppString* data) {
		return ((T (*)(XmlDocument*, Il2CppString*))(Il2CppBase() + 0x37D1428))(this, data);
	}
	template <typename T = uintptr_t> T CreateDocumentFragment() {
		return ((T (*)(XmlDocument*))(Il2CppBase() + 0x37D14C0))(this);
	}
	template <typename T = uintptr_t> T CreateDocumentType(Il2CppString* name, Il2CppString* publicId, Il2CppString* systemId, Il2CppString* internalSubset) {
		return ((T (*)(XmlDocument*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x37D15FC))(this, name, publicId, systemId, internalSubset);
	}
	template <typename T = uintptr_t> T CreateDocumentType_1(uintptr_t dtd) {
		return ((T (*)(XmlDocument*, uintptr_t))(Il2CppBase() + 0x37D1894))(this, dtd);
	}
	template <typename T = uintptr_t> T CreateElement(Il2CppString* name) {
		return ((T (*)(XmlDocument*, Il2CppString*))(Il2CppBase() + 0x37D195C))(this, name);
	}
	template <typename T = uintptr_t> T CreateElement_1(Il2CppString* qualifiedName, Il2CppString* namespaceURI) {
		return ((T (*)(XmlDocument*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x37D1A5C))(this, qualifiedName, namespaceURI);
	}
	template <typename T = uintptr_t> T CreateElement_2(Il2CppString* prefix, Il2CppString* localName, Il2CppString* namespaceURI) {
		return ((T (*)(XmlDocument*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x37D1AB4))(this, prefix, localName, namespaceURI);
	}
	template <typename T = uintptr_t> T CreateElement_3(Il2CppString* prefix, Il2CppString* localName, Il2CppString* namespaceURI, bool nameAtomized) {
		return ((T (*)(XmlDocument*, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x37D2020))(this, prefix, localName, namespaceURI, nameAtomized);
	}
	template <typename T = uintptr_t> T CreateEntityReference(Il2CppString* name) {
		return ((T (*)(XmlDocument*, Il2CppString*))(Il2CppBase() + 0x37D2278))(this, name);
	}
	template <typename T = uintptr_t> T CreateNavigator() {
		return ((T (*)(XmlDocument*))(Il2CppBase() + 0x37D23F8))(this);
	}
	template <typename T = uintptr_t> T CreateNavigator_1(uintptr_t node) {
		return ((T (*)(XmlDocument*, uintptr_t))(Il2CppBase() + 0x37D240C))(this, node);
	}
	template <typename T = uintptr_t> T CreateProcessingInstruction(Il2CppString* target, Il2CppString* data) {
		return ((T (*)(XmlDocument*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x37D24BC))(this, target, data);
	}
	template <typename T = uintptr_t> T CreateSignificantWhitespace(Il2CppString* text) {
		return ((T (*)(XmlDocument*, Il2CppString*))(Il2CppBase() + 0x37D2680))(this, text);
	}
	template <typename T = uintptr_t> T CreateTextNode(Il2CppString* text) {
		return ((T (*)(XmlDocument*, Il2CppString*))(Il2CppBase() + 0x37D27B4))(this, text);
	}
	template <typename T = uintptr_t> T CreateWhitespace(Il2CppString* text) {
		return ((T (*)(XmlDocument*, Il2CppString*))(Il2CppBase() + 0x37D2850))(this, text);
	}
	template <typename T = uintptr_t> T CreateXmlDeclaration(Il2CppString* version, Il2CppString* encoding, Il2CppString* standalone) {
		return ((T (*)(XmlDocument*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x37D2984))(this, version, encoding, standalone);
	}
	template <typename T = uintptr_t> T GetElementById(Il2CppString* elementId) {
		return ((T (*)(XmlDocument*, Il2CppString*))(Il2CppBase() + 0x37D2C50))(this, elementId);
	}
	template <typename T = uintptr_t> T GetIdenticalAttribute(Il2CppString* id) {
		return ((T (*)(XmlDocument*, Il2CppString*))(Il2CppBase() + 0x37C7C80))(this, id);
	}
	template <typename T = uintptr_t> T ImportNode(uintptr_t node, bool deep) {
		return ((T (*)(XmlDocument*, uintptr_t, bool))(Il2CppBase() + 0x37D2CE4))(this, node, deep);
	}
	template <typename T = void> T Load(Il2CppString* filename) {
		return ((T (*)(XmlDocument*, Il2CppString*))(Il2CppBase() + 0x37D357C))(this, filename);
	}
	template <typename T = void> T Load_1(uintptr_t xmlReader) {
		return ((T (*)(XmlDocument*, uintptr_t))(Il2CppBase() + 0x37D374C))(this, xmlReader);
	}
	template <typename T = void> T onNodeChanged(uintptr_t node, uintptr_t parent, Il2CppString* oldValue, Il2CppString* newValue) {
		return ((T (*)(XmlDocument*, uintptr_t, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x37C94E8))(this, node, parent, oldValue, newValue);
	}
	template <typename T = void> T onNodeChanging(uintptr_t node, uintptr_t parent, Il2CppString* oldValue, Il2CppString* newValue) {
		return ((T (*)(XmlDocument*, uintptr_t, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x37C9380))(this, node, parent, oldValue, newValue);
	}
	template <typename T = void> T onNodeInserted(uintptr_t node, uintptr_t newParent) {
		return ((T (*)(XmlDocument*, uintptr_t, uintptr_t))(Il2CppBase() + 0x37C7B40))(this, node, newParent);
	}
	template <typename T = void> T onNodeInserting(uintptr_t node, uintptr_t newParent) {
		return ((T (*)(XmlDocument*, uintptr_t, uintptr_t))(Il2CppBase() + 0x37C747C))(this, node, newParent);
	}
	template <typename T = void> T onNodeRemoved(uintptr_t node, uintptr_t oldParent) {
		return ((T (*)(XmlDocument*, uintptr_t, uintptr_t))(Il2CppBase() + 0x37C6FEC))(this, node, oldParent);
	}
	template <typename T = void> T onNodeRemoving(uintptr_t node, uintptr_t oldParent) {
		return ((T (*)(XmlDocument*, uintptr_t, uintptr_t))(Il2CppBase() + 0x37C6C68))(this, node, oldParent);
	}
	template <typename T = void> T ParseName(Il2CppString* name, uintptr_t* prefix, uintptr_t* localName) {
		return ((T (*)(XmlDocument*, Il2CppString*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x37D10E4))(this, name, prefix, localName);
	}
	template <typename T = uintptr_t> T ReadAttributeNode(uintptr_t reader) {
		return ((T (*)(XmlDocument*, uintptr_t))(Il2CppBase() + 0x37D3A4C))(this, reader);
	}
	template <typename T = void> T ReadAttributeNodeValue(uintptr_t reader, uintptr_t attribute) {
		return ((T (*)(XmlDocument*, uintptr_t, uintptr_t))(Il2CppBase() + 0x37D4038))(this, reader, attribute);
	}
	template <typename T = uintptr_t> T ReadNode(uintptr_t reader) {
		return ((T (*)(XmlDocument*, uintptr_t))(Il2CppBase() + 0x37D411C))(this, reader);
	}
	template <typename T = uintptr_t> T ReadNodeCore(uintptr_t reader) {
		return ((T (*)(XmlDocument*, uintptr_t))(Il2CppBase() + 0x37D4268))(this, reader);
	}
	template <typename T = Il2CppString*> T MakeReaderErrorMessage(Il2CppString* message, uintptr_t reader) {
		return ((T (*)(XmlDocument*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x37D3CA0))(this, message, reader);
	}
	template <typename T = void> T RemoveIdenticalAttribute(Il2CppString* id) {
		return ((T (*)(XmlDocument*, Il2CppString*))(Il2CppBase() + 0x37C7DA8))(this, id);
	}
	template <typename T = void> T Save(uintptr_t xmlWriter) {
		return ((T (*)(XmlDocument*, uintptr_t))(Il2CppBase() + 0x37D54B4))(this, xmlWriter);
	}
	template <typename T = void> T WriteContentTo(uintptr_t w) {
		return ((T (*)(XmlDocument*, uintptr_t))(Il2CppBase() + 0x37D55A4))(this, w);
	}
	template <typename T = void> T WriteTo(uintptr_t w) {
		return ((T (*)(XmlDocument*, uintptr_t))(Il2CppBase() + 0x37D55FC))(this, w);
	}
	template <typename T = void> T AddDefaultNameTableKeys() {
		return ((T (*)(XmlDocument*))(Il2CppBase() + 0x37D0254))(this);
	}
	template <typename T = void> T CheckIdTableUpdate(uintptr_t attr, Il2CppString* oldValue, Il2CppString* newValue) {
		return ((T (*)(XmlDocument*, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x37C5B14))(this, attr, oldValue, newValue);
	}

};

}
