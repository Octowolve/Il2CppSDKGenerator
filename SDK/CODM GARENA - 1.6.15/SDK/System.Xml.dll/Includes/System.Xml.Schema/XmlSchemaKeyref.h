#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaKeyref
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaKeyref"));
	}

	template <typename T = uintptr_t> T& refer() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x74);
	}

	template <typename T = uintptr_t> T get_Refer() {
		return ((T (*)(XmlSchemaKeyref*))(Il2CppBase() + 0x2AD4E90))(this);
	}
	template <typename T = uintptr_t> T get_Target() {
		return ((T (*)(XmlSchemaKeyref*))(Il2CppBase() + 0x2A7A3E4))(this);
	}
	template <typename T = int32_t> T Compile(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaKeyref*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AD4E98))(this, h, schema);
	}
	template <typename T = int32_t> T Validate(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaKeyref*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AD502C))(this, h, schema);
	}
	template <typename T = uintptr_t> static T Read(uintptr_t reader, uintptr_t h) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2ACF8B0))(0, reader, h);
	}

};

}
