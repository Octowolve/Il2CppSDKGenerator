#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaRedefine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaRedefine"));
	}

	template <typename T = uintptr_t> T& attributeGroups() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& groups() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& items() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& schemaTypes() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = uintptr_t> T get_Items() {
		return ((T (*)(XmlSchemaRedefine*))(Il2CppBase() + 0x3794260))(this);
	}
	template <typename T = void> T SetParent(uintptr_t parent) {
		return ((T (*)(XmlSchemaRedefine*, uintptr_t))(Il2CppBase() + 0x3794268))(this, parent);
	}
	template <typename T = uintptr_t> static T Read(uintptr_t reader, uintptr_t h) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3794448))(0, reader, h);
	}

};

}
