#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaSimpleTypeUnion
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaSimpleTypeUnion"));
	}

	template <typename T = uintptr_t> T& baseTypes() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& memberTypes() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& validatedTypes() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& validatedSchemaTypes() {
		return *(T*)((uintptr_t)this + 0x6C);
	}

	template <typename T = uintptr_t> T get_BaseTypes() {
		return ((T (*)(XmlSchemaSimpleTypeUnion*))(Il2CppBase() + 0x37B4D98))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_MemberTypes() {
		return ((T (*)(XmlSchemaSimpleTypeUnion*))(Il2CppBase() + 0x37B4DA0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ValidatedTypes() {
		return ((T (*)(XmlSchemaSimpleTypeUnion*))(Il2CppBase() + 0x37A82C0))(this);
	}
	template <typename T = void> T SetParent(uintptr_t parent) {
		return ((T (*)(XmlSchemaSimpleTypeUnion*, uintptr_t))(Il2CppBase() + 0x37B4DA8))(this, parent);
	}
	template <typename T = int32_t> T Compile(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaSimpleTypeUnion*, uintptr_t, uintptr_t))(Il2CppBase() + 0x37B4F74))(this, h, schema);
	}
	template <typename T = int32_t> T Validate(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaSimpleTypeUnion*, uintptr_t, uintptr_t))(Il2CppBase() + 0x37B5614))(this, h, schema);
	}
	template <typename T = uintptr_t> static T Read(uintptr_t reader, uintptr_t h) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x37AAC14))(0, reader, h);
	}

};

}
