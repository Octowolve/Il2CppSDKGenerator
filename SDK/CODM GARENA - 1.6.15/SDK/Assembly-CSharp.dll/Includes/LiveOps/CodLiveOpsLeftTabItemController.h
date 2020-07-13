#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class CodLiveOpsLeftTabItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "CodLiveOpsLeftTabItemController"));
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
		return ((T (*)(CodLiveOpsLeftTabItemController*))(Il2CppBase() + 0x35437A0))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(CodLiveOpsLeftTabItemController*))(Il2CppBase() + 0x35438AC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(CodLiveOpsLeftTabItemController*))(Il2CppBase() + 0x3543950))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(CodLiveOpsLeftTabItemController*))(Il2CppBase() + 0x3543A84))(this);
	}
	template <typename T = bool> T SetEasyListData(uintptr_t list, int32_t index, uintptr_t dataObj) {
		return ((T (*)(CodLiveOpsLeftTabItemController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x3543BA0))(this, list, index, dataObj);
	}
	template <typename T = void> T OnBtnClick() {
		return ((T (*)(CodLiveOpsLeftTabItemController*))(Il2CppBase() + 0x3543E80))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(CodLiveOpsLeftTabItemController*))(Il2CppBase() + 0x35440AC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(CodLiveOpsLeftTabItemController*))(Il2CppBase() + 0x35440B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(CodLiveOpsLeftTabItemController*))(Il2CppBase() + 0x35440BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(CodLiveOpsLeftTabItemController*))(Il2CppBase() + 0x35440C4))(this);
	}

};

}
