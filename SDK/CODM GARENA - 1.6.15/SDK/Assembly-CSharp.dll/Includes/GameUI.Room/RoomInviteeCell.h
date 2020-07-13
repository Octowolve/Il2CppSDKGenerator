#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomInviteeCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomInviteeCell"));
	}

	template <typename T = uintptr_t> T& frameTemplate() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& Status() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& ContainerOnLine() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& HeadIconBtn() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& HeadIconCollider() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& TypeSprite() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& BtnInviteTeam() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& RootCountDown() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& SpriteCountDown() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& LabelCountDown() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& StateSprite() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& StateLabel() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& OfflineMask() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& AddFriendBtn() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& SpectateButton() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& BtnInviteOnLine() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& OfflineQQObj() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& OfflineWeChatObj() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& SpriteInvitedOnline() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& m_State() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uint64_t> T& m_PlayerID() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& m_GlobalDS() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& m_RoomDS() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = double> T& NEXT_INVITE_WAIT_TIME() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& m_InfoSouce() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& m_Friend() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& m_GuildMember() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Il2CppDictionary<uint64_t, double>*> static T& m_LastInviteTimes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_Coroutine() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& HalfSecond() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindFriend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindRecommend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindGuildMember() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindRecentPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckTypeShouldShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFullName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateStateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCountDownTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetStateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IECountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInviteButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpectateButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnInviteOnlineClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_messageboxClickCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InviteOnline() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHeadIconClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAddFriendBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename T = void> T Init() {
		return ((T (*)(RoomInviteeCell*))(Il2CppBase() + 0x20D65DC))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(RoomInviteeCell*))(Il2CppBase() + 0x20D6AD8))(this);
	}
	template <typename T = uintptr_t> T get_GlobalDS() {
		return ((T (*)(RoomInviteeCell*))(Il2CppBase() + 0x20D6CF0))(this);
	}
	template <typename T = uintptr_t> T get_RoomDS() {
		return ((T (*)(RoomInviteeCell*))(Il2CppBase() + 0x20D6DA0))(this);
	}
	template <typename T = void> T BindFriend(uintptr_t friend, bool showType) {
		return ((T (*)(RoomInviteeCell*, uintptr_t, bool))(Il2CppBase() + 0x20D6E50))(this, friend, showType);
	}
	template <typename T = void> T BindRecommend(uintptr_t recommend, bool alreadySend) {
		return ((T (*)(RoomInviteeCell*, uintptr_t, bool))(Il2CppBase() + 0x20D800C))(this, recommend, alreadySend);
	}
	template <typename T = void> T BindGuildMember(uintptr_t info, bool showType) {
		return ((T (*)(RoomInviteeCell*, uintptr_t, bool))(Il2CppBase() + 0x20D84A8))(this, info, showType);
	}
	template <typename T = void> T BindRecentPlayer(uintptr_t friend, bool showType) {
		return ((T (*)(RoomInviteeCell*, uintptr_t, bool))(Il2CppBase() + 0x20D879C))(this, friend, showType);
	}
	template <typename T = void> T CheckTypeShouldShow(bool showType, Il2CppString* spriteName) {
		return ((T (*)(RoomInviteeCell*, bool, Il2CppString*))(Il2CppBase() + 0x20D7B98))(this, showType, spriteName);
	}
	template <typename T = Il2CppString*> T GetFullName(uintptr_t friend) {
		return ((T (*)(RoomInviteeCell*, uintptr_t))(Il2CppBase() + 0x20D7208))(this, friend);
	}
	template <typename T = void> T UpdateStateView(int32_t state) {
		return ((T (*)(RoomInviteeCell*, int32_t))(Il2CppBase() + 0x20D77AC))(this, state);
	}
	template <typename T = int32_t> T GetCountDownTime() {
		return ((T (*)(RoomInviteeCell*))(Il2CppBase() + 0x20D8A34))(this);
	}
	template <typename T = void> T ResetStateView() {
		return ((T (*)(RoomInviteeCell*))(Il2CppBase() + 0x20D88C8))(this);
	}
	template <typename T = uintptr_t> T IECountDown() {
		return ((T (*)(RoomInviteeCell*))(Il2CppBase() + 0x20D6BE0))(this);
	}
	template <typename T = void> T OnInviteButtonClick(uintptr_t go) {
		return ((T (*)(RoomInviteeCell*, uintptr_t))(Il2CppBase() + 0x20D8C74))(this, go);
	}
	template <typename T = void> T OnSpectateButtonClick(uintptr_t go) {
		return ((T (*)(RoomInviteeCell*, uintptr_t))(Il2CppBase() + 0x20D98B4))(this, go);
	}
	template <typename T = void> T OnBtnInviteOnlineClick(uintptr_t go) {
		return ((T (*)(RoomInviteeCell*, uintptr_t))(Il2CppBase() + 0x20D9B68))(this, go);
	}
	template <typename T = void> T messageboxClickCallback(uintptr_t result, int32_t userContext) {
		return ((T (*)(RoomInviteeCell*, uintptr_t, int32_t))(Il2CppBase() + 0x20D9D70))(this, result, userContext);
	}
	template <typename T = void> T InviteOnline() {
		return ((T (*)(RoomInviteeCell*))(Il2CppBase() + 0x20D9FBC))(this);
	}
	template <typename T = void> T OnHeadIconClick() {
		return ((T (*)(RoomInviteeCell*))(Il2CppBase() + 0x20DA6A0))(this);
	}
	template <typename T = void> T OnAddFriendBtnClick() {
		return ((T (*)(RoomInviteeCell*))(Il2CppBase() + 0x20DA860))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RoomInviteeCell*))(Il2CppBase() + 0x20DAF54))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(RoomInviteeCell*))(Il2CppBase() + 0x20DAF5C))(this);
	}

};

}
