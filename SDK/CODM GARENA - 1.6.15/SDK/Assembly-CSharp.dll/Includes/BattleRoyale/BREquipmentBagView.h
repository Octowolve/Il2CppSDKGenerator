#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BREquipmentBagView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BREquipmentBagView"));
	}

	template <typename T = uintptr_t> T& Anim() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& SlotRoot() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& SlotRootBG() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& CloseBtn() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& DiscardRoot() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& ShadowSprite() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& ChipView() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& ChipDescRoot() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& ChipDescChipSprite() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& ChipDescChipName() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& ChipDescUltSkillIcon() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& ChipDescUltSkillName() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& ChipDescUltSkillDesc() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& ChipDescPerkIcon() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& ChipDescPerkName() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& ChipDescPerkDesc() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SlotItemList() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AmmoItemList() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AttachmentSlotItemViews() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& NoBagSprite() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& BigBagSprite() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& BagUsedLabel() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& BagAllLabel() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& NoBagCountSpriteList() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& BigBagCountSpriteList() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& EquipmentDetailRoot() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& EquipmentDetail_WeaponRoot() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& EquipmentDetail_GeneralRoot() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& EquipmentDetailNameLabel() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& EquipmentDetail_WeaponSprite() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& EquipmentDetail_WeaponBGSprite() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& EquipmentDetail_WeaponSubScript() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& EquipmentDetail_GeneralSprite() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& EquipmentDetail_GeneralBGSprite() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& EquipmentDetail_GeneralSubScript() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& EquipmentDetail_WeaponDescLabel() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& EquipmentDetail_GeneralDescLabel() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& PropertyLineList() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& EquipmentDetail_NeedUpdateAnchors() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = float> T& m_PressDownTime() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& FunctionBtnRoot() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& DropAllBtn() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& DropPartBtn() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& DropDettachBtn() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& UseBtn() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& EquipBtn() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& GamepadEquipHintObj() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& placeHolderAllBtns() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& placeHolderRightestTwoBtns() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uintptr_t> T& placeHolderLeftOneBtns() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& placeHolderMiddleOneBtns() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = uintptr_t> T& placeHolderRightestOneBtns() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& DropPartRoot() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = uintptr_t> T& DropPart_CancelBtn() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& DropPart_CancelBGBtn() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = uintptr_t> T& DropPart_ConfirmBtn() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& DropPartSlider() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = uintptr_t> T& DropPartCurrentNumberLabel() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& DropPartMaxNumberLabel() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = uintptr_t> T& DropPartNumberLabel() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = int32_t> T& m_DropPartCurrentNumber() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = int32_t> static T& m_DropPartMinNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_DropPartMaxNumber() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& _UICamera() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = uintptr_t> T& VestHP() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& VestHPPercent() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ThrowBoundaryPoints() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = Il2CppVector3> T& LastMousePosition() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = bool> T& IsMouseButton() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = bool> T& m_LockThrowItem() {
		return *(T*)((uintptr_t)this + 0x191);
	}
	template <typename T = float> T& m_LastCheckThrowTime() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = float> static T& CheckThrowInterval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData_Slot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponSlotVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshWeaponAmmoCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_RefreshWeaponAmmoCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshWeaponCarriedAmmoCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_RefreshWeaponCarriedAmmoCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshEquipped() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_RefreshEquipped() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEquipmentDetailProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetEquipmentDetailProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEquipmentDetail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchEquipmentDetail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAnchors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetPressDownTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPressDownTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitListenDropPartSliderDigitChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDropPartSliderDigitChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowDropPartWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnShowDropPartWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDiscard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickDiscardRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickEquipmentDetailRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowDetailRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCachedUICamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickShadow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenShadow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseShadow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshVestHP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBagStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBagCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInThrowBoundary() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitSlotOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickMousePosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickLockItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WaitClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseChipDescView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCHipDescView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshChipView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowChipInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(BREquipmentBagView*))(Il2CppBase() + 0x18DD024))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(BREquipmentBagView*))(Il2CppBase() + 0x18DD02C))(this);
	}
	template <typename T = uint64_t> T get_ActiveGameHudState() {
		return ((T (*)(BREquipmentBagView*))(Il2CppBase() + 0x18DD03C))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(BREquipmentBagView*))(Il2CppBase() + 0x18DD048))(this);
	}
	template <typename T = void> T WillClose() {
		return ((T (*)(BREquipmentBagView*))(Il2CppBase() + 0x18DD2BC))(this);
	}
	template <typename T = void> T SetActive(bool value, bool enableOptimize) {
		return ((T (*)(BREquipmentBagView*, bool, bool))(Il2CppBase() + 0x18DD530))(this, value, enableOptimize);
	}
	template <typename T = void> T SetData_Slot(int32_t posId, uintptr_t data) {
		return ((T (*)(BREquipmentBagView*, int32_t, uintptr_t))(Il2CppBase() + 0x18DB580))(this, posId, data);
	}
	template <typename T = void> T SetWeaponSlotVisible(int32_t posId, Il2CppArray<uintptr_t>* attachSlotUsability) {
		return ((T (*)(BREquipmentBagView*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x18DD860))(this, posId, attachSlotUsability);
	}
	template <typename T = void> T RefreshWeaponAmmoCount() {
		return ((T (*)(BREquipmentBagView*))(Il2CppBase() + 0x18DDF64))(this);
	}
	template <typename T = void> T RefreshWeaponAmmoCount_1(int32_t posId) {
		return ((T (*)(BREquipmentBagView*, int32_t))(Il2CppBase() + 0x18DE048))(this, posId);
	}
	template <typename T = void> T RefreshWeaponCarriedAmmoCount() {
		return ((T (*)(BREquipmentBagView*))(Il2CppBase() + 0x18DB2D0))(this);
	}
	template <typename T = void> T RefreshWeaponCarriedAmmoCount_1(int32_t posId) {
		return ((T (*)(BREquipmentBagView*, int32_t))(Il2CppBase() + 0x18DE57C))(this, posId);
	}
	template <typename T = void> T RefreshEquipped() {
		return ((T (*)(BREquipmentBagView*))(Il2CppBase() + 0x18DB0FC))(this);
	}
	template <typename T = void> T RefreshEquipped_1(int32_t posId) {
		return ((T (*)(BREquipmentBagView*, int32_t))(Il2CppBase() + 0x18DEA8C))(this, posId);
	}
	template <typename T = void> T SetEquipmentDetailProperty(int32_t weaponId) {
		return ((T (*)(BREquipmentBagView*, int32_t))(Il2CppBase() + 0x18D8D90))(this, weaponId);
	}
	template <typename T = void> T SetEquipmentDetailProperty_1(int32_t weaponId, int32_t slotId) {
		return ((T (*)(BREquipmentBagView*, int32_t, int32_t))(Il2CppBase() + 0x18D8F7C))(this, weaponId, slotId);
	}
	template <typename T = void> T SetEquipmentDetail(uintptr_t data, bool showPropertyLine, bool isKnife) {
		return ((T (*)(BREquipmentBagView*, uintptr_t, bool, bool))(Il2CppBase() + 0x18D923C))(this, data, showPropertyLine, isKnife);
	}
	template <typename T = void> T SwitchEquipmentDetail(bool show) {
		return ((T (*)(BREquipmentBagView*, bool))(Il2CppBase() + 0x18D9CF8))(this, show);
	}
	template <typename T = void> T UpdateAnchors() {
		return ((T (*)(BREquipmentBagView*))(Il2CppBase() + 0x18DED4C))(this);
	}
	template <typename T = void> T ResetPressDownTime() {
		return ((T (*)(BREquipmentBagView*))(Il2CppBase() + 0x18DEE78))(this);
	}
	template <typename T = void> T SetPressDownTime() {
		return ((T (*)(BREquipmentBagView*))(Il2CppBase() + 0x18DEF4C))(this);
	}
	template <typename T = int32_t> T get_DropPartCurrentNumber() {
		return ((T (*)(BREquipmentBagView*))(Il2CppBase() + 0x18D2508))(this);
	}
	template <typename T = void> T InitListenDropPartSliderDigitChange() {
		return ((T (*)(BREquipmentBagView*))(Il2CppBase() + 0x18DF028))(this);
	}
	template <typename T = void> T OnDropPartSliderDigitChange() {
		return ((T (*)(BREquipmentBagView*))(Il2CppBase() + 0x18DF194))(this);
	}
	template <typename T = void> T ShowDropPartWindow(uintptr_t data) {
		return ((T (*)(BREquipmentBagView*, uintptr_t))(Il2CppBase() + 0x18D309C))(this, data);
	}
	template <typename T = void> T UnShowDropPartWindow() {
		return ((T (*)(BREquipmentBagView*))(Il2CppBase() + 0x18D324C))(this);
	}
	template <typename T = void> T SetDiscard(bool isEnable) {
		return ((T (*)(BREquipmentBagView*, bool))(Il2CppBase() + 0x18D6BDC))(this, isEnable);
	}
	template <typename T = void> T TickDiscardRoot() {
		return ((T (*)(BREquipmentBagView*))(Il2CppBase() + 0x18DF3C0))(this);
	}
	template <typename T = void> T TickEquipmentDetailRoot() {
		return ((T (*)(BREquipmentBagView*))(Il2CppBase() + 0x18DF524))(this);
	}
	template <typename T = void> T ShowDetailRoot() {
		return ((T (*)(BREquipmentBagView*))(Il2CppBase() + 0x18D4404))(this);
	}
	template <typename T = uintptr_t> T GetCachedUICamera() {
		return ((T (*)(BREquipmentBagView*))(Il2CppBase() + 0x18DF5EC))(this);
	}
	template <typename T = void> T TickShadow() {
		return ((T (*)(BREquipmentBagView*))(Il2CppBase() + 0x18DF760))(this);
	}
	template <typename T = void> T OpenShadow(Il2CppString* spriteName, int32_t width, int32_t height) {
		return ((T (*)(BREquipmentBagView*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x18DA38C))(this, spriteName, width, height);
	}
	template <typename T = void> T CloseShadow() {
		return ((T (*)(BREquipmentBagView*))(Il2CppBase() + 0x18DA4FC))(this);
	}
	template <typename T = void> T RefreshVestHP() {
		return ((T (*)(BREquipmentBagView*))(Il2CppBase() + 0x18DDCD8))(this);
	}
	template <typename T = void> T RefreshBagStatus(uintptr_t bagData, int32_t count) {
		return ((T (*)(BREquipmentBagView*, uintptr_t, int32_t))(Il2CppBase() + 0x18DAA08))(this, bagData, count);
	}
	template <typename T = void> T RefreshBagCount(int32_t count, Il2CppArray<uintptr_t>* bagArray) {
		return ((T (*)(BREquipmentBagView*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x18DF918))(this, count, bagArray);
	}
	template <typename T = bool> T IsInThrowBoundary(Il2CppVector3 pos) {
		return ((T (*)(BREquipmentBagView*, Il2CppVector3))(Il2CppBase() + 0x18DBA1C))(this, pos);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BREquipmentBagView*))(Il2CppBase() + 0x18DFACC))(this);
	}
	template <typename T = void> T InitSlotOffset() {
		return ((T (*)(BREquipmentBagView*))(Il2CppBase() + 0x18DFCBC))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(BREquipmentBagView*))(Il2CppBase() + 0x18E0244))(this);
	}
	template <typename T = void> T Tick(float _) {
		return ((T (*)(BREquipmentBagView*, float))(Il2CppBase() + 0x18E024C))(this, _);
	}
	template <typename T = void> T TickMousePosition() {
		return ((T (*)(BREquipmentBagView*))(Il2CppBase() + 0x18E0350))(this);
	}
	template <typename T = bool> T get_LockThrowItem() {
		return ((T (*)(BREquipmentBagView*))(Il2CppBase() + 0x18D2500))(this);
	}
	template <typename T = void> T TickLockItems() {
		return ((T (*)(BREquipmentBagView*))(Il2CppBase() + 0x18E04D0))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(BREquipmentBagView*))(Il2CppBase() + 0x18CFAF0))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(BREquipmentBagView*))(Il2CppBase() + 0x18D0244))(this);
	}
	template <typename T = uintptr_t> T WaitClose(float delay, uintptr_t act) {
		return ((T (*)(BREquipmentBagView*, float, uintptr_t))(Il2CppBase() + 0x18DD720))(this, delay, act);
	}
	template <typename T = void> T CloseChipDescView() {
		return ((T (*)(BREquipmentBagView*))(Il2CppBase() + 0x18CFE78))(this);
	}
	template <typename T = void> T ShowCHipDescView() {
		return ((T (*)(BREquipmentBagView*))(Il2CppBase() + 0x18D4F44))(this);
	}
	template <typename T = void> T RefreshChipView() {
		return ((T (*)(BREquipmentBagView*))(Il2CppBase() + 0x18CFC60))(this);
	}
	template <typename T = void> T ShowChipInfo(uintptr_t conf) {
		return ((T (*)(BREquipmentBagView*, uintptr_t))(Il2CppBase() + 0x18E0744))(this, conf);
	}
	template <typename T = void> T SetActive__BaseCallProxy0(bool value, bool enableOptimize) {
		return ((T (*)(BREquipmentBagView*, bool, bool))(Il2CppBase() + 0x18E0C0C))(this, value, enableOptimize);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(BREquipmentBagView*))(Il2CppBase() + 0x18E0C14))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillClose() {
		return ((T (*)(BREquipmentBagView*))(Il2CppBase() + 0x18E0C1C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetActive(bool P0, bool P1) {
		return ((T (*)(BREquipmentBagView*, bool, bool))(Il2CppBase() + 0x18E0C24))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BREquipmentBagView*))(Il2CppBase() + 0x18E0C2C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BREquipmentBagView*, float))(Il2CppBase() + 0x18E0C34))(this, P0);
	}

};

}
