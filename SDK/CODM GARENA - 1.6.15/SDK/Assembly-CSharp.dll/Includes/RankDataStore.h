#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RankDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RankDataStore"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_BrLadderSeasonList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_MpLadderSeasonList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& SECONDS_PER_DAY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& f__am$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSeasonInfoRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBrSeasonInfoValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMpSeasonInfoValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMpHistoryRecordInfoList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBrHistoryRecordInfoList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ComputeSpvpRemainingDays() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ComputeBrRemainingDays() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ComputeSpvpSeasonState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSpvpLadderSeasonInfoBySeasonIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ComputeBrSeasonState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBrLadderSeasonInfoBySeasonIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = void> T GetSeasonInfoRes(uintptr_t res) {
		return ((T (*)(RankDataStore*, uintptr_t))(Il2CppBase() + 0x37E9E24))(this, res);
	}
	template <typename T = bool> T IsBrSeasonInfoValid(uintptr_t brLadderSeasonInfo, uint64_t registerTime) {
		return ((T (*)(RankDataStore*, uintptr_t, uint64_t))(Il2CppBase() + 0x37EA588))(this, brLadderSeasonInfo, registerTime);
	}
	template <typename T = bool> T IsMpSeasonInfoValid(uintptr_t mpLadderSeasonInfo, uint64_t registerTime) {
		return ((T (*)(RankDataStore*, uintptr_t, uint64_t))(Il2CppBase() + 0x37EA6B0))(this, mpLadderSeasonInfo, registerTime);
	}
	template <typename T = void> T GetMpHistoryRecordInfoList(uintptr_t list, Il2CppList<uintptr_t>* serverList, int32_t curSeasonNo, int32_t curSeasonLadderLevel) {
		return ((T (*)(RankDataStore*, uintptr_t, Il2CppList<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x37EA7D8))(this, list, serverList, curSeasonNo, curSeasonLadderLevel);
	}
	template <typename T = void> T GetBrHistoryRecordInfoList(uintptr_t list, Il2CppList<uintptr_t>* serverList, int32_t curSeasonNo, int32_t curSeasonLadderLevel) {
		return ((T (*)(RankDataStore*, uintptr_t, Il2CppList<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x37EB504))(this, list, serverList, curSeasonNo, curSeasonLadderLevel);
	}
	template <typename T = int32_t> T ComputeSpvpRemainingDays(int32_t serverTime, int32_t seasonNextIndex) {
		return ((T (*)(RankDataStore*, int32_t, int32_t))(Il2CppBase() + 0x37EC214))(this, serverTime, seasonNextIndex);
	}
	template <typename T = int32_t> T ComputeBrRemainingDays(int32_t serverTime, int32_t seasonNextIndex) {
		return ((T (*)(RankDataStore*, int32_t, int32_t))(Il2CppBase() + 0x37EC434))(this, serverTime, seasonNextIndex);
	}
	template <typename T = uintptr_t> T ComputeSpvpSeasonState(uint32_t seasonIndexByServer, int32_t serverTime, uintptr_t spvpSeasonNoIndexByClient, uintptr_t lastSeasonVideoNoIndex, uintptr_t currentSeasonVideoNoIndex) {
		return ((T (*)(RankDataStore*, uint32_t, int32_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x37EC654))(this, seasonIndexByServer, serverTime, spvpSeasonNoIndexByClient, lastSeasonVideoNoIndex, currentSeasonVideoNoIndex);
	}
	template <typename T = uintptr_t> T GetSpvpLadderSeasonInfoBySeasonIndex(uint32_t seasonNoIndex) {
		return ((T (*)(RankDataStore*, uint32_t))(Il2CppBase() + 0x37ECB58))(this, seasonNoIndex);
	}
	template <typename T = uintptr_t> T ComputeBrSeasonState(uint32_t seasonIndexByServer, int32_t serverTime, uintptr_t brSeasonNoIndexByClient, uintptr_t lastSeasonVideoNoIndex, uintptr_t currentSeasonVideoNoIndex) {
		return ((T (*)(RankDataStore*, uint32_t, int32_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x37ECCDC))(this, seasonIndexByServer, serverTime, brSeasonNoIndexByClient, lastSeasonVideoNoIndex, currentSeasonVideoNoIndex);
	}
	template <typename T = uintptr_t> T GetBrLadderSeasonInfoBySeasonIndex(uint32_t seasonNoIndex) {
		return ((T (*)(RankDataStore*, uint32_t))(Il2CppBase() + 0x37ED1E0))(this, seasonNoIndex);
	}
	template <typename T = int32_t> static T GetSeasonInfoResm__0(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x37ED364))(0, a, b);
	}
	template <typename T = int32_t> static T GetSeasonInfoResm__1(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x37ED3BC))(0, a, b);
	}
	template <typename T = int32_t> static T GetMpHistoryRecordInfoListm__2(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x37ED414))(0, a, b);
	}
	template <typename T = int32_t> static T GetBrHistoryRecordInfoListm__3(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x37ED44C))(0, a, b);
	}

};

}
