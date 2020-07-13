#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class PVPMatchOBPlayerItem2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "PVPMatchOB_PlayerItem2"));
	}

	template <typename T = uintptr_t> T& IndexLabel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& NameLabel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& NumSprite() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& PerkIconList() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& GrenadeIconList() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& UltIcon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& FirstWeapIcon() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& SecondWeapIcon() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& KillStreakIconList() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& PortraitSprite() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& MainWeaponBtn() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& NormalObj() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& EmptyObj() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& EmptyMainWeaponObj() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& EmptyViceWeaponObj() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& EmptyGrenadeObjs() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& CurPlayerInfo() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& CurPlayerIndex() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = void*> T& OnItemClick() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetClickFunc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateVolatileItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyPerkInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyGrenadeInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyUltInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyWeapInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyKillStreakInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T OnClickWeapon() {
		return ((T (*)(PVPMatchOBPlayerItem2*))(Il2CppBase() + 0x3AAD284))(this);
	}
	template <typename T = void> T SetClickFunc(void* func) {
		return ((T (*)(PVPMatchOBPlayerItem2*, void*))(Il2CppBase() + 0x3AAD384))(this, func);
	}
	template <typename T = void> T UpdateVolatileItem() {
		return ((T (*)(PVPMatchOBPlayerItem2*))(Il2CppBase() + 0x3AAD42C))(this);
	}
	template <typename T = void> T UpdateItem(uintptr_t playerInfo, int32_t index, bool isBlue, bool isFFA) {
		return ((T (*)(PVPMatchOBPlayerItem2*, uintptr_t, int32_t, bool, bool))(Il2CppBase() + 0x3AAE9D8))(this, playerInfo, index, isBlue, isFFA);
	}
	template <typename T = void> T ApplyPerkInfo(uintptr_t info) {
		return ((T (*)(PVPMatchOBPlayerItem2*, uintptr_t))(Il2CppBase() + 0x3AAE6FC))(this, info);
	}
	template <typename T = void> T ApplyGrenadeInfo(uintptr_t info) {
		return ((T (*)(PVPMatchOBPlayerItem2*, uintptr_t))(Il2CppBase() + 0x3AAE02C))(this, info);
	}
	template <typename T = void> T ApplyUltInfo(uintptr_t info) {
		return ((T (*)(PVPMatchOBPlayerItem2*, uintptr_t))(Il2CppBase() + 0x3AAE440))(this, info);
	}
	template <typename T = void> T ApplyWeapInfo(uintptr_t info, uint32_t weaponID) {
		return ((T (*)(PVPMatchOBPlayerItem2*, uintptr_t, uint32_t))(Il2CppBase() + 0x3AAD628))(this, info, weaponID);
	}
	template <typename T = void> T ApplyKillStreakInfo(uintptr_t info) {
		return ((T (*)(PVPMatchOBPlayerItem2*, uintptr_t))(Il2CppBase() + 0x3AADAB0))(this, info);
	}

};

}
