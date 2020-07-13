#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaCollection"));
	}

	template <typename T = uintptr_t> T& schemaSet() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& ValidationEventHandler() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T System_Collections_ICollection_get_Count() {
		return ((T (*)(XmlSchemaCollection*))(Il2CppBase() + 0x2ABD710))(this);
	}
	template <typename T = void> T System_Collections_ICollection_CopyTo(uintptr_t array, int32_t index) {
		return ((T (*)(XmlSchemaCollection*, uintptr_t, int32_t))(Il2CppBase() + 0x2ABD740))(this, array, index);
	}
	template <typename T = bool> T System_Collections_ICollection_get_IsSynchronized() {
		return ((T (*)(XmlSchemaCollection*))(Il2CppBase() + 0x2ABD7E4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(XmlSchemaCollection*))(Il2CppBase() + 0x2ABD7EC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_ICollection_get_SyncRoot() {
		return ((T (*)(XmlSchemaCollection*))(Il2CppBase() + 0x2ABD8A4))(this);
	}
	template <typename T = uintptr_t> T get_SchemaSet() {
		return ((T (*)(XmlSchemaCollection*))(Il2CppBase() + 0x2ABD8A8))(this);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(XmlSchemaCollection*))(Il2CppBase() + 0x2ABD714))(this);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(XmlSchemaCollection*))(Il2CppBase() + 0x2ABD7F0))(this);
	}
	template <typename T = void> T OnValidationError(uintptr_t o, uintptr_t e) {
		return ((T (*)(XmlSchemaCollection*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2ABD9B4))(this, o, e);
	}

};

}
