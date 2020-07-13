#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Social {

class FriendChatDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Social", "FriendChatDataStore"));
	}

	template <typename T = int32_t> static T& m_MaxChatContentRecords() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint64_t> T& m_LastChatFriendId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<uint64_t, Il2CppList<uintptr_t>*>*> T& m_FriendChatDict() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<uint64_t, bool>*> T& m_FriendChatHasNewMsgDic() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerChatListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerHasNewMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPlayerIdHasNewMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChatMessageInfoToChatData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AppendFriendChatMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AppendOneFriendChatData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAllChatContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = int32_t> T get_MaxChatContentRecords() {
		return ((T (*)(FriendChatDataStore*))(Il2CppBase() + 0x3CA03D4))(this);
	}
	template <typename T = uint64_t> T get_LastChatFriendId() {
		return ((T (*)(FriendChatDataStore*))(Il2CppBase() + 0x3CA03DC))(this);
	}
	template <typename T = void> T set_LastChatFriendId(uint64_t value) {
		return ((T (*)(FriendChatDataStore*, uint64_t))(Il2CppBase() + 0x3CA03E4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetPlayerChatListData(uint64_t playerid) {
		return ((T (*)(FriendChatDataStore*, uint64_t))(Il2CppBase() + 0x3CA03F4))(this, playerid);
	}
	template <typename T = void> T SetPlayerHasNewMsg(uint64_t playerId, bool bHasNewMsg) {
		return ((T (*)(FriendChatDataStore*, uint64_t, bool))(Il2CppBase() + 0x3CA05C0))(this, playerId, bHasNewMsg);
	}
	template <typename T = bool> T IsPlayerIdHasNewMsg(uint64_t playerid) {
		return ((T (*)(FriendChatDataStore*, uint64_t))(Il2CppBase() + 0x3CA0748))(this, playerid);
	}
	template <typename T = uintptr_t> T ChatMessageInfoToChatData(uintptr_t msgInfo) {
		return ((T (*)(FriendChatDataStore*, uintptr_t))(Il2CppBase() + 0x3CA0860))(this, msgInfo);
	}
	template <typename T = void> T AppendFriendChatMsg(uintptr_t msgInfo) {
		return ((T (*)(FriendChatDataStore*, uintptr_t))(Il2CppBase() + 0x3CA0A00))(this, msgInfo);
	}
	template <typename T = void> T AppendOneFriendChatData(uint64_t playerid, uintptr_t onerecord) {
		return ((T (*)(FriendChatDataStore*, uint64_t, uintptr_t))(Il2CppBase() + 0x3CA0B04))(this, playerid, onerecord);
	}
	template <typename T = void> T ClearAllChatContent() {
		return ((T (*)(FriendChatDataStore*))(Il2CppBase() + 0x3CA0DFC))(this);
	}

};

}
