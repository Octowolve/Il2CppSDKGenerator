#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class XmlTextReader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "XmlTextReader"));
	}

	template <typename T = uintptr_t> T& entity() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& source() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& entityInsideAttribute() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& insideAttribute() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = void*> T& entityNameStack() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uintptr_t> T Mono_Xml_IHasXmlParserContext_get_ParserContext() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x4CF5ED0))(this);
	}
	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x4CF6028))(this);
	}
	template <typename T = int32_t> T get_AttributeCount() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x4CF606C))(this);
	}
	template <typename T = Il2CppString*> T get_BaseURI() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x4CF60D4))(this);
	}
	template <typename T = bool> T get_CanResolveEntity() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x4CF613C))(this);
	}
	template <typename T = int32_t> T get_Depth() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x4CF6144))(this);
	}
	template <typename T = bool> T get_EOF() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x4CF61E8))(this);
	}
	template <typename T = bool> T get_IsDefault() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x4CF621C))(this);
	}
	template <typename T = bool> T get_IsEmptyElement() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x4CF6284))(this);
	}
	template <typename T = Il2CppString*> T get_LocalName() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x4CF62EC))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x4CF6354))(this);
	}
	template <typename T = Il2CppString*> T get_NamespaceURI() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x4CF63BC))(this);
	}
	template <typename T = uintptr_t> T get_NameTable() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x4CF6424))(this);
	}
	template <typename T = uintptr_t> T get_NodeType() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x4CF648C))(this);
	}
	template <typename T = uintptr_t> T get_ParserContext() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x4CF5ED4))(this);
	}
	template <typename T = Il2CppString*> T get_Prefix() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x4CF6518))(this);
	}
	template <typename T = uintptr_t> T get_ReadState() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x4CF6580))(this);
	}
	template <typename T = uintptr_t> T get_Settings() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x4CF65C4))(this);
	}
	template <typename T = Il2CppString*> T get_Value() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x4CF65CC))(this);
	}
	template <typename T = uintptr_t> T get_XmlSpace() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x4CF6634))(this);
	}
	template <typename T = bool> T get_CharacterChecking() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x4CF669C))(this);
	}
	template <typename T = void> T set_CharacterChecking(bool value) {
		return ((T (*)(XmlTextReader*, bool))(Il2CppBase() + 0x4CF66D8))(this, value);
	}
	template <typename T = bool> T get_CloseInput() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x4CF6720))(this);
	}
	template <typename T = void> T set_CloseInput(bool value) {
		return ((T (*)(XmlTextReader*, bool))(Il2CppBase() + 0x4CF675C))(this, value);
	}
	template <typename T = void> T set_Conformance(uintptr_t value) {
		return ((T (*)(XmlTextReader*, uintptr_t))(Il2CppBase() + 0x4CF67A4))(this, value);
	}
	template <typename T = uintptr_t> T get_Resolver() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x4CF67EC))(this);
	}
	template <typename T = void> T CopyProperties(uintptr_t other) {
		return ((T (*)(XmlTextReader*, uintptr_t))(Il2CppBase() + 0x4CF6818))(this, other);
	}
	template <typename T = uintptr_t> T get_EntityHandling() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x4CF6908))(this);
	}
	template <typename T = int32_t> T get_LineNumber() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x4CF6934))(this);
	}
	template <typename T = int32_t> T get_LinePosition() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x4CF6970))(this);
	}
	template <typename T = bool> T get_Namespaces() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x4CF69AC))(this);
	}
	template <typename T = bool> T get_Normalization() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x4CF69D8))(this);
	}
	template <typename T = void> T set_Normalization(bool value) {
		return ((T (*)(XmlTextReader*, bool))(Il2CppBase() + 0x4CF6A04))(this, value);
	}
	template <typename T = uintptr_t> T get_WhitespaceHandling() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x4CF6A4C))(this);
	}
	template <typename T = void> T set_WhitespaceHandling(uintptr_t value) {
		return ((T (*)(XmlTextReader*, uintptr_t))(Il2CppBase() + 0x4CF6A78))(this, value);
	}
	template <typename T = void> T set_XmlResolver(uintptr_t value) {
		return ((T (*)(XmlTextReader*, uintptr_t))(Il2CppBase() + 0x4CF68C0))(this, value);
	}
	template <typename T = void> T SkipTextDeclaration() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x4CF6AC0))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x4CF6AFC))(this);
	}
	template <typename T = Il2CppString*> T GetAttribute(Il2CppString* name) {
		return ((T (*)(XmlTextReader*, Il2CppString*))(Il2CppBase() + 0x4CF6B50))(this, name);
	}
	template <typename T = Il2CppString*> T GetAttribute_1(Il2CppString* localName, Il2CppString* namespaceURI) {
		return ((T (*)(XmlTextReader*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4CF6BC0))(this, localName, namespaceURI);
	}
	template <typename T = Il2CppString*> T LookupNamespace(Il2CppString* prefix) {
		return ((T (*)(XmlTextReader*, Il2CppString*))(Il2CppBase() + 0x4CF6C38))(this, prefix);
	}
	template <typename T = void> T MoveToAttribute(int32_t i) {
		return ((T (*)(XmlTextReader*, int32_t))(Il2CppBase() + 0x4CF6CA8))(this, i);
	}
	template <typename T = bool> T MoveToAttribute_1(Il2CppString* name) {
		return ((T (*)(XmlTextReader*, Il2CppString*))(Il2CppBase() + 0x4CF6DFC))(this, name);
	}
	template <typename T = bool> T MoveToAttribute_2(Il2CppString* localName, Il2CppString* namespaceName) {
		return ((T (*)(XmlTextReader*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4CF6E94))(this, localName, namespaceName);
	}
	template <typename T = bool> T MoveToElement() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x4CF6F2C))(this);
	}
	template <typename T = bool> T MoveToFirstAttribute() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x4CF6FCC))(this);
	}
	template <typename T = bool> T MoveToNextAttribute() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x4CF7064))(this);
	}
	template <typename T = bool> T Read() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x4CF70FC))(this);
	}
	template <typename T = bool> T ReadAttributeValue() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x4CF722C))(this);
	}
	template <typename T = void> T ResolveEntity() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x4CF72F0))(this);
	}
	template <typename T = void> T CloseEntity() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x4CF6D40))(this);
	}
	template <typename T = void> T Skip() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x4CF7740))(this);
	}
	template <typename T = uintptr_t> T GetRemainder() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x4CF7748))(this);
	}
	template <typename T = bool> T HasLineInfo() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x4CF7818))(this);
	}

};

}
