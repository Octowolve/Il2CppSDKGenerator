#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameDataStore.Career {

class CareerDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameDataStore.Career", "CareerDataStore"));
	}

	template <typename T = uintptr_t> T& m_GameStatusInfo() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> static T& DataStoreSubscriberTag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_EmblemDataList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_gameTypeFilter() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& CurrentSelectedEmblemId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<int32_t>*> T& SelectMedalList() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& isChange() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_GameStatData() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& data() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_MedalShowInfo() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEmblemDataList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEmblemDataList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOtherInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetModeCareerData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetEmblemDataList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEmnnlemListSort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortCareerEmble() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DescendingOrderSort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AscendingOrderStor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRemoveMedalShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = uintptr_t> T get_GameStatData() {
		return ((T (*)(CareerDataStore*))(Il2CppBase() + 0x4A04FDC))(this);
	}
	template <typename T = void> T set_GameStatData(uintptr_t value) {
		return ((T (*)(CareerDataStore*, uintptr_t))(Il2CppBase() + 0x4A0507C))(this, value);
	}
	template <typename T = void> T SetEmblemDataList(int32_t ID, int32_t index) {
		return ((T (*)(CareerDataStore*, int32_t, int32_t))(Il2CppBase() + 0x4A05084))(this, ID, index);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetEmblemDataList() {
		return ((T (*)(CareerDataStore*))(Il2CppBase() + 0x4A054D8))(this);
	}
	template <typename T = void> T GetOtherInfo(uintptr_t res) {
		return ((T (*)(CareerDataStore*, uintptr_t))(Il2CppBase() + 0x4A055A8))(this, res);
	}
	template <typename T = void> T InitData() {
		return ((T (*)(CareerDataStore*))(Il2CppBase() + 0x4A057DC))(this);
	}
	template <typename T = uintptr_t> T GetModeCareerData(uintptr_t mode) {
		return ((T (*)(CareerDataStore*, uintptr_t))(Il2CppBase() + 0x4A069C8))(this, mode);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetEmblemDataList_1(uintptr_t type) {
		return ((T (*)(CareerDataStore*, uintptr_t))(Il2CppBase() + 0x4A06C2C))(this, type);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetEmnnlemListSort(Il2CppList<uintptr_t>* dataList) {
		return ((T (*)(CareerDataStore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4A0679C))(this, dataList);
	}
	template <typename T = Il2CppList<uintptr_t>*> T SortCareerEmble(Il2CppList<uintptr_t>* dataList, bool isUnlock, uintptr_t type) {
		return ((T (*)(CareerDataStore*, Il2CppList<uintptr_t>*, bool, uintptr_t))(Il2CppBase() + 0x4A07338))(this, dataList, isUnlock, type);
	}
	template <typename T = int32_t> T DescendingOrderSort(uintptr_t a, uintptr_t b) {
		return ((T (*)(CareerDataStore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4A075E0))(this, a, b);
	}
	template <typename T = int32_t> T AscendingOrderStor(uintptr_t a, uintptr_t b) {
		return ((T (*)(CareerDataStore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4A076F8))(this, a, b);
	}
	template <typename T = uintptr_t> T get_MedalInfo() {
		return ((T (*)(CareerDataStore*))(Il2CppBase() + 0x4A07810))(this);
	}
	template <typename T = void> T set_MedalInfo(uintptr_t value) {
		return ((T (*)(CareerDataStore*, uintptr_t))(Il2CppBase() + 0x4A07818))(this, value);
	}
	template <typename T = void> T OnRemoveMedalShow() {
		return ((T (*)(CareerDataStore*))(Il2CppBase() + 0x4A07820))(this);
	}
	template <typename T = void> T ReLogin() {
		return ((T (*)(CareerDataStore*))(Il2CppBase() + 0x4A07F00))(this);
	}
	template <typename T = bool> static T GetEmblemDataListm__0(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4A08074))(0, it);
	}
	template <typename T = bool> static T GetEmblemDataListm__1(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4A080A0))(0, it);
	}
	template <typename T = bool> static T GetEmblemDataListm__2(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4A080D0))(0, it);
	}
	template <typename T = bool> T OnRemoveMedalShowm__3(uintptr_t it) {
		return ((T (*)(CareerDataStore*, uintptr_t))(Il2CppBase() + 0x4A08100))(this, it);
	}
	template <typename T = bool> T OnRemoveMedalShowm__4(uintptr_t it) {
		return ((T (*)(CareerDataStore*, uintptr_t))(Il2CppBase() + 0x4A08148))(this, it);
	}
	template <typename T = bool> T OnRemoveMedalShowm__5(uintptr_t it) {
		return ((T (*)(CareerDataStore*, uintptr_t))(Il2CppBase() + 0x4A08184))(this, it);
	}
	template <typename T = void> T xLuaBaseProxy_ReLogin() {
		return ((T (*)(CareerDataStore*))(Il2CppBase() + 0x4A081D8))(this);
	}

};

}
