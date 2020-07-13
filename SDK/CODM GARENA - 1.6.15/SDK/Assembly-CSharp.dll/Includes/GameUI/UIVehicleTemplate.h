#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIVehicleTemplate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIVehicleTemplate"));
	}

	template <typename T = uintptr_t> T& WeaponNameLabel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& WeaponIconSprite() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& WeaponQualitySprite() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& ScoreLabel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& LockObj() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& ReddotObj() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& NewFlagObj() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& SelectedObj() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& EquipedObj() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& ShowedObj() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& LevelObj() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& LevelLabel() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& TimeLimit() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& UnlockEffect() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetVehicleRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetVehicleData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T SetVehicleRes(uint32_t vehicleId, bool isSkin) {
		return ((T (*)(UIVehicleTemplate*, uint32_t, bool))(Il2CppBase() + 0x2A1F5B4))(this, vehicleId, isSkin);
	}
	template <typename T = void> T SetVehicleData(uint32_t vehicleId, bool isSkin) {
		return ((T (*)(UIVehicleTemplate*, uint32_t, bool))(Il2CppBase() + 0x2A1F680))(this, vehicleId, isSkin);
	}
	template <typename T = void> T SetTime(uintptr_t itemData) {
		return ((T (*)(UIVehicleTemplate*, uintptr_t))(Il2CppBase() + 0x2A1FA00))(this, itemData);
	}

};

}
