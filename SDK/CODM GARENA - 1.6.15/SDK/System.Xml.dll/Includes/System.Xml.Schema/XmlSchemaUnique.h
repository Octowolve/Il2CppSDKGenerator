#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaUnique
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaUnique"));
	}


	template <typename T = int32_t> T Compile(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaUnique*, uintptr_t, uintptr_t))(Il2CppBase() + 0x37B699C))(this, h, schema);
	}
	template <typename T = int32_t> T Validate(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaUnique*, uintptr_t, uintptr_t))(Il2CppBase() + 0x37B69A4))(this, h, schema);
	}
	template <typename T = uintptr_t> static T Read(uintptr_t reader, uintptr_t h) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x37B69AC))(0, reader, h);
	}

};

}
