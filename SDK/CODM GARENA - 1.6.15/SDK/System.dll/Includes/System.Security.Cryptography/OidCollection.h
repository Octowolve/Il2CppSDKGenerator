#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class OidCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Security.Cryptography", "OidCollection"));
	}

	template <typename T = uintptr_t> T& _list() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& _readOnly() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T System_Collections_ICollection_CopyTo(uintptr_t array, int32_t index) {
		return ((T (*)(OidCollection*, uintptr_t, int32_t))(Il2CppBase() + 0x3E7A9C0))(this, array, index);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(OidCollection*))(Il2CppBase() + 0x3E7A9F4))(this);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(OidCollection*))(Il2CppBase() + 0x3E7AAB8))(this);
	}
	template <typename T = bool> T get_IsSynchronized() {
		return ((T (*)(OidCollection*))(Il2CppBase() + 0x3E7AAEC))(this);
	}
	template <typename T = uintptr_t> T get_Item(int32_t index) {
		return ((T (*)(OidCollection*, int32_t))(Il2CppBase() + 0x3E7AB20))(this, index);
	}
	template <typename T = uintptr_t> T get_Item_1(Il2CppString* oid) {
		return ((T (*)(OidCollection*, Il2CppString*))(Il2CppBase() + 0x3E58958))(this, oid);
	}
	template <typename T = uintptr_t> T get_SyncRoot() {
		return ((T (*)(OidCollection*))(Il2CppBase() + 0x3E7ACC0))(this);
	}
	template <typename T = int32_t> T Add(uintptr_t oid) {
		return ((T (*)(OidCollection*, uintptr_t))(Il2CppBase() + 0x3E7ACF4))(this, oid);
	}
	template <typename T = void> T set_ReadOnly(bool value) {
		return ((T (*)(OidCollection*, bool))(Il2CppBase() + 0x3E7AD38))(this, value);
	}

};

}
