#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaDatatype
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaDatatype"));
	}

	template <typename T = uintptr_t> T& WhitespaceValue() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& wsChars() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& sb() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& datatypeAnySimpleType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& datatypeString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& datatypeNormalizedString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& datatypeToken() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& datatypeLanguage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& datatypeNMToken() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& datatypeNMTokens() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& datatypeName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& datatypeNCName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& datatypeID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& datatypeIDRef() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& datatypeIDRefs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& datatypeEntity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& datatypeEntities() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& datatypeNotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& datatypeDecimal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& datatypeInteger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& datatypeLong() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& datatypeInt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& datatypeShort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& datatypeByte() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& datatypeNonNegativeInteger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& datatypePositiveInteger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& datatypeUnsignedLong() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& datatypeUnsignedInt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& datatypeUnsignedShort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& datatypeUnsignedByte() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& datatypeNonPositiveInteger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& datatypeNegativeInteger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& datatypeFloat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& datatypeDouble() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& datatypeBase64Binary() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& datatypeBoolean() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& datatypeAnyURI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& datatypeDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& datatypeDateTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& datatypeDate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& datatypeTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& datatypeHexBinary() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& datatypeQName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& datatypeGYearMonth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& datatypeGMonthDay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& datatypeGYear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& datatypeGMonth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& datatypeGDay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& datatypeAnyAtomicType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& datatypeUntypedAtomic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& datatypeDayTimeDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& datatypeYearMonthDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map2A() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map2B() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map2C() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}

	template <typename T = uintptr_t> T get_Whitespace() {
		return ((T (*)(XmlSchemaDatatype*))(Il2CppBase() + 0x2AC9000))(this);
	}
	template <typename T = uintptr_t> T get_TypeCode() {
		return ((T (*)(XmlSchemaDatatype*))(Il2CppBase() + 0x2AC9008))(this);
	}
	template <typename T = uintptr_t> T get_TokenizedType() {
		return ((T (*)(XmlSchemaDatatype*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T ParseValue(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XmlSchemaDatatype*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, s, nameTable, nsmgr);
	}
	template <typename T = uintptr_t> T ParseValueType(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XmlSchemaDatatype*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AC9010))(this, s, nameTable, nsmgr);
	}
	template <typename T = Il2CppString*> T Normalize(Il2CppString* s) {
		return ((T (*)(XmlSchemaDatatype*, Il2CppString*))(Il2CppBase() + 0x2A6DA00))(this, s);
	}
	template <typename T = Il2CppString*> T Normalize_1(Il2CppString* s, uintptr_t whitespaceFacet) {
		return ((T (*)(XmlSchemaDatatype*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x2AC9018))(this, s, whitespaceFacet);
	}
	template <typename T = uintptr_t> static T FromName(uintptr_t qname) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2A75868))(0, qname);
	}
	template <typename T = uintptr_t> static T FromName_1(Il2CppString* localName, Il2CppString* ns) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2A7C6DC))(0, localName, ns);
	}

};

}
