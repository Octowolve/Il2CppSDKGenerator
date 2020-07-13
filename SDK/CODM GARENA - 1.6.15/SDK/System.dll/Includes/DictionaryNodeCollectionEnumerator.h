#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DictionaryNodeCollectionEnumerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "", "DictionaryNodeCollectionEnumerator"));
	}

	template <typename T = uintptr_t> T& inner() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& isKeyList() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(DictionaryNodeCollectionEnumerator*))(Il2CppBase() + 0x4C9BFF8))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(DictionaryNodeCollectionEnumerator*))(Il2CppBase() + 0x4C9C140))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(DictionaryNodeCollectionEnumerator*))(Il2CppBase() + 0x4C9C234))(this);
	}

};

}
