#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MissionSystem {

class MissionSystemMainController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MissionSystem", "MissionSystemMainController"));
	}

	template <typename T = uintptr_t> T& m_MissionSystemMainView() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_uiScene() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_DailyMissionSubController() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_GrowthMissionSubController() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_DailyMissionDisplayData() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_GrowthMissionDisplayData() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& m_LiveOpsActivityDS() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& m_MissionSystemDS() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& m_LiveOpsDataStore() {
		return *(T*)((uintptr_t)this + 0x68);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeTabController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyTabChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateDisplayData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAllTabViews() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTabReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDescBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavTitleUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupTabController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClaimAllRewardInCurrentTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = uintptr_t> T get_LiveOpsActivityDS() {
		return ((T (*)(MissionSystemMainController*))(Il2CppBase() + 0x32F428C))(this);
	}
	template <typename T = uintptr_t> T get_MissionSystemDS() {
		return ((T (*)(MissionSystemMainController*))(Il2CppBase() + 0x32F433C))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(MissionSystemMainController*))(Il2CppBase() + 0x32F43EC))(this);
	}
	template <typename T = uintptr_t> T get_LiveOpsDataStore() {
		return ((T (*)(MissionSystemMainController*))(Il2CppBase() + 0x32F4490))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(MissionSystemMainController*))(Il2CppBase() + 0x32F4540))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(MissionSystemMainController*))(Il2CppBase() + 0x32F4878))(this);
	}
	template <typename T = void> T ChangeTabController(int32_t index) {
		return ((T (*)(MissionSystemMainController*, int32_t))(Il2CppBase() + 0x32F4920))(this, index);
	}
	template <typename T = void> T NotifyTabChanged(int32_t index) {
		return ((T (*)(MissionSystemMainController*, int32_t))(Il2CppBase() + 0x32F4CAC))(this, index);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(MissionSystemMainController*))(Il2CppBase() + 0x32F4E18))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(MissionSystemMainController*))(Il2CppBase() + 0x32F5004))(this);
	}
	template <typename T = void> T GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(MissionSystemMainController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x32F514C))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T UpdateDisplayData() {
		return ((T (*)(MissionSystemMainController*))(Il2CppBase() + 0x32F5270))(this);
	}
	template <typename T = void> T UpdateAllTabViews() {
		return ((T (*)(MissionSystemMainController*))(Il2CppBase() + 0x32F56E4))(this);
	}
	template <typename T = void> T UpdateTabReddot() {
		return ((T (*)(MissionSystemMainController*))(Il2CppBase() + 0x32F57B4))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(MissionSystemMainController*))(Il2CppBase() + 0x32F5970))(this);
	}
	template <typename T = void> T OnDescBtnClick() {
		return ((T (*)(MissionSystemMainController*))(Il2CppBase() + 0x32F604C))(this);
	}
	template <typename T = void> T OnNavTitleUpdate() {
		return ((T (*)(MissionSystemMainController*))(Il2CppBase() + 0x32F5E78))(this);
	}
	template <typename T = void> T SetupTabController() {
		return ((T (*)(MissionSystemMainController*))(Il2CppBase() + 0x32F4770))(this);
	}
	template <typename T = void> T ShowController(int32_t index) {
		return ((T (*)(MissionSystemMainController*, int32_t))(Il2CppBase() + 0x32F4A20))(this, index);
	}
	template <typename T = void> T ClaimAllRewardInCurrentTab() {
		return ((T (*)(MissionSystemMainController*))(Il2CppBase() + 0x32F613C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(MissionSystemMainController*))(Il2CppBase() + 0x32F62B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(MissionSystemMainController*))(Il2CppBase() + 0x32F62C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnShow() {
		return ((T (*)(MissionSystemMainController*))(Il2CppBase() + 0x32F62C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ChangeTabController(int32_t P0) {
		return ((T (*)(MissionSystemMainController*, int32_t))(Il2CppBase() + 0x32F62D0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_NotifyTabChanged(int32_t P0) {
		return ((T (*)(MissionSystemMainController*, int32_t))(Il2CppBase() + 0x32F62D8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(MissionSystemMainController*))(Il2CppBase() + 0x32F62E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(MissionSystemMainController*))(Il2CppBase() + 0x32F62E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(MissionSystemMainController*))(Il2CppBase() + 0x32F62F0))(this);
	}

};

}
