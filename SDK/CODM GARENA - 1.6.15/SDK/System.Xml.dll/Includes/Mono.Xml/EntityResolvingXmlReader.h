#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml {

class EntityResolvingXmlReader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml", "EntityResolvingXmlReader"));
	}

	template <typename T = uintptr_t> T& entity() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& source() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& context() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& resolver() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& entity_handling() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& entity_inside_attr() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& inside_attr() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = bool> T& do_resolve() {
		return *(T*)((uintptr_t)this + 0x26);
	}

	template <typename T = uintptr_t> T Mono_Xml_IHasXmlParserContext_get_ParserContext() {
		return ((T (*)(EntityResolvingXmlReader*))(Il2CppBase() + 0x4E1BEA4))(this);
	}
	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(EntityResolvingXmlReader*))(Il2CppBase() + 0x4E1BEAC))(this);
	}
	template <typename T = int32_t> T get_AttributeCount() {
		return ((T (*)(EntityResolvingXmlReader*))(Il2CppBase() + 0x4E1BEF0))(this);
	}
	template <typename T = Il2CppString*> T get_BaseURI() {
		return ((T (*)(EntityResolvingXmlReader*))(Il2CppBase() + 0x4E1BF58))(this);
	}
	template <typename T = bool> T get_CanResolveEntity() {
		return ((T (*)(EntityResolvingXmlReader*))(Il2CppBase() + 0x4E1BFC0))(this);
	}
	template <typename T = int32_t> T get_Depth() {
		return ((T (*)(EntityResolvingXmlReader*))(Il2CppBase() + 0x4E1BFC8))(this);
	}
	template <typename T = bool> T get_EOF() {
		return ((T (*)(EntityResolvingXmlReader*))(Il2CppBase() + 0x4E1C06C))(this);
	}
	template <typename T = bool> T get_IsDefault() {
		return ((T (*)(EntityResolvingXmlReader*))(Il2CppBase() + 0x4E1C0A0))(this);
	}
	template <typename T = bool> T get_IsEmptyElement() {
		return ((T (*)(EntityResolvingXmlReader*))(Il2CppBase() + 0x4E1C108))(this);
	}
	template <typename T = Il2CppString*> T get_LocalName() {
		return ((T (*)(EntityResolvingXmlReader*))(Il2CppBase() + 0x4E1C170))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(EntityResolvingXmlReader*))(Il2CppBase() + 0x4E1C1D8))(this);
	}
	template <typename T = Il2CppString*> T get_NamespaceURI() {
		return ((T (*)(EntityResolvingXmlReader*))(Il2CppBase() + 0x4E1C240))(this);
	}
	template <typename T = uintptr_t> T get_NameTable() {
		return ((T (*)(EntityResolvingXmlReader*))(Il2CppBase() + 0x4E1C2A8))(this);
	}
	template <typename T = uintptr_t> T get_NodeType() {
		return ((T (*)(EntityResolvingXmlReader*))(Il2CppBase() + 0x4E1C310))(this);
	}
	template <typename T = uintptr_t> T get_ParserContext() {
		return ((T (*)(EntityResolvingXmlReader*))(Il2CppBase() + 0x4E1C39C))(this);
	}
	template <typename T = Il2CppString*> T get_Prefix() {
		return ((T (*)(EntityResolvingXmlReader*))(Il2CppBase() + 0x4E1C3A4))(this);
	}
	template <typename T = uintptr_t> T get_ReadState() {
		return ((T (*)(EntityResolvingXmlReader*))(Il2CppBase() + 0x4E1C40C))(this);
	}
	template <typename T = Il2CppString*> T get_Value() {
		return ((T (*)(EntityResolvingXmlReader*))(Il2CppBase() + 0x4E1C450))(this);
	}
	template <typename T = uintptr_t> T get_XmlSpace() {
		return ((T (*)(EntityResolvingXmlReader*))(Il2CppBase() + 0x4E1C4B8))(this);
	}
	template <typename T = void> T CopyProperties(uintptr_t other) {
		return ((T (*)(EntityResolvingXmlReader*, uintptr_t))(Il2CppBase() + 0x4E1C520))(this, other);
	}
	template <typename T = uintptr_t> T get_EntityHandling() {
		return ((T (*)(EntityResolvingXmlReader*))(Il2CppBase() + 0x4E15AA8))(this);
	}
	template <typename T = void> T set_EntityHandling(uintptr_t value) {
		return ((T (*)(EntityResolvingXmlReader*, uintptr_t))(Il2CppBase() + 0x4E15AD8))(this, value);
	}
	template <typename T = int32_t> T get_LineNumber() {
		return ((T (*)(EntityResolvingXmlReader*))(Il2CppBase() + 0x4E1C554))(this);
	}
	template <typename T = int32_t> T get_LinePosition() {
		return ((T (*)(EntityResolvingXmlReader*))(Il2CppBase() + 0x4E1C690))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(EntityResolvingXmlReader*))(Il2CppBase() + 0x4E1C7CC))(this);
	}
	template <typename T = Il2CppString*> T GetAttribute(Il2CppString* name) {
		return ((T (*)(EntityResolvingXmlReader*, Il2CppString*))(Il2CppBase() + 0x4E1C820))(this, name);
	}
	template <typename T = Il2CppString*> T GetAttribute_1(Il2CppString* localName, Il2CppString* namespaceURI) {
		return ((T (*)(EntityResolvingXmlReader*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4E1C890))(this, localName, namespaceURI);
	}
	template <typename T = Il2CppString*> T LookupNamespace(Il2CppString* prefix) {
		return ((T (*)(EntityResolvingXmlReader*, Il2CppString*))(Il2CppBase() + 0x4E1C908))(this, prefix);
	}
	template <typename T = void> T MoveToAttribute(int32_t i) {
		return ((T (*)(EntityResolvingXmlReader*, int32_t))(Il2CppBase() + 0x4E1C978))(this, i);
	}
	template <typename T = bool> T MoveToAttribute_1(Il2CppString* name) {
		return ((T (*)(EntityResolvingXmlReader*, Il2CppString*))(Il2CppBase() + 0x4E1CA10))(this, name);
	}
	template <typename T = bool> T MoveToAttribute_2(Il2CppString* localName, Il2CppString* namespaceName) {
		return ((T (*)(EntityResolvingXmlReader*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4E1CAB8))(this, localName, namespaceName);
	}
	template <typename T = bool> T MoveToElement() {
		return ((T (*)(EntityResolvingXmlReader*))(Il2CppBase() + 0x4E1CB60))(this);
	}
	template <typename T = bool> T MoveToFirstAttribute() {
		return ((T (*)(EntityResolvingXmlReader*))(Il2CppBase() + 0x4E1CC00))(this);
	}
	template <typename T = bool> T MoveToNextAttribute() {
		return ((T (*)(EntityResolvingXmlReader*))(Il2CppBase() + 0x4E1CCA8))(this);
	}
	template <typename T = bool> T Read() {
		return ((T (*)(EntityResolvingXmlReader*))(Il2CppBase() + 0x4E1CD50))(this);
	}
	template <typename T = bool> T ReadAttributeValue() {
		return ((T (*)(EntityResolvingXmlReader*))(Il2CppBase() + 0x4E1D1FC))(this);
	}
	template <typename T = void> T ResolveEntity() {
		return ((T (*)(EntityResolvingXmlReader*))(Il2CppBase() + 0x4E1D2C0))(this);
	}
	template <typename T = void> T DoResolveEntity() {
		return ((T (*)(EntityResolvingXmlReader*))(Il2CppBase() + 0x4E1CEC8))(this);
	}
	template <typename T = void> T Skip() {
		return ((T (*)(EntityResolvingXmlReader*))(Il2CppBase() + 0x4E1D2C4))(this);
	}
	template <typename T = bool> T HasLineInfo() {
		return ((T (*)(EntityResolvingXmlReader*))(Il2CppBase() + 0x4E1D2CC))(this);
	}

};

}
