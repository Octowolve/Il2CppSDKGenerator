#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaAttributeGroupRef
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaAttributeGroupRef"));
	}

	template <typename T = uintptr_t> T& refName() {
		return *(T*)((uintptr_t)this + 0x5C);
	}

	template <typename T = uintptr_t> T get_RefName() {
		return ((T (*)(XmlSchemaAttributeGroupRef*))(Il2CppBase() + 0x2AB8F7C))(this);
	}
	template <typename T = int32_t> T Compile(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaAttributeGroupRef*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AB8F84))(this, h, schema);
	}
	template <typename T = int32_t> T Validate(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaAttributeGroupRef*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AB9250))(this, h, schema);
	}
	template <typename T = uintptr_t> static T Read(uintptr_t reader, uintptr_t h) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AB8500))(0, reader, h);
	}

};

}
