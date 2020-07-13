#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace CareerInfo {

class PersonalInfoBasicWestController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "CareerInfo", "PersonalInfoBasicWestController"));
	}

	template <typename T = bool> T& bLocalPlayer() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_playerDataStore() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_personalinfoDataStore() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_OtherPlayerDataStore() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& bShowPrivacy() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& CachedClickIconType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& PVP_MPVs() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& PVP_Rounds() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& PVP_Top3() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& PVP_Kills() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& PVP_KD() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& PVP_AVG_Accuracys() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& BR_MPVs() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& BR_Winners() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& BR_Rounds() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& BR_Kills() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& BR_AVG_Damages() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& BR_AVG_Accuracys() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uint64_t> T& ZM_Damage() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& ZM_Rounds() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uint64_t> T& ZM_Kills() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& ZM_MVPs() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> T& ZM_Avg_Acc() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> T& ZM_Weak_Ness() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& AchievementIndex() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = int32_t> T& CurrentSelectIndex() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppString*> T& SeasonIcon() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppString*> T& HiglestIcon() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& isAchievementRevise() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = bool> T& isMedalRevise() {
		return *(T*)((uintptr_t)this + 0xBD);
	}
	template <typename T = uint64_t> T& PVP_LAVG() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uint64_t> T& PVP_RAVG() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int64_t> T& PVP_bekill() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uint64_t> T& BR_LAVG() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uint64_t> T& BR_RAVG() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uint64_t> T& BR_Damages() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uint64_t> T& ZM_LAVG() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uint64_t> T& ZM_RAVG() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uint64_t> T& ZM_WEAKPOINT() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = bool> T& IsAdd() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = void*> static T& f__am$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillTabShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRefreshRedPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPVPGameTypeClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRGameTypeClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZMGameTypeClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAchievementItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMedalItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPersonalInfoGameTypeChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RestPVPTotalData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RestBrTotalData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RestZMTotalData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshPVPTotalData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBRTotalData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshZMTotalData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPVPTotalModeData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBRTotalModeData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetZMTotalModeData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSetHideInfoCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPrivacyOnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPrivacyOffClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHeadClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BigHeadBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNickNameCopyBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnIdCopyBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMidasShortIdCopyBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRenameBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAchievementData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RenameRefresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AchievementReviseBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MedalReviseBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_JoinClanBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__BtnAddFriendClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAddFriendBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifySetNameResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyCallingCardInfoUpdateResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PersonalInfoBasicWestController*))(Il2CppBase() + 0x1CF572C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PersonalInfoBasicWestController*))(Il2CppBase() + 0x1CF5800))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PersonalInfoBasicWestController*))(Il2CppBase() + 0x1CF5B94))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PersonalInfoBasicWestController*))(Il2CppBase() + 0x1CF6BD8))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(PersonalInfoBasicWestController*))(Il2CppBase() + 0x1CF7188))(this);
	}
	template <typename T = void> T WillTabShow() {
		return ((T (*)(PersonalInfoBasicWestController*))(Il2CppBase() + 0x1CF9024))(this);
	}
	template <typename T = void> T OnRefreshRedPoint(uintptr_t Msg) {
		return ((T (*)(PersonalInfoBasicWestController*, uintptr_t))(Il2CppBase() + 0x1CF9228))(this, Msg);
	}
	template <typename T = void> T OnPVPGameTypeClick(uintptr_t obj) {
		return ((T (*)(PersonalInfoBasicWestController*, uintptr_t))(Il2CppBase() + 0x1CF95D8))(this, obj);
	}
	template <typename T = void> T OnBRGameTypeClick(uintptr_t obj) {
		return ((T (*)(PersonalInfoBasicWestController*, uintptr_t))(Il2CppBase() + 0x1CF9838))(this, obj);
	}
	template <typename T = void> T OnZMGameTypeClick(uintptr_t obj) {
		return ((T (*)(PersonalInfoBasicWestController*, uintptr_t))(Il2CppBase() + 0x1CF9A98))(this, obj);
	}
	template <typename T = void> T OnAchievementItemClick(uintptr_t obj) {
		return ((T (*)(PersonalInfoBasicWestController*, uintptr_t))(Il2CppBase() + 0x1CF9CF8))(this, obj);
	}
	template <typename T = void> T OnMedalItemClick(uintptr_t obj) {
		return ((T (*)(PersonalInfoBasicWestController*, uintptr_t))(Il2CppBase() + 0x1CFA0B4))(this, obj);
	}
	template <typename T = void> T OnPersonalInfoGameTypeChange() {
		return ((T (*)(PersonalInfoBasicWestController*))(Il2CppBase() + 0x1CF8F34))(this);
	}
	template <typename T = void> T RestPVPTotalData() {
		return ((T (*)(PersonalInfoBasicWestController*))(Il2CppBase() + 0x1CFA658))(this);
	}
	template <typename T = void> T RestBrTotalData() {
		return ((T (*)(PersonalInfoBasicWestController*))(Il2CppBase() + 0x1CFA74C))(this);
	}
	template <typename T = void> T RestZMTotalData() {
		return ((T (*)(PersonalInfoBasicWestController*))(Il2CppBase() + 0x1CFA840))(this);
	}
	template <typename T = void> T RefreshData() {
		return ((T (*)(PersonalInfoBasicWestController*))(Il2CppBase() + 0x1CFA470))(this);
	}
	template <typename T = void> T RefreshPVPTotalData() {
		return ((T (*)(PersonalInfoBasicWestController*))(Il2CppBase() + 0x1CFA93C))(this);
	}
	template <typename T = void> T RefreshBRTotalData() {
		return ((T (*)(PersonalInfoBasicWestController*))(Il2CppBase() + 0x1CFB30C))(this);
	}
	template <typename T = void> T RefreshZMTotalData() {
		return ((T (*)(PersonalInfoBasicWestController*))(Il2CppBase() + 0x1CFBB7C))(this);
	}
	template <typename T = void> T SetPVPTotalModeData(uintptr_t type, uintptr_t mode) {
		return ((T (*)(PersonalInfoBasicWestController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1CFE078))(this, type, mode);
	}
	template <typename T = void> T SetBRTotalModeData(uintptr_t type, uintptr_t teamType) {
		return ((T (*)(PersonalInfoBasicWestController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1CFE2DC))(this, type, teamType);
	}
	template <typename T = void> T SetZMTotalModeData(uintptr_t mode, int32_t levelId) {
		return ((T (*)(PersonalInfoBasicWestController*, uintptr_t, int32_t))(Il2CppBase() + 0x1CFEA40))(this, mode, levelId);
	}
	template <typename T = void> T OnSetHideInfoCallBack(uintptr_t Msg) {
		return ((T (*)(PersonalInfoBasicWestController*, uintptr_t))(Il2CppBase() + 0x1CFECDC))(this, Msg);
	}
	template <typename T = void> T OnPrivacyOnClick() {
		return ((T (*)(PersonalInfoBasicWestController*))(Il2CppBase() + 0x1CFEFF8))(this);
	}
	template <typename T = void> T OnPrivacyOffClick() {
		return ((T (*)(PersonalInfoBasicWestController*))(Il2CppBase() + 0x1CFF14C))(this);
	}
	template <typename T = void> T OnHeadClick(uintptr_t Obj) {
		return ((T (*)(PersonalInfoBasicWestController*, uintptr_t))(Il2CppBase() + 0x1CFF2A0))(this, Obj);
	}
	template <typename T = void> T BigHeadBtnClick(uintptr_t obj) {
		return ((T (*)(PersonalInfoBasicWestController*, uintptr_t))(Il2CppBase() + 0x1CFF7F0))(this, obj);
	}
	template <typename T = void> T OnNickNameCopyBtnClick(uintptr_t obj) {
		return ((T (*)(PersonalInfoBasicWestController*, uintptr_t))(Il2CppBase() + 0x1CFF8E4))(this, obj);
	}
	template <typename T = void> T OnIdCopyBtnClick(uintptr_t obj) {
		return ((T (*)(PersonalInfoBasicWestController*, uintptr_t))(Il2CppBase() + 0x1CFFD28))(this, obj);
	}
	template <typename T = void> T OnMidasShortIdCopyBtnClick(uintptr_t obj) {
		return ((T (*)(PersonalInfoBasicWestController*, uintptr_t))(Il2CppBase() + 0x1D00150))(this, obj);
	}
	template <typename T = void> T OnRenameBtnClick() {
		return ((T (*)(PersonalInfoBasicWestController*))(Il2CppBase() + 0x1D00578))(this);
	}
	template <typename T = void> T RefreshAchievementData(uintptr_t Msg) {
		return ((T (*)(PersonalInfoBasicWestController*, uintptr_t))(Il2CppBase() + 0x1D00740))(this, Msg);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(PersonalInfoBasicWestController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x1D00830))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T RenameRefresh(uintptr_t Msg) {
		return ((T (*)(PersonalInfoBasicWestController*, uintptr_t))(Il2CppBase() + 0x1D00F30))(this, Msg);
	}
	template <typename T = void> T AchievementReviseBtn() {
		return ((T (*)(PersonalInfoBasicWestController*))(Il2CppBase() + 0x1D011D4))(this);
	}
	template <typename T = void> T MedalReviseBtn() {
		return ((T (*)(PersonalInfoBasicWestController*))(Il2CppBase() + 0x1D0166C))(this);
	}
	template <typename T = void> T JoinClanBtnClick() {
		return ((T (*)(PersonalInfoBasicWestController*))(Il2CppBase() + 0x1D01B04))(this);
	}
	template <typename T = void> T _BtnAddFriendClick() {
		return ((T (*)(PersonalInfoBasicWestController*))(Il2CppBase() + 0x1D01CEC))(this);
	}
	template <typename T = void> T RefreshAddFriendBtnState(uintptr_t Msg) {
		return ((T (*)(PersonalInfoBasicWestController*, uintptr_t))(Il2CppBase() + 0x1D020E0))(this, Msg);
	}
	template <typename T = void> T OnNotifySetNameResponse(uintptr_t Msg) {
		return ((T (*)(PersonalInfoBasicWestController*, uintptr_t))(Il2CppBase() + 0x1D022BC))(this, Msg);
	}
	template <typename T = void> T OnNotifyCallingCardInfoUpdateResponse(uintptr_t obj) {
		return ((T (*)(PersonalInfoBasicWestController*, uintptr_t))(Il2CppBase() + 0x1D024A4))(this, obj);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(PersonalInfoBasicWestController*))(Il2CppBase() + 0x1D02594))(this);
	}
	template <typename T = void> T WillTabShowm__0() {
		return ((T (*)(PersonalInfoBasicWestController*))(Il2CppBase() + 0x1D02714))(this);
	}
	template <typename T = bool> static T NotifyDataStoreUpdatedm__1(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1D02CF4))(0, it);
	}
	template <typename T = bool> static T NotifyDataStoreUpdatedm__2(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1D02D14))(0, it);
	}
	template <typename T = bool> static T AchievementReviseBtnm__3(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1D02D34))(0, it);
	}
	template <typename T = bool> static T MedalReviseBtnm__4(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1D02D54))(0, it);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PersonalInfoBasicWestController*))(Il2CppBase() + 0x1D02D74))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PersonalInfoBasicWestController*))(Il2CppBase() + 0x1D02D7C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PersonalInfoBasicWestController*))(Il2CppBase() + 0x1D02D84))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PersonalInfoBasicWestController*))(Il2CppBase() + 0x1D02D8C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(PersonalInfoBasicWestController*))(Il2CppBase() + 0x1D02D94))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(PersonalInfoBasicWestController*))(Il2CppBase() + 0x1D02D9C))(this);
	}

};

}
