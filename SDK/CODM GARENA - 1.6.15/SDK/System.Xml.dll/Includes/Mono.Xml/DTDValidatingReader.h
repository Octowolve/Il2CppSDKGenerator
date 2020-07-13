#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml {

class DTDValidatingReader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml", "DTDValidatingReader"));
	}

	template <typename T = uintptr_t> T& reader() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& sourceTextReader() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& validatingReader() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& dtd() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& resolver() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& currentElement() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& attributes() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& attributeCount() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& currentAttribute() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& consumedAttribute() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& elementStack() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& automataStack() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& popScope() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& isStandalone() {
		return *(T*)((uintptr_t)this + 0x41);
	}
	template <typename T = uintptr_t> T& currentAutomata() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& previousAutomata() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& idList() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& missingIDReferences() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& nsmgr() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppString*> T& currentTextValue() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& constructingTextValue() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& shouldResetCurrentTextValue() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& isSignificantWhitespace() {
		return *(T*)((uintptr_t)this + 0x61);
	}
	template <typename T = bool> T& isWhitespace() {
		return *(T*)((uintptr_t)this + 0x62);
	}
	template <typename T = bool> T& isText() {
		return *(T*)((uintptr_t)this + 0x63);
	}
	template <typename T = uintptr_t> T& attributeValueEntityStack() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& valueBuilder() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& whitespaceChars() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map43() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T System_Xml_IXmlLineInfo_HasLineInfo() {
		return ((T (*)(DTDValidatingReader*))(Il2CppBase() + 0x4E15988))(this);
	}
	template <typename T = uintptr_t> T get_Source() {
		return ((T (*)(DTDValidatingReader*))(Il2CppBase() + 0x4E15A74))(this);
	}
	template <typename T = uintptr_t> T get_DTD() {
		return ((T (*)(DTDValidatingReader*))(Il2CppBase() + 0x4E15A7C))(this);
	}
	template <typename T = uintptr_t> T get_EntityHandling() {
		return ((T (*)(DTDValidatingReader*))(Il2CppBase() + 0x4E15A84))(this);
	}
	template <typename T = void> T set_EntityHandling(uintptr_t value) {
		return ((T (*)(DTDValidatingReader*, uintptr_t))(Il2CppBase() + 0x4E15AB0))(this, value);
	}
	template <typename T = void> T Close() {
		return ((T (*)(DTDValidatingReader*))(Il2CppBase() + 0x4E15B00))(this);
	}
	template <typename T = int32_t> T GetAttributeIndex(Il2CppString* name) {
		return ((T (*)(DTDValidatingReader*, Il2CppString*))(Il2CppBase() + 0x4E15B34))(this, name);
	}
	template <typename T = int32_t> T GetAttributeIndex_1(Il2CppString* localName, Il2CppString* ns) {
		return ((T (*)(DTDValidatingReader*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4E15C5C))(this, localName, ns);
	}
	template <typename T = Il2CppString*> T GetAttribute(Il2CppString* name) {
		return ((T (*)(DTDValidatingReader*, Il2CppString*))(Il2CppBase() + 0x4E15E08))(this, name);
	}
	template <typename T = Il2CppString*> T GetAttribute_1(Il2CppString* name, Il2CppString* ns) {
		return ((T (*)(DTDValidatingReader*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4E15E80))(this, name, ns);
	}
	template <typename T = Il2CppString*> T LookupNamespace(Il2CppString* prefix) {
		return ((T (*)(DTDValidatingReader*, Il2CppString*))(Il2CppBase() + 0x4E15EF8))(this, prefix);
	}
	template <typename T = void> T MoveToAttribute(int32_t i) {
		return ((T (*)(DTDValidatingReader*, int32_t))(Il2CppBase() + 0x4E16030))(this, i);
	}
	template <typename T = bool> T MoveToAttribute_1(Il2CppString* name) {
		return ((T (*)(DTDValidatingReader*, Il2CppString*))(Il2CppBase() + 0x4E1616C))(this, name);
	}
	template <typename T = bool> T MoveToAttribute_2(Il2CppString* name, Il2CppString* ns) {
		return ((T (*)(DTDValidatingReader*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4E16204))(this, name, ns);
	}
	template <typename T = bool> T MoveToElement() {
		return ((T (*)(DTDValidatingReader*))(Il2CppBase() + 0x4E1629C))(this);
	}
	template <typename T = bool> T MoveToFirstAttribute() {
		return ((T (*)(DTDValidatingReader*))(Il2CppBase() + 0x4E16320))(this);
	}
	template <typename T = bool> T MoveToNextAttribute() {
		return ((T (*)(DTDValidatingReader*))(Il2CppBase() + 0x4E16384))(this);
	}
	template <typename T = bool> T Read() {
		return ((T (*)(DTDValidatingReader*))(Il2CppBase() + 0x4E1643C))(this);
	}
	template <typename T = bool> T ReadContent() {
		return ((T (*)(DTDValidatingReader*))(Il2CppBase() + 0x4E16704))(this);
	}
	template <typename T = bool> T ProcessContent() {
		return ((T (*)(DTDValidatingReader*))(Il2CppBase() + 0x4E16B68))(this);
	}
	template <typename T = void> T FillAttributes() {
		return ((T (*)(DTDValidatingReader*))(Il2CppBase() + 0x4E16E24))(this);
	}
	template <typename T = void> T ValidateText() {
		return ((T (*)(DTDValidatingReader*))(Il2CppBase() + 0x4E189F0))(this);
	}
	template <typename T = void> T ValidateWhitespaceNode() {
		return ((T (*)(DTDValidatingReader*))(Il2CppBase() + 0x4E18158))(this);
	}
	template <typename T = void> T HandleError(Il2CppString* message, uintptr_t severity) {
		return ((T (*)(DTDValidatingReader*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4E168E0))(this, message, severity);
	}
	template <typename T = void> T HandleError_1(uintptr_t ex, uintptr_t severity) {
		return ((T (*)(DTDValidatingReader*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E18DCC))(this, ex, severity);
	}
	template <typename T = void> T ValidateAttributes(uintptr_t decl, bool validate) {
		return ((T (*)(DTDValidatingReader*, uintptr_t, bool))(Il2CppBase() + 0x4E18F04))(this, decl, validate);
	}
	template <typename T = uintptr_t> T GetAttributeSlot() {
		return ((T (*)(DTDValidatingReader*))(Il2CppBase() + 0x4E18BEC))(this);
	}
	template <typename T = void> T DtdValidateAttributes(uintptr_t decl, bool validate) {
		return ((T (*)(DTDValidatingReader*, uintptr_t, bool))(Il2CppBase() + 0x4E19328))(this, decl, validate);
	}
	template <typename T = void> T ReadDoctype() {
		return ((T (*)(DTDValidatingReader*))(Il2CppBase() + 0x4E16F54))(this);
	}
	template <typename T = void> T ProcessStartElement() {
		return ((T (*)(DTDValidatingReader*))(Il2CppBase() + 0x4E182D0))(this);
	}
	template <typename T = void> T ProcessEndElement() {
		return ((T (*)(DTDValidatingReader*))(Il2CppBase() + 0x4E18734))(this);
	}
	template <typename T = void> T VerifyDeclaredAttributes(uintptr_t decl) {
		return ((T (*)(DTDValidatingReader*, uintptr_t))(Il2CppBase() + 0x4E1AA74))(this, decl);
	}
	template <typename T = bool> T ReadAttributeValue() {
		return ((T (*)(DTDValidatingReader*))(Il2CppBase() + 0x4E1AF7C))(this);
	}
	template <typename T = void> T ResolveEntity() {
		return ((T (*)(DTDValidatingReader*))(Il2CppBase() + 0x4E1B020))(this);
	}
	template <typename T = int32_t> T get_AttributeCount() {
		return ((T (*)(DTDValidatingReader*))(Il2CppBase() + 0x4E1B054))(this);
	}
	template <typename T = Il2CppString*> T get_BaseURI() {
		return ((T (*)(DTDValidatingReader*))(Il2CppBase() + 0x4E1B06C))(this);
	}
	template <typename T = bool> T get_CanResolveEntity() {
		return ((T (*)(DTDValidatingReader*))(Il2CppBase() + 0x4E1B0A0))(this);
	}
	template <typename T = int32_t> T get_Depth() {
		return ((T (*)(DTDValidatingReader*))(Il2CppBase() + 0x4E1B0A8))(this);
	}
	template <typename T = bool> T get_EOF() {
		return ((T (*)(DTDValidatingReader*))(Il2CppBase() + 0x4E1B134))(this);
	}
	template <typename T = bool> T get_IsDefault() {
		return ((T (*)(DTDValidatingReader*))(Il2CppBase() + 0x4E1B168))(this);
	}
	template <typename T = bool> T get_IsEmptyElement() {
		return ((T (*)(DTDValidatingReader*))(Il2CppBase() + 0x4E1B1DC))(this);
	}
	template <typename T = Il2CppString*> T get_Item(Il2CppString* name) {
		return ((T (*)(DTDValidatingReader*, Il2CppString*))(Il2CppBase() + 0x4E1B224))(this, name);
	}
	template <typename T = Il2CppString*> T get_Item_1(Il2CppString* name, Il2CppString* ns) {
		return ((T (*)(DTDValidatingReader*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4E1B234))(this, name, ns);
	}
	template <typename T = int32_t> T get_LineNumber() {
		return ((T (*)(DTDValidatingReader*))(Il2CppBase() + 0x4E1B244))(this);
	}
	template <typename T = int32_t> T get_LinePosition() {
		return ((T (*)(DTDValidatingReader*))(Il2CppBase() + 0x4E1B334))(this);
	}
	template <typename T = Il2CppString*> T get_LocalName() {
		return ((T (*)(DTDValidatingReader*))(Il2CppBase() + 0x4E1B424))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(DTDValidatingReader*))(Il2CppBase() + 0x4E1B570))(this);
	}
	template <typename T = Il2CppString*> T get_NamespaceURI() {
		return ((T (*)(DTDValidatingReader*))(Il2CppBase() + 0x4E1B6BC))(this);
	}
	template <typename T = uintptr_t> T get_NameTable() {
		return ((T (*)(DTDValidatingReader*))(Il2CppBase() + 0x4E1B874))(this);
	}
	template <typename T = uintptr_t> T get_NodeType() {
		return ((T (*)(DTDValidatingReader*))(Il2CppBase() + 0x4E1B8A8))(this);
	}
	template <typename T = uintptr_t> T get_ParserContext() {
		return ((T (*)(DTDValidatingReader*))(Il2CppBase() + 0x4E1A6D8))(this);
	}
	template <typename T = Il2CppString*> T get_Prefix() {
		return ((T (*)(DTDValidatingReader*))(Il2CppBase() + 0x4E1B948))(this);
	}
	template <typename T = uintptr_t> T get_ReadState() {
		return ((T (*)(DTDValidatingReader*))(Il2CppBase() + 0x4E1BA94))(this);
	}
	template <typename T = uintptr_t> T get_SchemaType() {
		return ((T (*)(DTDValidatingReader*))(Il2CppBase() + 0x4E1BB00))(this);
	}
	template <typename T = Il2CppString*> T FilterNormalization(Il2CppString* attrName, Il2CppString* rawValue) {
		return ((T (*)(DTDValidatingReader*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4E1A784))(this, attrName, rawValue);
	}
	template <typename T = Il2CppString*> T get_Value() {
		return ((T (*)(DTDValidatingReader*))(Il2CppBase() + 0x4E1BBAC))(this);
	}
	template <typename T = void> T set_XmlResolver(uintptr_t value) {
		return ((T (*)(DTDValidatingReader*, uintptr_t))(Il2CppBase() + 0x4E1BC54))(this, value);
	}
	template <typename T = uintptr_t> T get_XmlSpace() {
		return ((T (*)(DTDValidatingReader*))(Il2CppBase() + 0x4E1BC68))(this);
	}

};

}
