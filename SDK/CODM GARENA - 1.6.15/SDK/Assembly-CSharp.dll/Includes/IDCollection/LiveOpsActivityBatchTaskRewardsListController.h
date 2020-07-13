#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace IDCollection {

class LiveOpsActivityBatchTaskRewardsListController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "IDCollection", "LiveOpsActivityBatchTaskRewardsListController"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T RefreshView() {
		return ((T (*)(LiveOpsActivityBatchTaskRewardsListController*))(Il2CppBase() + 0x49800B0))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(LiveOpsActivityBatchTaskRewardsListController*))(Il2CppBase() + 0x49801AC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshView() {
		return ((T (*)(LiveOpsActivityBatchTaskRewardsListController*))(Il2CppBase() + 0x4980314))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(LiveOpsActivityBatchTaskRewardsListController*))(Il2CppBase() + 0x498031C))(this);
	}

};

}
