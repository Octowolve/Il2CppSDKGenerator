#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponAttachmentVehicleGun
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponAttachmentVehicleGun"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedFireAmmunition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnerGameObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ThirdPersonStartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T SimulatedFireAmmunition() {
		return ((T (*)(WeaponAttachmentVehicleGun*))(Il2CppBase() + 0x1C55C60))(this);
	}
	template <typename T = uintptr_t> T GetOwnerGameObject() {
		return ((T (*)(WeaponAttachmentVehicleGun*))(Il2CppBase() + 0x1C55E34))(this);
	}
	template <typename T = void> T ThirdPersonStartFire(int32_t inFireCompIndex, bool aimedFire, bool isSingle, int32_t aommoCount) {
		return ((T (*)(WeaponAttachmentVehicleGun*, int32_t, bool, bool, int32_t))(Il2CppBase() + 0x1C56020))(this, inFireCompIndex, aimedFire, isSingle, aommoCount);
	}
	template <typename T = void> T xLuaBaseProxy_SimulatedFireAmmunition() {
		return ((T (*)(WeaponAttachmentVehicleGun*))(Il2CppBase() + 0x1C56264))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetOwnerGameObject() {
		return ((T (*)(WeaponAttachmentVehicleGun*))(Il2CppBase() + 0x1C5626C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ThirdPersonStartFire(int32_t P0, bool P1, bool P2, int32_t P3) {
		return ((T (*)(WeaponAttachmentVehicleGun*, int32_t, bool, bool, int32_t))(Il2CppBase() + 0x1C56274))(this, P0, P1, P2, P3);
	}

};

}
