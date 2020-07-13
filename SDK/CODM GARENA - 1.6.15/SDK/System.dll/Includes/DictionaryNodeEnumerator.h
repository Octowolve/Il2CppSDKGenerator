#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DictionaryNodeEnumerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "", "DictionaryNodeEnumerator"));
	}

	template <typename T = uintptr_t> T& dict() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& isAtStart() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& current() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& version() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T FailFast() {
		return ((T (*)(DictionaryNodeEnumerator*))(Il2CppBase() + 0x4C9C34C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(DictionaryNodeEnumerator*))(Il2CppBase() + 0x4C9C420))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(DictionaryNodeEnumerator*))(Il2CppBase() + 0x4C9C328))(this);
	}
	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(DictionaryNodeEnumerator*))(Il2CppBase() + 0x4C9C498))(this);
	}
	template <typename T = uintptr_t> T get_DictionaryNode() {
		return ((T (*)(DictionaryNodeEnumerator*))(Il2CppBase() + 0x4C9C58C))(this);
	}
	template <typename T = uintptr_t> T get_Entry() {
		return ((T (*)(DictionaryNodeEnumerator*))(Il2CppBase() + 0x4C9C534))(this);
	}
	template <typename T = uintptr_t> T get_Key() {
		return ((T (*)(DictionaryNodeEnumerator*))(Il2CppBase() + 0x4C9C64C))(this);
	}
	template <typename T = uintptr_t> T get_Value() {
		return ((T (*)(DictionaryNodeEnumerator*))(Il2CppBase() + 0x4C9C670))(this);
	}

};

}
