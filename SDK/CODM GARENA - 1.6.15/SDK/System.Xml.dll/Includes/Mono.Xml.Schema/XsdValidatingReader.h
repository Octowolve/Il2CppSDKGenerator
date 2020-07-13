#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdValidatingReader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdValidatingReader"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& emptyAttributeArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& reader() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& resolver() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& sourceReaderSchemaInfo() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& readerLineInfo() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& validationType() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& schemas() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& namespaces() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& validationStarted() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = bool> T& checkIdentity() {
		return *(T*)((uintptr_t)this + 0x2A);
	}
	template <typename T = uintptr_t> T& idManager() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& checkKeyConstraints() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& keyTables() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& currentKeyFieldConsumers() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& tmpKeyrefPool() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& elementQNameStack() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& state() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& skipValidationDepth() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& xsiNilDepth() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& storedCharacters() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& shouldValidateCharacters() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& defaultAttributes() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& currentDefaultAttribute() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& defaultAttributesCache() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& defaultAttributeConsumed() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& currentAttrType() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& ValidationEventHandler() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T get_Context() {
		return ((T (*)(XsdValidatingReader*))(Il2CppBase() + 0x2A71904))(this);
	}
	template <typename T = uintptr_t> T get_CurrentKeyFieldConsumers() {
		return ((T (*)(XsdValidatingReader*))(Il2CppBase() + 0x2A71928))(this);
	}
	template <typename T = int32_t> T get_XsiNilDepth() {
		return ((T (*)(XsdValidatingReader*))(Il2CppBase() + 0x2A719C8))(this);
	}
	template <typename T = void> T set_XmlResolver(uintptr_t value) {
		return ((T (*)(XsdValidatingReader*, uintptr_t))(Il2CppBase() + 0x2A719D0))(this, value);
	}
	template <typename T = void> T set_Schemas(uintptr_t value) {
		return ((T (*)(XsdValidatingReader*, uintptr_t))(Il2CppBase() + 0x2A719D8))(this, value);
	}
	template <typename T = uintptr_t> T get_SchemaType() {
		return ((T (*)(XsdValidatingReader*))(Il2CppBase() + 0x2A71A98))(this);
	}
	template <typename T = uintptr_t> T get_SourceReaderSchemaType() {
		return ((T (*)(XsdValidatingReader*))(Il2CppBase() + 0x2A71D88))(this);
	}
	template <typename T = uintptr_t> T get_ValidationType() {
		return ((T (*)(XsdValidatingReader*))(Il2CppBase() + 0x2A71E98))(this);
	}
	template <typename T = void> T set_ValidationType(uintptr_t value) {
		return ((T (*)(XsdValidatingReader*, uintptr_t))(Il2CppBase() + 0x2A71EA0))(this, value);
	}
	template <typename T = int32_t> T get_AttributeCount() {
		return ((T (*)(XsdValidatingReader*))(Il2CppBase() + 0x2A71F60))(this);
	}
	template <typename T = Il2CppString*> T get_BaseURI() {
		return ((T (*)(XsdValidatingReader*))(Il2CppBase() + 0x2A71FA8))(this);
	}
	template <typename T = bool> T get_CanResolveEntity() {
		return ((T (*)(XsdValidatingReader*))(Il2CppBase() + 0x2A71FDC))(this);
	}
	template <typename T = int32_t> T get_Depth() {
		return ((T (*)(XsdValidatingReader*))(Il2CppBase() + 0x2A72010))(this);
	}
	template <typename T = bool> T get_EOF() {
		return ((T (*)(XsdValidatingReader*))(Il2CppBase() + 0x2A72084))(this);
	}
	template <typename T = bool> T get_IsDefault() {
		return ((T (*)(XsdValidatingReader*))(Il2CppBase() + 0x2A720B8))(this);
	}
	template <typename T = bool> T get_IsEmptyElement() {
		return ((T (*)(XsdValidatingReader*))(Il2CppBase() + 0x2A72100))(this);
	}
	template <typename T = Il2CppString*> T get_Item(Il2CppString* name) {
		return ((T (*)(XsdValidatingReader*, Il2CppString*))(Il2CppBase() + 0x2A72148))(this, name);
	}
	template <typename T = Il2CppString*> T get_Item_1(Il2CppString* localName, Il2CppString* ns) {
		return ((T (*)(XsdValidatingReader*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2A72158))(this, localName, ns);
	}
	template <typename T = int32_t> T get_LineNumber() {
		return ((T (*)(XsdValidatingReader*))(Il2CppBase() + 0x2A72168))(this);
	}
	template <typename T = int32_t> T get_LinePosition() {
		return ((T (*)(XsdValidatingReader*))(Il2CppBase() + 0x2A72258))(this);
	}
	template <typename T = Il2CppString*> T get_LocalName() {
		return ((T (*)(XsdValidatingReader*))(Il2CppBase() + 0x2A72348))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(XsdValidatingReader*))(Il2CppBase() + 0x2A7248C))(this);
	}
	template <typename T = Il2CppString*> T get_NamespaceURI() {
		return ((T (*)(XsdValidatingReader*))(Il2CppBase() + 0x2A726D4))(this);
	}
	template <typename T = uintptr_t> T get_NameTable() {
		return ((T (*)(XsdValidatingReader*))(Il2CppBase() + 0x2A72810))(this);
	}
	template <typename T = uintptr_t> T get_NodeType() {
		return ((T (*)(XsdValidatingReader*))(Il2CppBase() + 0x2A72844))(this);
	}
	template <typename T = uintptr_t> T get_ParserContext() {
		return ((T (*)(XsdValidatingReader*))(Il2CppBase() + 0x2A72898))(this);
	}
	template <typename T = uintptr_t> T get_NamespaceManager() {
		return ((T (*)(XsdValidatingReader*))(Il2CppBase() + 0x2A72944))(this);
	}
	template <typename T = Il2CppString*> T get_Prefix() {
		return ((T (*)(XsdValidatingReader*))(Il2CppBase() + 0x2A7298C))(this);
	}
	template <typename T = uintptr_t> T get_ReadState() {
		return ((T (*)(XsdValidatingReader*))(Il2CppBase() + 0x2A72B50))(this);
	}
	template <typename T = Il2CppString*> T get_Value() {
		return ((T (*)(XsdValidatingReader*))(Il2CppBase() + 0x2A72B84))(this);
	}
	template <typename T = uintptr_t> T get_XmlSpace() {
		return ((T (*)(XsdValidatingReader*))(Il2CppBase() + 0x2A72C50))(this);
	}
	template <typename T = void> T HandleError(Il2CppString* error) {
		return ((T (*)(XsdValidatingReader*, Il2CppString*))(Il2CppBase() + 0x2A73018))(this, error);
	}
	template <typename T = void> T HandleError_1(Il2CppString* error, uintptr_t innerException) {
		return ((T (*)(XsdValidatingReader*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x2A73038))(this, error, innerException);
	}
	template <typename T = void> T HandleError_2(Il2CppString* error, uintptr_t innerException, bool isWarning) {
		return ((T (*)(XsdValidatingReader*, Il2CppString*, uintptr_t, bool))(Il2CppBase() + 0x2A73054))(this, error, innerException, isWarning);
	}
	template <typename T = void> T HandleError_3(uintptr_t schemaException) {
		return ((T (*)(XsdValidatingReader*, uintptr_t))(Il2CppBase() + 0x2A7326C))(this, schemaException);
	}
	template <typename T = void> T HandleError_4(uintptr_t schemaException, bool isWarning) {
		return ((T (*)(XsdValidatingReader*, uintptr_t, bool))(Il2CppBase() + 0x2A73148))(this, schemaException, isWarning);
	}
	template <typename T = uintptr_t> T FindElement(Il2CppString* name, Il2CppString* ns) {
		return ((T (*)(XsdValidatingReader*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2A73404))(this, name, ns);
	}
	template <typename T = uintptr_t> T FindType(uintptr_t qname) {
		return ((T (*)(XsdValidatingReader*, uintptr_t))(Il2CppBase() + 0x2A734FC))(this, qname);
	}
	template <typename T = void> T ValidateStartElementParticle() {
		return ((T (*)(XsdValidatingReader*))(Il2CppBase() + 0x2A735B4))(this);
	}
	template <typename T = void> T ValidateEndElementParticle() {
		return ((T (*)(XsdValidatingReader*))(Il2CppBase() + 0x2A738FC))(this);
	}
	template <typename T = void> T ValidateCharacters() {
		return ((T (*)(XsdValidatingReader*))(Il2CppBase() + 0x2A73AC4))(this);
	}
	template <typename T = void> T ValidateEndSimpleContent() {
		return ((T (*)(XsdValidatingReader*))(Il2CppBase() + 0x2A73BE0))(this);
	}
	template <typename T = void> T ValidateEndSimpleContentCore() {
		return ((T (*)(XsdValidatingReader*))(Il2CppBase() + 0x2A73C2C))(this);
	}
	template <typename T = void> T AssessStringValid(uintptr_t st, uintptr_t dt, Il2CppString* value) {
		return ((T (*)(XsdValidatingReader*, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2A74260))(this, st, dt, value);
	}
	template <typename T = void> T ValidateRestrictedSimpleTypeValue(uintptr_t st, uintptr_t dt, Il2CppString* normalized) {
		return ((T (*)(XsdValidatingReader*, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2A7499C))(this, st, dt, normalized);
	}
	template <typename T = uintptr_t> T GetXsiType(Il2CppString* name) {
		return ((T (*)(XsdValidatingReader*, Il2CppString*))(Il2CppBase() + 0x2A75254))(this, name);
	}
	template <typename T = void> T AssessLocalTypeDerivationOK(uintptr_t xsiType, uintptr_t baseType, uintptr_t flag) {
		return ((T (*)(XsdValidatingReader*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2A75940))(this, xsiType, baseType, flag);
	}
	template <typename T = void> T AssessStartElementSchemaValidity() {
		return ((T (*)(XsdValidatingReader*))(Il2CppBase() + 0x2A760A4))(this);
	}
	template <typename T = void> T AssessElementLocallyValidElement(Il2CppString* xsiNilValue) {
		return ((T (*)(XsdValidatingReader*, Il2CppString*))(Il2CppBase() + 0x2A77154))(this, xsiNilValue);
	}
	template <typename T = void> T AssessStartElementLocallyValidType(uintptr_t schemaType) {
		return ((T (*)(XsdValidatingReader*, uintptr_t))(Il2CppBase() + 0x2A76B04))(this, schemaType);
	}
	template <typename T = void> T AssessElementLocallyValidComplexType(uintptr_t cType) {
		return ((T (*)(XsdValidatingReader*, uintptr_t))(Il2CppBase() + 0x2A77EC4))(this, cType);
	}
	template <typename T = void> T AssessAttributeLocallyValid(uintptr_t attr) {
		return ((T (*)(XsdValidatingReader*, uintptr_t))(Il2CppBase() + 0x2A78A9C))(this, attr);
	}
	template <typename T = void> T AssessAttributeLocallyValidUse(uintptr_t attr) {
		return ((T (*)(XsdValidatingReader*, uintptr_t))(Il2CppBase() + 0x2A78980))(this, attr);
	}
	template <typename T = void> T AssessEndElementSchemaValidity() {
		return ((T (*)(XsdValidatingReader*))(Il2CppBase() + 0x2A791A0))(this);
	}
	template <typename T = void> T ValidateEndElementKeyConstraints() {
		return ((T (*)(XsdValidatingReader*))(Il2CppBase() + 0x2A79204))(this);
	}
	template <typename T = void> T ValidateKeySelectors() {
		return ((T (*)(XsdValidatingReader*))(Il2CppBase() + 0x2A778F4))(this);
	}
	template <typename T = void> T ValidateKeyFields() {
		return ((T (*)(XsdValidatingReader*))(Il2CppBase() + 0x2A77C80))(this);
	}
	template <typename T = void> T ProcessKeyEntry(uintptr_t entry) {
		return ((T (*)(XsdValidatingReader*, uintptr_t))(Il2CppBase() + 0x2A79CE0))(this, entry);
	}
	template <typename T = uintptr_t> T CreateNewKeyTable(uintptr_t ident) {
		return ((T (*)(XsdValidatingReader*, uintptr_t))(Il2CppBase() + 0x2A79BF8))(this, ident);
	}
	template <typename T = void> T ValidateSimpleContentIdentity(uintptr_t dt, Il2CppString* value) {
		return ((T (*)(XsdValidatingReader*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2A74444))(this, dt, value);
	}
	template <typename T = void> T EndIdentityValidation(uintptr_t seq) {
		return ((T (*)(XsdValidatingReader*, uintptr_t))(Il2CppBase() + 0x2A79648))(this, seq);
	}
	template <typename T = void> T EndKeyrefValidation(uintptr_t seq, uintptr_t targetIdent) {
		return ((T (*)(XsdValidatingReader*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2A7A3EC))(this, seq, targetIdent);
	}
	template <typename T = void> T Close() {
		return ((T (*)(XsdValidatingReader*))(Il2CppBase() + 0x2A7AA90))(this);
	}
	template <typename T = Il2CppString*> T GetAttribute(Il2CppString* name) {
		return ((T (*)(XsdValidatingReader*, Il2CppString*))(Il2CppBase() + 0x2A7AAC4))(this, name);
	}
	template <typename T = uintptr_t> T SplitQName(Il2CppString* name) {
		return ((T (*)(XsdValidatingReader*, Il2CppString*))(Il2CppBase() + 0x2A7AB9C))(this, name);
	}
	template <typename T = Il2CppString*> T GetAttribute_1(Il2CppString* localName, Il2CppString* ns) {
		return ((T (*)(XsdValidatingReader*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2A7AE20))(this, localName, ns);
	}
	template <typename T = Il2CppString*> T GetDefaultAttribute(Il2CppString* localName, Il2CppString* ns) {
		return ((T (*)(XsdValidatingReader*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2A7AD80))(this, localName, ns);
	}
	template <typename T = int32_t> T FindDefaultAttribute(Il2CppString* localName, Il2CppString* ns) {
		return ((T (*)(XsdValidatingReader*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2A72E6C))(this, localName, ns);
	}
	template <typename T = bool> T HasLineInfo() {
		return ((T (*)(XsdValidatingReader*))(Il2CppBase() + 0x2A7AED0))(this);
	}
	template <typename T = Il2CppString*> T LookupNamespace(Il2CppString* prefix) {
		return ((T (*)(XsdValidatingReader*, Il2CppString*))(Il2CppBase() + 0x2A7AFBC))(this, prefix);
	}
	template <typename T = void> T MoveToAttribute(int32_t i) {
		return ((T (*)(XsdValidatingReader*, int32_t))(Il2CppBase() + 0x2A7AFF0))(this, i);
	}
	template <typename T = bool> T MoveToAttribute_1(Il2CppString* name) {
		return ((T (*)(XsdValidatingReader*, Il2CppString*))(Il2CppBase() + 0x2A7B1E4))(this, name);
	}
	template <typename T = bool> T MoveToAttribute_2(Il2CppString* localName, Il2CppString* ns) {
		return ((T (*)(XsdValidatingReader*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2A7B2EC))(this, localName, ns);
	}
	template <typename T = bool> T MoveToDefaultAttribute(Il2CppString* localName, Il2CppString* ns) {
		return ((T (*)(XsdValidatingReader*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2A7B2BC))(this, localName, ns);
	}
	template <typename T = bool> T MoveToElement() {
		return ((T (*)(XsdValidatingReader*))(Il2CppBase() + 0x2A7B3D0))(this);
	}
	template <typename T = bool> T MoveToFirstAttribute() {
		return ((T (*)(XsdValidatingReader*))(Il2CppBase() + 0x2A7B418))(this);
	}
	template <typename T = bool> T MoveToNextAttribute() {
		return ((T (*)(XsdValidatingReader*))(Il2CppBase() + 0x2A7B510))(this);
	}
	template <typename T = uintptr_t> T ReadExternalSchema(Il2CppString* uri) {
		return ((T (*)(XsdValidatingReader*, Il2CppString*))(Il2CppBase() + 0x2A7B610))(this, uri);
	}
	template <typename T = void> T ExamineAdditionalSchema() {
		return ((T (*)(XsdValidatingReader*))(Il2CppBase() + 0x2A7BD94))(this);
	}
	template <typename T = bool> T Read() {
		return ((T (*)(XsdValidatingReader*))(Il2CppBase() + 0x2A7E2A4))(this);
	}
	template <typename T = bool> T ReadAttributeValue() {
		return ((T (*)(XsdValidatingReader*))(Il2CppBase() + 0x2A7E990))(this);
	}
	template <typename T = void> T ResolveEntity() {
		return ((T (*)(XsdValidatingReader*))(Il2CppBase() + 0x2A7E9F0))(this);
	}

};

}
