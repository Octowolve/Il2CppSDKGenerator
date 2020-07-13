#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaGroup"));
	}

	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& particle() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& qualifiedName() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& isCircularDefinition() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(XmlSchemaGroup*))(Il2CppBase() + 0x2AD2558))(this);
	}
	template <typename T = uintptr_t> T get_Particle() {
		return ((T (*)(XmlSchemaGroup*))(Il2CppBase() + 0x2AD2560))(this);
	}
	template <typename T = void> T set_Particle(uintptr_t value) {
		return ((T (*)(XmlSchemaGroup*, uintptr_t))(Il2CppBase() + 0x2AD2568))(this, value);
	}
	template <typename T = uintptr_t> T get_QualifiedName() {
		return ((T (*)(XmlSchemaGroup*))(Il2CppBase() + 0x2AA451C))(this);
	}
	template <typename T = bool> T get_IsCircularDefinition() {
		return ((T (*)(XmlSchemaGroup*))(Il2CppBase() + 0x2AD2570))(this);
	}
	template <typename T = void> T SetParent(uintptr_t parent) {
		return ((T (*)(XmlSchemaGroup*, uintptr_t))(Il2CppBase() + 0x2AD2578))(this, parent);
	}
	template <typename T = int32_t> T Compile(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaGroup*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AD25B0))(this, h, schema);
	}
	template <typename T = int32_t> T Validate(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaGroup*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AD2970))(this, h, schema);
	}
	template <typename T = uintptr_t> static T Read(uintptr_t reader, uintptr_t h) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AAB320))(0, reader, h);
	}

};

}
