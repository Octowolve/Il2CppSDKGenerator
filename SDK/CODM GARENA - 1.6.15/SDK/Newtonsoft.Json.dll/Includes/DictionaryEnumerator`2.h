#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DictionaryEnumerator2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "", "DictionaryEnumerator`2"));
	}

	template <typename T = void*> T& _e() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> T get_Entry() {
		return ((T (*)(DictionaryEnumerator2*))(Il2CppBase() + 0x4B64700))(this);
	}
	template <typename T = uintptr_t> T get_Key() {
		return ((T (*)(DictionaryEnumerator2*))(Il2CppBase() + 0x4B64770))(this);
	}
	template <typename T = uintptr_t> T get_Value() {
		return ((T (*)(DictionaryEnumerator2*))(Il2CppBase() + 0x4B647D4))(this);
	}
	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(DictionaryEnumerator2*))(Il2CppBase() + 0x4B647DC))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(DictionaryEnumerator2*))(Il2CppBase() + 0x4B648D8))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(DictionaryEnumerator2*))(Il2CppBase() + 0x4B649D4))(this);
	}

};

}
