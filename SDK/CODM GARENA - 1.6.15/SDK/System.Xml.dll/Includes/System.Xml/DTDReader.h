#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class DTDReader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "DTDReader"));
	}

	template <typename T = uintptr_t> T& currentInput() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& parserInputStack() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& nameBuffer() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& nameLength() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& nameCapacity() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& valueBuffer() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& currentLinkedNodeLineNumber() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& currentLinkedNodeLinePosition() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& dtdIncludeSect() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& normalization() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& processingInternalSubset() {
		return *(T*)((uintptr_t)this + 0x2D);
	}
	template <typename T = Il2CppString*> T& cachedPublicId() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& cachedSystemId() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& DTD() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = Il2CppString*> T get_BaseURI() {
		return ((T (*)(DTDReader*))(Il2CppBase() + 0x2A9A868))(this);
	}
	template <typename T = bool> T get_Normalization() {
		return ((T (*)(DTDReader*))(Il2CppBase() + 0x2A9A894))(this);
	}
	template <typename T = void> T set_Normalization(bool value) {
		return ((T (*)(DTDReader*, bool))(Il2CppBase() + 0x2A99864))(this, value);
	}
	template <typename T = int32_t> T get_LineNumber() {
		return ((T (*)(DTDReader*))(Il2CppBase() + 0x2A9A89C))(this);
	}
	template <typename T = int32_t> T get_LinePosition() {
		return ((T (*)(DTDReader*))(Il2CppBase() + 0x2A9A8C8))(this);
	}
	template <typename T = bool> T HasLineInfo() {
		return ((T (*)(DTDReader*))(Il2CppBase() + 0x2A9A8F4))(this);
	}
	template <typename T = uintptr_t> T NotWFError(Il2CppString* message) {
		return ((T (*)(DTDReader*, Il2CppString*))(Il2CppBase() + 0x2A9A8FC))(this, message);
	}
	template <typename T = void> T Init() {
		return ((T (*)(DTDReader*))(Il2CppBase() + 0x2A9A778))(this);
	}
	template <typename T = uintptr_t> T GenerateDTDObjectModel() {
		return ((T (*)(DTDReader*))(Il2CppBase() + 0x2A9986C))(this);
	}
	template <typename T = bool> T ProcessDTDSubset() {
		return ((T (*)(DTDReader*))(Il2CppBase() + 0x2A9A9B8))(this);
	}
	template <typename T = void> T CompileDeclaration() {
		return ((T (*)(DTDReader*))(Il2CppBase() + 0x2A9C1A0))(this);
	}
	template <typename T = void> T ReadIgnoreSect() {
		return ((T (*)(DTDReader*))(Il2CppBase() + 0x2A9DA3C))(this);
	}
	template <typename T = uintptr_t> T ReadElementDecl() {
		return ((T (*)(DTDReader*))(Il2CppBase() + 0x2A9D0F8))(this);
	}
	template <typename T = void> T ReadContentSpec(uintptr_t decl) {
		return ((T (*)(DTDReader*, uintptr_t))(Il2CppBase() + 0x2A9DB8C))(this, decl);
	}
	template <typename T = uintptr_t> T ReadCP(uintptr_t elem) {
		return ((T (*)(DTDReader*, uintptr_t))(Il2CppBase() + 0x2A9E258))(this, elem);
	}
	template <typename T = void> T AddContentModel(uintptr_t cmc, uintptr_t cm) {
		return ((T (*)(DTDReader*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2A9E06C))(this, cmc, cm);
	}
	template <typename T = void> T ReadParameterEntityDecl() {
		return ((T (*)(DTDReader*))(Il2CppBase() + 0x2A9CA3C))(this);
	}
	template <typename T = void> T ResolveExternalEntityReplacementText(uintptr_t decl) {
		return ((T (*)(DTDReader*, uintptr_t))(Il2CppBase() + 0x2A9E6A8))(this, decl);
	}
	template <typename T = void> T ResolveInternalEntityReplacementText(uintptr_t decl) {
		return ((T (*)(DTDReader*, uintptr_t))(Il2CppBase() + 0x2A9EB10))(this, decl);
	}
	template <typename T = int32_t> T GetCharacterReference(uintptr_t li, Il2CppString* value, uintptr_t index, int32_t end) {
		return ((T (*)(DTDReader*, uintptr_t, Il2CppString*, uintptr_t, int32_t))(Il2CppBase() + 0x2A9EFF8))(this, li, value, index, end);
	}
	template <typename T = Il2CppString*> T GetPEValue(Il2CppString* peName) {
		return ((T (*)(DTDReader*, Il2CppString*))(Il2CppBase() + 0x2A9F358))(this, peName);
	}
	template <typename T = uintptr_t> T GetPEDecl(Il2CppString* peName) {
		return ((T (*)(DTDReader*, Il2CppString*))(Il2CppBase() + 0x2A9BC8C))(this, peName);
	}
	template <typename T = bool> T TryExpandPERef() {
		return ((T (*)(DTDReader*))(Il2CppBase() + 0x2A9C9E8))(this);
	}
	template <typename T = bool> T TryExpandPERefSpaceKeep() {
		return ((T (*)(DTDReader*))(Il2CppBase() + 0x2A9F430))(this);
	}
	template <typename T = void> T ExpandPERef() {
		return ((T (*)(DTDReader*))(Il2CppBase() + 0x2A9C858))(this);
	}
	template <typename T = uintptr_t> T ReadEntityDecl() {
		return ((T (*)(DTDReader*))(Il2CppBase() + 0x2A9CDCC))(this);
	}
	template <typename T = void> T ReadEntityValueDecl(uintptr_t decl) {
		return ((T (*)(DTDReader*, uintptr_t))(Il2CppBase() + 0x2A9F4F8))(this, decl);
	}
	template <typename T = uintptr_t> T ReadAttListDecl() {
		return ((T (*)(DTDReader*))(Il2CppBase() + 0x2A9D270))(this);
	}
	template <typename T = uintptr_t> T ReadAttributeDefinition() {
		return ((T (*)(DTDReader*))(Il2CppBase() + 0x2A9F7A0))(this);
	}
	template <typename T = uintptr_t> T ReadNotationDecl() {
		return ((T (*)(DTDReader*))(Il2CppBase() + 0x2A9D490))(this);
	}
	template <typename T = void> T ReadExternalID() {
		return ((T (*)(DTDReader*))(Il2CppBase() + 0x2A9E5C8))(this);
	}
	template <typename T = Il2CppString*> T ReadSystemLiteral(bool expectSYSTEM) {
		return ((T (*)(DTDReader*, bool))(Il2CppBase() + 0x2A9FA48))(this, expectSYSTEM);
	}
	template <typename T = Il2CppString*> T ReadPubidLiteral() {
		return ((T (*)(DTDReader*))(Il2CppBase() + 0x2A9F834))(this);
	}
	template <typename T = Il2CppString*> T ReadName() {
		return ((T (*)(DTDReader*))(Il2CppBase() + 0x2A9B960))(this);
	}
	template <typename T = Il2CppString*> T ReadNameOrNmToken(bool isNameToken) {
		return ((T (*)(DTDReader*, bool))(Il2CppBase() + 0x2A9FB84))(this, isNameToken);
	}
	template <typename T = void> T Expect(int32_t expected) {
		return ((T (*)(DTDReader*, int32_t))(Il2CppBase() + 0x2A9B968))(this, expected);
	}
	template <typename T = void> T Expect_1(Il2CppString* expected) {
		return ((T (*)(DTDReader*, Il2CppString*))(Il2CppBase() + 0x2A9C678))(this, expected);
	}
	template <typename T = void> T ExpectAfterWhitespace(char c) {
		return ((T (*)(DTDReader*, char))(Il2CppBase() + 0x2A9D72C))(this, c);
	}
	template <typename T = bool> T SkipWhitespace() {
		return ((T (*)(DTDReader*))(Il2CppBase() + 0x2A9B818))(this);
	}
	template <typename T = int32_t> T PeekChar() {
		return ((T (*)(DTDReader*))(Il2CppBase() + 0x2A9AD1C))(this);
	}
	template <typename T = int32_t> T ReadChar() {
		return ((T (*)(DTDReader*))(Il2CppBase() + 0x2A9B934))(this);
	}
	template <typename T = void> T ReadComment() {
		return ((T (*)(DTDReader*))(Il2CppBase() + 0x2A9C6E4))(this);
	}
	template <typename T = void> T ReadProcessingInstruction() {
		return ((T (*)(DTDReader*))(Il2CppBase() + 0x2A9BF44))(this);
	}
	template <typename T = void> T ReadTextDeclaration() {
		return ((T (*)(DTDReader*))(Il2CppBase() + 0x2A9FF80))(this);
	}
	template <typename T = void> T AppendNameChar(int32_t ch) {
		return ((T (*)(DTDReader*, int32_t))(Il2CppBase() + 0x2A9FE64))(this, ch);
	}
	template <typename T = void> T CheckNameCapacity() {
		return ((T (*)(DTDReader*))(Il2CppBase() + 0x2AA0348))(this);
	}
	template <typename T = Il2CppString*> T CreateNameString() {
		return ((T (*)(DTDReader*))(Il2CppBase() + 0x2A9FF20))(this);
	}
	template <typename T = void> T AppendValueChar(int32_t ch) {
		return ((T (*)(DTDReader*, int32_t))(Il2CppBase() + 0x2A9E98C))(this, ch);
	}
	template <typename T = Il2CppString*> T CreateValueString() {
		return ((T (*)(DTDReader*))(Il2CppBase() + 0x2A9EAE4))(this);
	}
	template <typename T = void> T ClearValueBuffer() {
		return ((T (*)(DTDReader*))(Il2CppBase() + 0x2A9E95C))(this);
	}
	template <typename T = void> T PushParserInput(Il2CppString* url) {
		return ((T (*)(DTDReader*, Il2CppString*))(Il2CppBase() + 0x2A9AE3C))(this, url);
	}
	template <typename T = void> T PopParserInput() {
		return ((T (*)(DTDReader*))(Il2CppBase() + 0x2A9AD48))(this);
	}
	template <typename T = void> T HandleError(uintptr_t ex) {
		return ((T (*)(DTDReader*, uintptr_t))(Il2CppBase() + 0x2A9E59C))(this, ex);
	}

};

}
