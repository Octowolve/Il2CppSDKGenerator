#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DictionaryNodeCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "", "DictionaryNodeCollection"));
	}

	template <typename T = uintptr_t> T& dict() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& isKeyList() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_Count() {
		return ((T (*)(DictionaryNodeCollection*))(Il2CppBase() + 0x4C9BA9C))(this);
	}
	template <typename T = bool> T get_IsSynchronized() {
		return ((T (*)(DictionaryNodeCollection*))(Il2CppBase() + 0x4C9BAC0))(this);
	}
	template <typename T = uintptr_t> T get_SyncRoot() {
		return ((T (*)(DictionaryNodeCollection*))(Il2CppBase() + 0x4C9BAC8))(this);
	}
	template <typename T = void> T CopyTo(uintptr_t array, int32_t index) {
		return ((T (*)(DictionaryNodeCollection*, uintptr_t, int32_t))(Il2CppBase() + 0x4C9BAE8))(this, array, index);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(DictionaryNodeCollection*))(Il2CppBase() + 0x4C9BF14))(this);
	}

};

}
