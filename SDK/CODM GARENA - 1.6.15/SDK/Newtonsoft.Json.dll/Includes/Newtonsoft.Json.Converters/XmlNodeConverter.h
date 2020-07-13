#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Converters {

class XmlNodeConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Converters", "XmlNodeConverter"));
	}

	template <typename T = Il2CppString*> T& DeserializeRootElementName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& WriteArrayAttribute() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& OmitRootObject() {
		return *(T*)((uintptr_t)this + 0xD);
	}

	template <typename T = Il2CppString*> T get_DeserializeRootElementName() {
		return ((T (*)(XmlNodeConverter*))(Il2CppBase() + 0x4098980))(this);
	}
	template <typename T = bool> T get_WriteArrayAttribute() {
		return ((T (*)(XmlNodeConverter*))(Il2CppBase() + 0x4098988))(this);
	}
	template <typename T = bool> T get_OmitRootObject() {
		return ((T (*)(XmlNodeConverter*))(Il2CppBase() + 0x4098990))(this);
	}
	template <typename T = void> T WriteJson(uintptr_t writer, uintptr_t value, uintptr_t serializer) {
		return ((T (*)(XmlNodeConverter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4098998))(this, writer, value, serializer);
	}
	template <typename T = uintptr_t> T WrapXml(uintptr_t value) {
		return ((T (*)(XmlNodeConverter*, uintptr_t))(Il2CppBase() + 0x4098AF8))(this, value);
	}
	template <typename T = void> T PushParentNamespaces(uintptr_t node, uintptr_t manager) {
		return ((T (*)(XmlNodeConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4098C64))(this, node, manager);
	}
	template <typename T = Il2CppString*> T ResolveFullName(uintptr_t node, uintptr_t manager) {
		return ((T (*)(XmlNodeConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x409B7C0))(this, node, manager);
	}
	template <typename T = Il2CppString*> T GetPropertyName(uintptr_t node, uintptr_t manager) {
		return ((T (*)(XmlNodeConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x409BCD4))(this, node, manager);
	}
	template <typename T = bool> T IsArray(uintptr_t node) {
		return ((T (*)(XmlNodeConverter*, uintptr_t))(Il2CppBase() + 0x409C46C))(this, node);
	}
	template <typename T = void> T SerializeGroupedNodes(uintptr_t writer, uintptr_t node, uintptr_t manager, bool writePropertyName) {
		return ((T (*)(XmlNodeConverter*, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x409CA18))(this, writer, node, manager, writePropertyName);
	}
	template <typename T = void> T SerializeNode(uintptr_t writer, uintptr_t node, uintptr_t manager, bool writePropertyName) {
		return ((T (*)(XmlNodeConverter*, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x40994DC))(this, writer, node, manager, writePropertyName);
	}
	template <typename T = bool> static T AllSameName(uintptr_t node) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x409D0C0))(0, node);
	}
	template <typename T = uintptr_t> T ReadJson(uintptr_t reader, uintptr_t objectType, uintptr_t existingValue, uintptr_t serializer) {
		return ((T (*)(XmlNodeConverter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x409D734))(this, reader, objectType, existingValue, serializer);
	}
	template <typename T = void> T DeserializeValue(uintptr_t reader, uintptr_t document, uintptr_t manager, Il2CppString* propertyName, uintptr_t currentNode) {
		return ((T (*)(XmlNodeConverter*, uintptr_t, uintptr_t, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x409ED9C))(this, reader, document, manager, propertyName, currentNode);
	}
	template <typename T = void> T ReadElement(uintptr_t reader, uintptr_t document, uintptr_t currentNode, Il2CppString* propertyName, uintptr_t manager) {
		return ((T (*)(XmlNodeConverter*, uintptr_t, uintptr_t, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x409DF28))(this, reader, document, currentNode, propertyName, manager);
	}
	template <typename T = void> T CreateElement(uintptr_t reader, uintptr_t document, uintptr_t currentNode, Il2CppString* elementName, uintptr_t manager, Il2CppString* elementPrefix, Il2CppDictionary<Il2CppString*, Il2CppString*>* attributeNameValues) {
		return ((T (*)(XmlNodeConverter*, uintptr_t, uintptr_t, uintptr_t, Il2CppString*, uintptr_t, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x40A1548))(this, reader, document, currentNode, elementName, manager, elementPrefix, attributeNameValues);
	}
	template <typename T = void> static T AddAttribute(uintptr_t reader, uintptr_t document, uintptr_t currentNode, Il2CppString* attributeName, uintptr_t manager, Il2CppString* attributePrefix) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, Il2CppString*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x40A11F0))(0, reader, document, currentNode, attributeName, manager, attributePrefix);
	}
	template <typename T = Il2CppString*> T ConvertTokenToXmlValue(uintptr_t reader) {
		return ((T (*)(XmlNodeConverter*, uintptr_t))(Il2CppBase() + 0x40A212C))(this, reader);
	}
	template <typename T = void> T ReadArrayElements(uintptr_t reader, uintptr_t document, Il2CppString* propertyName, uintptr_t currentNode, uintptr_t manager) {
		return ((T (*)(XmlNodeConverter*, uintptr_t, uintptr_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x40A020C))(this, reader, document, propertyName, currentNode, manager);
	}
	template <typename T = void> T AddJsonArrayAttribute(uintptr_t element, uintptr_t document) {
		return ((T (*)(XmlNodeConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x40A2A3C))(this, element, document);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T ReadAttributeElements(uintptr_t reader, uintptr_t manager) {
		return ((T (*)(XmlNodeConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x40A06A0))(this, reader, manager);
	}
	template <typename T = void> T CreateInstruction(uintptr_t reader, uintptr_t document, uintptr_t currentNode, Il2CppString* propertyName) {
		return ((T (*)(XmlNodeConverter*, uintptr_t, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x409F5B0))(this, reader, document, currentNode, propertyName);
	}
	template <typename T = void> T CreateDocumentType(uintptr_t reader, uintptr_t document, uintptr_t currentNode) {
		return ((T (*)(XmlNodeConverter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x409FC5C))(this, reader, document, currentNode);
	}
	template <typename T = uintptr_t> T CreateElement_1(Il2CppString* elementName, uintptr_t document, Il2CppString* elementPrefix, uintptr_t manager) {
		return ((T (*)(XmlNodeConverter*, Il2CppString*, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x40A1EAC))(this, elementName, document, elementPrefix, manager);
	}
	template <typename T = void> T DeserializeNode(uintptr_t reader, uintptr_t document, uintptr_t manager, uintptr_t currentNode) {
		return ((T (*)(XmlNodeConverter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x409E3B0))(this, reader, document, manager, currentNode);
	}
	template <typename T = bool> T IsNamespaceAttribute(Il2CppString* attributeName, uintptr_t* prefix) {
		return ((T (*)(XmlNodeConverter*, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x40A2E14))(this, attributeName, prefix);
	}
	template <typename T = bool> T ValueAttributes(Il2CppList<uintptr_t>* c) {
		return ((T (*)(XmlNodeConverter*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x409D470))(this, c);
	}
	template <typename T = bool> T CanConvert(uintptr_t valueType) {
		return ((T (*)(XmlNodeConverter*, uintptr_t))(Il2CppBase() + 0x40A2F7C))(this, valueType);
	}

};

}
