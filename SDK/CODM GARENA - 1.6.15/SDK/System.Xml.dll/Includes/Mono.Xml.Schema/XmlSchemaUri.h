#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XmlSchemaUri
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XmlSchemaUri"));
	}

	template <typename T = Il2CppString*> T& value() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = bool> static T HasValidScheme(Il2CppString* src) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4E1D88C))(0, src);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(XmlSchemaUri*, uintptr_t))(Il2CppBase() + 0x4E1DB08))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(XmlSchemaUri*))(Il2CppBase() + 0x4E1DCA0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(XmlSchemaUri*))(Il2CppBase() + 0x4E1DCCC))(this);
	}
	template <typename T = bool> static T op_Equality(uintptr_t v1, uintptr_t v2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E1DBD0))(0, v1, v2);
	}

};

}
