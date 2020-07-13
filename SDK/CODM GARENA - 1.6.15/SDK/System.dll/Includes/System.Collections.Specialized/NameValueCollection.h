#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections.Specialized {

class NameValueCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Collections.Specialized", "NameValueCollection"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& cachedAllKeys() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& cachedAll() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = Il2CppString*> T get_Item(Il2CppString* name) {
		return ((T (*)(NameValueCollection*, Il2CppString*))(Il2CppBase() + 0x4C9E628))(this, name);
	}
	template <typename T = void> T set_Item(Il2CppString* name, Il2CppString* value) {
		return ((T (*)(NameValueCollection*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4C9E638))(this, name, value);
	}
	template <typename T = void> T Add(Il2CppString* name, Il2CppString* val) {
		return ((T (*)(NameValueCollection*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4C9E648))(this, name, val);
	}
	template <typename T = Il2CppString*> T Get(int32_t index) {
		return ((T (*)(NameValueCollection*, int32_t))(Il2CppBase() + 0x4C9E7F0))(this, index);
	}
	template <typename T = Il2CppString*> T Get_1(Il2CppString* name) {
		return ((T (*)(NameValueCollection*, Il2CppString*))(Il2CppBase() + 0x4C9F070))(this, name);
	}
	template <typename T = Il2CppString*> static T AsSingleString(uintptr_t values) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4C9E888))(0, values);
	}
	template <typename T = Il2CppString*> T GetKey(int32_t index) {
		return ((T (*)(NameValueCollection*, int32_t))(Il2CppBase() + 0x4C9F118))(this, index);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetValues(int32_t index) {
		return ((T (*)(NameValueCollection*, int32_t))(Il2CppBase() + 0x4C9F11C))(this, index);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetValues_1(Il2CppString* name) {
		return ((T (*)(NameValueCollection*, Il2CppString*))(Il2CppBase() + 0x4C9F290))(this, name);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T AsStringArray(uintptr_t values) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4C9F1B4))(0, values);
	}
	template <typename T = void> T Remove(Il2CppString* name) {
		return ((T (*)(NameValueCollection*, Il2CppString*))(Il2CppBase() + 0x4C9F338))(this, name);
	}
	template <typename T = void> T Set(Il2CppString* name, Il2CppString* value) {
		return ((T (*)(NameValueCollection*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4C9F40C))(this, name, value);
	}
	template <typename T = void> T InvalidateCachedArrays() {
		return ((T (*)(NameValueCollection*))(Il2CppBase() + 0x4C9E7E4))(this);
	}

};

}
