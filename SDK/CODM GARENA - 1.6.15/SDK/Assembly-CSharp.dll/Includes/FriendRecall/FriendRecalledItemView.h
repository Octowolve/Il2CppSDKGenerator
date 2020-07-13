#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FriendRecall {

class FriendRecalledItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FriendRecall", "FriendRecalledItemView"));
	}

	template <typename T = uintptr_t> T& AvatarSprite() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& PlayerName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& PlayerLevel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& LadderIcon() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& BRLadderIcon() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& ChatBtn() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& PlayerStatusOnline() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& PlayerStatusOffline() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& PlayerStatusInGame() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_Player() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_DataStore() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& OnChatBtnClickDelegate() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChatBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLadderIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetLadderIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFriendState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetStatusLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(FriendRecalledItemView*))(Il2CppBase() + 0x32CD858))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(FriendRecalledItemView*))(Il2CppBase() + 0x32CDA24))(this);
	}
	template <typename T = void> T OnChatBtnClick() {
		return ((T (*)(FriendRecalledItemView*))(Il2CppBase() + 0x32CDBB8))(this);
	}
	template <typename T = void> T SetPlayerInfo(uintptr_t Player, uintptr_t OnChatBtnClickCallback) {
		return ((T (*)(FriendRecalledItemView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x32CDD78))(this, Player, OnChatBtnClickCallback);
	}
	template <typename T = void> T SetLadderIcon() {
		return ((T (*)(FriendRecalledItemView*))(Il2CppBase() + 0x32CDFD0))(this);
	}
	template <typename T = void> T SetLadderIcon_1(int32_t LadderLevel, uintptr_t Icon, bool isBR) {
		return ((T (*)(FriendRecalledItemView*, int32_t, uintptr_t, bool))(Il2CppBase() + 0x32CE974))(this, LadderLevel, Icon, isBR);
	}
	template <typename T = void> T SetFriendState(uintptr_t State, uint64_t LogoutTime) {
		return ((T (*)(FriendRecalledItemView*, uintptr_t, uint64_t))(Il2CppBase() + 0x32CEC2C))(this, State, LogoutTime);
	}
	template <typename T = void> T SetStatusLabel(bool bOnLine, bool bInGame, bool bOffLine) {
		return ((T (*)(FriendRecalledItemView*, bool, bool, bool))(Il2CppBase() + 0x32CEED8))(this, bOnLine, bInGame, bOffLine);
	}
	template <typename T = void> T SetPlayerState(uintptr_t StateLabel, uintptr_t state) {
		return ((T (*)(FriendRecalledItemView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x32CE180))(this, StateLabel, state);
	}

};

}
