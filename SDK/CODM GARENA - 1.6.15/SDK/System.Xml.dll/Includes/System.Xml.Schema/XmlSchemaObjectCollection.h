#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaObjectCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaObjectCollection"));
	}


	template <typename T = uintptr_t> T get_Item(int32_t index) {
		return ((T (*)(XmlSchemaObjectCollection*, int32_t))(Il2CppBase() + 0x378FB08))(this, index);
	}
	template <typename T = int32_t> T Add(uintptr_t item) {
		return ((T (*)(XmlSchemaObjectCollection*, uintptr_t))(Il2CppBase() + 0x378FC30))(this, item);
	}
	template <typename T = bool> T Contains(uintptr_t item) {
		return ((T (*)(XmlSchemaObjectCollection*, uintptr_t))(Il2CppBase() + 0x378FD38))(this, item);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(XmlSchemaObjectCollection*))(Il2CppBase() + 0x378FE40))(this);
	}
	template <typename T = void> T OnClear() {
		return ((T (*)(XmlSchemaObjectCollection*))(Il2CppBase() + 0x378FFE4))(this);
	}
	template <typename T = void> T OnInsert(int32_t index, uintptr_t item) {
		return ((T (*)(XmlSchemaObjectCollection*, int32_t, uintptr_t))(Il2CppBase() + 0x378FFE8))(this, index, item);
	}
	template <typename T = void> T OnRemove(int32_t index, uintptr_t item) {
		return ((T (*)(XmlSchemaObjectCollection*, int32_t, uintptr_t))(Il2CppBase() + 0x378FFEC))(this, index, item);
	}
	template <typename T = void> T OnSet(int32_t index, uintptr_t oldValue, uintptr_t newValue) {
		return ((T (*)(XmlSchemaObjectCollection*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x378FFF0))(this, index, oldValue, newValue);
	}

};

}
