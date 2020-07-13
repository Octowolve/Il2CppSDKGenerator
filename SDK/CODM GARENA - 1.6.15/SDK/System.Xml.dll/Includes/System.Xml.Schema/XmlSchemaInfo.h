#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaInfo"));
	}

	template <typename T = bool> T& isDefault() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& isNil() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = uintptr_t> T& memberType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& attr() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& elem() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& validity() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = bool> T get_IsDefault() {
		return ((T (*)(XmlSchemaInfo*))(Il2CppBase() + 0x2AD4D90))(this);
	}
	template <typename T = bool> T get_IsNil() {
		return ((T (*)(XmlSchemaInfo*))(Il2CppBase() + 0x2AD4D98))(this);
	}
	template <typename T = uintptr_t> T get_MemberType() {
		return ((T (*)(XmlSchemaInfo*))(Il2CppBase() + 0x2AD4DA0))(this);
	}
	template <typename T = uintptr_t> T get_SchemaAttribute() {
		return ((T (*)(XmlSchemaInfo*))(Il2CppBase() + 0x2AD4DA8))(this);
	}
	template <typename T = uintptr_t> T get_SchemaElement() {
		return ((T (*)(XmlSchemaInfo*))(Il2CppBase() + 0x2AD4DB0))(this);
	}
	template <typename T = uintptr_t> T get_SchemaType() {
		return ((T (*)(XmlSchemaInfo*))(Il2CppBase() + 0x2AD4DB8))(this);
	}
	template <typename T = uintptr_t> T get_Validity() {
		return ((T (*)(XmlSchemaInfo*))(Il2CppBase() + 0x2AD4DC0))(this);
	}

};

}
