#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaSimpleType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaSimpleType"));
	}

	template <typename T = uintptr_t> static T& schemaLocationType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& content() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& islocal() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& recursed() {
		return *(T*)((uintptr_t)this + 0x89);
	}
	template <typename T = uintptr_t> T& variety() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> static T& XsAnySimpleType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& XsString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& XsBoolean() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& XsDecimal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& XsFloat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& XsDouble() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& XsDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& XsDateTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& XsTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& XsDate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& XsGYearMonth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& XsGYear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& XsGMonthDay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& XsGDay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& XsGMonth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& XsHexBinary() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& XsBase64Binary() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& XsAnyUri() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& XsQName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& XsNotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& XsNormalizedString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& XsToken() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& XsLanguage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& XsNMToken() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& XsNMTokens() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& XsName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& XsNCName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& XsID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& XsIDRef() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& XsIDRefs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& XsEntity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& XsEntities() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& XsInteger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& XsNonPositiveInteger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& XsNegativeInteger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& XsLong() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& XsInt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& XsShort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& XsByte() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& XsNonNegativeInteger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& XsUnsignedLong() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& XsUnsignedInt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& XsUnsignedShort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& XsUnsignedByte() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& XsPositiveInteger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& XdtUntypedAtomic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& XdtAnyAtomicType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& XdtYearMonthDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& XdtDayTimeDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}

	template <typename T = uintptr_t> static T BuildSchemaType(Il2CppString* name, Il2CppString* baseName) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x37A4848))(0, name, baseName);
	}
	template <typename T = uintptr_t> static T BuildSchemaType_1(Il2CppString* name, Il2CppString* baseName, bool xdt, bool baseXdt) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, bool, bool))(Il2CppBase() + 0x37A4904))(0, name, baseName, xdt, baseXdt);
	}
	template <typename T = uintptr_t> static T get_AnySimpleType() {
		return ((T (*)(void *))(Il2CppBase() + 0x37A6518))(0);
	}
	template <typename T = uintptr_t> T get_Content() {
		return ((T (*)(XmlSchemaSimpleType*))(Il2CppBase() + 0x37A65B8))(this);
	}
	template <typename T = void> T set_Content(uintptr_t value) {
		return ((T (*)(XmlSchemaSimpleType*, uintptr_t))(Il2CppBase() + 0x37A4840))(this, value);
	}
	template <typename T = uintptr_t> T get_Variety() {
		return ((T (*)(XmlSchemaSimpleType*))(Il2CppBase() + 0x37A65C0))(this);
	}
	template <typename T = void> T SetParent(uintptr_t parent) {
		return ((T (*)(XmlSchemaSimpleType*, uintptr_t))(Il2CppBase() + 0x37A65C8))(this, parent);
	}
	template <typename T = int32_t> T Compile(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaSimpleType*, uintptr_t, uintptr_t))(Il2CppBase() + 0x37A65F0))(this, h, schema);
	}
	template <typename T = void> T CollectBaseType(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaSimpleType*, uintptr_t, uintptr_t))(Il2CppBase() + 0x37A6D0C))(this, h, schema);
	}
	template <typename T = int32_t> T Validate(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaSimpleType*, uintptr_t, uintptr_t))(Il2CppBase() + 0x37A73D0))(this, h, schema);
	}
	template <typename T = void> T ValidateDerivationValid(uintptr_t baseType, uintptr_t facets, uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaSimpleType*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x37A77F4))(this, baseType, facets, h, schema);
	}
	template <typename T = bool> T ValidateTypeDerivationOK(uintptr_t baseType, uintptr_t h, uintptr_t schema, bool raiseError) {
		return ((T (*)(XmlSchemaSimpleType*, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x37A7ED0))(this, baseType, h, schema, raiseError);
	}
	template <typename T = uintptr_t> static T Read(uintptr_t reader, uintptr_t h) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x379502C))(0, reader, h);
	}

};

}
