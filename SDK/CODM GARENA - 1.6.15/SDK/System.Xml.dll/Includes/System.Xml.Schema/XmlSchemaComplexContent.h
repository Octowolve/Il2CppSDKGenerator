#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaComplexContent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaComplexContent"));
	}

	template <typename T = uintptr_t> T& content() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& isMixed() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = bool> T get_IsMixed() {
		return ((T (*)(XmlSchemaComplexContent*))(Il2CppBase() + 0x2ABDDFC))(this);
	}
	template <typename T = uintptr_t> T get_Content() {
		return ((T (*)(XmlSchemaComplexContent*))(Il2CppBase() + 0x2ABDE04))(this);
	}
	template <typename T = void> T SetParent(uintptr_t parent) {
		return ((T (*)(XmlSchemaComplexContent*, uintptr_t))(Il2CppBase() + 0x2ABDE0C))(this, parent);
	}
	template <typename T = int32_t> T Compile(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaComplexContent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2ABDE7C))(this, h, schema);
	}
	template <typename T = int32_t> T Validate(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaComplexContent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2ABE238))(this, h, schema);
	}
	template <typename T = uintptr_t> static T Read(uintptr_t reader, uintptr_t h) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2ABE2E4))(0, reader, h);
	}

};

}
