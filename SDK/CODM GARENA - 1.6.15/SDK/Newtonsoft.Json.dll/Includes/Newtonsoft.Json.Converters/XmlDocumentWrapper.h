#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Converters {

class XmlDocumentWrapper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Converters", "XmlDocumentWrapper"));
	}

	template <typename T = uintptr_t> T& _document() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uintptr_t> T CreateComment(Il2CppString* data) {
		return ((T (*)(XmlDocumentWrapper*, Il2CppString*))(Il2CppBase() + 0x4097D2C))(this, data);
	}
	template <typename T = uintptr_t> T CreateTextNode(Il2CppString* text) {
		return ((T (*)(XmlDocumentWrapper*, Il2CppString*))(Il2CppBase() + 0x4097DF4))(this, text);
	}
	template <typename T = uintptr_t> T CreateCDataSection(Il2CppString* data) {
		return ((T (*)(XmlDocumentWrapper*, Il2CppString*))(Il2CppBase() + 0x4097EBC))(this, data);
	}
	template <typename T = uintptr_t> T CreateWhitespace(Il2CppString* text) {
		return ((T (*)(XmlDocumentWrapper*, Il2CppString*))(Il2CppBase() + 0x4097F84))(this, text);
	}
	template <typename T = uintptr_t> T CreateSignificantWhitespace(Il2CppString* text) {
		return ((T (*)(XmlDocumentWrapper*, Il2CppString*))(Il2CppBase() + 0x409804C))(this, text);
	}
	template <typename T = uintptr_t> T CreateXmlDeclaration(Il2CppString* version, Il2CppString* encoding, Il2CppString* standalone) {
		return ((T (*)(XmlDocumentWrapper*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4098114))(this, version, encoding, standalone);
	}
	template <typename T = uintptr_t> T CreateXmlDocumentType(Il2CppString* name, Il2CppString* publicId, Il2CppString* systemId, Il2CppString* internalSubset) {
		return ((T (*)(XmlDocumentWrapper*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x40981FC))(this, name, publicId, systemId, internalSubset);
	}
	template <typename T = uintptr_t> T CreateProcessingInstruction(Il2CppString* target, Il2CppString* data) {
		return ((T (*)(XmlDocumentWrapper*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x40982EC))(this, target, data);
	}
	template <typename T = uintptr_t> T CreateElement(Il2CppString* elementName) {
		return ((T (*)(XmlDocumentWrapper*, Il2CppString*))(Il2CppBase() + 0x40983BC))(this, elementName);
	}
	template <typename T = uintptr_t> T CreateElement_1(Il2CppString* qualifiedName, Il2CppString* namespaceUri) {
		return ((T (*)(XmlDocumentWrapper*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x40984A4))(this, qualifiedName, namespaceUri);
	}
	template <typename T = uintptr_t> T CreateAttribute(Il2CppString* name, Il2CppString* value) {
		return ((T (*)(XmlDocumentWrapper*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4098570))(this, name, value);
	}
	template <typename T = uintptr_t> T CreateAttribute_1(Il2CppString* qualifiedName, Il2CppString* namespaceUri, Il2CppString* value) {
		return ((T (*)(XmlDocumentWrapper*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x409867C))(this, qualifiedName, namespaceUri, value);
	}
	template <typename T = uintptr_t> T get_DocumentElement() {
		return ((T (*)(XmlDocumentWrapper*))(Il2CppBase() + 0x409875C))(this);
	}

};

}
