#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RankGame {

class RankUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RankGame", "RankUtil"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRankDataParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentAcountType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurRankId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGradeString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRankGradeValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRankName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSmallGradeSpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBigSpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPveRewardItemInfoByZone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPveRewardItemInfoByWorld() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRankidByConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRankInterval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ZbRankIsOnList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T GetRankDataParam(uintptr_t data) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x380DC14))(0, data);
	}
	template <typename T = int32_t> static T GetCurrentAcountType() {
		return ((T (*)(void *))(Il2CppBase() + 0x38181D8))(0);
	}
	template <typename T = int32_t> static T GetCurRankId() {
		return ((T (*)(void *))(Il2CppBase() + 0x37FEEB4))(0);
	}
	template <typename T = Il2CppString*> static T GetGradeString(uintptr_t data) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x380D148))(0, data);
	}
	template <typename T = uint32_t> static T GetRankGradeValue(uintptr_t data) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3818388))(0, data);
	}
	template <typename T = Il2CppString*> static T GetRankName(uintptr_t data) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x380E428))(0, data);
	}
	template <typename T = Il2CppString*> static T GetSmallGradeSpriteName(uintptr_t data) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x380D228))(0, data);
	}
	template <typename T = Il2CppString*> static T GetBigSpriteName(uintptr_t data) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x380E668))(0, data);
	}
	template <typename T = void> static T GetPveRewardItemInfoByZone(uintptr_t rank_id) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x38184C0))(0, rank_id);
	}
	template <typename T = void> static T GetPveRewardItemInfoByWorld(uintptr_t rank_id) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x38185A4))(0, rank_id);
	}
	template <typename T = Il2CppList<int32_t>*> static T GetRankidByConfig(uintptr_t rankid) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3818688))(0, rankid);
	}
	template <typename T = int32_t> static T GetRankInterval(int32_t rank, Il2CppList<int32_t>* list) {
		return ((T (*)(void *, int32_t, Il2CppList<int32_t>*))(Il2CppBase() + 0x3818788))(0, rank, list);
	}
	template <typename T = bool> static T ZbRankIsOnList(uintptr_t playerinfo) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x381894C))(0, playerinfo);
	}

};

}
