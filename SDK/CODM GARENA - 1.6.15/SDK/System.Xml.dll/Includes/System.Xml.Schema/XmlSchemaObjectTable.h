#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaObjectTable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaObjectTable"));
	}

	template <typename T = uintptr_t> T& table() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T get_Item(uintptr_t name) {
		return ((T (*)(XmlSchemaObjectTable*, uintptr_t))(Il2CppBase() + 0x3790688))(this, name);
	}
	template <typename T = uintptr_t> T get_Names() {
		return ((T (*)(XmlSchemaObjectTable*))(Il2CppBase() + 0x3790730))(this);
	}
	template <typename T = uintptr_t> T get_Values() {
		return ((T (*)(XmlSchemaObjectTable*))(Il2CppBase() + 0x379075C))(this);
	}
	template <typename T = bool> T Contains(uintptr_t name) {
		return ((T (*)(XmlSchemaObjectTable*, uintptr_t))(Il2CppBase() + 0x3790788))(this, name);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(XmlSchemaObjectTable*))(Il2CppBase() + 0x37907B4))(this);
	}
	template <typename T = void> T Add(uintptr_t name, uintptr_t value) {
		return ((T (*)(XmlSchemaObjectTable*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3790974))(this, name, value);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(XmlSchemaObjectTable*))(Il2CppBase() + 0x37909A0))(this);
	}
	template <typename T = void> T Set(uintptr_t name, uintptr_t value) {
		return ((T (*)(XmlSchemaObjectTable*, uintptr_t, uintptr_t))(Il2CppBase() + 0x37909CC))(this, name, value);
	}

};

}
