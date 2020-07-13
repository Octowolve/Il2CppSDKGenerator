#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponListInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponListInfo"));
	}

	template <typename T = int32_t> T& weaponId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& weaponModel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& bLoaded() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
