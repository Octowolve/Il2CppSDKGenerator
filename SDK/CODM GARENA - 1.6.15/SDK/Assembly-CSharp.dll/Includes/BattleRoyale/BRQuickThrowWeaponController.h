#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRQuickThrowWeaponController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRQuickThrowWeaponController"));
	}

	template <typename T = int32_t> T& m_SlotItemCount() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnActualBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStandbyBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadCompleteSelection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQuickThrowWeaponChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQuickThrowWeaponStopProcess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetButtonsEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpperBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnArrowOpenBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnArrowCloseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUpperItemDataList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUpperItemDataListByMerge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNewGuideInterface() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetThrowItemTypeCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BRQuickThrowWeaponController*))(Il2CppBase() + 0x1B18818))(this);
	}
	template <typename T = uintptr_t> T get_DroppedPickUpType() {
		return ((T (*)(BRQuickThrowWeaponController*))(Il2CppBase() + 0x1B188BC))(this);
	}
	template <typename T = uintptr_t> T get_MasterSlotType() {
		return ((T (*)(BRQuickThrowWeaponController*))(Il2CppBase() + 0x1B188C4))(this);
	}
	template <typename T = void> T OnActualBtnClick() {
		return ((T (*)(BRQuickThrowWeaponController*))(Il2CppBase() + 0x1B188CC))(this);
	}
	template <typename T = void> T OnStandbyBtnClick(int32_t index) {
		return ((T (*)(BRQuickThrowWeaponController*, int32_t))(Il2CppBase() + 0x1B18AE0))(this, index);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRQuickThrowWeaponController*))(Il2CppBase() + 0x1B18B80))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRQuickThrowWeaponController*))(Il2CppBase() + 0x1B18E60))(this);
	}
	template <typename T = void> T OnGamepadCompleteSelection() {
		return ((T (*)(BRQuickThrowWeaponController*))(Il2CppBase() + 0x1B190B8))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(BRQuickThrowWeaponController*))(Il2CppBase() + 0x1B19168))(this);
	}
	template <typename T = void> T OnQuickThrowWeaponChanged(uintptr_t msg) {
		return ((T (*)(BRQuickThrowWeaponController*, uintptr_t))(Il2CppBase() + 0x1B19224))(this, msg);
	}
	template <typename T = void> T OnQuickThrowWeaponStopProcess(uintptr_t msg) {
		return ((T (*)(BRQuickThrowWeaponController*, uintptr_t))(Il2CppBase() + 0x1B1942C))(this, msg);
	}
	template <typename T = void> T SetButtonsEnable(bool enable) {
		return ((T (*)(BRQuickThrowWeaponController*, bool))(Il2CppBase() + 0x1B194CC))(this, enable);
	}
	template <typename T = void> T OnUpperBtnClick(int32_t index) {
		return ((T (*)(BRQuickThrowWeaponController*, int32_t))(Il2CppBase() + 0x1B19764))(this, index);
	}
	template <typename T = void> T OnArrowOpenBtnClick() {
		return ((T (*)(BRQuickThrowWeaponController*))(Il2CppBase() + 0x1B19C34))(this);
	}
	template <typename T = void> T OnArrowCloseBtnClick() {
		return ((T (*)(BRQuickThrowWeaponController*))(Il2CppBase() + 0x1B19EDC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetUpperItemDataList() {
		return ((T (*)(BRQuickThrowWeaponController*))(Il2CppBase() + 0x1B1A0C0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetUpperItemDataListByMerge() {
		return ((T (*)(BRQuickThrowWeaponController*))(Il2CppBase() + 0x1B1A248))(this);
	}
	template <typename T = uintptr_t> T GetNewGuideInterface() {
		return ((T (*)(BRQuickThrowWeaponController*))(Il2CppBase() + 0x1B1A4B8))(this);
	}
	template <typename T = int32_t> T GetThrowItemTypeCount() {
		return ((T (*)(BRQuickThrowWeaponController*))(Il2CppBase() + 0x1B1A5AC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BRQuickThrowWeaponController*))(Il2CppBase() + 0x1B1A64C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnActualBtnClick() {
		return ((T (*)(BRQuickThrowWeaponController*))(Il2CppBase() + 0x1B1A654))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnStandbyBtnClick(int32_t P0) {
		return ((T (*)(BRQuickThrowWeaponController*, int32_t))(Il2CppBase() + 0x1B1A658))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRQuickThrowWeaponController*))(Il2CppBase() + 0x1B1A65C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRQuickThrowWeaponController*))(Il2CppBase() + 0x1B1A660))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(BRQuickThrowWeaponController*))(Il2CppBase() + 0x1B1A664))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnUpperBtnClick(int32_t P0) {
		return ((T (*)(BRQuickThrowWeaponController*, int32_t))(Il2CppBase() + 0x1B1A66C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnArrowOpenBtnClick() {
		return ((T (*)(BRQuickThrowWeaponController*))(Il2CppBase() + 0x1B1A670))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnArrowCloseBtnClick() {
		return ((T (*)(BRQuickThrowWeaponController*))(Il2CppBase() + 0x1B1A674))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T xLuaBaseProxy_GetUpperItemDataList() {
		return ((T (*)(BRQuickThrowWeaponController*))(Il2CppBase() + 0x1B1A678))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T xLuaBaseProxy_GetUpperItemDataListByMerge() {
		return ((T (*)(BRQuickThrowWeaponController*))(Il2CppBase() + 0x1B1A67C))(this);
	}

};

}
