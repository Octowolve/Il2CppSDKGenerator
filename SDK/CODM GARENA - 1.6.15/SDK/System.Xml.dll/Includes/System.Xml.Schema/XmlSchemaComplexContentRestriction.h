#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaComplexContentRestriction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaComplexContentRestriction"));
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
		return ((T (*)(XmlSchemaComplexContentRestriction*))(Il2CppBase() + 0x2AC1B70))(this);
	}
	template <typename T = uintptr_t> T get_Particle() {
		return ((T (*)(XmlSchemaComplexContentRestriction*))(Il2CppBase() + 0x2AC1B78))(this);
	}
	template <typename T = uintptr_t> T get_Attributes() {
		return ((T (*)(XmlSchemaComplexContentRestriction*))(Il2CppBase() + 0x2AC1B80))(this);
	}
	template <typename T = uintptr_t> T get_AnyAttribute() {
		return ((T (*)(XmlSchemaComplexContentRestriction*))(Il2CppBase() + 0x2AC1B88))(this);
	}
	template <typename T = void> T set_AnyAttribute(uintptr_t value) {
		return ((T (*)(XmlSchemaComplexContentRestriction*, uintptr_t))(Il2CppBase() + 0x2AC1B90))(this, value);
	}
	template <typename T = bool> T get_IsExtension() {
		return ((T (*)(XmlSchemaComplexContentRestriction*))(Il2CppBase() + 0x2AC1B98))(this);
	}
	template <typename T = void> T SetParent(uintptr_t parent) {
		return ((T (*)(XmlSchemaComplexContentRestriction*, uintptr_t))(Il2CppBase() + 0x2AC1BA0))(this, parent);
	}
	template <typename T = int32_t> T Compile(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaComplexContentRestriction*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AC1DC4))(this, h, schema);
	}
	template <typename T = uintptr_t> T GetBaseTypeName() {
		return ((T (*)(XmlSchemaComplexContentRestriction*))(Il2CppBase() + 0x2AC2780))(this);
	}
	template <typename T = int32_t> T Validate(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaComplexContentRestriction*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AC2788))(this, h, schema);
	}
	template <typename T = uintptr_t> static T Read(uintptr_t reader, uintptr_t h) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2ABEDF8))(0, reader, h);
	}

};

}
