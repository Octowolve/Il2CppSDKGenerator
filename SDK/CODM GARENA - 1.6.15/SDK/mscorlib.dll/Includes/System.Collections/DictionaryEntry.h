#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections {

class DictionaryEntry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Collections", "DictionaryEntry"));
	}

	template <typename T = uintptr_t> T& _key() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _value() {
		return *(T*)((uintptr_t)this + 0x4);
	}

	template <typename T = uintptr_t> T get_Key() {
		return ((T (*)(DictionaryEntry*))(Il2CppBase() + 0x3638A58))(this);
	}
	template <typename T = uintptr_t> T get_Value() {
		return ((T (*)(DictionaryEntry*))(Il2CppBase() + 0x3638A68))(this);
	}

};

}
