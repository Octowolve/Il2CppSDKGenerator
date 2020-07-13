#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutWeaponStaticTab
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutWeaponStaticTab"));
	}

	template <typename T = uintptr_t> T& CurrentShowLabel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& OnStateObj() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& OffStateObj() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& LdFilterType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& TypeLabel() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTabClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Show(bool show) {
		return ((T (*)(LoadoutWeaponStaticTab*, bool))(Il2CppBase() + 0x1F1B394))(this, show);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(LoadoutWeaponStaticTab*))(Il2CppBase() + 0x1F6DDD4))(this);
	}
	template <typename T = void> T OnTabClick(uintptr_t obj) {
		return ((T (*)(LoadoutWeaponStaticTab*, uintptr_t))(Il2CppBase() + 0x1F6DF04))(this, obj);
	}

};

}
