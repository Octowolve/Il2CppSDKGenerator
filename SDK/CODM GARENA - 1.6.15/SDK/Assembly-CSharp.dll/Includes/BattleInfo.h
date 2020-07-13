#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BattleInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattleInfo"));
	}

	template <typename T = uint64_t> T& SelfID() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uint64_t> T& OpponentID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& OpponentName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& SelfName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& OpponentPicInfo() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& SelfPicInfo() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint64_t> T& CreatorID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& BattleID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& MapID() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& BattleResultList() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<int32_t>*> T& BattleTimeList() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppList<int32_t>*> T& SelfTrophyChangeList() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<int32_t>*> T& OpponentTrophyChangeList() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<int32_t>*> T& SelfScoreChangeList() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<int32_t>*> T& OpponentScoreChangeList() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& InfoType() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& EndReason() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& Revenge() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& LastRoundTime() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& ExpireTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& CurrentRoundNum() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& SelfScore() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& OpponentScore() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& SelfTrophy() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& OpponentTrophy() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& SelfTrophyChange() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& OpponentTrophyChange() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& SelfRank() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& OpponentRank() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& SelfSquadInfo() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& OpponentSquadInfo() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& RoundStatList() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLastRoundHappenedInLogout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRivalTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildLastRoundTimeString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildLeftTimeString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildRoundTimeString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoundResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoundStatis() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = bool> T IsLastRoundHappenedInLogout(uint64_t lastLogoutTime) {
		return ((T (*)(BattleInfo*, uint64_t))(Il2CppBase() + 0x3933D5C))(this, lastLogoutTime);
	}
	template <typename T = int32_t> T GetRivalTime(int32_t time) {
		return ((T (*)(BattleInfo*, int32_t))(Il2CppBase() + 0x3933D78))(this, time);
	}
	template <typename T = Il2CppString*> T BuildLastRoundTimeString(uintptr_t stringBuilder) {
		return ((T (*)(BattleInfo*, uintptr_t))(Il2CppBase() + 0x3933FC0))(this, stringBuilder);
	}
	template <typename T = Il2CppString*> T BuildLeftTimeString(uintptr_t stringBuilder) {
		return ((T (*)(BattleInfo*, uintptr_t))(Il2CppBase() + 0x3934204))(this, stringBuilder);
	}
	template <typename T = Il2CppString*> T BuildRoundTimeString(uintptr_t stringBuilder, int32_t index) {
		return ((T (*)(BattleInfo*, uintptr_t, int32_t))(Il2CppBase() + 0x39344B0))(this, stringBuilder, index);
	}
	template <typename T = bool> T GetRoundResult(int32_t roundIndex, uintptr_t result, uintptr_t isSelfTurn) {
		return ((T (*)(BattleInfo*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3934650))(this, roundIndex, result, isSelfTurn);
	}
	template <typename T = void> T GetRoundStatis(int32_t roundIndex, uintptr_t selfStatList, uintptr_t oppoStatList) {
		return ((T (*)(BattleInfo*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x39349A8))(this, roundIndex, selfStatList, oppoStatList);
	}

};

}
