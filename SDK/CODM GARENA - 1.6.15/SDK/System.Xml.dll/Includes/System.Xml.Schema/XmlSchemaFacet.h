#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaFacet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaFacet"));
	}

	template <typename T = uintptr_t> static T& AllFacets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& isFixed() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppString*> T& val() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = uintptr_t> T get_ThisFacet() {
		return ((T (*)(XmlSchemaFacet*))(Il2CppBase() + 0x2AD19E8))(this);
	}
	template <typename T = Il2CppString*> T get_Value() {
		return ((T (*)(XmlSchemaFacet*))(Il2CppBase() + 0x2AD19F0))(this);
	}
	template <typename T = void> T set_Value(Il2CppString* value) {
		return ((T (*)(XmlSchemaFacet*, Il2CppString*))(Il2CppBase() + 0x2AD0EB0))(this, value);
	}
	template <typename T = bool> T get_IsFixed() {
		return ((T (*)(XmlSchemaFacet*))(Il2CppBase() + 0x2AD19F8))(this);
	}
	template <typename T = void> T set_IsFixed(bool value) {
		return ((T (*)(XmlSchemaFacet*, bool))(Il2CppBase() + 0x2AD1A00))(this, value);
	}

};

}
