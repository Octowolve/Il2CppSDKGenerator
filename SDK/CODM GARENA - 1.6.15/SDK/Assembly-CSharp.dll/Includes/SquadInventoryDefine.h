#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SquadInventoryDefine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SquadInventoryDefine"));
	}

	template <typename T = Il2CppList<uintptr_t>*> static T& m_CacheWeaponTypeList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppList<uintptr_t>*> static T get_CacheWeaponTypeList() {
		return ((T (*)(void *))(Il2CppBase() + 0x3948CCC))(0);
	}

};

}
