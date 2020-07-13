#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.SoldierReturn {

class SoldierReturnReturnTrainingSelectRewardController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.SoldierReturn", "SoldierReturnReturnTrainingSelectRewardController"));
	}

	template <typename T = int32_t> T& _selectIndex() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& _uiView() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _itemListController() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _rewardData() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClaimButtonClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInitialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitScrollView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRewardData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SoldierReturnReturnTrainingSelectRewardController*))(Il2CppBase() + 0x3CB47C0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SoldierReturnReturnTrainingSelectRewardController*))(Il2CppBase() + 0x3CB4864))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(SoldierReturnReturnTrainingSelectRewardController*))(Il2CppBase() + 0x3CB4C30))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SoldierReturnReturnTrainingSelectRewardController*))(Il2CppBase() + 0x3CB4CFC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SoldierReturnReturnTrainingSelectRewardController*))(Il2CppBase() + 0x3CB4E30))(this);
	}
	template <typename T = void> T OnClaimButtonClicked() {
		return ((T (*)(SoldierReturnReturnTrainingSelectRewardController*))(Il2CppBase() + 0x3CB4F4C))(this);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(SoldierReturnReturnTrainingSelectRewardController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3CB5004))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(SoldierReturnReturnTrainingSelectRewardController*, uintptr_t, int32_t))(Il2CppBase() + 0x3CB50D4))(this, list, userContext);
	}
	template <typename T = void> T OnInitialize() {
		return ((T (*)(SoldierReturnReturnTrainingSelectRewardController*))(Il2CppBase() + 0x3CB4978))(this);
	}
	template <typename T = void> T InitScrollView() {
		return ((T (*)(SoldierReturnReturnTrainingSelectRewardController*))(Il2CppBase() + 0x3CB5188))(this);
	}
	template <typename T = void> T Reset(int32_t select) {
		return ((T (*)(SoldierReturnReturnTrainingSelectRewardController*, int32_t))(Il2CppBase() + 0x3CB4520))(this, select);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetRewardData(int32_t select) {
		return ((T (*)(SoldierReturnReturnTrainingSelectRewardController*, int32_t))(Il2CppBase() + 0x3CB5360))(this, select);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SoldierReturnReturnTrainingSelectRewardController*))(Il2CppBase() + 0x3CB5570))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SoldierReturnReturnTrainingSelectRewardController*))(Il2CppBase() + 0x3CB5578))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(SoldierReturnReturnTrainingSelectRewardController*))(Il2CppBase() + 0x3CB5580))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SoldierReturnReturnTrainingSelectRewardController*))(Il2CppBase() + 0x3CB5588))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SoldierReturnReturnTrainingSelectRewardController*))(Il2CppBase() + 0x3CB5590))(this);
	}

};

}
