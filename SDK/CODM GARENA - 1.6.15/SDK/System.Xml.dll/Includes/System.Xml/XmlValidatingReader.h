#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class XmlValidatingReader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "XmlValidatingReader"));
	}

	template <typename T = uintptr_t> T& entityHandling() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& sourceReader() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& xmlTextReader() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& validatingReader() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& resolver() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& resolverSpecified() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& validationType() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& schemas() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& dtdReader() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& schemaInfo() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& storedCharacters() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& ValidationEventHandler() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = uintptr_t> T Mono_Xml_IHasXmlParserContext_get_ParserContext() {
		return ((T (*)(XmlValidatingReader*))(Il2CppBase() + 0x4CFE144))(this);
	}
	template <typename T = int32_t> T get_AttributeCount() {
		return ((T (*)(XmlValidatingReader*))(Il2CppBase() + 0x4CFE268))(this);
	}
	template <typename T = Il2CppString*> T get_BaseURI() {
		return ((T (*)(XmlValidatingReader*))(Il2CppBase() + 0x4CFE288))(this);
	}
	template <typename T = bool> T get_CanResolveEntity() {
		return ((T (*)(XmlValidatingReader*))(Il2CppBase() + 0x4CFE2CC))(this);
	}
	template <typename T = int32_t> T get_Depth() {
		return ((T (*)(XmlValidatingReader*))(Il2CppBase() + 0x4CFE2D4))(this);
	}
	template <typename T = uintptr_t> T get_EntityHandling() {
		return ((T (*)(XmlValidatingReader*))(Il2CppBase() + 0x4CFE2F4))(this);
	}
	template <typename T = void> T set_EntityHandling(uintptr_t value) {
		return ((T (*)(XmlValidatingReader*, uintptr_t))(Il2CppBase() + 0x4CFE2FC))(this, value);
	}
	template <typename T = bool> T get_EOF() {
		return ((T (*)(XmlValidatingReader*))(Il2CppBase() + 0x4CFE314))(this);
	}
	template <typename T = bool> T get_IsDefault() {
		return ((T (*)(XmlValidatingReader*))(Il2CppBase() + 0x4CFE348))(this);
	}
	template <typename T = bool> T get_IsEmptyElement() {
		return ((T (*)(XmlValidatingReader*))(Il2CppBase() + 0x4CFE37C))(this);
	}
	template <typename T = int32_t> T get_LineNumber() {
		return ((T (*)(XmlValidatingReader*))(Il2CppBase() + 0x4CFE3B0))(this);
	}
	template <typename T = int32_t> T get_LinePosition() {
		return ((T (*)(XmlValidatingReader*))(Il2CppBase() + 0x4CFE4D8))(this);
	}
	template <typename T = Il2CppString*> T get_LocalName() {
		return ((T (*)(XmlValidatingReader*))(Il2CppBase() + 0x4CFE600))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(XmlValidatingReader*))(Il2CppBase() + 0x4CFE740))(this);
	}
	template <typename T = bool> T get_Namespaces() {
		return ((T (*)(XmlValidatingReader*))(Il2CppBase() + 0x4CFE720))(this);
	}
	template <typename T = Il2CppString*> T get_NamespaceURI() {
		return ((T (*)(XmlValidatingReader*))(Il2CppBase() + 0x4CFE814))(this);
	}
	template <typename T = uintptr_t> T get_NameTable() {
		return ((T (*)(XmlValidatingReader*))(Il2CppBase() + 0x4CFE960))(this);
	}
	template <typename T = uintptr_t> T get_NodeType() {
		return ((T (*)(XmlValidatingReader*))(Il2CppBase() + 0x4CFE9A4))(this);
	}
	template <typename T = Il2CppString*> T get_Prefix() {
		return ((T (*)(XmlValidatingReader*))(Il2CppBase() + 0x4CFE9C4))(this);
	}
	template <typename T = uintptr_t> T get_ReadState() {
		return ((T (*)(XmlValidatingReader*))(Il2CppBase() + 0x4CFEA98))(this);
	}
	template <typename T = uintptr_t> T get_Resolver() {
		return ((T (*)(XmlValidatingReader*))(Il2CppBase() + 0x4CFEAB8))(this);
	}
	template <typename T = uintptr_t> T get_Schemas() {
		return ((T (*)(XmlValidatingReader*))(Il2CppBase() + 0x4CFEAE4))(this);
	}
	template <typename T = uintptr_t> T get_Settings() {
		return ((T (*)(XmlValidatingReader*))(Il2CppBase() + 0x4CFEBA0))(this);
	}
	template <typename T = uintptr_t> T get_ValidationType() {
		return ((T (*)(XmlValidatingReader*))(Il2CppBase() + 0x4CFEBE4))(this);
	}
	template <typename T = void> T set_ValidationType(uintptr_t value) {
		return ((T (*)(XmlValidatingReader*, uintptr_t))(Il2CppBase() + 0x4CFEBEC))(this, value);
	}
	template <typename T = Il2CppString*> T get_Value() {
		return ((T (*)(XmlValidatingReader*))(Il2CppBase() + 0x4CFED0C))(this);
	}
	template <typename T = uintptr_t> T get_XmlSpace() {
		return ((T (*)(XmlValidatingReader*))(Il2CppBase() + 0x4CFEDE0))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(XmlValidatingReader*))(Il2CppBase() + 0x4CFEE00))(this);
	}
	template <typename T = Il2CppString*> T GetAttribute(Il2CppString* name) {
		return ((T (*)(XmlValidatingReader*, Il2CppString*))(Il2CppBase() + 0x4CFEE44))(this, name);
	}
	template <typename T = Il2CppString*> T GetAttribute_1(Il2CppString* localName, Il2CppString* namespaceName) {
		return ((T (*)(XmlValidatingReader*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4CFEE64))(this, localName, namespaceName);
	}
	template <typename T = bool> T HasLineInfo() {
		return ((T (*)(XmlValidatingReader*))(Il2CppBase() + 0x4CFEE84))(this);
	}
	template <typename T = Il2CppString*> T LookupNamespace(Il2CppString* prefix) {
		return ((T (*)(XmlValidatingReader*, Il2CppString*))(Il2CppBase() + 0x4CFEF8C))(this, prefix);
	}
	template <typename T = void> T MoveToAttribute(int32_t i) {
		return ((T (*)(XmlValidatingReader*, int32_t))(Il2CppBase() + 0x4CFEFD0))(this, i);
	}
	template <typename T = bool> T MoveToAttribute_1(Il2CppString* name) {
		return ((T (*)(XmlValidatingReader*, Il2CppString*))(Il2CppBase() + 0x4CFF0A4))(this, name);
	}
	template <typename T = bool> T MoveToAttribute_2(Il2CppString* localName, Il2CppString* namespaceName) {
		return ((T (*)(XmlValidatingReader*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4CFF0D8))(this, localName, namespaceName);
	}
	template <typename T = bool> T MoveToElement() {
		return ((T (*)(XmlValidatingReader*))(Il2CppBase() + 0x4CFF10C))(this);
	}
	template <typename T = bool> T MoveToFirstAttribute() {
		return ((T (*)(XmlValidatingReader*))(Il2CppBase() + 0x4CFF140))(this);
	}
	template <typename T = bool> T MoveToNextAttribute() {
		return ((T (*)(XmlValidatingReader*))(Il2CppBase() + 0x4CFF174))(this);
	}
	template <typename T = bool> T Read() {
		return ((T (*)(XmlValidatingReader*))(Il2CppBase() + 0x4CFF1A8))(this);
	}
	template <typename T = bool> T ReadAttributeValue() {
		return ((T (*)(XmlValidatingReader*))(Il2CppBase() + 0x4CFF5C4))(this);
	}
	template <typename T = void> T ResolveEntity() {
		return ((T (*)(XmlValidatingReader*))(Il2CppBase() + 0x4CFF5F8))(this);
	}
	template <typename T = void> T OnValidationEvent(uintptr_t o, uintptr_t e) {
		return ((T (*)(XmlValidatingReader*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CFF62C))(this, o, e);
	}

};

}
