#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaAppInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaAppInfo"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& markup() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& source() {
		return *(T*)((uintptr_t)this + 0x54);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_Markup() {
		return ((T (*)(XmlSchemaAppInfo*))(Il2CppBase() + 0x2AB5F7C))(this);
	}
	template <typename T = void> T set_Markup(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(XmlSchemaAppInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2AB5F84))(this, value);
	}
	template <typename T = uintptr_t> static T Read(uintptr_t reader, uintptr_t h, uintptr_t* skip) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2AB2748))(0, reader, h, skip);
	}

};

}
