#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutWeaponCompareController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutWeaponCompareController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mWeaponItemEasyList() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mSquadInventoryDS() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mWeaponList() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& isSelectedRight() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mCacheFilterItemList() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> static T& CacheSelectedWeaponIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& CacheWeaponType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& CacheLeftWeaponData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& CacheRightWeaponData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& CacheEquipedWeaponData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = bool> static T& IsNeedRebuildFilter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = bool> T& isInit() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& initTimer() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayInitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowByAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitFilterPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponFilterCurrentBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponFilterMaskObjClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowFilterPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutWeaponFilterClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshFilterView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshWeaponList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshWeaponInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeftSelectedBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRightSelectedBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCompareItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshEasyList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LoadoutWeaponCompareController*))(Il2CppBase() + 0x1F4F614))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LoadoutWeaponCompareController*))(Il2CppBase() + 0x1F4F6E8))(this);
	}
	template <typename T = void> T DelayInitView() {
		return ((T (*)(LoadoutWeaponCompareController*))(Il2CppBase() + 0x1F4F9E8))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(LoadoutWeaponCompareController*))(Il2CppBase() + 0x1F4FCE8))(this);
	}
	template <typename T = bool> T ShowByAlpha(bool isShow) {
		return ((T (*)(LoadoutWeaponCompareController*, bool))(Il2CppBase() + 0x1F4FDF8))(this, isShow);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(LoadoutWeaponCompareController*))(Il2CppBase() + 0x1F50444))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoadoutWeaponCompareController*))(Il2CppBase() + 0x1F50538))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LoadoutWeaponCompareController*))(Il2CppBase() + 0x1F5084C))(this);
	}
	template <typename T = void> T InitFilterPanel() {
		return ((T (*)(LoadoutWeaponCompareController*))(Il2CppBase() + 0x1F50A28))(this);
	}
	template <typename T = void> T OnWeaponFilterCurrentBtnClick() {
		return ((T (*)(LoadoutWeaponCompareController*))(Il2CppBase() + 0x1F51158))(this);
	}
	template <typename T = void> T OnWeaponFilterMaskObjClick(uintptr_t obj) {
		return ((T (*)(LoadoutWeaponCompareController*, uintptr_t))(Il2CppBase() + 0x1F515AC))(this, obj);
	}
	template <typename T = void> T ShowFilterPanel(bool show) {
		return ((T (*)(LoadoutWeaponCompareController*, bool))(Il2CppBase() + 0x1F51324))(this, show);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponFilterClick(uintptr_t msg) {
		return ((T (*)(LoadoutWeaponCompareController*, uintptr_t))(Il2CppBase() + 0x1F5168C))(this, msg);
	}
	template <typename T = void> T RefreshFilterView() {
		return ((T (*)(LoadoutWeaponCompareController*))(Il2CppBase() + 0x1F500F0))(this);
	}
	template <typename T = void> T RefreshView() {
		return ((T (*)(LoadoutWeaponCompareController*))(Il2CppBase() + 0x1F50364))(this);
	}
	template <typename T = void> T RefreshWeaponList() {
		return ((T (*)(LoadoutWeaponCompareController*))(Il2CppBase() + 0x1F51854))(this);
	}
	template <typename T = void> T RefreshWeaponInfo(bool needAnim) {
		return ((T (*)(LoadoutWeaponCompareController*, bool))(Il2CppBase() + 0x1F51AD0))(this, needAnim);
	}
	template <typename T = void> T OnLeftSelectedBtnClick(uintptr_t obj) {
		return ((T (*)(LoadoutWeaponCompareController*, uintptr_t))(Il2CppBase() + 0x1F52028))(this, obj);
	}
	template <typename T = void> T OnRightSelectedBtnClick(uintptr_t obj) {
		return ((T (*)(LoadoutWeaponCompareController*, uintptr_t))(Il2CppBase() + 0x1F52110))(this, obj);
	}
	template <typename T = void> T SetCompareItem(uintptr_t weapon) {
		return ((T (*)(LoadoutWeaponCompareController*, uintptr_t))(Il2CppBase() + 0x1F521F8))(this, weapon);
	}
	template <typename T = void> T RefreshEasyList() {
		return ((T (*)(LoadoutWeaponCompareController*))(Il2CppBase() + 0x1F51F48))(this);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(LoadoutWeaponCompareController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1F52358))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(LoadoutWeaponCompareController*, uintptr_t, int32_t))(Il2CppBase() + 0x1F524F0))(this, list, userContext);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LoadoutWeaponCompareController*))(Il2CppBase() + 0x1F52658))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LoadoutWeaponCompareController*))(Il2CppBase() + 0x1F52660))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(LoadoutWeaponCompareController*))(Il2CppBase() + 0x1F52668))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(LoadoutWeaponCompareController*))(Il2CppBase() + 0x1F52670))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoadoutWeaponCompareController*))(Il2CppBase() + 0x1F52678))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LoadoutWeaponCompareController*))(Il2CppBase() + 0x1F52680))(this);
	}

};

}
