#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaAttribute"));
	}

	template <typename T = uintptr_t> T& attributeType() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& attributeSchemaType() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& defaultValue() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppString*> T& fixedValue() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppString*> T& validatedDefaultValue() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppString*> T& validatedFixedValue() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& validatedFixedTypedValue() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& form() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppString*> T& targetNamespace() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& qualifiedName() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& refName() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& schemaType() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& schemaTypeName() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& use() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& validatedUse() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& referencedAttribute() {
		return *(T*)((uintptr_t)this + 0x9C);
	}

	template <typename T = bool> T get_ParentIsSchema() {
		return ((T (*)(XmlSchemaAttribute*))(Il2CppBase() + 0x2AB608C))(this);
	}
	template <typename T = Il2CppString*> T get_DefaultValue() {
		return ((T (*)(XmlSchemaAttribute*))(Il2CppBase() + 0x2AB6150))(this);
	}
	template <typename T = Il2CppString*> T get_FixedValue() {
		return ((T (*)(XmlSchemaAttribute*))(Il2CppBase() + 0x2AB6158))(this);
	}
	template <typename T = uintptr_t> T get_Form() {
		return ((T (*)(XmlSchemaAttribute*))(Il2CppBase() + 0x2AB6160))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(XmlSchemaAttribute*))(Il2CppBase() + 0x2AB6168))(this);
	}
	template <typename T = uintptr_t> T get_RefName() {
		return ((T (*)(XmlSchemaAttribute*))(Il2CppBase() + 0x2AB6170))(this);
	}
	template <typename T = uintptr_t> T get_SchemaTypeName() {
		return ((T (*)(XmlSchemaAttribute*))(Il2CppBase() + 0x2AB6178))(this);
	}
	template <typename T = uintptr_t> T get_SchemaType() {
		return ((T (*)(XmlSchemaAttribute*))(Il2CppBase() + 0x2AB6180))(this);
	}
	template <typename T = uintptr_t> T get_Use() {
		return ((T (*)(XmlSchemaAttribute*))(Il2CppBase() + 0x2AB6188))(this);
	}
	template <typename T = uintptr_t> T get_QualifiedName() {
		return ((T (*)(XmlSchemaAttribute*))(Il2CppBase() + 0x2A72484))(this);
	}
	template <typename T = uintptr_t> T get_AttributeType() {
		return ((T (*)(XmlSchemaAttribute*))(Il2CppBase() + 0x2A71E80))(this);
	}
	template <typename T = Il2CppString*> T get_ValidatedDefaultValue() {
		return ((T (*)(XmlSchemaAttribute*))(Il2CppBase() + 0x2A72C40))(this);
	}
	template <typename T = Il2CppString*> T get_ValidatedFixedValue() {
		return ((T (*)(XmlSchemaAttribute*))(Il2CppBase() + 0x2A72C48))(this);
	}
	template <typename T = uintptr_t> T get_ValidatedUse() {
		return ((T (*)(XmlSchemaAttribute*))(Il2CppBase() + 0x2A79198))(this);
	}
	template <typename T = void> T SetParent(uintptr_t parent) {
		return ((T (*)(XmlSchemaAttribute*, uintptr_t))(Il2CppBase() + 0x2AB6190))(this, parent);
	}
	template <typename T = int32_t> T Compile(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaAttribute*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AB61C8))(this, h, schema);
	}
	template <typename T = void> T CompileCommon(uintptr_t h, uintptr_t schema, bool refIsNotPresent) {
		return ((T (*)(XmlSchemaAttribute*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x2AB66E8))(this, h, schema, refIsNotPresent);
	}
	template <typename T = int32_t> T Validate(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaAttribute*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AB6EE0))(this, h, schema);
	}
	template <typename T = uintptr_t> static T Read(uintptr_t reader, uintptr_t h) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AAE580))(0, reader, h);
	}

};

}
