#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaObjectEnumerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaObjectEnumerator"));
	}

	template <typename T = uintptr_t> T& ienum() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T System_Collections_IEnumerator_MoveNext() {
		return ((T (*)(XmlSchemaObjectEnumerator*))(Il2CppBase() + 0x378FFF4))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(XmlSchemaObjectEnumerator*))(Il2CppBase() + 0x37900E8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(XmlSchemaObjectEnumerator*))(Il2CppBase() + 0x37901DC))(this);
	}
	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(XmlSchemaObjectEnumerator*))(Il2CppBase() + 0x37902F0))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(XmlSchemaObjectEnumerator*))(Il2CppBase() + 0x3790404))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(XmlSchemaObjectEnumerator*))(Il2CppBase() + 0x37904F8))(this);
	}

};

}
