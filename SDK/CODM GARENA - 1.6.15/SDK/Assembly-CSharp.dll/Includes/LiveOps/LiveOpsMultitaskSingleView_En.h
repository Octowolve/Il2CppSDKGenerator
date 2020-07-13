#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsMultitaskSingleViewEn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsMultitaskSingleView_En"));
	}

	template <typename T = uintptr_t> T& LabelTitleClaimed() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& TaskItem() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& TaskScrollView() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& progress() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& progressLabel() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& progress2() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& progressLabel2() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& StateDoneGB() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& BtnTemplateClaim() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& BtnTemplarePreview() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& RemainingRewardList() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ItemTemplates() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& rewardList() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& SingleRewardWidget() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& MultiRewardWidget() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& singleRewardTemplate() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& multiRewardGrid() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& itemPrefab() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& activityIcon() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& activityIcon2() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = bool> T& registerEvent() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = float> T& totalProgress() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = float> T& maxProgress() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = Il2CppString*> T& activityIconStr() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_tasks() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& m_activity() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& ButtonDetails() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRewardList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTaskList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TaskSort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRefreshItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T UpdateRewardList() {
		return ((T (*)(LiveOpsMultitaskSingleViewEn*))(Il2CppBase() + 0x350EAC8))(this);
	}
	template <typename T = void> T UpdateTaskList() {
		return ((T (*)(LiveOpsMultitaskSingleViewEn*))(Il2CppBase() + 0x350EF98))(this);
	}
	template <typename T = void> T UpdateView(uintptr_t activity) {
		return ((T (*)(LiveOpsMultitaskSingleViewEn*, uintptr_t))(Il2CppBase() + 0x350F344))(this, activity);
	}
	template <typename T = int32_t> T TaskSort(uintptr_t task1, uintptr_t task2) {
		return ((T (*)(LiveOpsMultitaskSingleViewEn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x351057C))(this, task1, task2);
	}
	template <typename T = void> T OnRefreshItem(uintptr_t prefab, int32_t idx) {
		return ((T (*)(LiveOpsMultitaskSingleViewEn*, uintptr_t, int32_t))(Il2CppBase() + 0x3510774))(this, prefab, idx);
	}
	template <typename T = int32_t> static T UpdateViewm__0(uintptr_t x, uintptr_t y) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3510AF4))(0, x, y);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView(uintptr_t P0) {
		return ((T (*)(LiveOpsMultitaskSingleViewEn*, uintptr_t))(Il2CppBase() + 0x3510B40))(this, P0);
	}

};

}
