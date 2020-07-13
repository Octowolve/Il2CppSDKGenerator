#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaExternal
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaExternal"));
	}

	template <typename T = Il2CppString*> T& id() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& schema() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppString*> T& location() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = Il2CppString*> T get_SchemaLocation() {
		return ((T (*)(XmlSchemaExternal*))(Il2CppBase() + 0x2AA4750))(this);
	}
	template <typename T = void> T set_SchemaLocation(Il2CppString* value) {
		return ((T (*)(XmlSchemaExternal*, Il2CppString*))(Il2CppBase() + 0x2AD1954))(this, value);
	}
	template <typename T = uintptr_t> T get_Schema() {
		return ((T (*)(XmlSchemaExternal*))(Il2CppBase() + 0x2AA4760))(this);
	}
	template <typename T = void> T set_Schema(uintptr_t value) {
		return ((T (*)(XmlSchemaExternal*, uintptr_t))(Il2CppBase() + 0x2AA4758))(this, value);
	}
	template <typename T = void> T set_Id(Il2CppString* value) {
		return ((T (*)(XmlSchemaExternal*, Il2CppString*))(Il2CppBase() + 0x2AD195C))(this, value);
	}

};

}
