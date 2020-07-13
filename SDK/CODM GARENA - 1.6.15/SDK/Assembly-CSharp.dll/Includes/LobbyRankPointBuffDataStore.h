#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LobbyRankPointBuffDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LobbyRankPointBuffDataStore"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& mRankedMatchAddInfoList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mRankedFeaturedModeList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& mResetTimeStamp() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mAllRankedMatchInfoList() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mRankedMatchNotDorpInfoList() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mRankedMatchTeamNotDorpInfoList() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_MpRankLevel() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& m_BrRankLevel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetActvRankedMatchCountInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRankFeaturedMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetResetTimeStamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllRankAddInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIsAddIconValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIsNotDropValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDropValidList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetActvInfoByTimeId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIsActvType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetActvInfoListByTimeType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetActvDesByType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRankChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_RankedMatchAddInfoList() {
		return ((T (*)(LobbyRankPointBuffDataStore*))(Il2CppBase() + 0x4343130))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_RankFeaturedModeList() {
		return ((T (*)(LobbyRankPointBuffDataStore*))(Il2CppBase() + 0x4343138))(this);
	}
	template <typename T = int32_t> T get_ResetTimeStamp() {
		return ((T (*)(LobbyRankPointBuffDataStore*))(Il2CppBase() + 0x4343140))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_AllRankedMatchInfoList() {
		return ((T (*)(LobbyRankPointBuffDataStore*))(Il2CppBase() + 0x4343148))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_RankedMatchNotDorpInfoList() {
		return ((T (*)(LobbyRankPointBuffDataStore*))(Il2CppBase() + 0x4343150))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_RankedMatchTeamNotDorpInfoList() {
		return ((T (*)(LobbyRankPointBuffDataStore*))(Il2CppBase() + 0x4343158))(this);
	}
	template <typename T = int32_t> T get_MpRankLevel() {
		return ((T (*)(LobbyRankPointBuffDataStore*))(Il2CppBase() + 0x4343160))(this);
	}
	template <typename T = int32_t> T get_BrRankLavel() {
		return ((T (*)(LobbyRankPointBuffDataStore*))(Il2CppBase() + 0x4343168))(this);
	}
	template <typename T = void> T ReLogin() {
		return ((T (*)(LobbyRankPointBuffDataStore*))(Il2CppBase() + 0x4343170))(this);
	}
	template <typename T = void> T OnGetActvRankedMatchCountInfo(Il2CppList<uintptr_t>* Info) {
		return ((T (*)(LobbyRankPointBuffDataStore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x43426EC))(this, Info);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetRankFeaturedMode() {
		return ((T (*)(LobbyRankPointBuffDataStore*))(Il2CppBase() + 0x43435BC))(this);
	}
	template <typename T = void> T SetResetTimeStamp() {
		return ((T (*)(LobbyRankPointBuffDataStore*))(Il2CppBase() + 0x43432F4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetAllRankAddInfo() {
		return ((T (*)(LobbyRankPointBuffDataStore*))(Il2CppBase() + 0x4343974))(this);
	}
	template <typename T = bool> T GetIsAddIconValid() {
		return ((T (*)(LobbyRankPointBuffDataStore*))(Il2CppBase() + 0x4343B60))(this);
	}
	template <typename T = bool> T GetIsNotDropValid(double serverTime, bool bAdd) {
		return ((T (*)(LobbyRankPointBuffDataStore*, double, bool))(Il2CppBase() + 0x4343C84))(this, serverTime, bAdd);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetDropValidList(double serverTime) {
		return ((T (*)(LobbyRankPointBuffDataStore*, double))(Il2CppBase() + 0x4341770))(this, serverTime);
	}
	template <typename T = uintptr_t> T GetActvInfoByTimeId(double serverTime, int32_t actvId, int32_t type) {
		return ((T (*)(LobbyRankPointBuffDataStore*, double, int32_t, int32_t))(Il2CppBase() + 0x4344000))(this, serverTime, actvId, type);
	}
	template <typename T = uintptr_t> T GetIsActvType(double serverTime) {
		return ((T (*)(LobbyRankPointBuffDataStore*, double))(Il2CppBase() + 0x43357F8))(this, serverTime);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetActvInfoListByTimeType(double serverTime, uintptr_t Type) {
		return ((T (*)(LobbyRankPointBuffDataStore*, double, uintptr_t))(Il2CppBase() + 0x4335A90))(this, serverTime, Type);
	}
	template <typename T = Il2CppString*> T GetActvDesByType(uintptr_t Type, bool isTitle) {
		return ((T (*)(LobbyRankPointBuffDataStore*, uintptr_t, bool))(Il2CppBase() + 0x4335D58))(this, Type, isTitle);
	}
	template <typename T = void> T CheckRankChange(uintptr_t RankData) {
		return ((T (*)(LobbyRankPointBuffDataStore*, uintptr_t))(Il2CppBase() + 0x4344208))(this, RankData);
	}
	template <typename T = void> T xLuaBaseProxy_ReLogin() {
		return ((T (*)(LobbyRankPointBuffDataStore*))(Il2CppBase() + 0x43443C0))(this);
	}

};

}
