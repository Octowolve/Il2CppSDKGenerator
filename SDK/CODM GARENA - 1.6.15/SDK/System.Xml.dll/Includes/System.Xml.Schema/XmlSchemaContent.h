#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaContent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaContent"));
	}

	template <typename T = uintptr_t> T& actualBaseSchemaType() {
		return *(T*)((uintptr_t)this + 0x5C);
	}

	template <typename T = bool> T get_IsExtension() {
		return ((T (*)(XmlSchemaContent*))(Il2CppBase() + 0x2AC85FC))(this);
	}
	template <typename T = uintptr_t> T GetBaseTypeName() {
		return ((T (*)(XmlSchemaContent*))(Il2CppBase() + 0x2AC8604))(this);
	}

};

}
