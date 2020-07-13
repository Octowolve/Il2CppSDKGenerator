#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaCollectionEnumerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaCollectionEnumerator"));
	}

	template <typename T = uintptr_t> T& xenum() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T System_Collections_IEnumerator_MoveNext() {
		return ((T (*)(XmlSchemaCollectionEnumerator*))(Il2CppBase() + 0x2ABDA04))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(XmlSchemaCollectionEnumerator*))(Il2CppBase() + 0x2ABDAF8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(XmlSchemaCollectionEnumerator*))(Il2CppBase() + 0x2ABDBEC))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(XmlSchemaCollectionEnumerator*))(Il2CppBase() + 0x2ABDCE0))(this);
	}

};

}
