#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WeaponStorage {

class PVPStorageGrenadeView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WeaponStorage", "PVPStorageGrenadeView"));
	}

	template <typename T = uintptr_t> T& GrenadeNum() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& PerkInfoRoot() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGrenadeNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetGrenadeNum(uintptr_t type) {
		return ((T (*)(PVPStorageGrenadeView*, uintptr_t))(Il2CppBase() + 0x4C5EBC0))(this, type);
	}

};

}
