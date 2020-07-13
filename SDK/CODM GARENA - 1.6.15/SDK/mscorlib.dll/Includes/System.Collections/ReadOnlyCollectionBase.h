#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections {

class ReadOnlyCollectionBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Collections", "ReadOnlyCollectionBase"));
	}

	template <typename T = uintptr_t> T& list() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(ReadOnlyCollectionBase*))(Il2CppBase() + 0x363F0FC))(this);
	}
	template <typename T = void> T System_Collections_ICollection_CopyTo(uintptr_t array, int32_t index) {
		return ((T (*)(ReadOnlyCollectionBase*, uintptr_t, int32_t))(Il2CppBase() + 0x363F10C))(this, array, index);
	}
	template <typename T = uintptr_t> T System_Collections_ICollection_get_SyncRoot() {
		return ((T (*)(ReadOnlyCollectionBase*))(Il2CppBase() + 0x363F1C0))(this);
	}
	template <typename T = bool> T System_Collections_ICollection_get_IsSynchronized() {
		return ((T (*)(ReadOnlyCollectionBase*))(Il2CppBase() + 0x363F1F4))(this);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(ReadOnlyCollectionBase*))(Il2CppBase() + 0x363F228))(this);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(ReadOnlyCollectionBase*))(Il2CppBase() + 0x363F25C))(this);
	}
	template <typename T = uintptr_t> T get_InnerList() {
		return ((T (*)(ReadOnlyCollectionBase*))(Il2CppBase() + 0x363F1B8))(this);
	}

};

}
