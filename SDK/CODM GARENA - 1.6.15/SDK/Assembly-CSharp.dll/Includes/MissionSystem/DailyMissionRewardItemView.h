#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MissionSystem {

class DailyMissionRewardItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MissionSystem", "DailyMissionRewardItemView"));
	}

	template <typename T = uintptr_t> T& ItemTemplate() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& TargetActibityValueLabel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetItem(uintptr_t task, void* callback) {
		return ((T (*)(DailyMissionRewardItemView*, uintptr_t, void*))(Il2CppBase() + 0x41F32B0))(this, task, callback);
	}

};

}
