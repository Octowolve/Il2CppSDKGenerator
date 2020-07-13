#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassWeekTaskItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassWeekTaskItemController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mCacheWeekData() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mDataStore() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& bDailyTask() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& mCacheDailyData() {
		return *(T*)((uintptr_t)this + 0x4C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_IsDailyTask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEasyListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshDailyTask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshWeekTask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAwardBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGotoBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRefreshBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeekTaskTypeByMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDailyTaskTypeByMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BattlePassWeekTaskItemController*))(Il2CppBase() + 0x2C42244))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BattlePassWeekTaskItemController*))(Il2CppBase() + 0x2C422E8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BattlePassWeekTaskItemController*))(Il2CppBase() + 0x2C42438))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BattlePassWeekTaskItemController*))(Il2CppBase() + 0x2C42680))(this);
	}
	template <typename T = bool> T IsDailyTask(int32_t index) {
		return ((T (*)(BattlePassWeekTaskItemController*, int32_t))(Il2CppBase() + 0x2C4285C))(this, index);
	}
	template <typename T = bool> T SetEasyListData(uintptr_t list, int32_t index, uintptr_t data) {
		return ((T (*)(BattlePassWeekTaskItemController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x2C42904))(this, list, index, data);
	}
	template <typename T = void> T RefreshDailyTask() {
		return ((T (*)(BattlePassWeekTaskItemController*))(Il2CppBase() + 0x2C42AB4))(this);
	}
	template <typename T = void> T RefreshWeekTask() {
		return ((T (*)(BattlePassWeekTaskItemController*))(Il2CppBase() + 0x2C42E6C))(this);
	}
	template <typename T = void> T OnAwardBtnClick() {
		return ((T (*)(BattlePassWeekTaskItemController*))(Il2CppBase() + 0x2C43928))(this);
	}
	template <typename T = void> T OnGotoBtnClick() {
		return ((T (*)(BattlePassWeekTaskItemController*))(Il2CppBase() + 0x2C43E7C))(this);
	}
	template <typename T = void> T OnRefreshBtnClick() {
		return ((T (*)(BattlePassWeekTaskItemController*))(Il2CppBase() + 0x2C4434C))(this);
	}
	template <typename T = uintptr_t> T GetWeekTaskTypeByMode(uintptr_t mode) {
		return ((T (*)(BattlePassWeekTaskItemController*, uintptr_t))(Il2CppBase() + 0x2C43DC0))(this, mode);
	}
	template <typename T = uintptr_t> T GetDailyTaskTypeByMode(uintptr_t mode) {
		return ((T (*)(BattlePassWeekTaskItemController*, uintptr_t))(Il2CppBase() + 0x2C43D10))(this, mode);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BattlePassWeekTaskItemController*))(Il2CppBase() + 0x2C4448C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BattlePassWeekTaskItemController*))(Il2CppBase() + 0x2C44494))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BattlePassWeekTaskItemController*))(Il2CppBase() + 0x2C4449C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BattlePassWeekTaskItemController*))(Il2CppBase() + 0x2C444A4))(this);
	}

};

}
