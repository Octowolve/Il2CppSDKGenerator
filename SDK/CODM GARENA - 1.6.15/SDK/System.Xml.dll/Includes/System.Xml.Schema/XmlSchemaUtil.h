#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaUtil"));
	}

	template <typename T = uintptr_t> static T& FinalAllowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ElementBlockAllowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& ComplexTypeBlockAllowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = bool> static T& StrictMsCompliant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map36() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map37() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map38() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map39() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map3A() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map3B() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> static T AddToTable(uintptr_t table, uintptr_t obj, uintptr_t qname, uintptr_t h) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x37B824C))(0, table, obj, qname, h);
	}
	template <typename T = void> static T CompileID(Il2CppString* id, uintptr_t xso, uintptr_t idCollection, uintptr_t h) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x378DC94))(0, id, xso, idCollection, h);
	}
	template <typename T = bool> static T CheckAnyUri(Il2CppString* uri) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x378DBF4))(0, uri);
	}
	template <typename T = bool> static T CheckNormalizedString(Il2CppString* token) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x37B8590))(0, token);
	}
	template <typename T = bool> static T CheckNCName(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x378D828))(0, name);
	}
	template <typename T = bool> static T CheckQName(uintptr_t qname) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x37A0780))(0, qname);
	}
	template <typename T = uintptr_t> static T GetParserContext(uintptr_t reader) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x37B8708))(0, reader);
	}
	template <typename T = bool> static T IsBuiltInDatatypeName(uintptr_t qname) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x37A0C10))(0, qname);
	}
	template <typename T = bool> static T AreSchemaDatatypeEqual(uintptr_t st1, uintptr_t v1, uintptr_t st2, uintptr_t v2) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x37B2FDC))(0, st1, v1, st2, v2);
	}
	template <typename T = bool> static T IsValidQName(Il2CppString* qname) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x37B8814))(0, qname);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T SplitList(Il2CppString* list) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x37B5F38))(0, list);
	}
	template <typename T = void> static T ReadUnhandledAttribute(uintptr_t reader, uintptr_t xso) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x378EBBC))(0, reader, xso);
	}
	template <typename T = void> static T ParseWsdlArrayType(uintptr_t reader, uintptr_t attr) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x37B8AAC))(0, reader, attr);
	}
	template <typename T = bool> static T ReadBoolAttribute(uintptr_t reader, uintptr_t* innerExcpetion) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x37B6710))(0, reader, innerExcpetion);
	}
	template <typename T = uintptr_t> static T ReadDerivationAttribute(uintptr_t reader, uintptr_t* innerExcpetion, Il2CppString* name, uintptr_t allowed) {
		return ((T (*)(void *, uintptr_t, uintptr_t*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x37A82C8))(0, reader, innerExcpetion, name, allowed);
	}
	template <typename T = uintptr_t> static T AddFlag(uintptr_t dst, uintptr_t add, uintptr_t allowed) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x37B93F4))(0, dst, add, allowed);
	}
	template <typename T = uintptr_t> static T ReadFormAttribute(uintptr_t reader, uintptr_t* innerExcpetion) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x37B95A0))(0, reader, innerExcpetion);
	}
	template <typename T = uintptr_t> static T ReadProcessingAttribute(uintptr_t reader, uintptr_t* innerExcpetion) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x37B9878))(0, reader, innerExcpetion);
	}
	template <typename T = uintptr_t> static T ReadUseAttribute(uintptr_t reader, uintptr_t* innerExcpetion) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x37B9B7C))(0, reader, innerExcpetion);
	}
	template <typename T = uintptr_t> static T ReadQNameAttribute(uintptr_t reader, uintptr_t* innerEx) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x37A1698))(0, reader, innerEx);
	}
	template <typename T = uintptr_t> static T ToQName(uintptr_t reader, Il2CppString* qnamestr, uintptr_t* innerEx) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x37B62E0))(0, reader, qnamestr, innerEx);
	}
	template <typename T = int32_t> static T ValidateAttributesResolved(uintptr_t attributesResolved, uintptr_t h, uintptr_t schema, uintptr_t attributes, uintptr_t anyAttribute, uintptr_t anyAttributeUse, uintptr_t redefined, bool skipEquivalent) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x37B9E68))(0, attributesResolved, h, schema, attributes, anyAttribute, anyAttributeUse, redefined, skipEquivalent);
	}
	template <typename T = bool> static T AreAttributesEqual(uintptr_t one, uintptr_t another) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x37BB0F4))(0, one, another);
	}
	template <typename T = uintptr_t> static T FindAttributeDeclaration(Il2CppString* ns, uintptr_t schemas, uintptr_t cType, uintptr_t qname) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x37BB2C4))(0, ns, schemas, cType, qname);
	}
	template <typename T = bool> static T AttributeWildcardItemValid(uintptr_t anyAttr, uintptr_t qname, Il2CppString* ns) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x37BB4BC))(0, anyAttr, qname, ns);
	}

};

}
