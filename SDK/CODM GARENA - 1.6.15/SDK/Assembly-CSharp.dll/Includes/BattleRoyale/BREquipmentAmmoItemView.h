#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BREquipmentAmmoItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BREquipmentAmmoItemView"));
	}

	template <typename T = int32_t> T& ClipItemId() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& DisablePic() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& InActiveLabel() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitAmmoUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAmmoUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshEquippedForAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigForWeaponSlot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AmmoRefreshCountLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T get_DerivedData() {
		return ((T (*)(BREquipmentAmmoItemView*))(Il2CppBase() + 0x18C7614))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BREquipmentAmmoItemView*))(Il2CppBase() + 0x18C76D4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BREquipmentAmmoItemView*))(Il2CppBase() + 0x18C7A78))(this);
	}
	template <typename T = void> T InitAmmoUI() {
		return ((T (*)(BREquipmentAmmoItemView*))(Il2CppBase() + 0x18C78B8))(this);
	}
	template <typename T = void> T RefreshAmmoUI() {
		return ((T (*)(BREquipmentAmmoItemView*))(Il2CppBase() + 0x18C7D94))(this);
	}
	template <typename T = void> T SetData(uintptr_t data) {
		return ((T (*)(BREquipmentAmmoItemView*, uintptr_t))(Il2CppBase() + 0x18C8124))(this, data);
	}
	template <typename T = void> T RefreshEquippedForAmmo() {
		return ((T (*)(BREquipmentAmmoItemView*))(Il2CppBase() + 0x18C8068))(this);
	}
	template <typename T = bool> T ConfigForWeaponSlot(uintptr_t slotType) {
		return ((T (*)(BREquipmentAmmoItemView*, uintptr_t))(Il2CppBase() + 0x18C81DC))(this, slotType);
	}
	template <typename T = void> T AmmoRefreshCountLabel() {
		return ((T (*)(BREquipmentAmmoItemView*))(Il2CppBase() + 0x18C7E40))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(BREquipmentAmmoItemView*))(Il2CppBase() + 0x18C8620))(this);
	}

};

}
