#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls {

class CipherSuiteCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls", "CipherSuiteCollection"));
	}

	template <typename T = uintptr_t> T& cipherSuites() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& protocol() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T System_Collections_IList_get_Item(int32_t index) {
		return ((T (*)(CipherSuiteCollection*, int32_t))(Il2CppBase() + 0x47D875C))(this, index);
	}
	template <typename T = void> T System_Collections_IList_set_Item(int32_t index, uintptr_t value) {
		return ((T (*)(CipherSuiteCollection*, int32_t, uintptr_t))(Il2CppBase() + 0x47D8810))(this, index, value);
	}
	template <typename T = bool> T System_Collections_ICollection_get_IsSynchronized() {
		return ((T (*)(CipherSuiteCollection*))(Il2CppBase() + 0x47D88E0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_ICollection_get_SyncRoot() {
		return ((T (*)(CipherSuiteCollection*))(Il2CppBase() + 0x47D8914))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(CipherSuiteCollection*))(Il2CppBase() + 0x47D8948))(this);
	}
	template <typename T = bool> T System_Collections_IList_Contains(uintptr_t value) {
		return ((T (*)(CipherSuiteCollection*, uintptr_t))(Il2CppBase() + 0x47D897C))(this, value);
	}
	template <typename T = int32_t> T System_Collections_IList_IndexOf(uintptr_t value) {
		return ((T (*)(CipherSuiteCollection*, uintptr_t))(Il2CppBase() + 0x47D8A5C))(this, value);
	}
	template <typename T = void> T System_Collections_IList_Insert(int32_t index, uintptr_t value) {
		return ((T (*)(CipherSuiteCollection*, int32_t, uintptr_t))(Il2CppBase() + 0x47D8B3C))(this, index, value);
	}
	template <typename T = void> T System_Collections_IList_Remove(uintptr_t value) {
		return ((T (*)(CipherSuiteCollection*, uintptr_t))(Il2CppBase() + 0x47D8C24))(this, value);
	}
	template <typename T = void> T System_Collections_IList_RemoveAt(int32_t index) {
		return ((T (*)(CipherSuiteCollection*, int32_t))(Il2CppBase() + 0x47D8D04))(this, index);
	}
	template <typename T = int32_t> T System_Collections_IList_Add(uintptr_t value) {
		return ((T (*)(CipherSuiteCollection*, uintptr_t))(Il2CppBase() + 0x47D8D38))(this, value);
	}
	template <typename T = uintptr_t> T get_Item(Il2CppString* name) {
		return ((T (*)(CipherSuiteCollection*, Il2CppString*))(Il2CppBase() + 0x47D8E18))(this, name);
	}
	template <typename T = uintptr_t> T get_Item_1(int32_t index) {
		return ((T (*)(CipherSuiteCollection*, int32_t))(Il2CppBase() + 0x47D8760))(this, index);
	}
	template <typename T = void> T set_Item(int32_t index, uintptr_t value) {
		return ((T (*)(CipherSuiteCollection*, int32_t, uintptr_t))(Il2CppBase() + 0x47D88AC))(this, index, value);
	}
	template <typename T = uintptr_t> T get_Item_2(int16_t code) {
		return ((T (*)(CipherSuiteCollection*, int16_t))(Il2CppBase() + 0x47D91D8))(this, code);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(CipherSuiteCollection*))(Il2CppBase() + 0x47D95A0))(this);
	}
	template <typename T = bool> T get_IsFixedSize() {
		return ((T (*)(CipherSuiteCollection*))(Il2CppBase() + 0x47D95D4))(this);
	}
	template <typename T = bool> T get_IsReadOnly() {
		return ((T (*)(CipherSuiteCollection*))(Il2CppBase() + 0x47D9608))(this);
	}
	template <typename T = void> T CopyTo(uintptr_t array, int32_t index) {
		return ((T (*)(CipherSuiteCollection*, uintptr_t, int32_t))(Il2CppBase() + 0x47D963C))(this, array, index);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(CipherSuiteCollection*))(Il2CppBase() + 0x47D9670))(this);
	}
	template <typename T = int32_t> T IndexOf(Il2CppString* name) {
		return ((T (*)(CipherSuiteCollection*, Il2CppString*))(Il2CppBase() + 0x47D8ED8))(this, name);
	}
	template <typename T = int32_t> T IndexOf_1(int16_t code) {
		return ((T (*)(CipherSuiteCollection*, int16_t))(Il2CppBase() + 0x47D9298))(this, code);
	}
	template <typename T = uintptr_t> T Add(int16_t code, Il2CppString* name, uintptr_t cipherType, uintptr_t hashType, uintptr_t exchangeType, bool exportable, bool blockMode, unsigned char keyMaterialSize, unsigned char expandedKeyMaterialSize, int16_t effectiveKeyBytes, unsigned char ivSize, unsigned char blockSize) {
		return ((T (*)(CipherSuiteCollection*, int16_t, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, bool, bool, unsigned char, unsigned char, int16_t, unsigned char, unsigned char))(Il2CppBase() + 0x47D97B0))(this, code, name, cipherType, hashType, exchangeType, exportable, blockMode, keyMaterialSize, expandedKeyMaterialSize, effectiveKeyBytes, ivSize, blockSize);
	}
	template <typename T = uintptr_t> T add(uintptr_t cipherSuite) {
		return ((T (*)(CipherSuiteCollection*, uintptr_t))(Il2CppBase() + 0x47D99B4))(this, cipherSuite);
	}
	template <typename T = uintptr_t> T add_1(uintptr_t cipherSuite) {
		return ((T (*)(CipherSuiteCollection*, uintptr_t))(Il2CppBase() + 0x47D99F4))(this, cipherSuite);
	}
	template <typename T = bool> T cultureAwareCompare(Il2CppString* strA, Il2CppString* strB) {
		return ((T (*)(CipherSuiteCollection*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x47D96A4))(this, strA, strB);
	}

};

}
