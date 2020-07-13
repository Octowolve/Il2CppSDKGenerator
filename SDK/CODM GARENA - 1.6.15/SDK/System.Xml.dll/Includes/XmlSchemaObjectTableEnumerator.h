#pragma once
#include <Il2Cpp/Il2Cpp.h>

class XmlSchemaObjectTableEnumerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "", "XmlSchemaObjectTableEnumerator"));
	}

	template <typename T = uintptr_t> T& xenum() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& tmp() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T System_Collections_IEnumerator_MoveNext() {
		return ((T (*)(XmlSchemaObjectTableEnumerator*))(Il2CppBase() + 0x37909F8))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(XmlSchemaObjectTableEnumerator*))(Il2CppBase() + 0x3790AEC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(XmlSchemaObjectTableEnumerator*))(Il2CppBase() + 0x3790BE0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IDictionaryEnumerator_get_Entry() {
		return ((T (*)(XmlSchemaObjectTableEnumerator*))(Il2CppBase() + 0x3790D08))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IDictionaryEnumerator_get_Key() {
		return ((T (*)(XmlSchemaObjectTableEnumerator*))(Il2CppBase() + 0x3790E04))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IDictionaryEnumerator_get_Value() {
		return ((T (*)(XmlSchemaObjectTableEnumerator*))(Il2CppBase() + 0x3790F18))(this);
	}
	template <typename T = uintptr_t> T get_Entry() {
		return ((T (*)(XmlSchemaObjectTableEnumerator*))(Il2CppBase() + 0x379102C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(XmlSchemaObjectTableEnumerator*))(Il2CppBase() + 0x3791128))(this);
	}

};

}
