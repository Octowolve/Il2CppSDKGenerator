#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsDailyTaskControllerEn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsDailyTaskController_En"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_ListController() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> static T& ITEM_WIDTH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ITEM_HEIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mNormalTask() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitEasyList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActivityData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnDilayTaskClaimClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMTask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TaskSort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = void> T Init() {
		return ((T (*)(LiveOpsDailyTaskControllerEn*))(Il2CppBase() + 0x34E2CE8))(this);
	}
	template <typename T = void> T InitEasyList() {
		return ((T (*)(LiveOpsDailyTaskControllerEn*))(Il2CppBase() + 0x34E364C))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LiveOpsDailyTaskControllerEn*))(Il2CppBase() + 0x34E3778))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LiveOpsDailyTaskControllerEn*))(Il2CppBase() + 0x34E3820))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LiveOpsDailyTaskControllerEn*))(Il2CppBase() + 0x34E3948))(this);
	}
	template <typename T = void> T SetActivityData(int32_t topNum, int32_t leftNum, bool bInit) {
		return ((T (*)(LiveOpsDailyTaskControllerEn*, int32_t, int32_t, bool))(Il2CppBase() + 0x34E3A04))(this, topNum, leftNum, bInit);
	}
	template <typename T = void> T UpdateView(uintptr_t activity, bool bInit) {
		return ((T (*)(LiveOpsDailyTaskControllerEn*, uintptr_t, bool))(Il2CppBase() + 0x34E32D0))(this, activity, bInit);
	}
	template <typename T = void> T _OnDilayTaskClaimClick(uintptr_t Msg) {
		return ((T (*)(LiveOpsDailyTaskControllerEn*, uintptr_t))(Il2CppBase() + 0x34E3D40))(this, Msg);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(LiveOpsDailyTaskControllerEn*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x34E3FA8))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(LiveOpsDailyTaskControllerEn*, uintptr_t, int32_t))(Il2CppBase() + 0x34E4070))(this, list, userContext);
	}
	template <typename T = void> T SetMTask(Il2CppList<uintptr_t>* SortTasks) {
		return ((T (*)(LiveOpsDailyTaskControllerEn*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x34E3AE4))(this, SortTasks);
	}
	template <typename T = int32_t> T TaskSort(uintptr_t task1, uintptr_t task2) {
		return ((T (*)(LiveOpsDailyTaskControllerEn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x34E412C))(this, task1, task2);
	}
	template <typename T = void> T UpdateViewm__0(uintptr_t x) {
		return ((T (*)(LiveOpsDailyTaskControllerEn*, uintptr_t))(Il2CppBase() + 0x34E4324))(this, x);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LiveOpsDailyTaskControllerEn*))(Il2CppBase() + 0x34E43C4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LiveOpsDailyTaskControllerEn*))(Il2CppBase() + 0x34E43CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LiveOpsDailyTaskControllerEn*))(Il2CppBase() + 0x34E43D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LiveOpsDailyTaskControllerEn*))(Il2CppBase() + 0x34E43DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetActivityData(int32_t P0, int32_t P1, bool P2) {
		return ((T (*)(LiveOpsDailyTaskControllerEn*, int32_t, int32_t, bool))(Il2CppBase() + 0x34E43E4))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView(uintptr_t P0, bool P1) {
		return ((T (*)(LiveOpsDailyTaskControllerEn*, uintptr_t, bool))(Il2CppBase() + 0x34E4404))(this, P0, P1);
	}

};

}
