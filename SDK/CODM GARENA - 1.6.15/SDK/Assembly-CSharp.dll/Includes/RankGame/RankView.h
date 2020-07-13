#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RankGame {

class RankView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RankGame", "RankView"));
	}

	template <typename T = uintptr_t> T& rankScrollView() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& NoDataTip() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& myRankView() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& RankTabChildView() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& titleParam1Label() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& subTabSwitchView() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& rankTabView() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& itemDescTipsBtn() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& logoSpriteScroll() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& myRankBtn() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& myRankSelectRoot() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& rankLobbyExtraView() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& ZMTabBtn() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& myrankAwardView() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& leftActivityEndTime() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& LogoSpriteSeasonName_MP() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& LogoSpriteTime_MP() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& LogoSpriteSeasonName_Br() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& LogoSpriteTime_Br() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& MpRankLogoSprite() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& BrRankLogoSprite() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& PveRankLogoSprite() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& TitleLable() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& RankTitleObj() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& SaeasonOffTipsLable() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& SeasonOffTipsObj() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& callingCardTemplate() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTabChildView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReTabChildPostion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTabView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNoDataTipActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMyRankInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMyRewardInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRankTitleLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetScrollViewPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLogoSpriteInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddSeasonOffTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLogoSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLogoSpriteActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefReshAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = void> T Init() {
		return ((T (*)(RankView*))(Il2CppBase() + 0x3818AB4))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(RankView*))(Il2CppBase() + 0x3818B5C))(this);
	}
	template <typename T = void> T RefreshTabChildView(uintptr_t modeType, int32_t tabChild) {
		return ((T (*)(RankView*, uintptr_t, int32_t))(Il2CppBase() + 0x3806A14))(this, modeType, tabChild);
	}
	template <typename T = void> T ReTabChildPostion() {
		return ((T (*)(RankView*))(Il2CppBase() + 0x3818C04))(this);
	}
	template <typename T = void> T RefreshTabView(uintptr_t modetype, uintptr_t tab) {
		return ((T (*)(RankView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3805B9C))(this, modetype, tab);
	}
	template <typename T = void> T SetNoDataTipActive(bool isActive) {
		return ((T (*)(RankView*, bool))(Il2CppBase() + 0x38087B8))(this, isActive);
	}
	template <typename T = void> T SetMyRankInfo(uintptr_t info, uintptr_t tabcsv) {
		return ((T (*)(RankView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x38084FC))(this, info, tabcsv);
	}
	template <typename T = void> T SetMyRewardInfo(uintptr_t data) {
		return ((T (*)(RankView*, uintptr_t))(Il2CppBase() + 0x3808AEC))(this, data);
	}
	template <typename T = void> T SetRankTitleLabel(uintptr_t config) {
		return ((T (*)(RankView*, uintptr_t))(Il2CppBase() + 0x3806E78))(this, config);
	}
	template <typename T = void> T ResetScrollViewPosition() {
		return ((T (*)(RankView*))(Il2CppBase() + 0x38088AC))(this);
	}
	template <typename T = void> T SetLogoSpriteInfo() {
		return ((T (*)(RankView*))(Il2CppBase() + 0x38071AC))(this);
	}
	template <typename T = void> T AddSeasonOffTips() {
		return ((T (*)(RankView*))(Il2CppBase() + 0x3802DD8))(this);
	}
	template <typename T = void> T SetLogoSprite(bool isMpMpde, bool isBrMode, bool isPveMode) {
		return ((T (*)(RankView*, bool, bool, bool))(Il2CppBase() + 0x3818D08))(this, isMpMpde, isBrMode, isPveMode);
	}
	template <typename T = void> T SetLogoSpriteActive(bool isChild, bool isSprite) {
		return ((T (*)(RankView*, bool, bool))(Il2CppBase() + 0x3807024))(this, isChild, isSprite);
	}
	template <typename T = void> T RefReshAnimation() {
		return ((T (*)(RankView*))(Il2CppBase() + 0x3805C7C))(this);
	}
	template <typename T = void> T RefreshTabChildViewm__0() {
		return ((T (*)(RankView*))(Il2CppBase() + 0x3818E44))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RankView*))(Il2CppBase() + 0x3818E48))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(RankView*))(Il2CppBase() + 0x3818E50))(this);
	}

};

}
