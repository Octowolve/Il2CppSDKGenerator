#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class Inventory
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "Inventory"));
	}

	template <typename T = int32_t> T& m_ItemID() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = unsigned char> T& m_Slot() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& m_ActorID() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& m_ItemLevel() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_WeaponName() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_CategoryName() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_SubCategoryName() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_Owner() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& m_OwnerPlayerId() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uint32_t> T& m_curSkinID() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_WeaponPartInfoList() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& UseByPulloutWeapon() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& m_IsUltWeapon() {
		return *(T*)((uintptr_t)this + 0x59);
	}
	template <typename T = bool> T& m_IsUltWeaponFireCostEnergy() {
		return *(T*)((uintptr_t)this + 0x5A);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetQuickKnifeFireCompIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSameWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_IsSameWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_IsSameWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDefaultIconName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInventoryName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAssetLoadComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAsyncLoadCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Activate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deactivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSecondaryFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopSecondaryFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAdjustedCameraAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAdjustedWeaponAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangePunchAngleByGetHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLoading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPrimaryWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInstantFireWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_IsPrimaryWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_IsPrimaryWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_IsPrimaryWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSecondaryWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_IsSecondaryWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_IsSecondaryWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_IsSecondaryWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMeleeWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsThrowWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSpecialMeleeWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSpecialThrowWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSpecialWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsScythe() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsControllableWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSentryGunWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSAMTurretWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCounterUAVWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsUAVWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBombWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPistol() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBanSwitchWeaponInWather() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLauncher() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAssaultRifle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSniper() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShotGun() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsGun() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UseHoldThrow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UseSlideThrow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrintLoadingInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCrossHairCustomID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponCategory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponSubCategory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_IsThrowWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsGeneralThrowWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_IsSniper() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_IsControllableWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNormalWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(Inventory*, uintptr_t, bool))(Il2CppBase() + 0x246187C))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x246195C))(this);
	}
	template <typename T = uintptr_t> T get_Owner() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x2461A18))(this);
	}
	template <typename T = void> T set_Owner(uintptr_t value) {
		return ((T (*)(Inventory*, uintptr_t))(Il2CppBase() + 0x2461A20))(this, value);
	}
	template <typename T = uint32_t> T get_OwnerPlayerId() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x2461A28))(this);
	}
	template <typename T = void> T set_OwnerPlayerId(uint32_t value) {
		return ((T (*)(Inventory*, uint32_t))(Il2CppBase() + 0x2461A30))(this, value);
	}
	template <typename T = bool> T get_IsLocalOwner() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x2461A38))(this);
	}
	template <typename T = int32_t> T get_ItemID() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x2461B1C))(this);
	}
	template <typename T = void> T set_ItemID(int32_t value) {
		return ((T (*)(Inventory*, int32_t))(Il2CppBase() + 0x2461B24))(this, value);
	}
	template <typename T = int32_t> T get_ItemLevel() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x2461F90))(this);
	}
	template <typename T = void> T set_ItemLevel(int32_t value) {
		return ((T (*)(Inventory*, int32_t))(Il2CppBase() + 0x2461F98))(this, value);
	}
	template <typename T = bool> T get_IsQuickKnife() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x2461FA0))(this);
	}
	template <typename T = int32_t> T GetQuickKnifeFireCompIndex() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x2462184))(this);
	}
	template <typename T = unsigned char> T get_Slot() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x2462224))(this);
	}
	template <typename T = void> T set_Slot(unsigned char value) {
		return ((T (*)(Inventory*, unsigned char))(Il2CppBase() + 0x246222C))(this, value);
	}
	template <typename T = int32_t> T get_ActorID() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x2462234))(this);
	}
	template <typename T = void> T set_ActorID(int32_t value) {
		return ((T (*)(Inventory*, int32_t))(Il2CppBase() + 0x246223C))(this, value);
	}
	template <typename T = void> T set_CurSkinID(uint32_t value) {
		return ((T (*)(Inventory*, uint32_t))(Il2CppBase() + 0x2462244))(this, value);
	}
	template <typename T = uint32_t> T get_CurSkinID() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x246224C))(this);
	}
	template <typename T = void> T set_WeaponPartInfoList(Il2CppList<uintptr_t>* value) {
		return ((T (*)(Inventory*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2462254))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_WeaponPartInfoList() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x246225C))(this);
	}
	template <typename T = uintptr_t> T get_WeaponSlot() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x2462264))(this);
	}
	template <typename T = bool> T IsSameWeapon(uintptr_t inWeapon) {
		return ((T (*)(Inventory*, uintptr_t))(Il2CppBase() + 0x246226C))(this, inWeapon);
	}
	template <typename T = bool> T IsSameWeapon_1(int32_t itemID, int32_t actorId) {
		return ((T (*)(Inventory*, int32_t, int32_t))(Il2CppBase() + 0x2462364))(this, itemID, actorId);
	}
	template <typename T = bool> T IsSameWeapon_2(int32_t inItemID, unsigned char inSlot, int32_t inActorId) {
		return ((T (*)(Inventory*, int32_t, unsigned char, int32_t))(Il2CppBase() + 0x246243C))(this, inItemID, inSlot, inActorId);
	}
	template <typename T = uintptr_t> T get_WeaponName() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x2462580))(this);
	}
	template <typename T = uintptr_t> T get_Category() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x2462588))(this);
	}
	template <typename T = void> T set_Category(uintptr_t value) {
		return ((T (*)(Inventory*, uintptr_t))(Il2CppBase() + 0x2462590))(this, value);
	}
	template <typename T = uintptr_t> T get_SubCategory() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x2462598))(this);
	}
	template <typename T = void> T set_SubCategory(uintptr_t value) {
		return ((T (*)(Inventory*, uintptr_t))(Il2CppBase() + 0x24625A0))(this, value);
	}
	template <typename T = Il2CppString*> T get_IconName() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x24625A8))(this);
	}
	template <typename T = Il2CppString*> T get_InventoryName() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x24626D0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x24627CC))(this);
	}
	template <typename T = Il2CppString*> static T GetDefaultIconName(uintptr_t weaponName, bool isKillIcon) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x24625B4))(0, weaponName, isKillIcon);
	}
	template <typename T = Il2CppString*> static T GetInventoryName(uintptr_t weapoName) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x24626D8))(0, weapoName);
	}
	template <typename T = void> T Start() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x2462ACC))(this);
	}
	template <typename T = bool> T IsAssetLoadComplete() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x2462B74))(this);
	}
	template <typename T = void> T ClearAsyncLoadCallback() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x2462C14))(this);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x2462CAC))(this);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x2462D44))(this);
	}
	template <typename T = void> T PutDown() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x2462DDC))(this);
	}
	template <typename T = void> T StartAim() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x2462E74))(this);
	}
	template <typename T = void> T StopAim() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x2462F0C))(this);
	}
	template <typename T = void> T StartFire() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x2462FA4))(this);
	}
	template <typename T = void> T StopFire(bool isImmidiately) {
		return ((T (*)(Inventory*, bool))(Il2CppBase() + 0x246303C))(this, isImmidiately);
	}
	template <typename T = void> T StartSecondaryFire() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x24630DC))(this);
	}
	template <typename T = void> T StopSecondaryFire() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x2463174))(this);
	}
	template <typename T = Il2CppQuaternion> T GetAdjustedCameraAim(Il2CppQuaternion initialAim) {
		return ((T (*)(Inventory*, Il2CppQuaternion))(Il2CppBase() + 0x246320C))(this, initialAim);
	}
	template <typename T = Il2CppQuaternion> T GetAdjustedWeaponAim(Il2CppQuaternion initialAim) {
		return ((T (*)(Inventory*, Il2CppQuaternion))(Il2CppBase() + 0x24632F0))(this, initialAim);
	}
	template <typename T = void> T ChangePunchAngleByGetHit() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x24633D4))(this);
	}
	template <typename T = bool> T IsLoading() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x246346C))(this);
	}
	template <typename T = bool> T IsPrimaryWeapon() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x246350C))(this);
	}
	template <typename T = bool> T IsInstantFireWeapon() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x2463684))(this);
	}
	template <typename T = bool> static T IsPrimaryWeapon_1(uintptr_t weaponName) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2463758))(0, weaponName);
	}
	template <typename T = bool> static T IsPrimaryWeapon_2(int32_t itemID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2463AE8))(0, itemID);
	}
	template <typename T = bool> static T IsPrimaryWeapon_3(uintptr_t inCategory) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x24635D0))(0, inCategory);
	}
	template <typename T = bool> T IsSecondaryWeapon() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x2463B90))(this);
	}
	template <typename T = bool> static T IsSecondaryWeapon_1(uintptr_t weaponName) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2463D0C))(0, weaponName);
	}
	template <typename T = bool> static T IsSecondaryWeapon_2(int32_t itemID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2463DF0))(0, itemID);
	}
	template <typename T = bool> static T IsSecondaryWeapon_3(uintptr_t inCategory) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2463C54))(0, inCategory);
	}
	template <typename T = bool> T IsMeleeWeapon() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x2463E98))(this);
	}
	template <typename T = bool> T IsThrowWeapon() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x2463F44))(this);
	}
	template <typename T = bool> T IsSpecialMeleeWeapon() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x2463FF0))(this);
	}
	template <typename T = bool> T IsSpecialThrowWeapon() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x2464090))(this);
	}
	template <typename T = bool> T IsSpecialWeapon() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x2464130))(this);
	}
	template <typename T = bool> T IsScythe() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x24641FC))(this);
	}
	template <typename T = bool> T IsControllableWeapon() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x24642AC))(this);
	}
	template <typename T = bool> T IsSentryGunWeapon() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x2464378))(this);
	}
	template <typename T = bool> T IsSAMTurretWeapon() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x2464428))(this);
	}
	template <typename T = bool> T IsCounterUAVWeapon() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x24644D8))(this);
	}
	template <typename T = bool> T IsUAVWeapon() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x2464588))(this);
	}
	template <typename T = bool> T IsBombWeapon() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x2464638))(this);
	}
	template <typename T = bool> T IsPistol() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x24646E8))(this);
	}
	template <typename T = bool> T IsBanSwitchWeaponInWather() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x2464794))(this);
	}
	template <typename T = bool> T IsLauncher() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x2464888))(this);
	}
	template <typename T = bool> T IsAssaultRifle() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x2464934))(this);
	}
	template <typename T = bool> T IsSniper() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x24649DC))(this);
	}
	template <typename T = bool> T IsShotGun() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x2464A88))(this);
	}
	template <typename T = bool> T IsGun() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x2464B34))(this);
	}
	template <typename T = bool> T UseHoldThrow() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x2464C4C))(this);
	}
	template <typename T = bool> T UseSlideThrow() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x2464DA8))(this);
	}
	template <typename T = void> T PrintLoadingInfo() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x2464E48))(this);
	}
	template <typename T = bool> T get_IsUltWeapon() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x246367C))(this);
	}
	template <typename T = void> T set_IsUltWeapon(bool value) {
		return ((T (*)(Inventory*, bool))(Il2CppBase() + 0x2464EE0))(this, value);
	}
	template <typename T = bool> T get_IsUltWeaponFireCostEnergy() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x2464EE8))(this);
	}
	template <typename T = void> T set_IsUltWeaponFireCostEnergy(bool value) {
		return ((T (*)(Inventory*, bool))(Il2CppBase() + 0x2464EF0))(this, value);
	}
	template <typename T = int32_t> T GetCrossHairCustomID() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x2464EF8))(this);
	}
	template <typename T = uintptr_t> static T GetWeaponCategory(int32_t itemID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2461E38))(0, itemID);
	}
	template <typename T = uintptr_t> static T GetWeaponSubCategory(int32_t itemID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2465154))(0, itemID);
	}
	template <typename T = bool> static T IsThrowWeapon_1(int32_t inItemID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x246524C))(0, inItemID);
	}
	template <typename T = bool> static T IsGeneralThrowWeapon(int32_t itemID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x24652FC))(0, itemID);
	}
	template <typename T = bool> static T IsSniper_1(int32_t weaponID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x24654F0))(0, weaponID);
	}
	template <typename T = bool> static T IsControllableWeapon_1(int32_t itemID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x24655A0))(0, itemID);
	}
	template <typename T = bool> T IsNormalWeapon() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x2465660))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x2465840))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(Inventory*))(Il2CppBase() + 0x2465848))(this);
	}

};

}
