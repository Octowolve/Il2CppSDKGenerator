#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Messaging {

class MethodDictionary
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Messaging", "MethodDictionary"));
	}

	template <typename T = uintptr_t> T& _internalProperties() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _message() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _methodKeys() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& _ownProperties() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map21() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map22() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(MethodDictionary*))(Il2CppBase() + 0x4B39460))(this);
	}
	template <typename T = void> T set_MethodKeys(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(MethodDictionary*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4B34A84))(this, value);
	}
	template <typename T = uintptr_t> T AllocInternalProperties() {
		return ((T (*)(MethodDictionary*))(Il2CppBase() + 0x4B3961C))(this);
	}
	template <typename T = uintptr_t> T GetInternalProperties() {
		return ((T (*)(MethodDictionary*))(Il2CppBase() + 0x4B3352C))(this);
	}
	template <typename T = bool> T IsOverridenKey(Il2CppString* key) {
		return ((T (*)(MethodDictionary*, Il2CppString*))(Il2CppBase() + 0x4B396B4))(this, key);
	}
	template <typename T = bool> T get_IsReadOnly() {
		return ((T (*)(MethodDictionary*))(Il2CppBase() + 0x4B397D4))(this);
	}
	template <typename T = uintptr_t> T get_Item(uintptr_t key) {
		return ((T (*)(MethodDictionary*, uintptr_t))(Il2CppBase() + 0x4B397DC))(this, key);
	}
	template <typename T = void> T set_Item(uintptr_t key, uintptr_t value) {
		return ((T (*)(MethodDictionary*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B39A9C))(this, key, value);
	}
	template <typename T = uintptr_t> T GetMethodProperty(Il2CppString* key) {
		return ((T (*)(MethodDictionary*, Il2CppString*))(Il2CppBase() + 0x4B35628))(this, key);
	}
	template <typename T = void> T SetMethodProperty(Il2CppString* key, uintptr_t value) {
		return ((T (*)(MethodDictionary*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4B360D8))(this, key, value);
	}
	template <typename T = uintptr_t> T get_Keys() {
		return ((T (*)(MethodDictionary*))(Il2CppBase() + 0x4B39D90))(this);
	}
	template <typename T = uintptr_t> T get_Values() {
		return ((T (*)(MethodDictionary*))(Il2CppBase() + 0x4B3A30C))(this);
	}
	template <typename T = void> T Add(uintptr_t key, uintptr_t value) {
		return ((T (*)(MethodDictionary*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B39AA0))(this, key, value);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(MethodDictionary*))(Il2CppBase() + 0x4B3A868))(this);
	}
	template <typename T = bool> T Contains(uintptr_t key) {
		return ((T (*)(MethodDictionary*, uintptr_t))(Il2CppBase() + 0x4B3A950))(this, key);
	}
	template <typename T = void> T Remove(uintptr_t key) {
		return ((T (*)(MethodDictionary*, uintptr_t))(Il2CppBase() + 0x4B3AC00))(this, key);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(MethodDictionary*))(Il2CppBase() + 0x4B3AEF4))(this);
	}
	template <typename T = bool> T get_IsSynchronized() {
		return ((T (*)(MethodDictionary*))(Il2CppBase() + 0x4B3B00C))(this);
	}
	template <typename T = uintptr_t> T get_SyncRoot() {
		return ((T (*)(MethodDictionary*))(Il2CppBase() + 0x4B3B014))(this);
	}
	template <typename T = void> T CopyTo(uintptr_t array, int32_t index) {
		return ((T (*)(MethodDictionary*, uintptr_t, int32_t))(Il2CppBase() + 0x4B3B018))(this, array, index);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(MethodDictionary*))(Il2CppBase() + 0x4B3B124))(this);
	}

};

}
