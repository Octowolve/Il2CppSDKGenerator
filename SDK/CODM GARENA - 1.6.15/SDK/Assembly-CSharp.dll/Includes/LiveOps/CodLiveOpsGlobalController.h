#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class CodLiveOpsGlobalController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "CodLiveOpsGlobalController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_PointRewardsListController() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_PointRewards() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_LiveOpsDataStore() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& m_TopIndex() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& m_LeftIndex() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnRewardClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = uintptr_t> T get_LiveOpsDataStore() {
		return ((T (*)(CodLiveOpsGlobalController*))(Il2CppBase() + 0x353FDCC))(this);
	}
	template <typename T = void> T GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(CodLiveOpsGlobalController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x353FE7C))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T Init() {
		return ((T (*)(CodLiveOpsGlobalController*))(Il2CppBase() + 0x3540148))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(CodLiveOpsGlobalController*))(Il2CppBase() + 0x354035C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(CodLiveOpsGlobalController*))(Il2CppBase() + 0x3540400))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(CodLiveOpsGlobalController*))(Il2CppBase() + 0x3540568))(this);
	}
	template <typename T = void> T UpdateView(int32_t topIndex, int32_t leftIndex) {
		return ((T (*)(CodLiveOpsGlobalController*, int32_t, int32_t))(Il2CppBase() + 0x35406B0))(this, topIndex, leftIndex);
	}
	template <typename T = void> T UpdateView_1(bool reset) {
		return ((T (*)(CodLiveOpsGlobalController*, bool))(Il2CppBase() + 0x353FF9C))(this, reset);
	}
	template <typename T = void> T OnBtnRewardClick() {
		return ((T (*)(CodLiveOpsGlobalController*))(Il2CppBase() + 0x3540EF4))(this);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(CodLiveOpsGlobalController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3541128))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(CodLiveOpsGlobalController*, uintptr_t, int32_t))(Il2CppBase() + 0x35411F0))(this, list, userContext);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(CodLiveOpsGlobalController*))(Il2CppBase() + 0x35412A4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(CodLiveOpsGlobalController*))(Il2CppBase() + 0x35412AC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(CodLiveOpsGlobalController*))(Il2CppBase() + 0x35412B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(CodLiveOpsGlobalController*))(Il2CppBase() + 0x35412BC))(this);
	}

};

}
