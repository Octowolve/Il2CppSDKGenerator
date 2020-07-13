#pragma once
#include <Il2Cpp/Il2Cpp.h>

class KeysCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "", "KeysCollection"));
	}

	template <typename T = uintptr_t> T& m_collection() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T System_Collections_ICollection_CopyTo(uintptr_t array, int32_t arrayIndex) {
		return ((T (*)(KeysCollection*, uintptr_t, int32_t))(Il2CppBase() + 0x4C9E1B8))(this, array, arrayIndex);
	}
	template <typename T = bool> T System_Collections_ICollection_get_IsSynchronized() {
		return ((T (*)(KeysCollection*))(Il2CppBase() + 0x4C9E520))(this);
	}
	template <typename T = uintptr_t> T System_Collections_ICollection_get_SyncRoot() {
		return ((T (*)(KeysCollection*))(Il2CppBase() + 0x4C9E528))(this);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(KeysCollection*))(Il2CppBase() + 0x4C9E530))(this);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(KeysCollection*))(Il2CppBase() + 0x4C9E564))(this);
	}

};

}
