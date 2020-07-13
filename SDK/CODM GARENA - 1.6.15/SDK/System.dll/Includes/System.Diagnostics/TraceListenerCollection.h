#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Diagnostics {

class TraceListenerCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Diagnostics", "TraceListenerCollection"));
	}

	template <typename T = uintptr_t> T& listeners() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T System_Collections_IList_get_Item(int32_t index) {
		return ((T (*)(TraceListenerCollection*, int32_t))(Il2CppBase() + 0x42B19B0))(this, index);
	}
	template <typename T = void> T System_Collections_IList_set_Item(int32_t index, uintptr_t value) {
		return ((T (*)(TraceListenerCollection*, int32_t, uintptr_t))(Il2CppBase() + 0x42B19E4))(this, index, value);
	}
	template <typename T = bool> T System_Collections_ICollection_get_IsSynchronized() {
		return ((T (*)(TraceListenerCollection*))(Il2CppBase() + 0x42B1B98))(this);
	}
	template <typename T = uintptr_t> T System_Collections_ICollection_get_SyncRoot() {
		return ((T (*)(TraceListenerCollection*))(Il2CppBase() + 0x42B1BCC))(this);
	}
	template <typename T = bool> T System_Collections_IList_get_IsFixedSize() {
		return ((T (*)(TraceListenerCollection*))(Il2CppBase() + 0x42B1C00))(this);
	}
	template <typename T = bool> T System_Collections_IList_get_IsReadOnly() {
		return ((T (*)(TraceListenerCollection*))(Il2CppBase() + 0x42B1C34))(this);
	}
	template <typename T = void> T System_Collections_ICollection_CopyTo(uintptr_t array, int32_t index) {
		return ((T (*)(TraceListenerCollection*, uintptr_t, int32_t))(Il2CppBase() + 0x42B1C68))(this, array, index);
	}
	template <typename T = int32_t> T System_Collections_IList_Add(uintptr_t value) {
		return ((T (*)(TraceListenerCollection*, uintptr_t))(Il2CppBase() + 0x42B1C9C))(this, value);
	}
	template <typename T = bool> T System_Collections_IList_Contains(uintptr_t value) {
		return ((T (*)(TraceListenerCollection*, uintptr_t))(Il2CppBase() + 0x42B1DC0))(this, value);
	}
	template <typename T = int32_t> T System_Collections_IList_IndexOf(uintptr_t value) {
		return ((T (*)(TraceListenerCollection*, uintptr_t))(Il2CppBase() + 0x42B1EA0))(this, value);
	}
	template <typename T = void> T System_Collections_IList_Insert(int32_t index, uintptr_t value) {
		return ((T (*)(TraceListenerCollection*, int32_t, uintptr_t))(Il2CppBase() + 0x42B1F84))(this, index, value);
	}
	template <typename T = void> T System_Collections_IList_Remove(uintptr_t value) {
		return ((T (*)(TraceListenerCollection*, uintptr_t))(Il2CppBase() + 0x42B2100))(this, value);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(TraceListenerCollection*))(Il2CppBase() + 0x42B21E0))(this);
	}
	template <typename T = void> T set_Item(int32_t index, uintptr_t value) {
		return ((T (*)(TraceListenerCollection*, int32_t, uintptr_t))(Il2CppBase() + 0x42B1B48))(this, index, value);
	}
	template <typename T = int32_t> T Add(uintptr_t listener) {
		return ((T (*)(TraceListenerCollection*, uintptr_t))(Il2CppBase() + 0x42B196C))(this, listener);
	}
	template <typename T = void> T Add_1(uintptr_t listener, uintptr_t settings) {
		return ((T (*)(TraceListenerCollection*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42B0C80))(this, listener, settings);
	}
	template <typename T = void> T InitializeListener(uintptr_t listener) {
		return ((T (*)(TraceListenerCollection*, uintptr_t))(Il2CppBase() + 0x42B1A8C))(this, listener);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(TraceListenerCollection*))(Il2CppBase() + 0x42B2214))(this);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(TraceListenerCollection*))(Il2CppBase() + 0x42B2248))(this);
	}
	template <typename T = void> T Insert(int32_t index, uintptr_t listener) {
		return ((T (*)(TraceListenerCollection*, int32_t, uintptr_t))(Il2CppBase() + 0x42B20B0))(this, index, listener);
	}
	template <typename T = void> T RemoveAt(int32_t index) {
		return ((T (*)(TraceListenerCollection*, int32_t))(Il2CppBase() + 0x42B227C))(this, index);
	}

};

}
