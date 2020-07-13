#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaSimpleContent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaSimpleContent"));
	}

	template <typename T = uintptr_t> T& content() {
		return *(T*)((uintptr_t)this + 0x5C);
	}

	template <typename T = uintptr_t> T get_Content() {
		return ((T (*)(XmlSchemaSimpleContent*))(Il2CppBase() + 0x379CCB8))(this);
	}
	template <typename T = void> T SetParent(uintptr_t parent) {
		return ((T (*)(XmlSchemaSimpleContent*, uintptr_t))(Il2CppBase() + 0x379CCC0))(this, parent);
	}
	template <typename T = int32_t> T Compile(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaSimpleContent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x379CD2C))(this, h, schema);
	}
	template <typename T = int32_t> T Validate(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaSimpleContent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x379D0F0))(this, h, schema);
	}
	template <typename T = uintptr_t> static T Read(uintptr_t reader, uintptr_t h) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x379D198))(0, reader, h);
	}

};

}
