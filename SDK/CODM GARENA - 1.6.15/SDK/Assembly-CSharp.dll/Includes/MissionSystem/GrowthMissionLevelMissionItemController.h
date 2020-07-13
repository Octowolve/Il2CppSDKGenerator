#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MissionSystem {

class GrowthMissionLevelMissionItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MissionSystem", "GrowthMissionLevelMissionItemController"));
	}

	template <typename T = uintptr_t> T& m_ItemView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_CacheMissionData() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_LiveOpsActivityDS() {
		return *(T*)((uintptr_t)this + 0x44);
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEasyListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GotoBtnCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClaimRewardCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T get_LiveOpsActivityDS() {
		return ((T (*)(GrowthMissionLevelMissionItemController*))(Il2CppBase() + 0x41F7818))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(GrowthMissionLevelMissionItemController*))(Il2CppBase() + 0x41F78C8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GrowthMissionLevelMissionItemController*))(Il2CppBase() + 0x41F796C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(GrowthMissionLevelMissionItemController*))(Il2CppBase() + 0x41F7A78))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(GrowthMissionLevelMissionItemController*))(Il2CppBase() + 0x41F7C58))(this);
	}
	template <typename T = bool> T SetEasyListData(uintptr_t list, int32_t index, uintptr_t data) {
		return ((T (*)(GrowthMissionLevelMissionItemController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x41F7DE4))(this, list, index, data);
	}
	template <typename T = void> T GotoBtnCallback() {
		return ((T (*)(GrowthMissionLevelMissionItemController*))(Il2CppBase() + 0x41F87DC))(this);
	}
	template <typename T = void> T ClaimRewardCallback() {
		return ((T (*)(GrowthMissionLevelMissionItemController*))(Il2CppBase() + 0x41F89C4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(GrowthMissionLevelMissionItemController*))(Il2CppBase() + 0x41F8B58))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GrowthMissionLevelMissionItemController*))(Il2CppBase() + 0x41F8B60))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(GrowthMissionLevelMissionItemController*))(Il2CppBase() + 0x41F8B68))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(GrowthMissionLevelMissionItemController*))(Il2CppBase() + 0x41F8B70))(this);
	}

};

}
