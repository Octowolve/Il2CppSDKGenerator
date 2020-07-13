#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaNotation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaNotation"));
	}

	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppString*> T& pub() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& system() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& qualifiedName() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(XmlSchemaNotation*))(Il2CppBase() + 0x378D388))(this);
	}
	template <typename T = Il2CppString*> T get_Public() {
		return ((T (*)(XmlSchemaNotation*))(Il2CppBase() + 0x378D390))(this);
	}
	template <typename T = uintptr_t> T get_QualifiedName() {
		return ((T (*)(XmlSchemaNotation*))(Il2CppBase() + 0x378D398))(this);
	}
	template <typename T = int32_t> T Compile(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaNotation*, uintptr_t, uintptr_t))(Il2CppBase() + 0x378D3A0))(this, h, schema);
	}
	template <typename T = int32_t> T Validate(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaNotation*, uintptr_t, uintptr_t))(Il2CppBase() + 0x378DEB4))(this, h, schema);
	}
	template <typename T = uintptr_t> static T Read(uintptr_t reader, uintptr_t h) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x378DEBC))(0, reader, h);
	}

};

}
