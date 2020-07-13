#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaAnnotation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaAnnotation"));
	}

	template <typename T = Il2CppString*> T& id() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& items() {
		return *(T*)((uintptr_t)this + 0x54);
	}

	template <typename T = void> T set_Id(Il2CppString* value) {
		return ((T (*)(XmlSchemaAnnotation*, Il2CppString*))(Il2CppBase() + 0x2AB2620))(this, value);
	}
	template <typename T = int32_t> T Compile(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaAnnotation*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AB2628))(this, h, schema);
	}
	template <typename T = int32_t> T Validate(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaAnnotation*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AB2740))(this, h, schema);
	}
	template <typename T = uintptr_t> static T Read(uintptr_t reader, uintptr_t h) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AA9588))(0, reader, h);
	}

};

}
