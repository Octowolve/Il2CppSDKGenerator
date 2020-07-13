#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class CodLiveOpsPersonalTaskItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "CodLiveOpsPersonalTaskItemController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Init() {
		return ((T (*)(CodLiveOpsPersonalTaskItemController*))(Il2CppBase() + 0x3549BBC))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(CodLiveOpsPersonalTaskItemController*))(Il2CppBase() + 0x3549CC8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(CodLiveOpsPersonalTaskItemController*))(Il2CppBase() + 0x3549D6C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(CodLiveOpsPersonalTaskItemController*))(Il2CppBase() + 0x3549E14))(this);
	}
	template <typename T = bool> T SetEasyListData(uintptr_t list, int32_t index, uintptr_t dataObj) {
		return ((T (*)(CodLiveOpsPersonalTaskItemController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x3549EBC))(this, list, index, dataObj);
	}
	template <typename T = void> T OnBtnClick(uint64_t activityId) {
		return ((T (*)(CodLiveOpsPersonalTaskItemController*, uint64_t))(Il2CppBase() + 0x3549854))(this, activityId);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(CodLiveOpsPersonalTaskItemController*))(Il2CppBase() + 0x354A234))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(CodLiveOpsPersonalTaskItemController*))(Il2CppBase() + 0x354A23C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(CodLiveOpsPersonalTaskItemController*))(Il2CppBase() + 0x354A244))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(CodLiveOpsPersonalTaskItemController*))(Il2CppBase() + 0x354A24C))(this);
	}

};

}
