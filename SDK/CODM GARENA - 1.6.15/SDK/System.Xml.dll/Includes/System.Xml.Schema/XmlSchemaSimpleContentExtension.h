#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaSimpleContentExtension
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaSimpleContentExtension"));
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

	template <typename T = uintptr_t> T get_BaseTypeName() {
		return ((T (*)(XmlSchemaSimpleContentExtension*))(Il2CppBase() + 0x379FD18))(this);
	}
	template <typename T = uintptr_t> T get_Attributes() {
		return ((T (*)(XmlSchemaSimpleContentExtension*))(Il2CppBase() + 0x379FD20))(this);
	}
	template <typename T = uintptr_t> T get_AnyAttribute() {
		return ((T (*)(XmlSchemaSimpleContentExtension*))(Il2CppBase() + 0x379FD28))(this);
	}
	template <typename T = void> T set_AnyAttribute(uintptr_t value) {
		return ((T (*)(XmlSchemaSimpleContentExtension*, uintptr_t))(Il2CppBase() + 0x379FD30))(this, value);
	}
	template <typename T = bool> T get_IsExtension() {
		return ((T (*)(XmlSchemaSimpleContentExtension*))(Il2CppBase() + 0x379FD38))(this);
	}
	template <typename T = void> T SetParent(uintptr_t parent) {
		return ((T (*)(XmlSchemaSimpleContentExtension*, uintptr_t))(Il2CppBase() + 0x379FD40))(this, parent);
	}
	template <typename T = int32_t> T Compile(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaSimpleContentExtension*, uintptr_t, uintptr_t))(Il2CppBase() + 0x379FF2C))(this, h, schema);
	}
	template <typename T = uintptr_t> T GetBaseTypeName() {
		return ((T (*)(XmlSchemaSimpleContentExtension*))(Il2CppBase() + 0x37A0788))(this);
	}
	template <typename T = int32_t> T Validate(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaSimpleContentExtension*, uintptr_t, uintptr_t))(Il2CppBase() + 0x37A0790))(this, h, schema);
	}
	template <typename T = uintptr_t> static T Read(uintptr_t reader, uintptr_t h) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x379F010))(0, reader, h);
	}

};

}
