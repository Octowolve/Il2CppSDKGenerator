#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaAnnotated
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaAnnotated"));
	}

	template <typename T = uintptr_t> T& annotation() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& id() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& unhandledAttributes() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = Il2CppString*> T get_Id() {
		return ((T (*)(XmlSchemaAnnotated*))(Il2CppBase() + 0x2AB0160))(this);
	}
	template <typename T = void> T set_Id(Il2CppString* value) {
		return ((T (*)(XmlSchemaAnnotated*, Il2CppString*))(Il2CppBase() + 0x2AB2448))(this, value);
	}
	template <typename T = uintptr_t> T get_Annotation() {
		return ((T (*)(XmlSchemaAnnotated*))(Il2CppBase() + 0x2AB2460))(this);
	}
	template <typename T = void> T set_Annotation(uintptr_t value) {
		return ((T (*)(XmlSchemaAnnotated*, uintptr_t))(Il2CppBase() + 0x2AB2450))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_UnhandledAttributes() {
		return ((T (*)(XmlSchemaAnnotated*))(Il2CppBase() + 0x2AB2468))(this);
	}
	template <typename T = void> T set_UnhandledAttributes(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(XmlSchemaAnnotated*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2AB2574))(this, value);
	}

};

}
