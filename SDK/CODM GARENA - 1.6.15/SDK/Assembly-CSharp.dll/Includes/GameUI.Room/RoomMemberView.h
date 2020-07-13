#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomMemberView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomMemberView"));
	}

	template <typename T = uintptr_t> T& NoneRoot() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& NormalRoot() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& SelfBG() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& MemberButton() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Avatar() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Level() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& RankRoot() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& RankIcon() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& RankLabel() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& HostMark() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& ReadyMark() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& NotReadyMark() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& StateLabel() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& ContainerVoice() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& VoiceSpeakingObj() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& VoiceSilentObj() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& SelfVoiceObj() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& VoiceBtnLabel() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& MenuRoot() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& MenuGrid() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& MenuBg() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& ColliderBg() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& BtnAddFriend() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& BtnPersonalInfo() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& BtnBlockVoice() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& BtnKickOut() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& BtnLeaveTeam() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& ColorLocalPlayer() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& ColorNormal() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& mUpdateVoiceTimer() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& m_Member() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& m_SeatIndex() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& m_Camp() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uint64_t> T& m_PlayerId() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& IsSelf() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& m_IsNone() {
		return *(T*)((uintptr_t)this + 0xB9);
	}
	template <typename T = int32_t> T& State() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& m_RoomDS() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateVoiceStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSelfVoiceStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMemberSelected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnColliderBgClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnAddFriendClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnBlockVoiceClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeftTeamBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnKickOutBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnViewInfoBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowMenu() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = void> T set_IsSelf(bool value) {
		return ((T (*)(RoomMemberView*, bool))(Il2CppBase() + 0x20F6E50))(this, value);
	}
	template <typename T = bool> T get_IsSelf() {
		return ((T (*)(RoomMemberView*))(Il2CppBase() + 0x20F6E58))(this);
	}
	template <typename T = void> T set_State(int32_t value) {
		return ((T (*)(RoomMemberView*, int32_t))(Il2CppBase() + 0x20F6E60))(this, value);
	}
	template <typename T = int32_t> T get_State() {
		return ((T (*)(RoomMemberView*))(Il2CppBase() + 0x20F6E68))(this);
	}
	template <typename T = uintptr_t> T get_RoomDS() {
		return ((T (*)(RoomMemberView*))(Il2CppBase() + 0x20F6E70))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RoomMemberView*))(Il2CppBase() + 0x20F6F20))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RoomMemberView*))(Il2CppBase() + 0x20F7530))(this);
	}
	template <typename T = void> T UpdateVoiceStatus(Il2CppString* roomName) {
		return ((T (*)(RoomMemberView*, Il2CppString*))(Il2CppBase() + 0x20F7688))(this, roomName);
	}
	template <typename T = uintptr_t> T GetSelfVoiceStatus() {
		return ((T (*)(RoomMemberView*))(Il2CppBase() + 0x20F7A1C))(this);
	}
	template <typename T = void> T BindData(int32_t seatIndex, uintptr_t member, uintptr_t camp) {
		return ((T (*)(RoomMemberView*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x20F7B98))(this, seatIndex, member, camp);
	}
	template <typename T = void> T OnMemberSelected(uintptr_t GO) {
		return ((T (*)(RoomMemberView*, uintptr_t))(Il2CppBase() + 0x20F844C))(this, GO);
	}
	template <typename T = void> T OnColliderBgClick(uintptr_t go) {
		return ((T (*)(RoomMemberView*, uintptr_t))(Il2CppBase() + 0x20F8D24))(this, go);
	}
	template <typename T = void> T OnBtnAddFriendClick(uintptr_t go) {
		return ((T (*)(RoomMemberView*, uintptr_t))(Il2CppBase() + 0x20F8DD4))(this, go);
	}
	template <typename T = void> T OnBtnBlockVoiceClick(uintptr_t go) {
		return ((T (*)(RoomMemberView*, uintptr_t))(Il2CppBase() + 0x20F90E0))(this, go);
	}
	template <typename T = void> T OnLeftTeamBtnClick(uintptr_t go) {
		return ((T (*)(RoomMemberView*, uintptr_t))(Il2CppBase() + 0x20F9650))(this, go);
	}
	template <typename T = void> T OnKickOutBtnClick(uintptr_t go) {
		return ((T (*)(RoomMemberView*, uintptr_t))(Il2CppBase() + 0x20F9798))(this, go);
	}
	template <typename T = void> T OnViewInfoBtnClick(uintptr_t go) {
		return ((T (*)(RoomMemberView*, uintptr_t))(Il2CppBase() + 0x20F98CC))(this, go);
	}
	template <typename T = void> T ShowMenu(bool bShow) {
		return ((T (*)(RoomMemberView*, bool))(Il2CppBase() + 0x20F866C))(this, bShow);
	}

};

}
