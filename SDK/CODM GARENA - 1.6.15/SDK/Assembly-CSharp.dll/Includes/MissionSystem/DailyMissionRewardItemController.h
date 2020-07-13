#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MissionSystem {

class DailyMissionRewardItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MissionSystem", "DailyMissionRewardItemController"));
	}

	template <typename T = uintptr_t> T& m_DaliyActivityRewardItemView() {
		return *(T*)((uintptr_t)this + 0x3C);
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

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(DailyMissionRewardItemController*))(Il2CppBase() + 0x41F304C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(DailyMissionRewardItemController*))(Il2CppBase() + 0x41F30F0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(DailyMissionRewardItemController*))(Il2CppBase() + 0x41F31FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(DailyMissionRewardItemController*))(Il2CppBase() + 0x41F3204))(this);
	}

};

}
