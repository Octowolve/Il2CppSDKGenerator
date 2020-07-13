#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace CareerInfo {

class PersonalInfoBasicWestView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "CareerInfo", "PersonalInfoBasicWestView"));
	}

	template <typename T = uintptr_t> T& HeadIcon() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& HeadRedPoint() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& NickName() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& LevelSprite() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& Level() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& LevelProgress_Label() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& LevelProgrssBar() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& Privacy() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& PrivacyOn() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& PrivacyOff() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& PrivacyLabel() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& HeadCollider() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& NoFramedFrame() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& SubDataTable() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& SubItemTemplate() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& SubDataItemList() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& SubItemIndex() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AchievementItemWest() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MedalItemWest() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = int32_t> T& PVP_MPVs() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& PVP_Rounds() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = int32_t> T& PVP_Top3() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> T& PVP_Kills() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = float> T& PVP_KD() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> T& PVP_AVG_Accuracys() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = int32_t> T& BR_MPVs() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = int32_t> T& BR_Winners() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = int32_t> T& BR_Rounds() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = int32_t> T& BR_Kills() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = float> T& BR_AVG_Damages() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = float> T& BR_AVG_Accuracys() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uint64_t> T& ZM_Damages() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = int32_t> T& ZM_Rounds() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uint64_t> T& ZM_Kills() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = int32_t> T& ZM_Mvps() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = float> T& ZM_AVGAcc() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = float> T& ZM_WeaknessAcc() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& AchievementCount() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& MedalCount() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& NextLevelIcon() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& NextLavel() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& NextLevelUnlockGb() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& THISSEASONSprite() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& HIGHESTINHISTORYSprite() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& THISSEASONLabel() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& HIGHESTINHISTORYLabel() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uintptr_t> T& parcloseGb() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& NickNameCopyBtn() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = uintptr_t> T& IdCopyBtn() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& IdLabel() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = uintptr_t> T& MidasShortIdLabel() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& MidasShortIdCopyBtn() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = uintptr_t> T& RenameBtn() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& ClanInfoRoot() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = uintptr_t> T& ClanLabel() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& ClanSprite() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = uintptr_t> T& ClanLevelLabel() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& RankRoot() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = uintptr_t> T& CombatPowerRoot() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& LabelCombatPower() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = uintptr_t> T& NoClanInfoRoot() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& TipsLabel() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = uintptr_t> T& JoinClanBtn() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = Il2CppString*> T& PlayerGuID() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = uint64_t> T& PlayerID() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = Il2CppString*> T& PlayerMidasShortId() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& BtnAddFriend() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = uintptr_t> T& SpriteAddFriend() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& AchievementModifyBtn() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = uintptr_t> T& AchievementQuitModifyBtn() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& MedalModifyBtn() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = uintptr_t> T& MedalQuitModifyBtn() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& gameTypeSelector() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = uintptr_t> T& cardTemplate() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& skillGrid() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = uintptr_t> T& BgWidget() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& NickNameWidget() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = uintptr_t> T& RenameBtnWidget() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = uintptr_t> T& NickNameCopyBtnWidet() {
		return *(T*)((uintptr_t)this + 0x1C4);
	}
	template <typename T = uintptr_t> T& IDWidet() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = uintptr_t> T& IDCopyWidget() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}
	template <typename T = uintptr_t> T& SpriteBg_R() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = int32_t> T& SPRITE_BG_R_HIGHT() {
		return *(T*)((uintptr_t)this + 0x1D4);
	}
	template <typename T = bool> T& IsSet() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = uintptr_t> T& MedalTf() {
		return *(T*)((uintptr_t)this + 0x1DC);
	}
	template <typename T = uintptr_t> T& BigHead() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = uintptr_t> T& UIBigHead() {
		return *(T*)((uintptr_t)this + 0x1E4);
	}
	template <typename T = Il2CppString*> T& mUrl() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = uintptr_t> T& mTable() {
		return *(T*)((uintptr_t)this + 0x1EC);
	}
	template <typename T = uintptr_t> T& LabelClassicRound() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = uintptr_t> T& SpriteClassic() {
		return *(T*)((uintptr_t)this + 0x1F4);
	}
	template <typename T = uintptr_t> T& ObjBossRoot() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = uintptr_t> T& ObjRoundRoot() {
		return *(T*)((uintptr_t)this + 0x1FC);
	}
	template <typename T = uintptr_t> T& SpriteRaid() {
		return *(T*)((uintptr_t)this + 0x200);
	}
	template <typename T = uintptr_t> T& LabelKillMinTime() {
		return *(T*)((uintptr_t)this + 0x204);
	}
	template <typename T = uintptr_t> T& LabelRaidRound() {
		return *(T*)((uintptr_t)this + 0x208);
	}
	template <typename T = uintptr_t> T& LabelRaidName() {
		return *(T*)((uintptr_t)this + 0x20C);
	}
	template <typename T = uintptr_t> T& ObjHide() {
		return *(T*)((uintptr_t)this + 0x210);
	}
	template <typename T = uintptr_t> T& ObjNotHide() {
		return *(T*)((uintptr_t)this + 0x214);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGameTagState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePrivacy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowBasicInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNickName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRedPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPVPTotalValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBRTotalValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetZMTotalValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSubDataItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowMedalInfoList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAchievementInfoList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAchievementDeleteBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowMedalDeleteBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideAchievementAndMield() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideMedal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RSetTransForm() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RSetRenameCopyPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAchieventMedalBg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBigHead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTexture2D() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DownLoadTextureCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPveInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}

	template <typename T = void> T SetGameTagState() {
		return ((T (*)(PersonalInfoBasicWestView*))(Il2CppBase() + 0x1CF8CDC))(this);
	}
	template <typename T = void> T ShowInfo() {
		return ((T (*)(PersonalInfoBasicWestView*))(Il2CppBase() + 0x1CF9184))(this);
	}
	template <typename T = void> T UpdatePrivacy(bool bShowPrivacy) {
		return ((T (*)(PersonalInfoBasicWestView*, bool))(Il2CppBase() + 0x1CFEEC0))(this, bShowPrivacy);
	}
	template <typename T = void> T ShowBasicInfo() {
		return ((T (*)(PersonalInfoBasicWestView*))(Il2CppBase() + 0x1D02FE4))(this);
	}
	template <typename T = void> T SetNickName(Il2CppString* name) {
		return ((T (*)(PersonalInfoBasicWestView*, Il2CppString*))(Il2CppBase() + 0x1D0106C))(this, name);
	}
	template <typename T = void> T SetRedPoint() {
		return ((T (*)(PersonalInfoBasicWestView*))(Il2CppBase() + 0x1CF9318))(this);
	}
	template <typename T = void> T SetPVPTotalValue(int32_t mvp, int32_t round, int32_t kill, int32_t top, float kd, float avg, Il2CppString* seasonicon, Il2CppString* HighestIcon, bool isHide) {
		return ((T (*)(PersonalInfoBasicWestView*, int32_t, int32_t, int32_t, int32_t, float, float, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x1CFBFA0))(this, mvp, round, kill, top, kd, avg, seasonicon, HighestIcon, isHide);
	}
	template <typename T = void> T SetBRTotalValue(int32_t mvp, int32_t winner, int32_t round, int32_t kill, float damage, float accuracy, Il2CppString* seasonicon, Il2CppString* HighestIcon, bool isHide) {
		return ((T (*)(PersonalInfoBasicWestView*, int32_t, int32_t, int32_t, int32_t, float, float, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x1CFC8E0))(this, mvp, winner, round, kill, damage, accuracy, seasonicon, HighestIcon, isHide);
	}
	template <typename T = void> T SetZMTotalValue(uint64_t damage, int32_t rounds, uint64_t kills, int32_t mvp, float Avgacc, float weaknessacc, bool isHide) {
		return ((T (*)(PersonalInfoBasicWestView*, uint64_t, int32_t, uint64_t, int32_t, float, float, bool))(Il2CppBase() + 0x1CFD20C))(this, damage, rounds, kills, mvp, Avgacc, weaknessacc, isHide);
	}
	template <typename T = void> T SetSubDataItem(Il2CppString* name, Il2CppString* value) {
		return ((T (*)(PersonalInfoBasicWestView*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1D057F0))(this, name, value);
	}
	template <typename T = void> T ShowMedalInfoList() {
		return ((T (*)(PersonalInfoBasicWestView*))(Il2CppBase() + 0x1CF7AC0))(this);
	}
	template <typename T = void> T ShowAchievementInfoList() {
		return ((T (*)(PersonalInfoBasicWestView*))(Il2CppBase() + 0x1CF732C))(this);
	}
	template <typename T = void> T ShowAchievementDeleteBtn(bool isShow) {
		return ((T (*)(PersonalInfoBasicWestView*, bool))(Il2CppBase() + 0x1CF85CC))(this, isShow);
	}
	template <typename T = void> T ShowMedalDeleteBtn(bool isShow) {
		return ((T (*)(PersonalInfoBasicWestView*, bool))(Il2CppBase() + 0x1CF8954))(this, isShow);
	}
	template <typename T = void> T HideAchievementAndMield() {
		return ((T (*)(PersonalInfoBasicWestView*))(Il2CppBase() + 0x1D05EF4))(this);
	}
	template <typename T = void> T HideMedal() {
		return ((T (*)(PersonalInfoBasicWestView*))(Il2CppBase() + 0x1D05CE8))(this);
	}
	template <typename T = void> T RSetTransForm() {
		return ((T (*)(PersonalInfoBasicWestView*))(Il2CppBase() + 0x1D02750))(this);
	}
	template <typename T = void> T RSetRenameCopyPos() {
		return ((T (*)(PersonalInfoBasicWestView*))(Il2CppBase() + 0x1D05620))(this);
	}
	template <typename T = void> T SetAchieventMedalBg() {
		return ((T (*)(PersonalInfoBasicWestView*))(Il2CppBase() + 0x1D028EC))(this);
	}
	template <typename T = void> T SetBigHead(bool IsShow) {
		return ((T (*)(PersonalInfoBasicWestView*, bool))(Il2CppBase() + 0x1CFF6FC))(this, IsShow);
	}
	template <typename T = void> T SetTexture2D(uintptr_t PictureInfo, uint64_t playerID) {
		return ((T (*)(PersonalInfoBasicWestView*, uintptr_t, uint64_t))(Il2CppBase() + 0x1D0509C))(this, PictureInfo, playerID);
	}
	template <typename T = void> T DownLoadTextureCallback(Il2CppString* textureUrl, bool bSucceed, uintptr_t texture) {
		return ((T (*)(PersonalInfoBasicWestView*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x1D06080))(this, textureUrl, bSucceed, texture);
	}
	template <typename T = void> T SetPveInfo(uintptr_t mode, uintptr_t data, bool isHade) {
		return ((T (*)(PersonalInfoBasicWestView*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x1CFD810))(this, mode, data, isHade);
	}
	template <typename T = bool> static T ShowMedalInfoListm__0(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1D06238))(0, it);
	}
	template <typename T = bool> static T ShowAchievementInfoListm__1(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1D06268))(0, it);
	}

};

}
