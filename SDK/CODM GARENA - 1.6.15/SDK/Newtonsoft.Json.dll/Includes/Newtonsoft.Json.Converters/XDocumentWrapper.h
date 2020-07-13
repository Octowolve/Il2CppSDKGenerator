#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Converters {

class XDocumentWrapper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Converters", "XDocumentWrapper"));
	}


	template <typename T = uintptr_t> T get_Document() {
		return ((T (*)(XDocumentWrapper*))(Il2CppBase() + 0x4096034))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_ChildNodes() {
		return ((T (*)(XDocumentWrapper*))(Il2CppBase() + 0x40960B8))(this);
	}
	template <typename T = uintptr_t> T CreateComment(Il2CppString* text) {
		return ((T (*)(XDocumentWrapper*, Il2CppString*))(Il2CppBase() + 0x409627C))(this, text);
	}
	template <typename T = uintptr_t> T CreateTextNode(Il2CppString* text) {
		return ((T (*)(XDocumentWrapper*, Il2CppString*))(Il2CppBase() + 0x4096334))(this, text);
	}
	template <typename T = uintptr_t> T CreateCDataSection(Il2CppString* data) {
		return ((T (*)(XDocumentWrapper*, Il2CppString*))(Il2CppBase() + 0x40963EC))(this, data);
	}
	template <typename T = uintptr_t> T CreateWhitespace(Il2CppString* text) {
		return ((T (*)(XDocumentWrapper*, Il2CppString*))(Il2CppBase() + 0x40964A4))(this, text);
	}
	template <typename T = uintptr_t> T CreateSignificantWhitespace(Il2CppString* text) {
		return ((T (*)(XDocumentWrapper*, Il2CppString*))(Il2CppBase() + 0x409655C))(this, text);
	}
	template <typename T = uintptr_t> T CreateXmlDeclaration(Il2CppString* version, Il2CppString* encoding, Il2CppString* standalone) {
		return ((T (*)(XDocumentWrapper*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4096614))(this, version, encoding, standalone);
	}
	template <typename T = uintptr_t> T CreateXmlDocumentType(Il2CppString* name, Il2CppString* publicId, Il2CppString* systemId, Il2CppString* internalSubset) {
		return ((T (*)(XDocumentWrapper*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x40966E8))(this, name, publicId, systemId, internalSubset);
	}
	template <typename T = uintptr_t> T CreateProcessingInstruction(Il2CppString* target, Il2CppString* data) {
		return ((T (*)(XDocumentWrapper*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x40967C4))(this, target, data);
	}
	template <typename T = uintptr_t> T CreateElement(Il2CppString* elementName) {
		return ((T (*)(XDocumentWrapper*, Il2CppString*))(Il2CppBase() + 0x4096880))(this, elementName);
	}
	template <typename T = uintptr_t> T CreateElement_1(Il2CppString* qualifiedName, Il2CppString* namespaceUri) {
		return ((T (*)(XDocumentWrapper*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4096948))(this, qualifiedName, namespaceUri);
	}
	template <typename T = uintptr_t> T CreateAttribute(Il2CppString* name, Il2CppString* value) {
		return ((T (*)(XDocumentWrapper*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4096A28))(this, name, value);
	}
	template <typename T = uintptr_t> T CreateAttribute_1(Il2CppString* qualifiedName, Il2CppString* namespaceUri, Il2CppString* value) {
		return ((T (*)(XDocumentWrapper*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4096AF8))(this, qualifiedName, namespaceUri, value);
	}
	template <typename T = uintptr_t> T get_DocumentElement() {
		return ((T (*)(XDocumentWrapper*))(Il2CppBase() + 0x4096BE0))(this);
	}
	template <typename T = uintptr_t> T AppendChild(uintptr_t newChild) {
		return ((T (*)(XDocumentWrapper*, uintptr_t))(Il2CppBase() + 0x4096CBC))(this, newChild);
	}

};

}
