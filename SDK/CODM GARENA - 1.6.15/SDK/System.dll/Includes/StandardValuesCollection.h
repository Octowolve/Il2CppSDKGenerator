#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StandardValuesCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "", "StandardValuesCollection"));
	}

	template <typename T = uintptr_t> T& values() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T System_Collections_ICollection_CopyTo(uintptr_t array, int32_t index) {
		return ((T (*)(StandardValuesCollection*, uintptr_t, int32_t))(Il2CppBase() + 0x4CB641C))(this, array, index);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(StandardValuesCollection*))(Il2CppBase() + 0x4CB6524))(this);
	}
	template <typename T = bool> T System_Collections_ICollection_get_IsSynchronized() {
		return ((T (*)(StandardValuesCollection*))(Il2CppBase() + 0x4CB661C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_ICollection_get_SyncRoot() {
		return ((T (*)(StandardValuesCollection*))(Il2CppBase() + 0x4CB6624))(this);
	}
	template <typename T = int32_t> T System_Collections_ICollection_get_Count() {
		return ((T (*)(StandardValuesCollection*))(Il2CppBase() + 0x4CB662C))(this);
	}
	template <typename T = void> T CopyTo(uintptr_t array, int32_t index) {
		return ((T (*)(StandardValuesCollection*, uintptr_t, int32_t))(Il2CppBase() + 0x4CB6420))(this, array, index);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(StandardValuesCollection*))(Il2CppBase() + 0x4CB6528))(this);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(StandardValuesCollection*))(Il2CppBase() + 0x4CB6630))(this);
	}

};

}
