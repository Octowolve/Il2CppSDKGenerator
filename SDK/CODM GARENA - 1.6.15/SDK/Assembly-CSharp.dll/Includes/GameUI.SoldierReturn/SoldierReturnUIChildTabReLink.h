#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.SoldierReturn {

class SoldierReturnUIChildTabReLink
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.SoldierReturn", "SoldierReturnUIChildTabReLink"));
	}

	template <typename T = Il2CppDictionary<int32_t, int32_t>*> static T& map_enum2Int() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<int32_t, int32_t>*> static T& map_int2Enum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Relink() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Enum2Int() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Int2Enum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> static T Relink() {
		return ((T (*)(void *))(Il2CppBase() + 0x3CA5778))(0);
	}
	template <typename T = int32_t> static T Enum2Int(uintptr_t tab) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3CA7DF0))(0, tab);
	}
	template <typename T = uintptr_t> static T Int2Enum(int32_t tab) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3CA7770))(0, tab);
	}

};

}
