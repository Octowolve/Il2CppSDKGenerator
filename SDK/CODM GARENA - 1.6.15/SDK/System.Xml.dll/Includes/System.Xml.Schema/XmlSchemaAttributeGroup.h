#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaAttributeGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaAttributeGroup"));
	}

	template <typename T = uintptr_t> T& anyAttribute() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& attributes() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& redefined() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& qualifiedName() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& attributeUses() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& anyAttributeUse() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = bool> T& AttributeGroupRecursionCheck() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(XmlSchemaAttributeGroup*))(Il2CppBase() + 0x2AB7ACC))(this);
	}
	template <typename T = uintptr_t> T get_Attributes() {
		return ((T (*)(XmlSchemaAttributeGroup*))(Il2CppBase() + 0x2AB7AD4))(this);
	}
	template <typename T = uintptr_t> T get_AttributeUses() {
		return ((T (*)(XmlSchemaAttributeGroup*))(Il2CppBase() + 0x2AB7ADC))(this);
	}
	template <typename T = uintptr_t> T get_AnyAttributeUse() {
		return ((T (*)(XmlSchemaAttributeGroup*))(Il2CppBase() + 0x2AB7AE4))(this);
	}
	template <typename T = uintptr_t> T get_AnyAttribute() {
		return ((T (*)(XmlSchemaAttributeGroup*))(Il2CppBase() + 0x2AB7AEC))(this);
	}
	template <typename T = void> T set_AnyAttribute(uintptr_t value) {
		return ((T (*)(XmlSchemaAttributeGroup*, uintptr_t))(Il2CppBase() + 0x2AB7AF4))(this, value);
	}
	template <typename T = uintptr_t> T get_QualifiedName() {
		return ((T (*)(XmlSchemaAttributeGroup*))(Il2CppBase() + 0x2AA450C))(this);
	}
	template <typename T = void> T SetParent(uintptr_t parent) {
		return ((T (*)(XmlSchemaAttributeGroup*, uintptr_t))(Il2CppBase() + 0x2AB7AFC))(this, parent);
	}
	template <typename T = int32_t> T Compile(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaAttributeGroup*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AB7D00))(this, h, schema);
	}
	template <typename T = int32_t> T Validate(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaAttributeGroup*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AB831C))(this, h, schema);
	}
	template <typename T = uintptr_t> static T Read(uintptr_t reader, uintptr_t h) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AABDE4))(0, reader, h);
	}

};

}
