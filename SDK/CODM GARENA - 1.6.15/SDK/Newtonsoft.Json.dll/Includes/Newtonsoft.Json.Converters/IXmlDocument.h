#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Converters {

class IXmlDocument
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Converters", "IXmlDocument"));
	}


	template <typename T = uintptr_t> T CreateComment(Il2CppString* text) {
		return ((T (*)(IXmlDocument*, Il2CppString*))(Il2CppBase() + 0x0))(this, text);
	}
	template <typename T = uintptr_t> T CreateTextNode(Il2CppString* text) {
		return ((T (*)(IXmlDocument*, Il2CppString*))(Il2CppBase() + 0x0))(this, text);
	}
	template <typename T = uintptr_t> T CreateCDataSection(Il2CppString* data) {
		return ((T (*)(IXmlDocument*, Il2CppString*))(Il2CppBase() + 0x0))(this, data);
	}
	template <typename T = uintptr_t> T CreateWhitespace(Il2CppString* text) {
		return ((T (*)(IXmlDocument*, Il2CppString*))(Il2CppBase() + 0x0))(this, text);
	}
	template <typename T = uintptr_t> T CreateSignificantWhitespace(Il2CppString* text) {
		return ((T (*)(IXmlDocument*, Il2CppString*))(Il2CppBase() + 0x0))(this, text);
	}
	template <typename T = uintptr_t> T CreateXmlDeclaration(Il2CppString* version, Il2CppString* encoding, Il2CppString* standalone) {
		return ((T (*)(IXmlDocument*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, version, encoding, standalone);
	}
	template <typename T = uintptr_t> T CreateXmlDocumentType(Il2CppString* name, Il2CppString* publicId, Il2CppString* systemId, Il2CppString* internalSubset) {
		return ((T (*)(IXmlDocument*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, name, publicId, systemId, internalSubset);
	}
	template <typename T = uintptr_t> T CreateProcessingInstruction(Il2CppString* target, Il2CppString* data) {
		return ((T (*)(IXmlDocument*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, target, data);
	}
	template <typename T = uintptr_t> T CreateElement(Il2CppString* elementName) {
		return ((T (*)(IXmlDocument*, Il2CppString*))(Il2CppBase() + 0x0))(this, elementName);
	}
	template <typename T = uintptr_t> T CreateElement_1(Il2CppString* qualifiedName, Il2CppString* namespaceUri) {
		return ((T (*)(IXmlDocument*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, qualifiedName, namespaceUri);
	}
	template <typename T = uintptr_t> T CreateAttribute(Il2CppString* name, Il2CppString* value) {
		return ((T (*)(IXmlDocument*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, name, value);
	}
	template <typename T = uintptr_t> T CreateAttribute_1(Il2CppString* qualifiedName, Il2CppString* namespaceUri, Il2CppString* value) {
		return ((T (*)(IXmlDocument*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, qualifiedName, namespaceUri, value);
	}
	template <typename T = uintptr_t> T get_DocumentElement() {
		return ((T (*)(IXmlDocument*))(Il2CppBase() + 0x0))(this);
	}

};

}
