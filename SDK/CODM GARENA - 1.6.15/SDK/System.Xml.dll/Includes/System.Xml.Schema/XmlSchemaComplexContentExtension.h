#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaComplexContentExtension
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaComplexContentExtension"));
	}

	template <typename T = uintptr_t> T& any() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& attributes() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& baseTypeName() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& particle() {
		return *(T*)((uintptr_t)this + 0x6C);
	}

	template <typename T = uintptr_t> T get_BaseTypeName() {
		return ((T (*)(XmlSchemaComplexContentExtension*))(Il2CppBase() + 0x2AC0BC0))(this);
	}
	template <typename T = uintptr_t> T get_Particle() {
		return ((T (*)(XmlSchemaComplexContentExtension*))(Il2CppBase() + 0x2AC0BC8))(this);
	}
	template <typename T = uintptr_t> T get_Attributes() {
		return ((T (*)(XmlSchemaComplexContentExtension*))(Il2CppBase() + 0x2AC0BD0))(this);
	}
	template <typename T = uintptr_t> T get_AnyAttribute() {
		return ((T (*)(XmlSchemaComplexContentExtension*))(Il2CppBase() + 0x2AC0BD8))(this);
	}
	template <typename T = void> T set_AnyAttribute(uintptr_t value) {
		return ((T (*)(XmlSchemaComplexContentExtension*, uintptr_t))(Il2CppBase() + 0x2AC0BE0))(this, value);
	}
	template <typename T = bool> T get_IsExtension() {
		return ((T (*)(XmlSchemaComplexContentExtension*))(Il2CppBase() + 0x2AC0BE8))(this);
	}
	template <typename T = void> T SetParent(uintptr_t parent) {
		return ((T (*)(XmlSchemaComplexContentExtension*, uintptr_t))(Il2CppBase() + 0x2AC0BF0))(this, parent);
	}
	template <typename T = int32_t> T Compile(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaComplexContentExtension*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AC0E14))(this, h, schema);
	}
	template <typename T = uintptr_t> T GetBaseTypeName() {
		return ((T (*)(XmlSchemaComplexContentExtension*))(Il2CppBase() + 0x2AC17D0))(this);
	}
	template <typename T = int32_t> T Validate(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaComplexContentExtension*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AC17D8))(this, h, schema);
	}
	template <typename T = uintptr_t> static T Read(uintptr_t reader, uintptr_t h) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2ABFC64))(0, reader, h);
	}

};

}
