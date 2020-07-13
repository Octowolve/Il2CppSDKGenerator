#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaSimpleTypeContent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaSimpleTypeContent"));
	}

	template <typename T = uintptr_t> T& OwnerType() {
		return *(T*)((uintptr_t)this + 0x5C);
	}

	template <typename T = uintptr_t> T get_ActualBaseSchemaType() {
		return ((T (*)(XmlSchemaSimpleTypeContent*))(Il2CppBase() + 0x37AB860))(this);
	}

};

}
