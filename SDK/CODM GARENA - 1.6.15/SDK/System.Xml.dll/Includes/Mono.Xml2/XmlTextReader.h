#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml2 {

class XmlTextReader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml2", "XmlTextReader"));
	}

	template <typename T = uintptr_t> T& cursorToken() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& currentToken() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& currentAttributeToken() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& currentAttributeValueToken() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& attributeTokens() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& attributeValueTokens() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& currentAttribute() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& currentAttributeValue() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& attributeCount() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& parserContext() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& nameTable() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& nsmgr() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& readState() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& disallowReset() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& depth() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& elementDepth() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& depthUp() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& popScope() {
		return *(T*)((uintptr_t)this + 0x51);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& elementNames() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& elementNameStackPos() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& allowMultipleRoot() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& isStandalone() {
		return *(T*)((uintptr_t)this + 0x5D);
	}
	template <typename T = bool> T& returnEntityReference() {
		return *(T*)((uintptr_t)this + 0x5E);
	}
	template <typename T = Il2CppString*> T& entityReferenceName() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& valueBuffer() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& reader() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& peekChars() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& peekCharsIndex() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& peekCharsLength() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& curNodePeekIndex() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& preserveCurrentTag() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& line() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& column() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& currentLinkedNodeLineNumber() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& currentLinkedNodeLinePosition() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& useProceedingLineInfo() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& startNodeType() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& currentState() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& nestLevel() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& readCharsInProgress() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& binaryCharGetter() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = bool> T& namespaces() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& whitespaceHandling() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& resolver() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& normalization() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = bool> T& checkCharacters() {
		return *(T*)((uintptr_t)this + 0xB5);
	}
	template <typename T = bool> T& prohibitDtd() {
		return *(T*)((uintptr_t)this + 0xB6);
	}
	template <typename T = bool> T& closeInput() {
		return *(T*)((uintptr_t)this + 0xB7);
	}
	template <typename T = uintptr_t> T& entityHandling() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& whitespacePool() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& whitespaceCache() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& stateStack() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map51() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map52() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T Mono_Xml_IHasXmlParserContext_get_ParserContext() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A8F8A4))(this);
	}
	template <typename T = uintptr_t> T GetStreamFromUrl(Il2CppString* url, uintptr_t* absoluteUriString) {
		return ((T (*)(XmlTextReader*, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x2A8EC04))(this, url, absoluteUriString);
	}
	template <typename T = int32_t> T get_AttributeCount() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A8F8AC))(this);
	}
	template <typename T = Il2CppString*> T get_BaseURI() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A8F8B4))(this);
	}
	template <typename T = bool> T get_CharacterChecking() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A8F8E0))(this);
	}
	template <typename T = void> T set_CharacterChecking(bool value) {
		return ((T (*)(XmlTextReader*, bool))(Il2CppBase() + 0x2A8F8E8))(this, value);
	}
	template <typename T = bool> T get_CloseInput() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A8F8F0))(this);
	}
	template <typename T = void> T set_CloseInput(bool value) {
		return ((T (*)(XmlTextReader*, bool))(Il2CppBase() + 0x2A8F8F8))(this, value);
	}
	template <typename T = int32_t> T get_Depth() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A8F900))(this);
	}
	template <typename T = uintptr_t> T get_EntityHandling() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A8F960))(this);
	}
	template <typename T = bool> T get_EOF() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A8F968))(this);
	}
	template <typename T = bool> T get_IsDefault() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A8F97C))(this);
	}
	template <typename T = bool> T get_IsEmptyElement() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A8F984))(this);
	}
	template <typename T = int32_t> T get_LineNumber() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A8F9A8))(this);
	}
	template <typename T = int32_t> T get_LinePosition() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A8F9E8))(this);
	}
	template <typename T = Il2CppString*> T get_LocalName() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A8FA28))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A8FA4C))(this);
	}
	template <typename T = bool> T get_Namespaces() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A8FA70))(this);
	}
	template <typename T = Il2CppString*> T get_NamespaceURI() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A8FA78))(this);
	}
	template <typename T = uintptr_t> T get_NameTable() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A8FA9C))(this);
	}
	template <typename T = uintptr_t> T get_NodeType() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A8FAA4))(this);
	}
	template <typename T = bool> T get_Normalization() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A8FAC8))(this);
	}
	template <typename T = void> T set_Normalization(bool value) {
		return ((T (*)(XmlTextReader*, bool))(Il2CppBase() + 0x2A8FAD0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Prefix() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A8FAD8))(this);
	}
	template <typename T = uintptr_t> T get_ReadState() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A8FAFC))(this);
	}
	template <typename T = uintptr_t> T get_Settings() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A8FB04))(this);
	}
	template <typename T = Il2CppString*> T get_Value() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A8FB0C))(this);
	}
	template <typename T = uintptr_t> T get_WhitespaceHandling() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A8FC10))(this);
	}
	template <typename T = void> T set_WhitespaceHandling(uintptr_t value) {
		return ((T (*)(XmlTextReader*, uintptr_t))(Il2CppBase() + 0x2A8FC18))(this, value);
	}
	template <typename T = void> T set_XmlResolver(uintptr_t value) {
		return ((T (*)(XmlTextReader*, uintptr_t))(Il2CppBase() + 0x2A8FC20))(this, value);
	}
	template <typename T = uintptr_t> T get_XmlSpace() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A8FC28))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A8FC54))(this);
	}
	template <typename T = Il2CppString*> T GetAttribute(Il2CppString* name) {
		return ((T (*)(XmlTextReader*, Il2CppString*))(Il2CppBase() + 0x2A8FCE0))(this, name);
	}
	template <typename T = int32_t> T GetIndexOfQualifiedAttribute(Il2CppString* localName, Il2CppString* namespaceURI) {
		return ((T (*)(XmlTextReader*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2A8FE44))(this, localName, namespaceURI);
	}
	template <typename T = Il2CppString*> T GetAttribute_1(Il2CppString* localName, Il2CppString* namespaceURI) {
		return ((T (*)(XmlTextReader*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2A8FFC4))(this, localName, namespaceURI);
	}
	template <typename T = uintptr_t> T GetRemainder() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A90038))(this);
	}
	template <typename T = bool> T HasLineInfo() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A90184))(this);
	}
	template <typename T = Il2CppString*> T LookupNamespace(Il2CppString* prefix) {
		return ((T (*)(XmlTextReader*, Il2CppString*))(Il2CppBase() + 0x2A9018C))(this, prefix);
	}
	template <typename T = Il2CppString*> T LookupNamespace_1(Il2CppString* prefix, bool atomizedNames) {
		return ((T (*)(XmlTextReader*, Il2CppString*, bool))(Il2CppBase() + 0x2A90194))(this, prefix, atomizedNames);
	}
	template <typename T = void> T MoveToAttribute(int32_t i) {
		return ((T (*)(XmlTextReader*, int32_t))(Il2CppBase() + 0x2A90298))(this, i);
	}
	template <typename T = bool> T MoveToAttribute_1(Il2CppString* name) {
		return ((T (*)(XmlTextReader*, Il2CppString*))(Il2CppBase() + 0x2A9039C))(this, name);
	}
	template <typename T = bool> T MoveToAttribute_2(Il2CppString* localName, Il2CppString* namespaceName) {
		return ((T (*)(XmlTextReader*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2A904DC))(this, localName, namespaceName);
	}
	template <typename T = bool> T MoveToElement() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A90518))(this);
	}
	template <typename T = bool> T MoveToFirstAttribute() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A90554))(this);
	}
	template <typename T = bool> T MoveToNextAttribute() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A9059C))(this);
	}
	template <typename T = bool> T Read() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A90614))(this);
	}
	template <typename T = bool> T ReadAttributeValue() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A91E70))(this);
	}
	template <typename T = int32_t> T ReadChars(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t length) {
		return ((T (*)(XmlTextReader*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x2A91F64))(this, buffer, offset, length);
	}
	template <typename T = void> T ResolveEntity() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A92404))(this);
	}
	template <typename T = void> T Skip() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A924AC))(this);
	}
	template <typename T = uintptr_t> T get_DTD() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A924B4))(this);
	}
	template <typename T = uintptr_t> T get_Resolver() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A924E0))(this);
	}
	template <typename T = uintptr_t> T NotWFError(Il2CppString* message) {
		return ((T (*)(XmlTextReader*, Il2CppString*))(Il2CppBase() + 0x2A91DA8))(this, message);
	}
	template <typename T = void> T Init() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A924E8))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A926BC))(this);
	}
	template <typename T = void> T InitializeContext(Il2CppString* url, uintptr_t context, uintptr_t fragment, uintptr_t fragType) {
		return ((T (*)(XmlTextReader*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2A8EF08))(this, url, context, fragment, fragType);
	}
	template <typename T = uintptr_t> T get_Conformance() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A928CC))(this);
	}
	template <typename T = void> T set_Conformance(uintptr_t value) {
		return ((T (*)(XmlTextReader*, uintptr_t))(Il2CppBase() + 0x2A928E0))(this, value);
	}
	template <typename T = void> T SetProperties(uintptr_t nodeType, Il2CppString* name, Il2CppString* prefix, Il2CppString* localName, bool isEmptyElement, Il2CppString* value, bool clearAttributes) {
		return ((T (*)(XmlTextReader*, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, bool, Il2CppString*, bool))(Il2CppBase() + 0x2A928F4))(this, nodeType, name, prefix, localName, isEmptyElement, value, clearAttributes);
	}
	template <typename T = void> T SetTokenProperties(uintptr_t token, uintptr_t nodeType, Il2CppString* name, Il2CppString* prefix, Il2CppString* localName, bool isEmptyElement, Il2CppString* value, bool clearAttributes) {
		return ((T (*)(XmlTextReader*, uintptr_t, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, bool, Il2CppString*, bool))(Il2CppBase() + 0x2A92974))(this, token, nodeType, name, prefix, localName, isEmptyElement, value, clearAttributes);
	}
	template <typename T = void> T ClearAttributes() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A90E00))(this);
	}
	template <typename T = int32_t> T PeekSurrogate(int32_t c) {
		return ((T (*)(XmlTextReader*, int32_t))(Il2CppBase() + 0x2A929F8))(this, c);
	}
	template <typename T = int32_t> T PeekChar() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A92CF8))(this);
	}
	template <typename T = int32_t> T ReadChar() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A92D9C))(this);
	}
	template <typename T = void> T Advance(int32_t ch) {
		return ((T (*)(XmlTextReader*, int32_t))(Il2CppBase() + 0x2A92DFC))(this, ch);
	}
	template <typename T = bool> T ReadTextReader(int32_t remained) {
		return ((T (*)(XmlTextReader*, int32_t))(Il2CppBase() + 0x2A92AD4))(this, remained);
	}
	template <typename T = bool> T ReadContent() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A91A68))(this);
	}
	template <typename T = void> T SetEntityReferenceProperties() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A92E4C))(this);
	}
	template <typename T = void> T ReadStartTag() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A93798))(this);
	}
	template <typename T = void> T PushElementName(Il2CppString* name, Il2CppString* local, Il2CppString* prefix) {
		return ((T (*)(XmlTextReader*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2A95880))(this, name, local, prefix);
	}
	template <typename T = void> T ReadEndTag() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A93050))(this);
	}
	template <typename T = void> T CheckCurrentStateUpdate() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A95D18))(this);
	}
	template <typename T = void> T AppendValueChar(int32_t ch) {
		return ((T (*)(XmlTextReader*, int32_t))(Il2CppBase() + 0x2A962D0))(this, ch);
	}
	template <typename T = void> T AppendSurrogatePairValueChar(int32_t ch) {
		return ((T (*)(XmlTextReader*, int32_t))(Il2CppBase() + 0x2A96314))(this, ch);
	}
	template <typename T = Il2CppString*> T CreateValueString() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A96380))(this);
	}
	template <typename T = void> T ClearValueBuffer() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A90874))(this);
	}
	template <typename T = void> T ReadText(bool notWhitespace) {
		return ((T (*)(XmlTextReader*, bool))(Il2CppBase() + 0x2A94998))(this, notWhitespace);
	}
	template <typename T = int32_t> T ReadReference(bool ignoreEntityReferences) {
		return ((T (*)(XmlTextReader*, bool))(Il2CppBase() + 0x2A965D0))(this, ignoreEntityReferences);
	}
	template <typename T = int32_t> T ReadCharacterReference() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A96620))(this);
	}
	template <typename T = int32_t> T ReadEntityReference(bool ignoreEntityReferences) {
		return ((T (*)(XmlTextReader*, bool))(Il2CppBase() + 0x2A96DE0))(this, ignoreEntityReferences);
	}
	template <typename T = void> T ReadAttributes(bool isXmlDecl) {
		return ((T (*)(XmlTextReader*, bool))(Il2CppBase() + 0x2A95348))(this, isXmlDecl);
	}
	template <typename T = void> T AddAttributeWithValue(Il2CppString* name, Il2CppString* value) {
		return ((T (*)(XmlTextReader*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2A96F78))(this, name, value);
	}
	template <typename T = void> T IncrementAttributeToken() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A90E18))(this);
	}
	template <typename T = void> T IncrementAttributeValueToken() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A97174))(this);
	}
	template <typename T = void> T ReadAttributeValueTokens(int32_t dummyQuoteChar) {
		return ((T (*)(XmlTextReader*, int32_t))(Il2CppBase() + 0x2A90FF4))(this, dummyQuoteChar);
	}
	template <typename T = void> T CheckAttributeEntityReferenceWFC(Il2CppString* entName) {
		return ((T (*)(XmlTextReader*, Il2CppString*))(Il2CppBase() + 0x2A97428))(this, entName);
	}
	template <typename T = void> T ReadProcessingInstruction() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A93248))(this);
	}
	template <typename T = void> T VerifyXmlDeclaration() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A9762C))(this);
	}
	template <typename T = bool> T SkipWhitespaceInString(Il2CppString* text, uintptr_t idx) {
		return ((T (*)(XmlTextReader*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x2A982BC))(this, text, idx);
	}
	template <typename T = void> T ParseAttributeFromString(Il2CppString* src, uintptr_t idx, uintptr_t* name, uintptr_t* value) {
		return ((T (*)(XmlTextReader*, Il2CppString*, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x2A97E7C))(this, src, idx, name, value);
	}
	template <typename T = void> T SkipTextDeclaration() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A908A4))(this);
	}
	template <typename T = void> T ReadDeclaration() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A93654))(this);
	}
	template <typename T = void> T ReadComment() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A983D8))(this);
	}
	template <typename T = void> T ReadCDATA() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A98648))(this);
	}
	template <typename T = void> T ReadDoctypeDecl() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A98904))(this);
	}
	template <typename T = uintptr_t> T GenerateDTDObjectModel(Il2CppString* name, Il2CppString* publicId, Il2CppString* systemId, Il2CppString* internalSubset) {
		return ((T (*)(XmlTextReader*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2A99804))(this, name, publicId, systemId, internalSubset);
	}
	template <typename T = uintptr_t> T GenerateDTDObjectModel_1(Il2CppString* name, Il2CppString* publicId, Il2CppString* systemId, Il2CppString* internalSubset, int32_t intSubsetStartLine, int32_t intSubsetStartColumn) {
		return ((T (*)(XmlTextReader*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x2A9959C))(this, name, publicId, systemId, internalSubset, intSubsetStartLine, intSubsetStartColumn);
	}
	template <typename T = uintptr_t> T get_State() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A99FD0))(this);
	}
	template <typename T = int32_t> T ReadValueChar() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A9A0A4))(this);
	}
	template <typename T = void> T ExpectAndAppend(Il2CppString* s) {
		return ((T (*)(XmlTextReader*, Il2CppString*))(Il2CppBase() + 0x2A9A0CC))(this, s);
	}
	template <typename T = void> T ReadInternalSubset() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A98FA0))(this);
	}
	template <typename T = Il2CppString*> T ReadSystemLiteral(bool expectSYSTEM) {
		return ((T (*)(XmlTextReader*, bool))(Il2CppBase() + 0x2A98C50))(this, expectSYSTEM);
	}
	template <typename T = Il2CppString*> T ReadPubidLiteral() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A98D8C))(this);
	}
	template <typename T = Il2CppString*> T ReadName() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A96F4C))(this);
	}
	template <typename T = Il2CppString*> T ReadName_1(uintptr_t* prefix, uintptr_t* localName) {
		return ((T (*)(XmlTextReader*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x2A94CF4))(this, prefix, localName);
	}
	template <typename T = void> T Expect(int32_t expected) {
		return ((T (*)(XmlTextReader*, int32_t))(Il2CppBase() + 0x2A959C0))(this, expected);
	}
	template <typename T = void> T Expect_1(Il2CppString* expected) {
		return ((T (*)(XmlTextReader*, Il2CppString*))(Il2CppBase() + 0x2A95D80))(this, expected);
	}
	template <typename T = void> T ExpectAfterWhitespace(char c) {
		return ((T (*)(XmlTextReader*, char))(Il2CppBase() + 0x2A95F84))(this, c);
	}
	template <typename T = bool> T SkipWhitespace() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A9526C))(this);
	}
	template <typename T = bool> T ReadWhitespace() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A94730))(this);
	}
	template <typename T = int32_t> T ReadCharsInternal(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t length) {
		return ((T (*)(XmlTextReader*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x2A92140))(this, buffer, offset, length);
	}
	template <typename T = bool> T ReadUntilEndTag() {
		return ((T (*)(XmlTextReader*))(Il2CppBase() + 0x2A91878))(this);
	}

};

}
