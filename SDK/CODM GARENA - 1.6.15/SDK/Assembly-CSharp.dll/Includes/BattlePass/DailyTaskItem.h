#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class DailyTaskItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "DailyTaskItem"));
	}

	template <typename T = uintptr_t> T& UnfinishRoot() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& UnfinishProgressLabel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& UnfinishProgress() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& UnfinishGoBtn() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& FinishRoot() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& FinishGetAwardBtn() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& AwardedRoot() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& LimitedRoot() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& PremiumRoot() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& ItemTemplate() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& DescriptionLabel() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& TitleLabel() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& RefreshBtn() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mDataStore() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mCacheDailyData() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRefreshBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetAwardBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGotoBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTaskTypeByMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTaskState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(DailyTaskItem*))(Il2CppBase() + 0x2C50A80))(this);
	}
	template <typename T = void> T OnRefreshBtnClick(uintptr_t obj) {
		return ((T (*)(DailyTaskItem*, uintptr_t))(Il2CppBase() + 0x2C50DAC))(this, obj);
	}
	template <typename T = void> T OnGetAwardBtnClick(uintptr_t obj) {
		return ((T (*)(DailyTaskItem*, uintptr_t))(Il2CppBase() + 0x2C50F98))(this, obj);
	}
	template <typename T = void> T OnGotoBtnClick(uintptr_t obj) {
		return ((T (*)(DailyTaskItem*, uintptr_t))(Il2CppBase() + 0x2C51248))(this, obj);
	}
	template <typename T = uintptr_t> T GetTaskTypeByMode(uintptr_t mode) {
		return ((T (*)(DailyTaskItem*, uintptr_t))(Il2CppBase() + 0x2C50EE8))(this, mode);
	}
	template <typename T = void> T SetTask(uintptr_t conf) {
		return ((T (*)(DailyTaskItem*, uintptr_t))(Il2CppBase() + 0x2C3DB98))(this, conf);
	}
	template <typename T = void> T SetProgress(int32_t numerator, int32_t denominator) {
		return ((T (*)(DailyTaskItem*, int32_t, int32_t))(Il2CppBase() + 0x2C515BC))(this, numerator, denominator);
	}
	template <typename T = void> T SetTaskState(uintptr_t state) {
		return ((T (*)(DailyTaskItem*, uintptr_t))(Il2CppBase() + 0x2C517F4))(this, state);
	}

};

}
