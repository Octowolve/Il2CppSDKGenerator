#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class LazyConfigBase2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "LazyConfigBase`2"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_GetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetKeyArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T GetPrimaryKeyValue() {
		return ((T (*)(LazyConfigBase2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> static T Cache() {
		return ((T (*)(void *))(Il2CppBase() + 0x47345E4))(0);
	}
	template <typename T = uintptr_t> static T GetData(uintptr_t key) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x473475C))(0, key);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetKeyArray() {
		return ((T (*)(void *))(Il2CppBase() + 0x4734988))(0);
	}

};

}
