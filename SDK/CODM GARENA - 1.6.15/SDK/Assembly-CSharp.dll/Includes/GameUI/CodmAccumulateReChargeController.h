#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class CodmAccumulateReChargeController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "CodmAccumulateReChargeController"));
	}

	template <typename T = int32_t> static T& AccumulateRechargeId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _view() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mBattlePassConf() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _config() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _rewards() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& _curSelectIdx() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& _rechargeInfo() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& isAutoSelect() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& maxItemIndex() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> static T& CameraParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int64_t> T& _endTime() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _timer() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uint32_t> T& SelectedItemId() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnGoToClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRefreshItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSelectItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResDownloaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(CodmAccumulateReChargeController*))(Il2CppBase() + 0x3DE027C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(CodmAccumulateReChargeController*))(Il2CppBase() + 0x3DE0350))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(CodmAccumulateReChargeController*))(Il2CppBase() + 0x3DE06A8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(CodmAccumulateReChargeController*))(Il2CppBase() + 0x3DE080C))(this);
	}
	template <typename T = void> T OnBtnGoToClick() {
		return ((T (*)(CodmAccumulateReChargeController*))(Il2CppBase() + 0x3DE0958))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(CodmAccumulateReChargeController*))(Il2CppBase() + 0x3DE0B24))(this);
	}
	template <typename T = void> T OnRefreshItem(uintptr_t item, int32_t idx) {
		return ((T (*)(CodmAccumulateReChargeController*, uintptr_t, int32_t))(Il2CppBase() + 0x3DE1CCC))(this, item, idx);
	}
	template <typename T = uint32_t> T get_SelectedItemId() {
		return ((T (*)(CodmAccumulateReChargeController*))(Il2CppBase() + 0x3DE2124))(this);
	}
	template <typename T = void> T set_SelectedItemId(uint32_t value) {
		return ((T (*)(CodmAccumulateReChargeController*, uint32_t))(Il2CppBase() + 0x3DE212C))(this, value);
	}
	template <typename T = void> T OnSelectItem(uintptr_t item, int32_t idx, bool isSelected) {
		return ((T (*)(CodmAccumulateReChargeController*, uintptr_t, int32_t, bool))(Il2CppBase() + 0x3DE2134))(this, item, idx, isSelected);
	}
	template <typename T = void> T RefreshModel() {
		return ((T (*)(CodmAccumulateReChargeController*))(Il2CppBase() + 0x3DE26CC))(this);
	}
	template <typename T = void> T OnResDownloaded() {
		return ((T (*)(CodmAccumulateReChargeController*))(Il2CppBase() + 0x3DE379C))(this);
	}
	template <typename T = void> T RefreshTime() {
		return ((T (*)(CodmAccumulateReChargeController*))(Il2CppBase() + 0x3DE175C))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(CodmAccumulateReChargeController*))(Il2CppBase() + 0x3DE39BC))(this);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(CodmAccumulateReChargeController*, uintptr_t, int32_t))(Il2CppBase() + 0x3DE3BF4))(this, list, userContext);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(CodmAccumulateReChargeController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3DE3CD8))(this, list, controller, index);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(CodmAccumulateReChargeController*))(Il2CppBase() + 0x3DE3DD4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(CodmAccumulateReChargeController*))(Il2CppBase() + 0x3DE3DDC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(CodmAccumulateReChargeController*))(Il2CppBase() + 0x3DE3DE4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(CodmAccumulateReChargeController*))(Il2CppBase() + 0x3DE3DEC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(CodmAccumulateReChargeController*))(Il2CppBase() + 0x3DE3DF4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(CodmAccumulateReChargeController*))(Il2CppBase() + 0x3DE3DFC))(this);
	}

};

}
