#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DictionaryEnumerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "DictionaryEnumerator"));
	}

	template <typename T = uintptr_t> T& _methodDictionary() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _hashtableEnum() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _posMethod() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(DictionaryEnumerator*))(Il2CppBase() + 0x4B3B1B4))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(DictionaryEnumerator*))(Il2CppBase() + 0x4B3B3EC))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(DictionaryEnumerator*))(Il2CppBase() + 0x4B3B710))(this);
	}
	template <typename T = uintptr_t> T get_Entry() {
		return ((T (*)(DictionaryEnumerator*))(Il2CppBase() + 0x4B3B1F0))(this);
	}
	template <typename T = uintptr_t> T get_Key() {
		return ((T (*)(DictionaryEnumerator*))(Il2CppBase() + 0x4B3B80C))(this);
	}
	template <typename T = uintptr_t> T get_Value() {
		return ((T (*)(DictionaryEnumerator*))(Il2CppBase() + 0x4B3B848))(this);
	}

};

}
