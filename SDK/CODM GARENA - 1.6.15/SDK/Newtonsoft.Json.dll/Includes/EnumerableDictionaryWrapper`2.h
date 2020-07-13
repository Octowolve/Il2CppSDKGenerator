#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EnumerableDictionaryWrapper2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "", "EnumerableDictionaryWrapper`2"));
	}

	template <typename T = void*> T& _e() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void*> T GetEnumerator() {
		return ((T (*)(EnumerableDictionaryWrapper2*))(Il2CppBase() + 0x4B61A64))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(EnumerableDictionaryWrapper2*))(Il2CppBase() + 0x4B61ACC))(this);
	}

};

}
