#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Serialization {

class TypeData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Serialization", "TypeData"));
	}

	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& elementName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& sType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& listItemType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& typeName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& fullTypeName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& listItemTypeData() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& mappedType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& facet() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& hasPublicConstructor() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& nullableOverride() {
		return *(T*)((uintptr_t)this + 0x2D);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& keywords() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> T get_XmlType() {
		return ((T (*)(TypeData*))(Il2CppBase() + 0x37BD9AC))(this);
	}
	template <typename T = uintptr_t> T get_Type() {
		return ((T (*)(TypeData*))(Il2CppBase() + 0x37BFDFC))(this);
	}
	template <typename T = uintptr_t> T get_SchemaType() {
		return ((T (*)(TypeData*))(Il2CppBase() + 0x37BFE04))(this);
	}
	template <typename T = bool> T get_IsListType() {
		return ((T (*)(TypeData*))(Il2CppBase() + 0x37BD8CC))(this);
	}
	template <typename T = void> T set_IsNullable(bool value) {
		return ((T (*)(TypeData*, bool))(Il2CppBase() + 0x37BFE0C))(this, value);
	}
	template <typename T = uintptr_t> T get_ListItemTypeData() {
		return ((T (*)(TypeData*))(Il2CppBase() + 0x37BD8E0))(this);
	}
	template <typename T = uintptr_t> T get_ListItemType() {
		return ((T (*)(TypeData*))(Il2CppBase() + 0x37BFE14))(this);
	}
	template <typename T = uintptr_t> static T GetIndexerProperty(uintptr_t collectionType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x37C09D0))(0, collectionType);
	}
	template <typename T = uintptr_t> static T CreateMissingAddMethodException(uintptr_t type, Il2CppString* inheritFrom, uintptr_t argumentType) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x37C0B64))(0, type, inheritFrom, argumentType);
	}
	template <typename T = uintptr_t> T GetGenericListItemType(uintptr_t type) {
		return ((T (*)(TypeData*, uintptr_t))(Il2CppBase() + 0x37C0818))(this, type);
	}

};

}
