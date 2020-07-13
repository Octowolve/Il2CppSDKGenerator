#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BREquipmentBagController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BREquipmentBagController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& SliderDirection() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& SlideSpeed() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& CursorSession() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& DefaultSelectOrderList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kFunctionBtnXOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kFunctionBtnXStartValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& FocusedActorId() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& ExchangeFocusActorID() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_CacheAmmoList() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBaseItemData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUpperItemDataList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadClearFocus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddSliderValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GamepadSliderKeep() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GamepadSliderBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GamepadMoveToBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GamepadClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GamepadConfirm() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GamepadDropAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GamepadDropPartly() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GamepadUse1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GamepadUse2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SelectAvailableSlot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HiddenFunctionBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeFunctionBtnVisiable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortFunctionBtnList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowFunctionBtnPlaceHolder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortFunctionBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEquipBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_OnEquipBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDropPartBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDropPartCancelBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanDropThrowItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDropPartConfirmBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowDropPartWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnShowDropPartWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDropAllBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDropDettachBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DropWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DropAllByCheck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FocusItemView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnfocusItemView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCanBeFocusedItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCanBeFocusedItemDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFocusedActorId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearFocusedActorId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindSlotItemViewByActorId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindBagItemViewByActorId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindAttachmentViewByActorId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearFocused() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ClearFocused() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyBRChipShowDesc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessAttachmentUnequipDone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessAttachmentEquipDone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyWeaponPosChangeDone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyPickupDone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyBRBagItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Attachment_GameCommunicationLineHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyBRBagItemDragStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyBRBagItemDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyBRBagItemDragEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyBRBagItemDrop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyBRBagItemDropSpace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Exchange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExchangeAttachmentByClient() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DropAttachmentByClient() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DropAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_DropWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DropPartWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_DropAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DropPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDiscard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLocalPawnPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ModifyAttachmentTargetPosWhenDraggingToWeaponSlot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldExchangeByClient() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyBRBagItemPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareShowEquipmentDetail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnShowEquipmentDetail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowEquipableSlotForFocusItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnShowShowEquipableSlot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyBRBagItemShadow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyBagListChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BagListSetDataHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData_BagList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BagStatusHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifySlotItemChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyWeaponPosExchanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifySlotItemWeaponEquippedChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifySlotItemWeaponClipChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SlotSetDataAllHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x174);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SlotSetDataHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WeaponPosExchangedHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x17C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData_Slot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyItemDiscard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x184);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifySyncAllProp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyMedicineChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAddOrRemoveChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestExchangeMedicinePos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x194);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNewGuideInterface() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGuideSlotItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x19C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BREquipmentBagController*))(Il2CppBase() + 0x18CAA40))(this);
	}
	template <typename T = uintptr_t> T GetBaseItemData(uintptr_t slotType) {
		return ((T (*)(BREquipmentBagController*, uintptr_t))(Il2CppBase() + 0x18CAB14))(this, slotType);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetUpperItemDataList(uintptr_t pickUpType) {
		return ((T (*)(BREquipmentBagController*, uintptr_t))(Il2CppBase() + 0x18CAC04))(this, pickUpType);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BREquipmentBagController*))(Il2CppBase() + 0x18CADF4))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BREquipmentBagController*))(Il2CppBase() + 0x18CB630))(this);
	}
	template <typename T = bool> T OnGamepadClearFocus() {
		return ((T (*)(BREquipmentBagController*))(Il2CppBase() + 0x18CC46C))(this);
	}
	template <typename T = void> T AddSliderValue(float deltaTime, bool init) {
		return ((T (*)(BREquipmentBagController*, float, bool))(Il2CppBase() + 0x18CC920))(this, deltaTime, init);
	}
	template <typename T = bool> T GamepadSliderKeep() {
		return ((T (*)(BREquipmentBagController*))(Il2CppBase() + 0x18CCC50))(this);
	}
	template <typename T = bool> T GamepadSliderBegin() {
		return ((T (*)(BREquipmentBagController*))(Il2CppBase() + 0x18CCE3C))(this);
	}
	template <typename T = bool> T GamepadMoveToBag() {
		return ((T (*)(BREquipmentBagController*))(Il2CppBase() + 0x18CD064))(this);
	}
	template <typename T = bool> T GamepadClose() {
		return ((T (*)(BREquipmentBagController*))(Il2CppBase() + 0x18CDB3C))(this);
	}
	template <typename T = bool> T GamepadConfirm() {
		return ((T (*)(BREquipmentBagController*))(Il2CppBase() + 0x18CDDDC))(this);
	}
	template <typename T = bool> T GamepadDropAll() {
		return ((T (*)(BREquipmentBagController*))(Il2CppBase() + 0x18CE12C))(this);
	}
	template <typename T = bool> T GamepadDropPartly() {
		return ((T (*)(BREquipmentBagController*))(Il2CppBase() + 0x18CE354))(this);
	}
	template <typename T = bool> T GamepadUse1() {
		return ((T (*)(BREquipmentBagController*))(Il2CppBase() + 0x18CE6C0))(this);
	}
	template <typename T = bool> T GamepadUse2() {
		return ((T (*)(BREquipmentBagController*))(Il2CppBase() + 0x18CECB8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BREquipmentBagController*))(Il2CppBase() + 0x18CED94))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(BREquipmentBagController*))(Il2CppBase() + 0x18CF77C))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(BREquipmentBagController*))(Il2CppBase() + 0x18CFFB4))(this);
	}
	template <typename T = void> T OnResetData() {
		return ((T (*)(BREquipmentBagController*))(Il2CppBase() + 0x18CFA00))(this);
	}
	template <typename T = void> T SelectAvailableSlot() {
		return ((T (*)(BREquipmentBagController*))(Il2CppBase() + 0x18D08F4))(this);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(BREquipmentBagController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x18D0E60))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(BREquipmentBagController*, uintptr_t, int32_t))(Il2CppBase() + 0x18D0F58))(this, list, userContext);
	}
	template <typename T = void> T HiddenFunctionBtn() {
		return ((T (*)(BREquipmentBagController*))(Il2CppBase() + 0x18D103C))(this);
	}
	template <typename T = void> T ChangeFunctionBtnVisiable(uintptr_t data) {
		return ((T (*)(BREquipmentBagController*, uintptr_t))(Il2CppBase() + 0x18D15E4))(this, data);
	}
	template <typename T = int32_t> T SortFunctionBtnList() {
		return ((T (*)(BREquipmentBagController*))(Il2CppBase() + 0x18D1BEC))(this);
	}
	template <typename T = void> T ShowFunctionBtnPlaceHolder(int32_t buttonCount) {
		return ((T (*)(BREquipmentBagController*, int32_t))(Il2CppBase() + 0x18D1210))(this, buttonCount);
	}
	template <typename T = void> T SortFunctionBtn(uintptr_t button, uintptr_t xPosIndex) {
		return ((T (*)(BREquipmentBagController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x18D1D70))(this, button, xPosIndex);
	}
	template <typename T = void> T OnUseBtnClick() {
		return ((T (*)(BREquipmentBagController*))(Il2CppBase() + 0x18CE7E8))(this);
	}
	template <typename T = bool> T OnEquipBtnClick(uintptr_t weaponSlot) {
		return ((T (*)(BREquipmentBagController*, uintptr_t))(Il2CppBase() + 0x18CE988))(this, weaponSlot);
	}
	template <typename T = void> T OnEquipBtnClick_1() {
		return ((T (*)(BREquipmentBagController*))(Il2CppBase() + 0x18D1F48))(this);
	}
	template <typename T = void> T OnDropPartBtnClick() {
		return ((T (*)(BREquipmentBagController*))(Il2CppBase() + 0x18CE4E4))(this);
	}
	template <typename T = void> T OnDropPartCancelBtnClick() {
		return ((T (*)(BREquipmentBagController*))(Il2CppBase() + 0x18CDC60))(this);
	}
	template <typename T = bool> T CanDropThrowItem(uintptr_t data) {
		return ((T (*)(BREquipmentBagController*, uintptr_t))(Il2CppBase() + 0x18D234C))(this, data);
	}
	template <typename T = void> T OnDropPartConfirmBtnClick() {
		return ((T (*)(BREquipmentBagController*))(Il2CppBase() + 0x18CDEF8))(this);
	}
	template <typename T = void> T ShowDropPartWindow(uintptr_t data) {
		return ((T (*)(BREquipmentBagController*, uintptr_t))(Il2CppBase() + 0x18D2258))(this, data);
	}
	template <typename T = void> T UnShowDropPartWindow() {
		return ((T (*)(BREquipmentBagController*))(Il2CppBase() + 0x18CB454))(this);
	}
	template <typename T = void> T OnDropAllBtnClick() {
		return ((T (*)(BREquipmentBagController*))(Il2CppBase() + 0x18CE27C))(this);
	}
	template <typename T = void> T OnDropDettachBtnClick() {
		return ((T (*)(BREquipmentBagController*))(Il2CppBase() + 0x18CE5E8))(this);
	}
	template <typename T = void> T DropWeapon(bool whole) {
		return ((T (*)(BREquipmentBagController*, bool))(Il2CppBase() + 0x18D334C))(this, whole);
	}
	template <typename T = void> T DropAllByCheck(int32_t flag, uintptr_t data) {
		return ((T (*)(BREquipmentBagController*, int32_t, uintptr_t))(Il2CppBase() + 0x18D389C))(this, flag, data);
	}
	template <typename T = void> T OnCloseBtnClick() {
		return ((T (*)(BREquipmentBagController*))(Il2CppBase() + 0x18D3C08))(this);
	}
	template <typename T = int32_t> T get_FocusedActorId() {
		return ((T (*)(BREquipmentBagController*))(Il2CppBase() + 0x18CCB84))(this);
	}
	template <typename T = void> T set_FocusedActorId(int32_t value) {
		return ((T (*)(BREquipmentBagController*, int32_t))(Il2CppBase() + 0x18D3DFC))(this, value);
	}
	template <typename T = int32_t> T get_ExchangeFocusActorID() {
		return ((T (*)(BREquipmentBagController*))(Il2CppBase() + 0x18D3E04))(this);
	}
	template <typename T = void> T set_ExchangeFocusActorID(int32_t value) {
		return ((T (*)(BREquipmentBagController*, int32_t))(Il2CppBase() + 0x18CB628))(this, value);
	}
	template <typename T = void> T FocusItemView(uintptr_t view) {
		return ((T (*)(BREquipmentBagController*, uintptr_t))(Il2CppBase() + 0x18D0C78))(this, view);
	}
	template <typename T = void> T UnfocusItemView(uintptr_t view) {
		return ((T (*)(BREquipmentBagController*, uintptr_t))(Il2CppBase() + 0x18D44E4))(this, view);
	}
	template <typename T = void> T OnCanBeFocusedItemClick(uintptr_t view) {
		return ((T (*)(BREquipmentBagController*, uintptr_t))(Il2CppBase() + 0x18D4730))(this, view);
	}
	template <typename T = void> T OnCanBeFocusedItemDrag(uintptr_t view) {
		return ((T (*)(BREquipmentBagController*, uintptr_t))(Il2CppBase() + 0x18D4850))(this, view);
	}
	template <typename T = void> T SetFocusedActorId(uintptr_t data) {
		return ((T (*)(BREquipmentBagController*, uintptr_t))(Il2CppBase() + 0x18D3E0C))(this, data);
	}
	template <typename T = void> T ClearFocusedActorId() {
		return ((T (*)(BREquipmentBagController*))(Il2CppBase() + 0x18CB378))(this);
	}
	template <typename T = bool> T get_NotFocused() {
		return ((T (*)(BREquipmentBagController*))(Il2CppBase() + 0x18CCB70))(this);
	}
	template <typename T = uintptr_t> T FindSlotItemViewByActorId(int32_t actorId) {
		return ((T (*)(BREquipmentBagController*, int32_t))(Il2CppBase() + 0x18D4964))(this, actorId);
	}
	template <typename T = uintptr_t> T FindBagItemViewByActorId(int32_t actorId, int32_t index) {
		return ((T (*)(BREquipmentBagController*, int32_t, int32_t))(Il2CppBase() + 0x18D4B10))(this, actorId, index);
	}
	template <typename T = uintptr_t> T FindAttachmentViewByActorId(int32_t actorId) {
		return ((T (*)(BREquipmentBagController*, int32_t))(Il2CppBase() + 0x18D4C78))(this, actorId);
	}
	template <typename T = void> T ClearFocused() {
		return ((T (*)(BREquipmentBagController*))(Il2CppBase() + 0x18CC72C))(this);
	}
	template <typename T = void> T ClearFocused_1(uintptr_t focusedView) {
		return ((T (*)(BREquipmentBagController*, uintptr_t))(Il2CppBase() + 0x18D45D4))(this, focusedView);
	}
	template <typename T = void> T NotifyBRChipShowDesc(uintptr_t msg) {
		return ((T (*)(BREquipmentBagController*, uintptr_t))(Il2CppBase() + 0x18D4DCC))(this, msg);
	}
	template <typename T = void> T ProcessAttachmentUnequipDone(int32_t srcItemID, int32_t srcPosID) {
		return ((T (*)(BREquipmentBagController*, int32_t, int32_t))(Il2CppBase() + 0x18D506C))(this, srcItemID, srcPosID);
	}
	template <typename T = bool> T ProcessAttachmentEquipDone(int32_t srcItemID, int32_t dstPosID, bool playAudio) {
		return ((T (*)(BREquipmentBagController*, int32_t, int32_t, bool))(Il2CppBase() + 0x18D5808))(this, srcItemID, dstPosID, playAudio);
	}
	template <typename T = void> T NotifyWeaponPosChangeDone(uintptr_t msg) {
		return ((T (*)(BREquipmentBagController*, uintptr_t))(Il2CppBase() + 0x18D5AC4))(this, msg);
	}
	template <typename T = void> T NotifyPickupDone(int32_t itemID, int32_t posID) {
		return ((T (*)(BREquipmentBagController*, int32_t, int32_t))(Il2CppBase() + 0x18D5DE8))(this, itemID, posID);
	}
	template <typename T = void> T NotifyBRBagItemClick(uintptr_t msg) {
		return ((T (*)(BREquipmentBagController*, uintptr_t))(Il2CppBase() + 0x18D5EF8))(this, msg);
	}
	template <typename T = void> T Attachment_GameCommunicationLineHandler(uintptr_t attachmentView) {
		return ((T (*)(BREquipmentBagController*, uintptr_t))(Il2CppBase() + 0x18D63F4))(this, attachmentView);
	}
	template <typename T = void> T NotifyBRBagItemDragStart(uintptr_t msg) {
		return ((T (*)(BREquipmentBagController*, uintptr_t))(Il2CppBase() + 0x18D695C))(this, msg);
	}
	template <typename T = void> T NotifyBRBagItemDrag(uintptr_t msg) {
		return ((T (*)(BREquipmentBagController*, uintptr_t))(Il2CppBase() + 0x18D6D2C))(this, msg);
	}
	template <typename T = void> T NotifyBRBagItemDragEnd(uintptr_t msg) {
		return ((T (*)(BREquipmentBagController*, uintptr_t))(Il2CppBase() + 0x18D6E7C))(this, msg);
	}
	template <typename T = void> T NotifyBRBagItemDrop(uintptr_t msg) {
		return ((T (*)(BREquipmentBagController*, uintptr_t))(Il2CppBase() + 0x18D6F70))(this, msg);
	}
	template <typename T = void> T NotifyBRBagItemDropSpace(uintptr_t msg) {
		return ((T (*)(BREquipmentBagController*, uintptr_t))(Il2CppBase() + 0x18D728C))(this, msg);
	}
	template <typename T = void> T Exchange(uintptr_t from, uintptr_t to) {
		return ((T (*)(BREquipmentBagController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x18CD468))(this, from, to);
	}
	template <typename T = void> T ExchangeAttachmentByClient(int32_t sourceItemId, int32_t destItemId, int32_t srcPosId, int32_t dstPosId) {
		return ((T (*)(BREquipmentBagController*, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x18D7B6C))(this, sourceItemId, destItemId, srcPosId, dstPosId);
	}
	template <typename T = void> T DropAttachmentByClient(int32_t itemId, int32_t posId) {
		return ((T (*)(BREquipmentBagController*, int32_t, int32_t))(Il2CppBase() + 0x18D86E8))(this, itemId, posId);
	}
	template <typename T = void> T DropAll(uintptr_t from) {
		return ((T (*)(BREquipmentBagController*, uintptr_t))(Il2CppBase() + 0x18D74F0))(this, from);
	}
	template <typename T = void> T DropWeapon_1(uintptr_t data, bool whole) {
		return ((T (*)(BREquipmentBagController*, uintptr_t, bool))(Il2CppBase() + 0x18D35C8))(this, data, whole);
	}
	template <typename T = void> T DropPartWeapon(uintptr_t data, int32_t count) {
		return ((T (*)(BREquipmentBagController*, uintptr_t, int32_t))(Il2CppBase() + 0x18D3734))(this, data, count);
	}
	template <typename T = void> T DropAll_1(uintptr_t data) {
		return ((T (*)(BREquipmentBagController*, uintptr_t))(Il2CppBase() + 0x18D3A98))(this, data);
	}
	template <typename T = void> T DropPart(uintptr_t data, int32_t dropCount) {
		return ((T (*)(BREquipmentBagController*, uintptr_t, int32_t))(Il2CppBase() + 0x18D2F34))(this, data, dropCount);
	}
	template <typename T = void> T OnDiscard(uintptr_t data) {
		return ((T (*)(BREquipmentBagController*, uintptr_t))(Il2CppBase() + 0x18D8A38))(this, data);
	}
	template <typename T = Il2CppVector3> T GetLocalPawnPos() {
		return ((T (*)(BREquipmentBagController*))(Il2CppBase() + 0x18D8814))(this);
	}
	template <typename T = int32_t> T ModifyAttachmentTargetPosWhenDraggingToWeaponSlot(uintptr_t from, uintptr_t to) {
		return ((T (*)(BREquipmentBagController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x18D7630))(this, from, to);
	}
	template <typename T = bool> T ShouldExchangeByClient(int32_t srcItemId, int32_t dstItemId, int32_t srcPosId, int32_t dstPosId) {
		return ((T (*)(BREquipmentBagController*, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x18D7A1C))(this, srcItemId, dstItemId, srcPosId, dstPosId);
	}
	template <typename T = void> T NotifyBRBagItemPress(uintptr_t msg) {
		return ((T (*)(BREquipmentBagController*, uintptr_t))(Il2CppBase() + 0x18D8BFC))(this, msg);
	}
	template <typename T = void> T PrepareShowEquipmentDetail(uintptr_t data) {
		return ((T (*)(BREquipmentBagController*, uintptr_t))(Il2CppBase() + 0x18D4230))(this, data);
	}
	template <typename T = void> T UnShowEquipmentDetail() {
		return ((T (*)(BREquipmentBagController*))(Il2CppBase() + 0x18CB53C))(this);
	}
	template <typename T = void> T ShowEquipableSlotForFocusItem(uintptr_t targetData) {
		return ((T (*)(BREquipmentBagController*, uintptr_t))(Il2CppBase() + 0x18D3F28))(this, targetData);
	}
	template <typename T = void> T UnShowShowEquipableSlot() {
		return ((T (*)(BREquipmentBagController*))(Il2CppBase() + 0x18D0110))(this);
	}
	template <typename T = void> T NotifyBRBagItemShadow(uintptr_t msg) {
		return ((T (*)(BREquipmentBagController*, uintptr_t))(Il2CppBase() + 0x18DA030))(this, msg);
	}
	template <typename T = void> T NotifyBagListChanged(uintptr_t msg) {
		return ((T (*)(BREquipmentBagController*, uintptr_t))(Il2CppBase() + 0x18DA5FC))(this, msg);
	}
	template <typename T = void> T BagListSetDataHandler() {
		return ((T (*)(BREquipmentBagController*))(Il2CppBase() + 0x18D051C))(this);
	}
	template <typename T = void> T SetData_BagList(Il2CppList<uintptr_t>* list) {
		return ((T (*)(BREquipmentBagController*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x18DA704))(this, list);
	}
	template <typename T = void> T BagStatusHandler() {
		return ((T (*)(BREquipmentBagController*))(Il2CppBase() + 0x18D06E0))(this);
	}
	template <typename T = void> T NotifySlotItemChanged(uintptr_t msg) {
		return ((T (*)(BREquipmentBagController*, uintptr_t))(Il2CppBase() + 0x18DAC28))(this, msg);
	}
	template <typename T = void> T NotifyWeaponPosExchanged(uintptr_t msg) {
		return ((T (*)(BREquipmentBagController*, uintptr_t))(Il2CppBase() + 0x18DAEA4))(this, msg);
	}
	template <typename T = void> T NotifySlotItemWeaponEquippedChanged(uintptr_t _) {
		return ((T (*)(BREquipmentBagController*, uintptr_t))(Il2CppBase() + 0x18D0804))(this, _);
	}
	template <typename T = void> T NotifySlotItemWeaponClipChanged(uintptr_t _) {
		return ((T (*)(BREquipmentBagController*, uintptr_t))(Il2CppBase() + 0x18DB1E0))(this, _);
	}
	template <typename T = void> T SlotSetDataAllHandler() {
		return ((T (*)(BREquipmentBagController*))(Il2CppBase() + 0x18D03D4))(this);
	}
	template <typename T = void> T SlotSetDataHandler(int32_t posId) {
		return ((T (*)(BREquipmentBagController*, int32_t))(Il2CppBase() + 0x18DAD74))(this, posId);
	}
	template <typename T = void> T WeaponPosExchangedHandler() {
		return ((T (*)(BREquipmentBagController*))(Il2CppBase() + 0x18DAF80))(this);
	}
	template <typename T = void> T SetData_Slot(int32_t posId, uintptr_t data) {
		return ((T (*)(BREquipmentBagController*, int32_t, uintptr_t))(Il2CppBase() + 0x18DB3B4))(this, posId, data);
	}
	template <typename T = void> T NotifyItemDiscard(uintptr_t msg) {
		return ((T (*)(BREquipmentBagController*, uintptr_t))(Il2CppBase() + 0x18DB854))(this, msg);
	}
	template <typename T = void> T NotifySyncAllProp(uintptr_t msg) {
		return ((T (*)(BREquipmentBagController*, uintptr_t))(Il2CppBase() + 0x18DBDEC))(this, msg);
	}
	template <typename T = void> T NotifyMedicineChanged(uintptr_t msg) {
		return ((T (*)(BREquipmentBagController*, uintptr_t))(Il2CppBase() + 0x18DBEC8))(this, msg);
	}
	template <typename T = void> T OnAddOrRemoveChanged() {
		return ((T (*)(BREquipmentBagController*))(Il2CppBase() + 0x18DC02C))(this);
	}
	template <typename T = void> T RequestExchangeMedicinePos(int32_t sourcePosId, int32_t destPosId, int32_t sourceItemId, int32_t destItemId) {
		return ((T (*)(BREquipmentBagController*, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x18DC348))(this, sourcePosId, destPosId, sourceItemId, destItemId);
	}
	template <typename T = uintptr_t> T GetNewGuideInterface() {
		return ((T (*)(BREquipmentBagController*))(Il2CppBase() + 0x18DC884))(this);
	}
	template <typename T = uintptr_t> T GetGuideSlotItem() {
		return ((T (*)(BREquipmentBagController*))(Il2CppBase() + 0x18DCA34))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BREquipmentBagController*))(Il2CppBase() + 0x18DCD38))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BREquipmentBagController*))(Il2CppBase() + 0x18DCD40))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BREquipmentBagController*))(Il2CppBase() + 0x18DCD48))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BREquipmentBagController*))(Il2CppBase() + 0x18DCD50))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(BREquipmentBagController*))(Il2CppBase() + 0x18DCD58))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(BREquipmentBagController*))(Il2CppBase() + 0x18DCD60))(this);
	}

};

}
