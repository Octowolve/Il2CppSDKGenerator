#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace IniParser.Model {

class KeyDataCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("INIFileParser.dll", "IniParser.Model", "KeyDataCollection"));
	}

	template <typename T = void*> T& _searchComparer() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& _keyData() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T set_Item(Il2CppString* keyName, Il2CppString* value) {
		return ((T (*)(KeyDataCollection*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x5212220))(this, keyName, value);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(KeyDataCollection*))(Il2CppBase() + 0x5212428))(this);
	}
	template <typename T = bool> T AddKey(Il2CppString* keyName) {
		return ((T (*)(KeyDataCollection*, Il2CppString*))(Il2CppBase() + 0x5212310))(this, keyName);
	}
	template <typename T = bool> T AddKey_1(Il2CppString* keyName, Il2CppString* keyValue) {
		return ((T (*)(KeyDataCollection*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x52124C0))(this, keyName, keyValue);
	}
	template <typename T = bool> T ContainsKey(Il2CppString* keyName) {
		return ((T (*)(KeyDataCollection*, Il2CppString*))(Il2CppBase() + 0x5212590))(this, keyName);
	}
	template <typename T = uintptr_t> T GetKeyData(Il2CppString* keyName) {
		return ((T (*)(KeyDataCollection*, Il2CppString*))(Il2CppBase() + 0x5212630))(this, keyName);
	}
	template <typename T = void*> T GetEnumerator() {
		return ((T (*)(KeyDataCollection*))(Il2CppBase() + 0x5210F30))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(KeyDataCollection*))(Il2CppBase() + 0x5212730))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(KeyDataCollection*))(Il2CppBase() + 0x5211470))(this);
	}
	template <typename T = uintptr_t> T GetLast() {
		return ((T (*)(KeyDataCollection*))(Il2CppBase() + 0x52127F0))(this);
	}

};

}
