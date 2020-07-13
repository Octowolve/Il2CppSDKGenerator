#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class Dictionary3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "Dictionary`3"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Add() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ContainsKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_Item(uintptr_t key1, uintptr_t key2) {
		return ((T (*)(Dictionary3*, uintptr_t, uintptr_t))(Il2CppBase() + 0x48D95F4))(this, key1, key2);
	}
	template <typename T = void> T set_Item(uintptr_t key1, uintptr_t key2, uintptr_t value) {
		return ((T (*)(Dictionary3*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x48D9680))(this, key1, key2, value);
	}
	template <typename T = void> T Add(uintptr_t key1, uintptr_t key2, uintptr_t value) {
		return ((T (*)(Dictionary3*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x48D971C))(this, key1, key2, value);
	}
	template <typename T = bool> T ContainsKey(uintptr_t key1, uintptr_t key2) {
		return ((T (*)(Dictionary3*, uintptr_t, uintptr_t))(Il2CppBase() + 0x48D987C))(this, key1, key2);
	}

};

}
