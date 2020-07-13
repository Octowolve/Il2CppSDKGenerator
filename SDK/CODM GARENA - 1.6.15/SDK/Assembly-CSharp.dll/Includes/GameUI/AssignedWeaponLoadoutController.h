#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class AssignedWeaponLoadoutController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "AssignedWeaponLoadoutController"));
	}

	template <typename T = uintptr_t> T& m_view() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mGameInfoDataStore() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& easyListController() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& nCurrentSelectBag() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& initTimer() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayInitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnScrollViewDragEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SelectBagIndexDelta() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GamepadNext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GamepadPrevious() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshDataStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBagCommonInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyShowLoadoutTimePvpGameView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangeBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConfirmBtnOnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShowCamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(AssignedWeaponLoadoutController*))(Il2CppBase() + 0x2D64764))(this);
	}
	template <typename T = void> T DelayInitView() {
		return ((T (*)(AssignedWeaponLoadoutController*))(Il2CppBase() + 0x2D64808))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(AssignedWeaponLoadoutController*))(Il2CppBase() + 0x2D6502C))(this);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(AssignedWeaponLoadoutController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x2D65340))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(AssignedWeaponLoadoutController*, uintptr_t, int32_t))(Il2CppBase() + 0x2D65A60))(this, list, userContext);
	}
	template <typename T = void> T OnScrollViewDragEnd() {
		return ((T (*)(AssignedWeaponLoadoutController*))(Il2CppBase() + 0x2D65B14))(this);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(AssignedWeaponLoadoutController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x2D65BFC))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T SelectBagIndexDelta(int32_t delta) {
		return ((T (*)(AssignedWeaponLoadoutController*, int32_t))(Il2CppBase() + 0x2D65D18))(this, delta);
	}
	template <typename T = bool> T GamepadNext() {
		return ((T (*)(AssignedWeaponLoadoutController*))(Il2CppBase() + 0x2D65E90))(this);
	}
	template <typename T = bool> T GamepadPrevious() {
		return ((T (*)(AssignedWeaponLoadoutController*))(Il2CppBase() + 0x2D65F44))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(AssignedWeaponLoadoutController*))(Il2CppBase() + 0x2D65FF0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(AssignedWeaponLoadoutController*))(Il2CppBase() + 0x2D662AC))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(AssignedWeaponLoadoutController*))(Il2CppBase() + 0x2D664FC))(this);
	}
	template <typename T = void> T RefreshDataStore() {
		return ((T (*)(AssignedWeaponLoadoutController*))(Il2CppBase() + 0x2D64B98))(this);
	}
	template <typename T = void> T RefreshBagCommonInfo(uint32_t iBagId) {
		return ((T (*)(AssignedWeaponLoadoutController*, uint32_t))(Il2CppBase() + 0x2D654C4))(this, iBagId);
	}
	template <typename T = void> T SetTime(float time, bool bFirst) {
		return ((T (*)(AssignedWeaponLoadoutController*, float, bool))(Il2CppBase() + 0x2D665A4))(this, time, bFirst);
	}
	template <typename T = void> T OnNotifyShowLoadoutTimePvpGameView(uintptr_t message) {
		return ((T (*)(AssignedWeaponLoadoutController*, uintptr_t))(Il2CppBase() + 0x2D668B0))(this, message);
	}
	template <typename T = void> T OnChangeBag() {
		return ((T (*)(AssignedWeaponLoadoutController*))(Il2CppBase() + 0x2D6695C))(this);
	}
	template <typename T = void> T OnConfirmBtnOnClick() {
		return ((T (*)(AssignedWeaponLoadoutController*))(Il2CppBase() + 0x2D66D50))(this);
	}
	template <typename T = void> T CheckShowCamp() {
		return ((T (*)(AssignedWeaponLoadoutController*))(Il2CppBase() + 0x2D66DFC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(AssignedWeaponLoadoutController*))(Il2CppBase() + 0x2D66FE8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(AssignedWeaponLoadoutController*))(Il2CppBase() + 0x2D66FF0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(AssignedWeaponLoadoutController*))(Il2CppBase() + 0x2D66FF8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(AssignedWeaponLoadoutController*))(Il2CppBase() + 0x2D67000))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(AssignedWeaponLoadoutController*))(Il2CppBase() + 0x2D67008))(this);
	}

};

}
