#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaElement
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaElement"));
	}

	template <typename T = uintptr_t> T& block() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& constraints() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppString*> T& defaultValue() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& elementType() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& elementSchemaType() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& final() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppString*> T& fixedValue() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& form() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = bool> T& isAbstract() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = bool> T& isNillable() {
		return *(T*)((uintptr_t)this + 0xE1);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& refName() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& schemaType() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& schemaTypeName() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& substitutionGroup() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& schema() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = bool> T& parentIsSchema() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& qName() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& blockResolved() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& finalResolved() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& referencedElement() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& substitutingElements() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& substitutionGroupElement() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = bool> T& actualIsAbstract() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = bool> T& actualIsNillable() {
		return *(T*)((uintptr_t)this + 0x119);
	}
	template <typename T = Il2CppString*> T& validatedDefaultValue() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = Il2CppString*> T& validatedFixedValue() {
		return *(T*)((uintptr_t)this + 0x120);
	}

	template <typename T = void> T InitPostCompileInformations() {
		return ((T (*)(XmlSchemaElement*))(Il2CppBase() + 0x2AC9510))(this);
	}
	template <typename T = bool> T get_IsAbstract() {
		return ((T (*)(XmlSchemaElement*))(Il2CppBase() + 0x2AC961C))(this);
	}
	template <typename T = void> T set_IsAbstract(bool value) {
		return ((T (*)(XmlSchemaElement*, bool))(Il2CppBase() + 0x2AC9624))(this, value);
	}
	template <typename T = void> T set_Final(uintptr_t value) {
		return ((T (*)(XmlSchemaElement*, uintptr_t))(Il2CppBase() + 0x2AC962C))(this, value);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(XmlSchemaElement*, Il2CppString*))(Il2CppBase() + 0x2AC9634))(this, value);
	}
	template <typename T = bool> T get_IsNillable() {
		return ((T (*)(XmlSchemaElement*))(Il2CppBase() + 0x2AC963C))(this);
	}
	template <typename T = void> T set_IsNillable(bool value) {
		return ((T (*)(XmlSchemaElement*, bool))(Il2CppBase() + 0x2AC9644))(this, value);
	}
	template <typename T = uintptr_t> T get_RefName() {
		return ((T (*)(XmlSchemaElement*))(Il2CppBase() + 0x2AC964C))(this);
	}
	template <typename T = uintptr_t> T get_SubstitutionGroup() {
		return ((T (*)(XmlSchemaElement*))(Il2CppBase() + 0x2AC9654))(this);
	}
	template <typename T = uintptr_t> T get_SchemaTypeName() {
		return ((T (*)(XmlSchemaElement*))(Il2CppBase() + 0x2AC965C))(this);
	}
	template <typename T = void> T set_SchemaTypeName(uintptr_t value) {
		return ((T (*)(XmlSchemaElement*, uintptr_t))(Il2CppBase() + 0x2AC9664))(this, value);
	}
	template <typename T = uintptr_t> T get_SchemaType() {
		return ((T (*)(XmlSchemaElement*))(Il2CppBase() + 0x2AC966C))(this);
	}
	template <typename T = void> T set_SchemaType(uintptr_t value) {
		return ((T (*)(XmlSchemaElement*, uintptr_t))(Il2CppBase() + 0x2AC9674))(this, value);
	}
	template <typename T = uintptr_t> T get_Constraints() {
		return ((T (*)(XmlSchemaElement*))(Il2CppBase() + 0x2A79BF0))(this);
	}
	template <typename T = uintptr_t> T get_QualifiedName() {
		return ((T (*)(XmlSchemaElement*))(Il2CppBase() + 0x2AA4514))(this);
	}
	template <typename T = uintptr_t> T get_ElementType() {
		return ((T (*)(XmlSchemaElement*))(Il2CppBase() + 0x2A76ACC))(this);
	}
	template <typename T = uintptr_t> T get_BlockResolved() {
		return ((T (*)(XmlSchemaElement*))(Il2CppBase() + 0x2A76AE4))(this);
	}
	template <typename T = uintptr_t> T get_FinalResolved() {
		return ((T (*)(XmlSchemaElement*))(Il2CppBase() + 0x2AC967C))(this);
	}
	template <typename T = bool> T get_ActualIsNillable() {
		return ((T (*)(XmlSchemaElement*))(Il2CppBase() + 0x2A77EAC))(this);
	}
	template <typename T = bool> T get_ActualIsAbstract() {
		return ((T (*)(XmlSchemaElement*))(Il2CppBase() + 0x2A77E94))(this);
	}
	template <typename T = Il2CppString*> T get_ValidatedDefaultValue() {
		return ((T (*)(XmlSchemaElement*))(Il2CppBase() + 0x2A74228))(this);
	}
	template <typename T = Il2CppString*> T get_ValidatedFixedValue() {
		return ((T (*)(XmlSchemaElement*))(Il2CppBase() + 0x2A74248))(this);
	}
	template <typename T = uintptr_t> T get_SubstitutingElements() {
		return ((T (*)(XmlSchemaElement*))(Il2CppBase() + 0x2AC9694))(this);
	}
	template <typename T = void> T SetParent(uintptr_t parent) {
		return ((T (*)(XmlSchemaElement*, uintptr_t))(Il2CppBase() + 0x2AC96AC))(this, parent);
	}
	template <typename T = int32_t> T Compile(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaElement*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AC98B0))(this, h, schema);
	}
	template <typename T = uintptr_t> T GetOptimizedParticle(bool isTop) {
		return ((T (*)(XmlSchemaElement*, bool))(Il2CppBase() + 0x2ACB46C))(this, isTop);
	}
	template <typename T = void> T AddSubstElementRecursively(uintptr_t col, uintptr_t el) {
		return ((T (*)(XmlSchemaElement*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2ACB9D4))(this, col, el);
	}
	template <typename T = void> T FillSubstitutionElementInfo() {
		return ((T (*)(XmlSchemaElement*))(Il2CppBase() + 0x2ACBB8C))(this);
	}
	template <typename T = int32_t> T Validate(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaElement*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2ACBCB8))(this, h, schema);
	}
	template <typename T = bool> T ParticleEquals(uintptr_t other) {
		return ((T (*)(XmlSchemaElement*, uintptr_t))(Il2CppBase() + 0x2ACCF40))(this, other);
	}
	template <typename T = bool> T ValidateDerivationByRestriction(uintptr_t baseParticle, uintptr_t h, uintptr_t schema, bool raiseError) {
		return ((T (*)(XmlSchemaElement*, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x2ACD790))(this, baseParticle, h, schema, raiseError);
	}
	template <typename T = bool> T ValidateDerivationByRestrictionNameAndTypeOK(uintptr_t baseElement, uintptr_t h, uintptr_t schema, bool raiseError) {
		return ((T (*)(XmlSchemaElement*, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x2ACDA9C))(this, baseElement, h, schema, raiseError);
	}
	template <typename T = void> T CheckRecursion(int32_t depth, uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaElement*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2ACDFD4))(this, depth, h, schema);
	}
	template <typename T = void> T ValidateUniqueParticleAttribution(uintptr_t qnames, uintptr_t nsNames, uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaElement*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2ACE0D4))(this, qnames, nsNames, h, schema);
	}
	template <typename T = void> T ValidateUniqueTypeAttribution(uintptr_t labels, uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaElement*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2ACEC28))(this, labels, h, schema);
	}
	template <typename T = void> T ValidateElementDefaultValidImmediate(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaElement*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2ACCA84))(this, h, schema);
	}
	template <typename T = uintptr_t> static T Read(uintptr_t reader, uintptr_t h) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AAC8C0))(0, reader, h);
	}

};

}
