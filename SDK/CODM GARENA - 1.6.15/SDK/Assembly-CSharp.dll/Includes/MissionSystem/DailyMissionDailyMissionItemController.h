#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MissionSystem {

class DailyMissionDailyMissionItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MissionSystem", "DailyMissionDailyMissionItemController"));
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
		return ((T (*)(DailyMissionDailyMissionItemController*))(Il2CppBase() + 0x41F15F4))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(DailyMissionDailyMissionItemController*))(Il2CppBase() + 0x41F16A4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(DailyMissionDailyMissionItemController*))(Il2CppBase() + 0x41F1748))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(DailyMissionDailyMissionItemController*))(Il2CppBase() + 0x41F1854))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(DailyMissionDailyMissionItemController*))(Il2CppBase() + 0x41F1A34))(this);
	}
	template <typename T = bool> T SetEasyListData(uintptr_t list, int32_t index, uintptr_t data) {
		return ((T (*)(DailyMissionDailyMissionItemController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x41F1BC0))(this, list, index, data);
	}
	template <typename T = void> T GotoBtnCallback() {
		return ((T (*)(DailyMissionDailyMissionItemController*))(Il2CppBase() + 0x41F2708))(this);
	}
	template <typename T = void> T ClaimRewardCallback() {
		return ((T (*)(DailyMissionDailyMissionItemController*))(Il2CppBase() + 0x41F28F0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(DailyMissionDailyMissionItemController*))(Il2CppBase() + 0x41F2A88))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(DailyMissionDailyMissionItemController*))(Il2CppBase() + 0x41F2A90))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(DailyMissionDailyMissionItemController*))(Il2CppBase() + 0x41F2A98))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(DailyMissionDailyMissionItemController*))(Il2CppBase() + 0x41F2AA0))(this);
	}

};

}
