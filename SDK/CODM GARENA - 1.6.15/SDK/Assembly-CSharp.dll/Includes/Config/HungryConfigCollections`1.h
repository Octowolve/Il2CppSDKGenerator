#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class HungryConfigCollections1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "HungryConfigCollections`1"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Configs() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CacheArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Find() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T CacheArray() {
		return ((T (*)(HungryConfigCollections1*))(Il2CppBase() + 0x473357C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetArray() {
		return ((T (*)(HungryConfigCollections1*))(Il2CppBase() + 0x473395C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T FindAll(void* match) {
		return ((T (*)(HungryConfigCollections1*, void*))(Il2CppBase() + 0x4733A18))(this, match);
	}
	template <typename T = uintptr_t> T Find(void* match) {
		return ((T (*)(HungryConfigCollections1*, void*))(Il2CppBase() + 0x4733BD4))(this, match);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(HungryConfigCollections1*))(Il2CppBase() + 0x4733D38))(this);
	}

};

}
