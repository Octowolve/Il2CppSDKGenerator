#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MissionSystem {

class GrowthMissionLevelRewardItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MissionSystem", "GrowthMissionLevelRewardItemController"));
	}

	template <typename T = uintptr_t> T& m_LiveOpsDataStore() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& mCallback() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& mCallbackParam() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_CacheMissionData() {
		return *(T*)((uintptr_t)this + 0x4C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetEasyListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTipHolderClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T get_LiveOpsDataStore() {
		return ((T (*)(GrowthMissionLevelRewardItemController*))(Il2CppBase() + 0x32ECBCC))(this);
	}
	template <typename T = uintptr_t> T get_CacheMissionData() {
		return ((T (*)(GrowthMissionLevelRewardItemController*))(Il2CppBase() + 0x32ECC7C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GrowthMissionLevelRewardItemController*))(Il2CppBase() + 0x32ECC84))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(GrowthMissionLevelRewardItemController*))(Il2CppBase() + 0x32ECD84))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(GrowthMissionLevelRewardItemController*))(Il2CppBase() + 0x32ECE28))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(GrowthMissionLevelRewardItemController*))(Il2CppBase() + 0x32ECED0))(this);
	}
	template <typename T = bool> T SetEasyListData(uintptr_t list, int32_t index, uintptr_t dataObj) {
		return ((T (*)(GrowthMissionLevelRewardItemController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x32ECF78))(this, list, index, dataObj);
	}
	template <typename T = void> T OnTipHolderClick() {
		return ((T (*)(GrowthMissionLevelRewardItemController*))(Il2CppBase() + 0x32ED754))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GrowthMissionLevelRewardItemController*))(Il2CppBase() + 0x32ED7EC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(GrowthMissionLevelRewardItemController*))(Il2CppBase() + 0x32ED7F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(GrowthMissionLevelRewardItemController*))(Il2CppBase() + 0x32ED7FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(GrowthMissionLevelRewardItemController*))(Il2CppBase() + 0x32ED804))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_SetEasyListData(uintptr_t P0, int32_t P1, uintptr_t P2) {
		return ((T (*)(GrowthMissionLevelRewardItemController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x32ED80C))(this, P0, P1, P2);
	}

};

}
