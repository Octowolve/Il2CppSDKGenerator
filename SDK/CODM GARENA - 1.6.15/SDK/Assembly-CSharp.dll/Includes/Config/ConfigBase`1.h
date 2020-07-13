#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ConfigBase1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ConfigBase`1"));
	}

	template <typename T = void*> static T& Coll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Cache() {
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

	template <typename T = void> static T Cache() {
		return ((T (*)(void *))(Il2CppBase() + 0x4728F24))(0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetArray() {
		return ((T (*)(void *))(Il2CppBase() + 0x472909C))(0);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T FindAll(void* match) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x472927C))(0, match);
	}
	template <typename T = uintptr_t> static T Find(void* match) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x47294A8))(0, match);
	}

};

}
