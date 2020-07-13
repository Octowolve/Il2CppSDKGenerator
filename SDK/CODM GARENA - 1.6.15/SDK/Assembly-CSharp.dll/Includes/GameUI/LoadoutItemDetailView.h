#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutItemDetailView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutItemDetailView"));
	}

	template <typename T = uintptr_t> T& AllTable() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& QualitySprite() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& NameLabel() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& DurationObj() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& DurationLable() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& TimeLimit() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& DetailBtn() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& DetailSprite() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& PropertyRoot() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& PropertyGrid() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& PropertyBackground() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& Property1() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& Property2() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& Property3() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& Property4() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& Property5() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& SkillRoot() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& SkillBtn() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& SkillGrid() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& SkillTemplate() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& SkillList() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& DescRoot() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& DescLabel() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& WeaponLevelRoot() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& WeaponLevelLabel() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& WeaponExpLabel() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& ShopLevelRoot() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& ShopLevelDescLabel() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& ShopTipBtn() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& ShopDetailRoot() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& ShopSimpleRoot() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& ShopSimpleDescLabel() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& ShopModeRoot() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& ShopScrollView() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& ShopGrid() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& ShopShowTemplate() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ShopItemList() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& WeaponDetailRoot() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& WeaponSimpleRoot() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& WeaponSimpleDescLabel() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& WeaponModeRoot() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& WeaponScrollView() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& WeaponGrid() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& WeaponShowTemplate() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& WeaponItemList() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& WeaponAttachDetailRoot() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& AttachSprite() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& AttachNameLabel() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& AttachDescLabel() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& UnlockSkillObj() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& PveWeaponExtraLabel() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& videoWidget() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& videoBtn() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& videoIcon() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& videoDesc() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& MediaRoot() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& MainMediaPlayer() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& MediaTexture() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& ToVideoBtn() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = bool> T& isCloseVideo() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uint32_t> T& CacheItemId() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = bool> T& CacheIfShopItem() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = bool> T& bShowDetail() {
		return *(T*)((uintptr_t)this + 0x101);
	}
	template <typename T = bool> T& bShowShopItem() {
		return *(T*)((uintptr_t)this + 0x102);
	}
	template <typename T = bool> T& isUnlock() {
		return *(T*)((uintptr_t)this + 0x103);
	}
	template <typename T = bool> T& isAttachUnlock() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& mWeaponData() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = int32_t> T& iDetailPage() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = bool> T& bDirty() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mWeaponDetailList() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = int32_t> T& durationTime() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = bool> T& isNowShowVideo() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = Il2CppString*> T& _smallVideoPath() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDetailBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSkillBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTipBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDurationTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEquipmentProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAttach() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponDetailData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItemDetailData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponDetailList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoleDetailList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDataWeaponDetail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAndShowVideo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnVideoBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnToVideoBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayVideoWithNoCoroutine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayVideo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FinishShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(LoadoutItemDetailView*))(Il2CppBase() + 0x1A548C4))(this);
	}
	template <typename T = void> T OnDetailBtnClick(uintptr_t obj) {
		return ((T (*)(LoadoutItemDetailView*, uintptr_t))(Il2CppBase() + 0x1A54E50))(this, obj);
	}
	template <typename T = void> T OnSkillBtnClick(uintptr_t obj) {
		return ((T (*)(LoadoutItemDetailView*, uintptr_t))(Il2CppBase() + 0x1A55330))(this, obj);
	}
	template <typename T = void> T OnTipBtnClick(uintptr_t obj) {
		return ((T (*)(LoadoutItemDetailView*, uintptr_t))(Il2CppBase() + 0x1A553E0))(this, obj);
	}
	template <typename T = void> T RefreshView(uint32_t itemId, uintptr_t weaponData, bool isShopItem, void* attachID, bool isUnlock, bool isAttachLock, int32_t duration_time) {
		return ((T (*)(LoadoutItemDetailView*, uint32_t, uintptr_t, bool, void*, bool, bool, int32_t))(Il2CppBase() + 0x1A07F00))(this, itemId, weaponData, isShopItem, attachID, isUnlock, isAttachLock, duration_time);
	}
	template <typename T = void> T SetDurationTime(int32_t duration_time, Il2CppString* content) {
		return ((T (*)(LoadoutItemDetailView*, int32_t, Il2CppString*))(Il2CppBase() + 0x1A588A8))(this, duration_time, content);
	}
	template <typename T = void> T SetWeaponProperty(uint32_t weaponId, void* attachID) {
		return ((T (*)(LoadoutItemDetailView*, uint32_t, void*))(Il2CppBase() + 0x1A575BC))(this, weaponId, attachID);
	}
	template <typename T = void> T SetEquipmentProperty(uint32_t equipId) {
		return ((T (*)(LoadoutItemDetailView*, uint32_t))(Il2CppBase() + 0x1A57EA0))(this, equipId);
	}
	template <typename T = void> T SetAttach(uint32_t attachID) {
		return ((T (*)(LoadoutItemDetailView*, uint32_t))(Il2CppBase() + 0x1A56A28))(this, attachID);
	}
	template <typename T = void> T SetSkill(int32_t weaponLevel) {
		return ((T (*)(LoadoutItemDetailView*, int32_t))(Il2CppBase() + 0x1A56D38))(this, weaponLevel);
	}
	template <typename T = void> T SetWeaponDetailData(int32_t weaponLv) {
		return ((T (*)(LoadoutItemDetailView*, int32_t))(Il2CppBase() + 0x1A56408))(this, weaponLv);
	}
	template <typename T = void> T SetItemDetailData(int32_t itemLv) {
		return ((T (*)(LoadoutItemDetailView*, int32_t))(Il2CppBase() + 0x1A55DE8))(this, itemLv);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetWeaponDetailList(uint32_t itemId) {
		return ((T (*)(LoadoutItemDetailView*, uint32_t))(Il2CppBase() + 0x1A55930))(this, itemId);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetRoleDetailList(uint32_t itemId) {
		return ((T (*)(LoadoutItemDetailView*, uint32_t))(Il2CppBase() + 0x1A585C0))(this, itemId);
	}
	template <typename T = void> T Update() {
		return ((T (*)(LoadoutItemDetailView*))(Il2CppBase() + 0x1A58A48))(this);
	}
	template <typename T = void> T SetDataWeaponDetail(uintptr_t data) {
		return ((T (*)(LoadoutItemDetailView*, uintptr_t))(Il2CppBase() + 0x1A58B74))(this, data);
	}
	template <typename T = bool> T CheckAndShowVideo() {
		return ((T (*)(LoadoutItemDetailView*))(Il2CppBase() + 0x1A55638))(this);
	}
	template <typename T = void> T OnVideoBtnClick(uintptr_t go) {
		return ((T (*)(LoadoutItemDetailView*, uintptr_t))(Il2CppBase() + 0x1A59728))(this, go);
	}
	template <typename T = void> T OnToVideoBtnClick(uintptr_t go) {
		return ((T (*)(LoadoutItemDetailView*, uintptr_t))(Il2CppBase() + 0x1A59D10))(this, go);
	}
	template <typename T = void> T PlayVideoWithNoCoroutine() {
		return ((T (*)(LoadoutItemDetailView*))(Il2CppBase() + 0x1A59220))(this);
	}
	template <typename T = uintptr_t> T PlayVideo() {
		return ((T (*)(LoadoutItemDetailView*))(Il2CppBase() + 0x1A59E60))(this);
	}
	template <typename T = void> T FinishShow() {
		return ((T (*)(LoadoutItemDetailView*))(Il2CppBase() + 0x1A59078))(this);
	}

};

}
