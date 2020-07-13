#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaSimpleContentRestriction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaSimpleContentRestriction"));
	}

	template <typename T = uintptr_t> T& any() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& attributes() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& baseType() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& baseTypeName() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& facets() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = uintptr_t> T get_BaseTypeName() {
		return ((T (*)(XmlSchemaSimpleContentRestriction*))(Il2CppBase() + 0x37A1884))(this);
	}
	template <typename T = uintptr_t> T get_BaseType() {
		return ((T (*)(XmlSchemaSimpleContentRestriction*))(Il2CppBase() + 0x37A188C))(this);
	}
	template <typename T = uintptr_t> T get_Attributes() {
		return ((T (*)(XmlSchemaSimpleContentRestriction*))(Il2CppBase() + 0x37A1894))(this);
	}
	template <typename T = uintptr_t> T get_AnyAttribute() {
		return ((T (*)(XmlSchemaSimpleContentRestriction*))(Il2CppBase() + 0x37A189C))(this);
	}
	template <typename T = void> T set_AnyAttribute(uintptr_t value) {
		return ((T (*)(XmlSchemaSimpleContentRestriction*, uintptr_t))(Il2CppBase() + 0x37A18A4))(this, value);
	}
	template <typename T = bool> T get_IsExtension() {
		return ((T (*)(XmlSchemaSimpleContentRestriction*))(Il2CppBase() + 0x37A18AC))(this);
	}
	template <typename T = void> T SetParent(uintptr_t parent) {
		return ((T (*)(XmlSchemaSimpleContentRestriction*, uintptr_t))(Il2CppBase() + 0x37A18B4))(this, parent);
	}
	template <typename T = int32_t> T Compile(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaSimpleContentRestriction*, uintptr_t, uintptr_t))(Il2CppBase() + 0x37A1AC0))(this, h, schema);
	}
	template <typename T = uintptr_t> T GetBaseTypeName() {
		return ((T (*)(XmlSchemaSimpleContentRestriction*))(Il2CppBase() + 0x37A22F8))(this);
	}
	template <typename T = int32_t> T Validate(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaSimpleContentRestriction*, uintptr_t, uintptr_t))(Il2CppBase() + 0x37A2300))(this, h, schema);
	}
	template <typename T = uintptr_t> static T Read(uintptr_t reader, uintptr_t h) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x379DB2C))(0, reader, h);
	}

};

}
