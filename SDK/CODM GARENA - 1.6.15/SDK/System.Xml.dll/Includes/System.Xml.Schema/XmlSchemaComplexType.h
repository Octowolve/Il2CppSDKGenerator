#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaComplexType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaComplexType"));
	}

	template <typename T = uintptr_t> T& anyAttribute() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& attributes() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& attributeUses() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& attributeWildcard() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& block() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& blockResolved() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& contentModel() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& validatableParticle() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& contentTypeParticle() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = bool> T& isAbstract() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& isMixed() {
		return *(T*)((uintptr_t)this + 0xA9);
	}
	template <typename T = uintptr_t> T& particle() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& resolvedContentType() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& ValidatedIsAbstract() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> static T& anyType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& AnyTypeName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> T& CollectProcessId() {
		return *(T*)((uintptr_t)this + 0xB8);
	}

	template <typename T = bool> T get_ParentIsSchema() {
		return ((T (*)(XmlSchemaComplexType*))(Il2CppBase() + 0x2AC2958))(this);
	}
	template <typename T = uintptr_t> static T get_AnyType() {
		return ((T (*)(void *))(Il2CppBase() + 0x2A7544C))(0);
	}
	template <typename T = bool> T get_IsAbstract() {
		return ((T (*)(XmlSchemaComplexType*))(Il2CppBase() + 0x2A76AFC))(this);
	}
	template <typename T = void> T set_IsAbstract(bool value) {
		return ((T (*)(XmlSchemaComplexType*, bool))(Il2CppBase() + 0x2AC2A1C))(this, value);
	}
	template <typename T = uintptr_t> T get_Block() {
		return ((T (*)(XmlSchemaComplexType*))(Il2CppBase() + 0x2AC2A24))(this);
	}
	template <typename T = bool> T get_IsMixed() {
		return ((T (*)(XmlSchemaComplexType*))(Il2CppBase() + 0x2AC2A2C))(this);
	}
	template <typename T = uintptr_t> T get_ContentModel() {
		return ((T (*)(XmlSchemaComplexType*))(Il2CppBase() + 0x2AC2A34))(this);
	}
	template <typename T = void> T set_ContentModel(uintptr_t value) {
		return ((T (*)(XmlSchemaComplexType*, uintptr_t))(Il2CppBase() + 0x2AC2A3C))(this, value);
	}
	template <typename T = uintptr_t> T get_Particle() {
		return ((T (*)(XmlSchemaComplexType*))(Il2CppBase() + 0x2AC2A44))(this);
	}
	template <typename T = uintptr_t> T get_Attributes() {
		return ((T (*)(XmlSchemaComplexType*))(Il2CppBase() + 0x2AC2A4C))(this);
	}
	template <typename T = uintptr_t> T get_AnyAttribute() {
		return ((T (*)(XmlSchemaComplexType*))(Il2CppBase() + 0x2AC2A54))(this);
	}
	template <typename T = void> T set_AnyAttribute(uintptr_t value) {
		return ((T (*)(XmlSchemaComplexType*, uintptr_t))(Il2CppBase() + 0x2AC2A5C))(this, value);
	}
	template <typename T = uintptr_t> T get_ContentType() {
		return ((T (*)(XmlSchemaComplexType*))(Il2CppBase() + 0x2A74240))(this);
	}
	template <typename T = uintptr_t> T get_ContentTypeParticle() {
		return ((T (*)(XmlSchemaComplexType*))(Il2CppBase() + 0x2AC2A64))(this);
	}
	template <typename T = uintptr_t> T get_BlockResolved() {
		return ((T (*)(XmlSchemaComplexType*))(Il2CppBase() + 0x2A75D28))(this);
	}
	template <typename T = uintptr_t> T get_AttributeUses() {
		return ((T (*)(XmlSchemaComplexType*))(Il2CppBase() + 0x2A71E78))(this);
	}
	template <typename T = uintptr_t> T get_AttributeWildcard() {
		return ((T (*)(XmlSchemaComplexType*))(Il2CppBase() + 0x2AC2A6C))(this);
	}
	template <typename T = uintptr_t> T get_ValidatableParticle() {
		return ((T (*)(XmlSchemaComplexType*))(Il2CppBase() + 0x2A7761C))(this);
	}
	template <typename T = void> T SetParent(uintptr_t parent) {
		return ((T (*)(XmlSchemaComplexType*, uintptr_t))(Il2CppBase() + 0x2AC2A74))(this, parent);
	}
	template <typename T = int32_t> T Compile(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaComplexType*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AC2CB8))(this, h, schema);
	}
	template <typename T = void> T CollectSchemaComponent(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaComplexType*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AC3B50))(this, h, schema);
	}
	template <typename T = void> T FillContentTypeParticle(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaComplexType*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AC3E84))(this, h, schema);
	}
	template <typename T = void> T CollectContentTypeFromImmediateContent() {
		return ((T (*)(XmlSchemaComplexType*))(Il2CppBase() + 0x2AC40CC))(this);
	}
	template <typename T = void> T CollectContentTypeFromContentModel(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaComplexType*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AC3F2C))(this, h, schema);
	}
	template <typename T = void> T CollectContentTypeFromComplexExtension(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaComplexType*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AC424C))(this, h, schema);
	}
	template <typename T = void> T CollectContentTypeFromComplexRestriction() {
		return ((T (*)(XmlSchemaComplexType*))(Il2CppBase() + 0x2AC4618))(this);
	}
	template <typename T = uintptr_t> T GetComplexContentType(uintptr_t content) {
		return ((T (*)(XmlSchemaComplexType*, uintptr_t))(Il2CppBase() + 0x2AC48A8))(this, content);
	}
	template <typename T = int32_t> T Validate(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaComplexType*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AC4994))(this, h, schema);
	}
	template <typename T = void> T ValidateImmediateAttributes(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaComplexType*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AC6FA8))(this, h, schema);
	}
	template <typename T = void> T ValidateContentFirstPass(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaComplexType*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AC520C))(this, h, schema);
	}
	template <typename T = void> T ValidateContentModel(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaComplexType*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AC5468))(this, h, schema);
	}
	template <typename T = void> T ValidateTypeDerivationOK(uintptr_t b, uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaComplexType*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2A75D30))(this, b, h, schema);
	}
	template <typename T = void> T ValidateComplexBaseDerivationValidExtension(uintptr_t baseComplexType, uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaComplexType*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AC70D4))(this, baseComplexType, h, schema);
	}
	template <typename T = void> T ValidateSimpleBaseDerivationValidExtension(uintptr_t baseType, uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaComplexType*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AC78CC))(this, baseType, h, schema);
	}
	template <typename T = void> T ValidateDerivationValidRestriction(uintptr_t baseType, uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaComplexType*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AC7A74))(this, baseType, h, schema);
	}
	template <typename T = uintptr_t> static T Read(uintptr_t reader, uintptr_t h) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AA9EA0))(0, reader, h);
	}

};

}
