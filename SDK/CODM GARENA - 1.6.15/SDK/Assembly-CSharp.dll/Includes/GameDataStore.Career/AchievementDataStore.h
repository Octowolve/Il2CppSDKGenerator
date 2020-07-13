#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameDataStore.Career {

class AchievementDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameDataStore.Career", "AchievementDataStore"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_AchievementList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_AddedAchievementList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> static T& DataStoreSubscriberTag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& CurrentSelectdAchievementId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& data() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_AchienementAttrInfo() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_SetAchievementShow() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTestData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAchievementList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAddedHigherAchievemnts() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNewAchievement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PopNextHigherAchievement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAchievementSort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortAchievementList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DescendingOrderSort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AscendingOrderStor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRemoveAchievementShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = void> T Init(uintptr_t res) {
		return ((T (*)(AchievementDataStore*, uintptr_t))(Il2CppBase() + 0x4A025F0))(this, res);
	}
	template <typename T = void> T SetTestData() {
		return ((T (*)(AchievementDataStore*))(Il2CppBase() + 0x4A03078))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetAchievementList() {
		return ((T (*)(AchievementDataStore*))(Il2CppBase() + 0x4A03480))(this);
	}
	template <typename T = uintptr_t> T get_AchienementInfo() {
		return ((T (*)(AchievementDataStore*))(Il2CppBase() + 0x4A03550))(this);
	}
	template <typename T = void> T set_AchienementInfo(uintptr_t value) {
		return ((T (*)(AchievementDataStore*, uintptr_t))(Il2CppBase() + 0x4A03558))(this, value);
	}
	template <typename T = uintptr_t> T get_SetAchievementShow() {
		return ((T (*)(AchievementDataStore*))(Il2CppBase() + 0x4A03560))(this);
	}
	template <typename T = void> T set_SetAchievementShow(uintptr_t value) {
		return ((T (*)(AchievementDataStore*, uintptr_t))(Il2CppBase() + 0x4A03568))(this, value);
	}
	template <typename T = void> T SetAddedHigherAchievemnts(uintptr_t res) {
		return ((T (*)(AchievementDataStore*, uintptr_t))(Il2CppBase() + 0x4A03570))(this, res);
	}
	template <typename T = bool> T IsNewAchievement(bool popUp) {
		return ((T (*)(AchievementDataStore*, bool))(Il2CppBase() + 0x4A03C20))(this, popUp);
	}
	template <typename T = uintptr_t> T PopNextHigherAchievement() {
		return ((T (*)(AchievementDataStore*))(Il2CppBase() + 0x4A03E28))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetAchievementSort(Il2CppList<uintptr_t>* dataList) {
		return ((T (*)(AchievementDataStore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4A02D74))(this, dataList);
	}
	template <typename T = Il2CppList<uintptr_t>*> T SortAchievementList(Il2CppList<uintptr_t>* dataList, int32_t lv, uintptr_t type) {
		return ((T (*)(AchievementDataStore*, Il2CppList<uintptr_t>*, int32_t, uintptr_t))(Il2CppBase() + 0x4A03FA0))(this, dataList, lv, type);
	}
	template <typename T = int32_t> T DescendingOrderSort(uintptr_t a, uintptr_t b) {
		return ((T (*)(AchievementDataStore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4A04248))(this, a, b);
	}
	template <typename T = int32_t> T AscendingOrderStor(uintptr_t a, uintptr_t b) {
		return ((T (*)(AchievementDataStore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4A04360))(this, a, b);
	}
	template <typename T = void> T OnRemoveAchievementShow() {
		return ((T (*)(AchievementDataStore*))(Il2CppBase() + 0x4A04478))(this);
	}
	template <typename T = bool> T OnRemoveAchievementShowm__0(uintptr_t it) {
		return ((T (*)(AchievementDataStore*, uintptr_t))(Il2CppBase() + 0x4A04A20))(this, it);
	}
	template <typename T = bool> T OnRemoveAchievementShowm__1(uintptr_t it) {
		return ((T (*)(AchievementDataStore*, uintptr_t))(Il2CppBase() + 0x4A04A68))(this, it);
	}
	template <typename T = bool> T OnRemoveAchievementShowm__2(uintptr_t it) {
		return ((T (*)(AchievementDataStore*, uintptr_t))(Il2CppBase() + 0x4A04AA4))(this, it);
	}

};

}
