#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class DuelGameScoreUIView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "DuelGameScoreUIView"));
	}

	template <typename T = uintptr_t> T& RoundScoreRoot() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& CommonRoot() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& OBRoot() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SelfScoreSpriteList() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SelfScoreSpriteBGList() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& OtherScoreSpriteList() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& OtherScoreSpriteBGList() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& TopInfoAnchor() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& WeaponTips() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& WeaponTipsSprite() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& WeaponTipsLabel() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& ScoreStateLabel() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& WiningColor() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& LosingColor() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& StateBG() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& TimeEffect() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& RoundEndTips() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = float> T& m_LastLeftTime() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& CurFadeAction() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = Il2CppDictionary<uintptr_t, bool>*> T& m_SpriteActiveDic() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_CurWeaponSpriteList() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_WeaponTypeNameList() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = Il2CppString*> static T& m_CurRoundTipsText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& m_TipsBlue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& m_TipsRed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& m_TipsWhite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& isFirstInit() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = int32_t> T& LastShowRound() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = bool> T& m_HotTimeBGM() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& OBScoreBoard() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGameTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCurrentRoundText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSpriteActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSpriteActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPawnSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HidePawnSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRoundScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRoundTargetScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAttackerScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateDefenderScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCurRoundWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopShowCurRoundWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowRoundEndTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateOBScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCurRound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = void> T WillShow() {
		return ((T (*)(DuelGameScoreUIView*))(Il2CppBase() + 0x46F0914))(this);
	}
	template <typename T = void> T Reset(uintptr_t resetType) {
		return ((T (*)(DuelGameScoreUIView*, uintptr_t))(Il2CppBase() + 0x46F09D8))(this, resetType);
	}
	template <typename T = void> T UpdateGameTime(int32_t totalTime, int32_t leftTime) {
		return ((T (*)(DuelGameScoreUIView*, int32_t, int32_t))(Il2CppBase() + 0x46F1620))(this, totalTime, leftTime);
	}
	template <typename T = void> T UpdateCurrentRoundText() {
		return ((T (*)(DuelGameScoreUIView*))(Il2CppBase() + 0x46F1314))(this);
	}
	template <typename T = void> T SetSpriteActive(uintptr_t sprite, bool active) {
		return ((T (*)(DuelGameScoreUIView*, uintptr_t, bool))(Il2CppBase() + 0x46F1B68))(this, sprite, active);
	}
	template <typename T = bool> T GetSpriteActive(uintptr_t sprite) {
		return ((T (*)(DuelGameScoreUIView*, uintptr_t))(Il2CppBase() + 0x46F1CD0))(this, sprite);
	}
	template <typename T = void> T ShowPawnSprite(uintptr_t sprite, bool show) {
		return ((T (*)(DuelGameScoreUIView*, uintptr_t, bool))(Il2CppBase() + 0x46F1DD4))(this, sprite, show);
	}
	template <typename T = uintptr_t> T HidePawnSprite(uintptr_t sprite) {
		return ((T (*)(DuelGameScoreUIView*, uintptr_t))(Il2CppBase() + 0x46F1F58))(this, sprite);
	}
	template <typename T = void> T UpdateRoundScore() {
		return ((T (*)(DuelGameScoreUIView*))(Il2CppBase() + 0x46F0D18))(this);
	}
	template <typename T = void> T UpdateRoundTargetScore(uint32_t cnt) {
		return ((T (*)(DuelGameScoreUIView*, uint32_t))(Il2CppBase() + 0x46F204C))(this, cnt);
	}
	template <typename T = void> T UpdateAttackerScore(uint32_t cnt) {
		return ((T (*)(DuelGameScoreUIView*, uint32_t))(Il2CppBase() + 0x46F240C))(this, cnt);
	}
	template <typename T = void> T UpdateDefenderScore(uint32_t cnt) {
		return ((T (*)(DuelGameScoreUIView*, uint32_t))(Il2CppBase() + 0x46F265C))(this, cnt);
	}
	template <typename T = void> T ShowCurRoundWeapon(uintptr_t type) {
		return ((T (*)(DuelGameScoreUIView*, uintptr_t))(Il2CppBase() + 0x46F28AC))(this, type);
	}
	template <typename T = void> T StopShowCurRoundWeapon() {
		return ((T (*)(DuelGameScoreUIView*))(Il2CppBase() + 0x46F2C1C))(this);
	}
	template <typename T = void> T ShowRoundEndTips() {
		return ((T (*)(DuelGameScoreUIView*))(Il2CppBase() + 0x46F18B8))(this);
	}
	template <typename T = void> T UpdateScore(uintptr_t data, bool force) {
		return ((T (*)(DuelGameScoreUIView*, uintptr_t, bool))(Il2CppBase() + 0x46F2D08))(this, data, force);
	}
	template <typename T = void> T UpdateOBScore() {
		return ((T (*)(DuelGameScoreUIView*))(Il2CppBase() + 0x46F2DE0))(this);
	}
	template <typename T = void> T UpdateCurRound() {
		return ((T (*)(DuelGameScoreUIView*))(Il2CppBase() + 0x46F2F5C))(this);
	}
	template <typename T = void> T ShowRoundEndTipsm__0() {
		return ((T (*)(DuelGameScoreUIView*))(Il2CppBase() + 0x46F31DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(DuelGameScoreUIView*))(Il2CppBase() + 0x46F3374))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset(uintptr_t P0) {
		return ((T (*)(DuelGameScoreUIView*, uintptr_t))(Il2CppBase() + 0x46F337C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateGameTime(int32_t P0, int32_t P1) {
		return ((T (*)(DuelGameScoreUIView*, int32_t, int32_t))(Il2CppBase() + 0x46F3384))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_ShowPawnSprite(uintptr_t P0, bool P1) {
		return ((T (*)(DuelGameScoreUIView*, uintptr_t, bool))(Il2CppBase() + 0x46F338C))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateScore(uintptr_t P0, bool P1) {
		return ((T (*)(DuelGameScoreUIView*, uintptr_t, bool))(Il2CppBase() + 0x46F3394))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateCurRound() {
		return ((T (*)(DuelGameScoreUIView*))(Il2CppBase() + 0x46F339C))(this);
	}

};

}
