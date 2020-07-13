#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class XmlReader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "XmlReader"));
	}

	template <typename T = uintptr_t> T& binary() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& settings() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(XmlReader*))(Il2CppBase() + 0x37E54C0))(this);
	}
	template <typename T = int32_t> T get_AttributeCount() {
		return ((T (*)(XmlReader*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_BaseURI() {
		return ((T (*)(XmlReader*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_Binary() {
		return ((T (*)(XmlReader*))(Il2CppBase() + 0x37E54D4))(this);
	}
	template <typename T = bool> T get_CanResolveEntity() {
		return ((T (*)(XmlReader*))(Il2CppBase() + 0x37E54DC))(this);
	}
	template <typename T = int32_t> T get_Depth() {
		return ((T (*)(XmlReader*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_EOF() {
		return ((T (*)(XmlReader*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_HasAttributes() {
		return ((T (*)(XmlReader*))(Il2CppBase() + 0x37E54E4))(this);
	}
	template <typename T = bool> T get_IsEmptyElement() {
		return ((T (*)(XmlReader*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_IsDefault() {
		return ((T (*)(XmlReader*))(Il2CppBase() + 0x37E5510))(this);
	}
	template <typename T = Il2CppString*> T get_Item(Il2CppString* name) {
		return ((T (*)(XmlReader*, Il2CppString*))(Il2CppBase() + 0x37E5518))(this, name);
	}
	template <typename T = Il2CppString*> T get_Item_1(Il2CppString* name, Il2CppString* namespaceURI) {
		return ((T (*)(XmlReader*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x37E5528))(this, name, namespaceURI);
	}
	template <typename T = Il2CppString*> T get_LocalName() {
		return ((T (*)(XmlReader*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(XmlReader*))(Il2CppBase() + 0x37E5538))(this);
	}
	template <typename T = Il2CppString*> T get_NamespaceURI() {
		return ((T (*)(XmlReader*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_NameTable() {
		return ((T (*)(XmlReader*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_NodeType() {
		return ((T (*)(XmlReader*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_Prefix() {
		return ((T (*)(XmlReader*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_ReadState() {
		return ((T (*)(XmlReader*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_SchemaInfo() {
		return ((T (*)(XmlReader*))(Il2CppBase() + 0x37E568C))(this);
	}
	template <typename T = uintptr_t> T get_Settings() {
		return ((T (*)(XmlReader*))(Il2CppBase() + 0x37E5694))(this);
	}
	template <typename T = Il2CppString*> T get_Value() {
		return ((T (*)(XmlReader*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_XmlSpace() {
		return ((T (*)(XmlReader*))(Il2CppBase() + 0x37E569C))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(XmlReader*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(XmlReader*, bool))(Il2CppBase() + 0x37E56A4))(this, disposing);
	}
	template <typename T = Il2CppString*> T GetAttribute(Il2CppString* name) {
		return ((T (*)(XmlReader*, Il2CppString*))(Il2CppBase() + 0x0))(this, name);
	}
	template <typename T = Il2CppString*> T GetAttribute_1(Il2CppString* localName, Il2CppString* namespaceName) {
		return ((T (*)(XmlReader*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, localName, namespaceName);
	}
	template <typename T = Il2CppString*> T LookupNamespace(Il2CppString* prefix) {
		return ((T (*)(XmlReader*, Il2CppString*))(Il2CppBase() + 0x0))(this, prefix);
	}
	template <typename T = void> T MoveToAttribute(int32_t i) {
		return ((T (*)(XmlReader*, int32_t))(Il2CppBase() + 0x37E56E4))(this, i);
	}
	template <typename T = bool> T MoveToAttribute_1(Il2CppString* name) {
		return ((T (*)(XmlReader*, Il2CppString*))(Il2CppBase() + 0x0))(this, name);
	}
	template <typename T = bool> T MoveToAttribute_2(Il2CppString* localName, Il2CppString* namespaceName) {
		return ((T (*)(XmlReader*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, localName, namespaceName);
	}
	template <typename T = bool> T MoveToElement() {
		return ((T (*)(XmlReader*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T MoveToFirstAttribute() {
		return ((T (*)(XmlReader*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T MoveToNextAttribute() {
		return ((T (*)(XmlReader*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T Read() {
		return ((T (*)(XmlReader*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T ReadAttributeValue() {
		return ((T (*)(XmlReader*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T ReadOuterXml() {
		return ((T (*)(XmlReader*))(Il2CppBase() + 0x37E57D8))(this);
	}
	template <typename T = void> T ResolveEntity() {
		return ((T (*)(XmlReader*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Skip() {
		return ((T (*)(XmlReader*))(Il2CppBase() + 0x37E59E0))(this);
	}

};

}
