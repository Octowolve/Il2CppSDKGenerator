#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class SettlementPlayerItemBaseView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "SettlementPlayerItemBaseView"));
	}

	template <typename T = uintptr_t> T& ContainerInfo() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& avatarPic() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& BtnHeadIcon() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& LabelPlayerName() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& LabelPlayerLevel() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& SpriteRankIcon() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& SpriteWeaponIcon() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& SpriteFemale() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& SpriteMale() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& PlayerIndexLabel() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& SpriteGoliathIcon() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& SpriteGoliathNum() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& ContainerMVP() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& ContainerFMVP() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& ContainerNormal() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& ObjBlueScore() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& LabelBlueNormalScore() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& ObjRedScore() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& LabelRedNormalScore() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& LabelMVPScore() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& LabelBlueMvpScore() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& LabelRedMvpScore() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& LabelNormalScore() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& widgetHightlightBg() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& widgetNormalightBg() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& ScoreDetailView() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& BtnAdd() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& LabelApply() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& LabelAdded() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& LabelInblack() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& BtnLike() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& SpriteLiked() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& BtnReport() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& m_player() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uint64_t> T& m_playerId() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uint64_t> T& m_gsp_guid() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = bool> T& m_Like() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = bool> T& m_Add() {
		return *(T*)((uintptr_t)this + 0x119);
	}
	template <typename T = bool> T& m_Added() {
		return *(T*)((uintptr_t)this + 0x11A);
	}
	template <typename T = bool> T& m_InBlack() {
		return *(T*)((uintptr_t)this + 0x11B);
	}
	template <typename T = bool> T& m_Report() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = bool> T& m_LikeIsSend() {
		return *(T*)((uintptr_t)this + 0x11D);
	}
	template <typename T = bool> T& m_AddIsSend() {
		return *(T*)((uintptr_t)this + 0x11E);
	}
	template <typename T = bool> T& m_ReportIsSend() {
		return *(T*)((uintptr_t)this + 0x11F);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ShareContainers() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> static T& ColorSelfName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ColorCommonName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBaseInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBgWidgets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBtnInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnAddClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnReportClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnLikeClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayerIconClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowButtons() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowContainersWhenShare() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}

	template <typename T = uint64_t> T get_PlayerId() {
		return ((T (*)(SettlementPlayerItemBaseView*))(Il2CppBase() + 0x296E9F8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SettlementPlayerItemBaseView*))(Il2CppBase() + 0x296EA08))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SettlementPlayerItemBaseView*))(Il2CppBase() + 0x296EE64))(this);
	}
	template <typename T = void> T InitBaseInfo(uintptr_t playerInfo, uint64_t gsp_guid, uintptr_t gameMode, uintptr_t buttonMode, bool blueTeam, uintptr_t mCutPanel, int32_t index) {
		return ((T (*)(SettlementPlayerItemBaseView*, uintptr_t, uint64_t, uintptr_t, uintptr_t, bool, uintptr_t, int32_t))(Il2CppBase() + 0x2954490))(this, playerInfo, gsp_guid, gameMode, buttonMode, blueTeam, mCutPanel, index);
	}
	template <typename T = void> T SetPlayerInfo(uintptr_t playerInfo, uintptr_t gameMode) {
		return ((T (*)(SettlementPlayerItemBaseView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2954E84))(this, playerInfo, gameMode);
	}
	template <typename T = void> T SetPlayerIcon(uintptr_t picInfo, uint64_t playerID, uintptr_t mCutPanel) {
		return ((T (*)(SettlementPlayerItemBaseView*, uintptr_t, uint64_t, uintptr_t))(Il2CppBase() + 0x296F4C8))(this, picInfo, playerID, mCutPanel);
	}
	template <typename T = void> T SetWeaponIcon(uintptr_t playerInfo) {
		return ((T (*)(SettlementPlayerItemBaseView*, uintptr_t))(Il2CppBase() + 0x296F2C0))(this, playerInfo);
	}
	template <typename T = void> T SetPlayerScore(Il2CppString* score, bool isMvp, bool isFMvp, bool blueTeam) {
		return ((T (*)(SettlementPlayerItemBaseView*, Il2CppString*, bool, bool, bool))(Il2CppBase() + 0x296F65C))(this, score, isMvp, isFMvp, blueTeam);
	}
	template <typename T = void> T SetBgWidgets(bool isLocalPlayer, uintptr_t camp) {
		return ((T (*)(SettlementPlayerItemBaseView*, bool, uintptr_t))(Il2CppBase() + 0x296FEA0))(this, isLocalPlayer, camp);
	}
	template <typename T = void> T InitBtnInfo(uint64_t userId, uintptr_t buttonMode) {
		return ((T (*)(SettlementPlayerItemBaseView*, uint64_t, uintptr_t))(Il2CppBase() + 0x296F970))(this, userId, buttonMode);
	}
	template <typename T = void> T OnBtnAddClick() {
		return ((T (*)(SettlementPlayerItemBaseView*))(Il2CppBase() + 0x296FFF0))(this);
	}
	template <typename T = void> T OnBtnReportClick() {
		return ((T (*)(SettlementPlayerItemBaseView*))(Il2CppBase() + 0x2970210))(this);
	}
	template <typename T = void> T OnBtnLikeClick() {
		return ((T (*)(SettlementPlayerItemBaseView*))(Il2CppBase() + 0x2970440))(this);
	}
	template <typename T = void> T OnPlayerIconClick() {
		return ((T (*)(SettlementPlayerItemBaseView*))(Il2CppBase() + 0x297060C))(this);
	}
	template <typename T = void> T ShowButtons(uintptr_t mode) {
		return ((T (*)(SettlementPlayerItemBaseView*, uintptr_t))(Il2CppBase() + 0x2970828))(this, mode);
	}
	template <typename T = void> T ShowContainersWhenShare(bool show) {
		return ((T (*)(SettlementPlayerItemBaseView*, bool))(Il2CppBase() + 0x2970BDC))(this, show);
	}
	template <typename T = void> T OnBtnReportClickm__0() {
		return ((T (*)(SettlementPlayerItemBaseView*))(Il2CppBase() + 0x2970ED0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SettlementPlayerItemBaseView*))(Il2CppBase() + 0x2970F88))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SettlementPlayerItemBaseView*))(Il2CppBase() + 0x2970F90))(this);
	}

};

}
