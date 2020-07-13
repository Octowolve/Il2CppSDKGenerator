#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FriendRecall {

class FriendRecallDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FriendRecall", "FriendRecallDataStore"));
	}

	template <typename T = uint32_t> T& m_FriendRecallBeginTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& m_FriendRecallEndTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_FriendRecallActivePoint() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_RewardsGotNum() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& m_MinRecallLevel() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& m_MinLogouTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_FriendRecallActiveAwardList() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_RecommandRecallList() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_RecalledFriendsList() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& m_bSatisfyLevelLimit() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeDataStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestCallBackInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetCallBackInfoResp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestCallBackReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetCallBackRewardResp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestRecallFriend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecallFriendResp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFriendRecallOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFriendRecallTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConstructPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanGetReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleRecommandData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = uint32_t> T get_FriendRecallBeginTime() {
		return ((T (*)(FriendRecallDataStore*))(Il2CppBase() + 0x32CB7C4))(this);
	}
	template <typename T = uint32_t> T get_FriendRecallEndTime() {
		return ((T (*)(FriendRecallDataStore*))(Il2CppBase() + 0x32CB7CC))(this);
	}
	template <typename T = int32_t> T get_FriendRecallActivePoint() {
		return ((T (*)(FriendRecallDataStore*))(Il2CppBase() + 0x32CB7D4))(this);
	}
	template <typename T = int32_t> T get_RewardsGotNum() {
		return ((T (*)(FriendRecallDataStore*))(Il2CppBase() + 0x32CB7DC))(this);
	}
	template <typename T = uint32_t> T get_MinRecallLevel() {
		return ((T (*)(FriendRecallDataStore*))(Il2CppBase() + 0x32CB7E4))(this);
	}
	template <typename T = uint32_t> T get_MinLogoutTime() {
		return ((T (*)(FriendRecallDataStore*))(Il2CppBase() + 0x32CB7EC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_FriendRecallActiveAwardList() {
		return ((T (*)(FriendRecallDataStore*))(Il2CppBase() + 0x32CB7F4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_RecommandRecallList() {
		return ((T (*)(FriendRecallDataStore*))(Il2CppBase() + 0x32CB7FC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_RecalledFriendsList() {
		return ((T (*)(FriendRecallDataStore*))(Il2CppBase() + 0x32CB804))(this);
	}
	template <typename T = bool> T get_SatisfyLevelLimit() {
		return ((T (*)(FriendRecallDataStore*))(Il2CppBase() + 0x32CB80C))(this);
	}
	template <typename T = void> T ReLogin() {
		return ((T (*)(FriendRecallDataStore*))(Il2CppBase() + 0x32CB814))(this);
	}
	template <typename T = void> T InitializeDataStore() {
		return ((T (*)(FriendRecallDataStore*))(Il2CppBase() + 0x32CB8AC))(this);
	}
	template <typename T = void> T ResetData() {
		return ((T (*)(FriendRecallDataStore*))(Il2CppBase() + 0x32CB95C))(this);
	}
	template <typename T = void> T RequestCallBackInfo() {
		return ((T (*)(FriendRecallDataStore*))(Il2CppBase() + 0x32CBAA8))(this);
	}
	template <typename T = void> T OnGetCallBackInfoResp(uintptr_t response) {
		return ((T (*)(FriendRecallDataStore*, uintptr_t))(Il2CppBase() + 0x32CBD0C))(this, response);
	}
	template <typename T = void> T RequestCallBackReward() {
		return ((T (*)(FriendRecallDataStore*))(Il2CppBase() + 0x32CCC08))(this);
	}
	template <typename T = void> T OnGetCallBackRewardResp(uintptr_t response) {
		return ((T (*)(FriendRecallDataStore*, uintptr_t))(Il2CppBase() + 0x32CCD18))(this, response);
	}
	template <typename T = void> T RequestRecallFriend(uint64_t PlayerID) {
		return ((T (*)(FriendRecallDataStore*, uint64_t))(Il2CppBase() + 0x32CD2FC))(this, PlayerID);
	}
	template <typename T = void> T OnRecallFriendResp(uintptr_t response) {
		return ((T (*)(FriendRecallDataStore*, uintptr_t))(Il2CppBase() + 0x32CD45C))(this, response);
	}
	template <typename T = bool> T IsFriendRecallOpen() {
		return ((T (*)(FriendRecallDataStore*))(Il2CppBase() + 0x32CBBB8))(this);
	}
	template <typename T = void> T SetFriendRecallTime(uint32_t start_time, uint32_t end_time) {
		return ((T (*)(FriendRecallDataStore*, uint32_t, uint32_t))(Il2CppBase() + 0x32CD5C8))(this, start_time, end_time);
	}
	template <typename T = uintptr_t> T ConstructPlayerInfo(uintptr_t CallBackPlayer) {
		return ((T (*)(FriendRecallDataStore*, uintptr_t))(Il2CppBase() + 0x32CC964))(this, CallBackPlayer);
	}
	template <typename T = bool> T CanGetReward() {
		return ((T (*)(FriendRecallDataStore*))(Il2CppBase() + 0x32AA600))(this);
	}
	template <typename T = bool> T HandleRecommandData(Il2CppList<uintptr_t>* RecommandPlayers) {
		return ((T (*)(FriendRecallDataStore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x32CC6D0))(this, RecommandPlayers);
	}
	template <typename T = int32_t> static T HandleRecommandDatam__0(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x32CD730))(0, a, b);
	}
	template <typename T = void> T xLuaBaseProxy_ReLogin() {
		return ((T (*)(FriendRecallDataStore*))(Il2CppBase() + 0x32CD7A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitializeDataStore() {
		return ((T (*)(FriendRecallDataStore*))(Il2CppBase() + 0x32CD7AC))(this);
	}

};

}
