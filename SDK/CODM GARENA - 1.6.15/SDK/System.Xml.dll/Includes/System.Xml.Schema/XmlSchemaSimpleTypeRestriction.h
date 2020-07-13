#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaSimpleTypeRestriction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaSimpleTypeRestriction"));
	}

	template <typename T = uintptr_t> T& baseType() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& baseTypeName() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& facets() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& enumarationFacetValues() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& patternFacetValues() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& rexPatterns() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& lengthFacet() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& maxLengthFacet() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& minLengthFacet() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& fractionDigitsFacet() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& totalDigitsFacet() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& maxInclusiveFacet() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& maxExclusiveFacet() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& minInclusiveFacet() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& minExclusiveFacet() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& fixedFacets() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> static T& lengthStyle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& listFacets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T get_BaseTypeName() {
		return ((T (*)(XmlSchemaSimpleTypeRestriction*))(Il2CppBase() + 0x37AD2E0))(this);
	}
	template <typename T = uintptr_t> T get_BaseType() {
		return ((T (*)(XmlSchemaSimpleTypeRestriction*))(Il2CppBase() + 0x37AD2E8))(this);
	}
	template <typename T = uintptr_t> T get_Facets() {
		return ((T (*)(XmlSchemaSimpleTypeRestriction*))(Il2CppBase() + 0x37A77EC))(this);
	}
	template <typename T = void> T SetParent(uintptr_t parent) {
		return ((T (*)(XmlSchemaSimpleTypeRestriction*, uintptr_t))(Il2CppBase() + 0x37AD2F0))(this, parent);
	}
	template <typename T = int32_t> T Compile(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaSimpleTypeRestriction*, uintptr_t, uintptr_t))(Il2CppBase() + 0x37AD4DC))(this, h, schema);
	}
	template <typename T = bool> T IsAllowedFacet(uintptr_t xsf) {
		return ((T (*)(XmlSchemaSimpleTypeRestriction*, uintptr_t))(Il2CppBase() + 0x37AD8D0))(this, xsf);
	}
	template <typename T = int32_t> T Validate(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaSimpleTypeRestriction*, uintptr_t, uintptr_t))(Il2CppBase() + 0x37ADC1C))(this, h, schema);
	}
	template <typename T = void> T ValidateActualType(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaSimpleTypeRestriction*, uintptr_t, uintptr_t))(Il2CppBase() + 0x37AED34))(this, h, schema);
	}
	template <typename T = uintptr_t> T GetActualType(uintptr_t h, uintptr_t schema, bool validate) {
		return ((T (*)(XmlSchemaSimpleTypeRestriction*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x37A6F0C))(this, h, schema, validate);
	}
	template <typename T = void> T checkTotalDigitsFacet(uintptr_t totf, uintptr_t h) {
		return ((T (*)(XmlSchemaSimpleTypeRestriction*, uintptr_t, uintptr_t))(Il2CppBase() + 0x37B16A4))(this, totf, h);
	}
	template <typename T = void> T checkFractionDigitsFacet(uintptr_t fracf, uintptr_t h) {
		return ((T (*)(XmlSchemaSimpleTypeRestriction*, uintptr_t, uintptr_t))(Il2CppBase() + 0x37B0E44))(this, fracf, h);
	}
	template <typename T = void> T checkMinMaxFacet(uintptr_t facet, uintptr_t baseFacet, uintptr_t h) {
		return ((T (*)(XmlSchemaSimpleTypeRestriction*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x37B0AA0))(this, facet, baseFacet, h);
	}
	template <typename T = void> T checkLengthFacet(uintptr_t lf, uintptr_t facetsDefined, uintptr_t h) {
		return ((T (*)(XmlSchemaSimpleTypeRestriction*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x37AED50))(this, lf, facetsDefined, h);
	}
	template <typename T = void> T checkMaxLengthFacet(uintptr_t maxlf, uintptr_t facetsDefined, uintptr_t h) {
		return ((T (*)(XmlSchemaSimpleTypeRestriction*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x37AF1E0))(this, maxlf, facetsDefined, h);
	}
	template <typename T = void> T checkMinLengthFacet(uintptr_t minlf, uintptr_t facetsDefined, uintptr_t h) {
		return ((T (*)(XmlSchemaSimpleTypeRestriction*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x37AFE54))(this, minlf, facetsDefined, h);
	}
	template <typename T = uintptr_t> T getDatatype() {
		return ((T (*)(XmlSchemaSimpleTypeRestriction*))(Il2CppBase() + 0x37B219C))(this);
	}
	template <typename T = uintptr_t> T ValidateValueWithDatatype(Il2CppString* value) {
		return ((T (*)(XmlSchemaSimpleTypeRestriction*, Il2CppString*))(Il2CppBase() + 0x37B1F04))(this, value);
	}
	template <typename T = bool> T ValidateValueWithFacets(Il2CppString* value, uintptr_t nt, uintptr_t nsmgr) {
		return ((T (*)(XmlSchemaSimpleTypeRestriction*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x37B235C))(this, value, nt, nsmgr);
	}
	template <typename T = bool> T ValidateListValueWithFacets(Il2CppString* value, uintptr_t nt, uintptr_t nsmgr) {
		return ((T (*)(XmlSchemaSimpleTypeRestriction*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x37B24A0))(this, value, nt, nsmgr);
	}
	template <typename T = bool> T ValidateListValueWithFacetsCore(Il2CppString* value, uintptr_t nt, uintptr_t nsmgr) {
		return ((T (*)(XmlSchemaSimpleTypeRestriction*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x37B26F0))(this, value, nt, nsmgr);
	}
	template <typename T = bool> T ValidateNonListValueWithFacets(Il2CppString* value, uintptr_t nt, uintptr_t nsmgr) {
		return ((T (*)(XmlSchemaSimpleTypeRestriction*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x37B25C8))(this, value, nt, nsmgr);
	}
	template <typename T = bool> T ValidateNonListValueWithFacetsCore(Il2CppString* value, uintptr_t nt, uintptr_t nsmgr) {
		return ((T (*)(XmlSchemaSimpleTypeRestriction*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x37B3DE0))(this, value, nt, nsmgr);
	}
	template <typename T = uintptr_t> static T Read(uintptr_t reader, uintptr_t h) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x37A8E8C))(0, reader, h);
	}

};

}
