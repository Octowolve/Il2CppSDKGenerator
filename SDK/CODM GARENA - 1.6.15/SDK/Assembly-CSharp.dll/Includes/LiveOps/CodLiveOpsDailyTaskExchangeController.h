#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class CodLiveOpsDailyTaskExchangeController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "CodLiveOpsDailyTaskExchangeController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_TaskItemListController() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_LiveOpsDataStore() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uint64_t> T& m_ActivityId() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& m_TopIndex() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& m_LeftIndex() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDailyTaskExchangeRewardClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDailyTaskExchangeTipClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = uintptr_t> T get_LiveOpsDataStore() {
		return ((T (*)(CodLiveOpsDailyTaskExchangeController*))(Il2CppBase() + 0x3536814))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(CodLiveOpsDailyTaskExchangeController*))(Il2CppBase() + 0x35368C4))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(CodLiveOpsDailyTaskExchangeController*))(Il2CppBase() + 0x35369D0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(CodLiveOpsDailyTaskExchangeController*))(Il2CppBase() + 0x3536A74))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(CodLiveOpsDailyTaskExchangeController*))(Il2CppBase() + 0x3536D1C))(this);
	}
	template <typename T = void> T GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(CodLiveOpsDailyTaskExchangeController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x3536E40))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T UpdateView(int32_t topIndex, int32_t leftIndex) {
		return ((T (*)(CodLiveOpsDailyTaskExchangeController*, int32_t, int32_t))(Il2CppBase() + 0x3537370))(this, topIndex, leftIndex);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(CodLiveOpsDailyTaskExchangeController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3537510))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(CodLiveOpsDailyTaskExchangeController*, uintptr_t, int32_t))(Il2CppBase() + 0x35375D8))(this, list, userContext);
	}
	template <typename T = void> T OnDailyTaskExchangeRewardClick(uintptr_t Msg) {
		return ((T (*)(CodLiveOpsDailyTaskExchangeController*, uintptr_t))(Il2CppBase() + 0x353768C))(this, Msg);
	}
	template <typename T = void> T OnDailyTaskExchangeTipClick(uintptr_t Msg) {
		return ((T (*)(CodLiveOpsDailyTaskExchangeController*, uintptr_t))(Il2CppBase() + 0x353782C))(this, Msg);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(CodLiveOpsDailyTaskExchangeController*))(Il2CppBase() + 0x35379E4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(CodLiveOpsDailyTaskExchangeController*))(Il2CppBase() + 0x35379EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(CodLiveOpsDailyTaskExchangeController*))(Il2CppBase() + 0x35379F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(CodLiveOpsDailyTaskExchangeController*))(Il2CppBase() + 0x35379FC))(this);
	}

};

}
