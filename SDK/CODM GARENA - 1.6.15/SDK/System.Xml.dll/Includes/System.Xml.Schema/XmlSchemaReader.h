#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaReader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaReader"));
	}

	template <typename T = uintptr_t> T& reader() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& handler() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& hasLineInfo() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppString*> T get_FullName() {
		return ((T (*)(XmlSchemaReader*))(Il2CppBase() + 0x379381C))(this);
	}
	template <typename T = uintptr_t> T get_Reader() {
		return ((T (*)(XmlSchemaReader*))(Il2CppBase() + 0x3793920))(this);
	}
	template <typename T = void> T RaiseInvalidElementError() {
		return ((T (*)(XmlSchemaReader*))(Il2CppBase() + 0x378EF74))(this);
	}
	template <typename T = bool> T ReadNextElement() {
		return ((T (*)(XmlSchemaReader*))(Il2CppBase() + 0x378F4F0))(this);
	}
	template <typename T = void> T SkipToEnd() {
		return ((T (*)(XmlSchemaReader*))(Il2CppBase() + 0x3793928))(this);
	}
	template <typename T = bool> T HasLineInfo() {
		return ((T (*)(XmlSchemaReader*))(Il2CppBase() + 0x37939F0))(this);
	}
	template <typename T = int32_t> T get_LineNumber() {
		return ((T (*)(XmlSchemaReader*))(Il2CppBase() + 0x378E934))(this);
	}
	template <typename T = int32_t> T get_LinePosition() {
		return ((T (*)(XmlSchemaReader*))(Il2CppBase() + 0x378EA74))(this);
	}
	template <typename T = int32_t> T get_AttributeCount() {
		return ((T (*)(XmlSchemaReader*))(Il2CppBase() + 0x37939F8))(this);
	}
	template <typename T = Il2CppString*> T get_BaseURI() {
		return ((T (*)(XmlSchemaReader*))(Il2CppBase() + 0x3793A2C))(this);
	}
	template <typename T = bool> T get_CanResolveEntity() {
		return ((T (*)(XmlSchemaReader*))(Il2CppBase() + 0x3793A60))(this);
	}
	template <typename T = int32_t> T get_Depth() {
		return ((T (*)(XmlSchemaReader*))(Il2CppBase() + 0x3793A94))(this);
	}
	template <typename T = bool> T get_EOF() {
		return ((T (*)(XmlSchemaReader*))(Il2CppBase() + 0x3793AC8))(this);
	}
	template <typename T = bool> T get_HasAttributes() {
		return ((T (*)(XmlSchemaReader*))(Il2CppBase() + 0x3793AFC))(this);
	}
	template <typename T = bool> T get_IsDefault() {
		return ((T (*)(XmlSchemaReader*))(Il2CppBase() + 0x3793B30))(this);
	}
	template <typename T = bool> T get_IsEmptyElement() {
		return ((T (*)(XmlSchemaReader*))(Il2CppBase() + 0x3793B64))(this);
	}
	template <typename T = Il2CppString*> T get_Item(Il2CppString* name) {
		return ((T (*)(XmlSchemaReader*, Il2CppString*))(Il2CppBase() + 0x3793B98))(this, name);
	}
	template <typename T = Il2CppString*> T get_Item_1(Il2CppString* name, Il2CppString* namespaceURI) {
		return ((T (*)(XmlSchemaReader*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3793BCC))(this, name, namespaceURI);
	}
	template <typename T = Il2CppString*> T get_LocalName() {
		return ((T (*)(XmlSchemaReader*))(Il2CppBase() + 0x3793C00))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(XmlSchemaReader*))(Il2CppBase() + 0x3793C34))(this);
	}
	template <typename T = Il2CppString*> T get_NamespaceURI() {
		return ((T (*)(XmlSchemaReader*))(Il2CppBase() + 0x3793C68))(this);
	}
	template <typename T = uintptr_t> T get_NameTable() {
		return ((T (*)(XmlSchemaReader*))(Il2CppBase() + 0x3793C9C))(this);
	}
	template <typename T = uintptr_t> T get_NodeType() {
		return ((T (*)(XmlSchemaReader*))(Il2CppBase() + 0x3793CD0))(this);
	}
	template <typename T = Il2CppString*> T get_Prefix() {
		return ((T (*)(XmlSchemaReader*))(Il2CppBase() + 0x3793D04))(this);
	}
	template <typename T = uintptr_t> T get_ReadState() {
		return ((T (*)(XmlSchemaReader*))(Il2CppBase() + 0x3793D38))(this);
	}
	template <typename T = Il2CppString*> T get_Value() {
		return ((T (*)(XmlSchemaReader*))(Il2CppBase() + 0x3793D6C))(this);
	}
	template <typename T = uintptr_t> T get_XmlSpace() {
		return ((T (*)(XmlSchemaReader*))(Il2CppBase() + 0x3793DA0))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(XmlSchemaReader*))(Il2CppBase() + 0x3793DD4))(this);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(XmlSchemaReader*, uintptr_t))(Il2CppBase() + 0x3793E08))(this, obj);
	}
	template <typename T = Il2CppString*> T GetAttribute(Il2CppString* name) {
		return ((T (*)(XmlSchemaReader*, Il2CppString*))(Il2CppBase() + 0x3793E3C))(this, name);
	}
	template <typename T = Il2CppString*> T GetAttribute_1(Il2CppString* name, Il2CppString* namespaceURI) {
		return ((T (*)(XmlSchemaReader*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3793E70))(this, name, namespaceURI);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(XmlSchemaReader*))(Il2CppBase() + 0x3793EA4))(this);
	}
	template <typename T = Il2CppString*> T LookupNamespace(Il2CppString* prefix) {
		return ((T (*)(XmlSchemaReader*, Il2CppString*))(Il2CppBase() + 0x3793ED8))(this, prefix);
	}
	template <typename T = void> T MoveToAttribute(int32_t i) {
		return ((T (*)(XmlSchemaReader*, int32_t))(Il2CppBase() + 0x3793F0C))(this, i);
	}
	template <typename T = bool> T MoveToAttribute_1(Il2CppString* name) {
		return ((T (*)(XmlSchemaReader*, Il2CppString*))(Il2CppBase() + 0x3793F40))(this, name);
	}
	template <typename T = bool> T MoveToAttribute_2(Il2CppString* name, Il2CppString* ns) {
		return ((T (*)(XmlSchemaReader*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3793F74))(this, name, ns);
	}
	template <typename T = bool> T MoveToElement() {
		return ((T (*)(XmlSchemaReader*))(Il2CppBase() + 0x3793FA8))(this);
	}
	template <typename T = bool> T MoveToFirstAttribute() {
		return ((T (*)(XmlSchemaReader*))(Il2CppBase() + 0x3793FDC))(this);
	}
	template <typename T = bool> T MoveToNextAttribute() {
		return ((T (*)(XmlSchemaReader*))(Il2CppBase() + 0x3794010))(this);
	}
	template <typename T = bool> T Read() {
		return ((T (*)(XmlSchemaReader*))(Il2CppBase() + 0x3794044))(this);
	}
	template <typename T = bool> T ReadAttributeValue() {
		return ((T (*)(XmlSchemaReader*))(Il2CppBase() + 0x3794078))(this);
	}
	template <typename T = Il2CppString*> T ReadOuterXml() {
		return ((T (*)(XmlSchemaReader*))(Il2CppBase() + 0x37940AC))(this);
	}
	template <typename T = void> T ResolveEntity() {
		return ((T (*)(XmlSchemaReader*))(Il2CppBase() + 0x37940E0))(this);
	}
	template <typename T = void> T Skip() {
		return ((T (*)(XmlSchemaReader*))(Il2CppBase() + 0x3794114))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(XmlSchemaReader*))(Il2CppBase() + 0x3794148))(this);
	}

};

}
