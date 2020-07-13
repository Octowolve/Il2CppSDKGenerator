#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildMemberItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildMemberItemView"));
	}

	template <typename T = uintptr_t> T& RootWidget() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& IconClickBox() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& IconSprite() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& IconBtn() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& NameLabel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& LevelInfoLabel() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& WeeklyActiveLabel() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& SeasonalActiveLabel() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& StateLabel() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& RankSprite() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& MemberInfo() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& MySprite() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& NormalSprite() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& QuitBtn() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& DeleteBtn() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& MoreBtn() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& ImpeachBtn() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& ImpeachLabel() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& ImpeachGameObj() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& m_DataStore() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& m_MemberDataStore() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uint64_t> T& m_PlayerID() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& m_Index() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& PosAdpt1() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& PosAdpt2() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& PosAdpt3() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& PosAdpt4() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& PosAdpt5() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> static T& NamePercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& weekPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = float> static T& seasonPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = float> static T& situationPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = float> static T& positionPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerStateLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMemberInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLadderIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickQuit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQuitGuildMessageBoxCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnIconClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickDelete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnKickoffCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickImpeachBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnImpeachCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickMoreBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ItemAdapt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GuildMemberItemView*))(Il2CppBase() + 0x3BD216C))(this);
	}
	template <typename T = void> T ConfigureInfo(uint64_t PlayerID, int32_t index) {
		return ((T (*)(GuildMemberItemView*, uint64_t, int32_t))(Il2CppBase() + 0x3BD24C0))(this, PlayerID, index);
	}
	template <typename T = void> T SetPlayerStateLabel(uintptr_t info) {
		return ((T (*)(GuildMemberItemView*, uintptr_t))(Il2CppBase() + 0x3BD25BC))(this, info);
	}
	template <typename T = void> T UpdateMemberInfo(uintptr_t info, uintptr_t mCutPanel) {
		return ((T (*)(GuildMemberItemView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3BD2CC4))(this, info, mCutPanel);
	}
	template <typename T = void> T SetLadderIcon(int32_t ladder, bool isBR) {
		return ((T (*)(GuildMemberItemView*, int32_t, bool))(Il2CppBase() + 0x3BD3928))(this, ladder, isBR);
	}
	template <typename T = void> T OnClickQuit() {
		return ((T (*)(GuildMemberItemView*))(Il2CppBase() + 0x3BD3C18))(this);
	}
	template <typename T = void> T OnQuitGuildMessageBoxCallback(uintptr_t result, int32_t userContext) {
		return ((T (*)(GuildMemberItemView*, uintptr_t, int32_t))(Il2CppBase() + 0x3BD3FB0))(this, result, userContext);
	}
	template <typename T = void> T OnIconClick() {
		return ((T (*)(GuildMemberItemView*))(Il2CppBase() + 0x3BD40E4))(this);
	}
	template <typename T = void> T OnClickDelete() {
		return ((T (*)(GuildMemberItemView*))(Il2CppBase() + 0x3BD42A4))(this);
	}
	template <typename T = void> T OnKickoffCallback(uintptr_t result, int32_t userContext) {
		return ((T (*)(GuildMemberItemView*, uintptr_t, int32_t))(Il2CppBase() + 0x3BD4528))(this, result, userContext);
	}
	template <typename T = void> T OnClickImpeachBtn() {
		return ((T (*)(GuildMemberItemView*))(Il2CppBase() + 0x3BD4638))(this);
	}
	template <typename T = void> T OnImpeachCallback(uintptr_t result, int32_t userContext) {
		return ((T (*)(GuildMemberItemView*, uintptr_t, int32_t))(Il2CppBase() + 0x3BD48C8))(this, result, userContext);
	}
	template <typename T = void> T OnClickMoreBtn() {
		return ((T (*)(GuildMemberItemView*))(Il2CppBase() + 0x3BD49DC))(this);
	}
	template <typename T = void> T ItemAdapt(int32_t width) {
		return ((T (*)(GuildMemberItemView*, int32_t))(Il2CppBase() + 0x3BD4C40))(this, width);
	}

};

}
