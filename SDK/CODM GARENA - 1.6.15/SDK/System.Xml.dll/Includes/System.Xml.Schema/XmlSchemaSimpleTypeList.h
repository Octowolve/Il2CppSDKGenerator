#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaSimpleTypeList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaSimpleTypeList"));
	}

	template <typename T = uintptr_t> T& itemType() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& itemTypeName() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& validatedListItemType() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& validatedListItemSchemaType() {
		return *(T*)((uintptr_t)this + 0x6C);
	}

	template <typename T = uintptr_t> T get_ItemTypeName() {
		return ((T (*)(XmlSchemaSimpleTypeList*))(Il2CppBase() + 0x37AB948))(this);
	}
	template <typename T = void> T set_ItemTypeName(uintptr_t value) {
		return ((T (*)(XmlSchemaSimpleTypeList*, uintptr_t))(Il2CppBase() + 0x37A4838))(this, value);
	}
	template <typename T = uintptr_t> T get_ItemType() {
		return ((T (*)(XmlSchemaSimpleTypeList*))(Il2CppBase() + 0x37AB950))(this);
	}
	template <typename T = void> T set_ItemType(uintptr_t value) {
		return ((T (*)(XmlSchemaSimpleTypeList*, uintptr_t))(Il2CppBase() + 0x37A4AB0))(this, value);
	}
	template <typename T = uintptr_t> T get_ValidatedListItemType() {
		return ((T (*)(XmlSchemaSimpleTypeList*))(Il2CppBase() + 0x37A7EC8))(this);
	}
	template <typename T = void> T SetParent(uintptr_t parent) {
		return ((T (*)(XmlSchemaSimpleTypeList*, uintptr_t))(Il2CppBase() + 0x37AB958))(this, parent);
	}
	template <typename T = int32_t> T Compile(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaSimpleTypeList*, uintptr_t, uintptr_t))(Il2CppBase() + 0x37AB980))(this, h, schema);
	}
	template <typename T = int32_t> T Validate(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaSimpleTypeList*, uintptr_t, uintptr_t))(Il2CppBase() + 0x37ABC8C))(this, h, schema);
	}
	template <typename T = uintptr_t> static T Read(uintptr_t reader, uintptr_t h) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x37AA138))(0, reader, h);
	}

};

}
