#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class CodLiveOpsPersonalTaskItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "CodLiveOpsPersonalTaskItemView"));
	}

	template <typename T = uintptr_t> T& WidgetFinish() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& WidgetReward() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& WidgetNormal() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& LabelPoint() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T OnBtnClick(uint64_t activityId) {
		return ((T (*)(CodLiveOpsPersonalTaskItemView*, uint64_t))(Il2CppBase() + 0x354A000))(this, activityId);
	}
	template <typename T = void> T SetData(uintptr_t data, int32_t minWidth) {
		return ((T (*)(CodLiveOpsPersonalTaskItemView*, uintptr_t, int32_t))(Il2CppBase() + 0x354A2F4))(this, data, minWidth);
	}
	template <typename T = void> T xLuaBaseProxy_SetData(uintptr_t P0, int32_t P1) {
		return ((T (*)(CodLiveOpsPersonalTaskItemView*, uintptr_t, int32_t))(Il2CppBase() + 0x354A56C))(this, P0, P1);
	}

};

}
