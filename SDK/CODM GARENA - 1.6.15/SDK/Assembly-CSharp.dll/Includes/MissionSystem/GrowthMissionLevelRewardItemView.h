#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MissionSystem {

class GrowthMissionLevelRewardItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MissionSystem", "GrowthMissionLevelRewardItemView"));
	}

	template <typename T = uintptr_t> T& MissionRewardedWidget() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& MissionRewardLockedWidget() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& MissionRewardAvailableWidget() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& TipHolderBtn() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItemData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMissionRewardData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T SetItemData(uintptr_t data) {
		return ((T (*)(GrowthMissionLevelRewardItemView*, uintptr_t))(Il2CppBase() + 0x32ED934))(this, data);
	}
	template <typename T = void> T SetMissionRewardData(uintptr_t rewardMission) {
		return ((T (*)(GrowthMissionLevelRewardItemView*, uintptr_t))(Il2CppBase() + 0x32ED9E8))(this, rewardMission);
	}
	template <typename T = void> T xLuaBaseProxy_SetItemData(uintptr_t P0) {
		return ((T (*)(GrowthMissionLevelRewardItemView*, uintptr_t))(Il2CppBase() + 0x32EDA88))(this, P0);
	}

};

}
