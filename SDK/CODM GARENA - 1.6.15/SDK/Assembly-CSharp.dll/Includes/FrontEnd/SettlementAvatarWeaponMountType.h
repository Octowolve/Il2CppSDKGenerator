#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class SettlementAvatarWeaponMountType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "SettlementAvatarWeaponMountType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& SETTLEMENT_WEAPON_MOUNT_BACK_HIDE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& SETTLEMENT_WEAPON_MOUNT_BACK_R() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& SETTLEMENT_WEAPON_MOUNT_BACK_L() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& SETTLEMENT_WEAPON_MOUNT_BACK_R_LOCATION() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& SETTLEMENT_WEAPON_MOUNT_BACK_L_LOCATION() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& SETTLEMENT_WEAPON_MOUNT_BACK_MELEE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& SETTLEMENT_WEAPON_MOUNT_BACK_SCYTHE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& SETTLEMENT_WEAPON_MOUNT_BACK_TYPE25() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& SETTLEMENT_WEAPON_MOUNT_BACK_SMRS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& SETTLEMENT_WEAPON_MOUNT_BACK_FHJ() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
