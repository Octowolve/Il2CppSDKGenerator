#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutBrVehicleController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutBrVehicleController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& mWeaponItemEasyList() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& mDetailItemEasyList() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> static T& cachMenuType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& CacheFilterType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& CacheOtherSortRarity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& CacheShowVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppList<uintptr_t>*>*> T& dicVehList() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& styleList() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& skinList() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& showSkinList() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& allStyleList() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& allDatas() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppList<int32_t>*> static T& StyleIntList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = bool> T& bMagnifyMode() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& isShowSkinUI() {
		return *(T*)((uintptr_t)this + 0x81);
	}
	template <typename T = float> static T& DISABLE_WEAPON_VIEW_ALPHA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& ENABLE_WEAPON_VIEW_ALPHA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<uint64_t, Il2CppDictionary<uintptr_t, uint32_t>*>*> static T& CacheMenuReddotTimestamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyTopBarBackBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMagnifyBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMagnifyMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutWeaponFilterItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutWeaponFilterClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutWeaponCellClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayInitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshUIDatas() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateVehicleInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAssetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnModelResChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDetailGotoBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTakeOffBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEquipBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDetailCloseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutWeaponUpdateData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnSkinClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessVehicleReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponSlotReddotTimestamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BackCheckEquip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshSkinList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSkinUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LoadoutBrVehicleController*))(Il2CppBase() + 0x1A0C7A0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LoadoutBrVehicleController*))(Il2CppBase() + 0x1A0C874))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoadoutBrVehicleController*))(Il2CppBase() + 0x1A0C9B0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LoadoutBrVehicleController*))(Il2CppBase() + 0x1A0CED0))(this);
	}
	template <typename T = void> T OnNotifyTopBarBackBtnClick(uintptr_t msg) {
		return ((T (*)(LoadoutBrVehicleController*, uintptr_t))(Il2CppBase() + 0x1A0D2B4))(this, msg);
	}
	template <typename T = void> T OnMagnifyBtnClick() {
		return ((T (*)(LoadoutBrVehicleController*))(Il2CppBase() + 0x1A0D410))(this);
	}
	template <typename T = void> T SetMagnifyMode(bool show) {
		return ((T (*)(LoadoutBrVehicleController*, bool))(Il2CppBase() + 0x1A0D4F4))(this, show);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponFilterItemClick(uintptr_t message) {
		return ((T (*)(LoadoutBrVehicleController*, uintptr_t))(Il2CppBase() + 0x1A0DB64))(this, message);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponFilterClick(uintptr_t message) {
		return ((T (*)(LoadoutBrVehicleController*, uintptr_t))(Il2CppBase() + 0x1A0F78C))(this, message);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponCellClick(uintptr_t obj) {
		return ((T (*)(LoadoutBrVehicleController*, uintptr_t))(Il2CppBase() + 0x1A0FA70))(this, obj);
	}
	template <typename T = void> T DelayInitView() {
		return ((T (*)(LoadoutBrVehicleController*))(Il2CppBase() + 0x1A0FB84))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(LoadoutBrVehicleController*))(Il2CppBase() + 0x1A0FF34))(this);
	}
	template <typename T = void> T RefreshUIDatas() {
		return ((T (*)(LoadoutBrVehicleController*))(Il2CppBase() + 0x1A0DE24))(this);
	}
	template <typename T = void> T UpdateVehicleInfo() {
		return ((T (*)(LoadoutBrVehicleController*))(Il2CppBase() + 0x1A0F4D0))(this);
	}
	template <typename T = void> T SendEvent() {
		return ((T (*)(LoadoutBrVehicleController*))(Il2CppBase() + 0x1A10BC4))(this);
	}
	template <typename T = void> T SetInfo(int32_t resId, uint64_t guid) {
		return ((T (*)(LoadoutBrVehicleController*, int32_t, uint64_t))(Il2CppBase() + 0x1A10404))(this, resId, guid);
	}
	template <typename T = void> T SetAssetInfo() {
		return ((T (*)(LoadoutBrVehicleController*))(Il2CppBase() + 0x1A108D8))(this);
	}
	template <typename T = void> T OnModelResChanged() {
		return ((T (*)(LoadoutBrVehicleController*))(Il2CppBase() + 0x1A11308))(this);
	}
	template <typename T = void> T OnDetailGotoBtnClick() {
		return ((T (*)(LoadoutBrVehicleController*))(Il2CppBase() + 0x1A113DC))(this);
	}
	template <typename T = void> T OnTakeOffBtnClick() {
		return ((T (*)(LoadoutBrVehicleController*))(Il2CppBase() + 0x1A1161C))(this);
	}
	template <typename T = void> T OnEquipBtnClick() {
		return ((T (*)(LoadoutBrVehicleController*))(Il2CppBase() + 0x1A11840))(this);
	}
	template <typename T = void> T OnDetailCloseBtnClick() {
		return ((T (*)(LoadoutBrVehicleController*))(Il2CppBase() + 0x1A11914))(this);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponUpdateData(uintptr_t obj) {
		return ((T (*)(LoadoutBrVehicleController*, uintptr_t))(Il2CppBase() + 0x1A121C8))(this, obj);
	}
	template <typename T = void> T OnBtnSkinClick() {
		return ((T (*)(LoadoutBrVehicleController*))(Il2CppBase() + 0x1A122C4))(this);
	}
	template <typename T = void> T ProcessVehicleReddot() {
		return ((T (*)(LoadoutBrVehicleController*))(Il2CppBase() + 0x1A11D5C))(this);
	}
	template <typename T = uint32_t> static T GetWeaponSlotReddotTimestamp(uint32_t vId, uintptr_t reddotSlot) {
		return ((T (*)(void *, uint32_t, uintptr_t))(Il2CppBase() + 0x1A12410))(0, vId, reddotSlot);
	}
	template <typename T = void> T BackCheckEquip() {
		return ((T (*)(LoadoutBrVehicleController*))(Il2CppBase() + 0x1A11A48))(this);
	}
	template <typename T = void> T RefreshSkinList() {
		return ((T (*)(LoadoutBrVehicleController*))(Il2CppBase() + 0x1A0E9B0))(this);
	}
	template <typename T = void> T ShowSkinUI() {
		return ((T (*)(LoadoutBrVehicleController*))(Il2CppBase() + 0x1A1263C))(this);
	}
	template <typename T = void> T UpdateTab() {
		return ((T (*)(LoadoutBrVehicleController*))(Il2CppBase() + 0x1A0F3D8))(this);
	}
	template <typename T = void> T ShowVehicle() {
		return ((T (*)(LoadoutBrVehicleController*))(Il2CppBase() + 0x1A100A0))(this);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(LoadoutBrVehicleController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1A13398))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(LoadoutBrVehicleController*, uintptr_t, int32_t))(Il2CppBase() + 0x1A13AB4))(this, list, userContext);
	}
	template <typename T = bool> static T RefreshUIDatasm__0(uintptr_t d) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1A13CBC))(0, d);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LoadoutBrVehicleController*))(Il2CppBase() + 0x1A13DB4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LoadoutBrVehicleController*))(Il2CppBase() + 0x1A13DBC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoadoutBrVehicleController*))(Il2CppBase() + 0x1A13DC4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LoadoutBrVehicleController*))(Il2CppBase() + 0x1A13DCC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyTopBarBackBtnClick(uintptr_t P0) {
		return ((T (*)(LoadoutBrVehicleController*, uintptr_t))(Il2CppBase() + 0x1A13DD4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_DelayInitView() {
		return ((T (*)(LoadoutBrVehicleController*))(Il2CppBase() + 0x1A13DDC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(LoadoutBrVehicleController*))(Il2CppBase() + 0x1A13DE4))(this);
	}

};

}
