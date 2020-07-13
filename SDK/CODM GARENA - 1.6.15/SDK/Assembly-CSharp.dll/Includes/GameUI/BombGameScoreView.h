#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BombGameScoreView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BombGameScoreView"));
	}

	template <typename T = uintptr_t> T& BombVolumeSprite() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& BombVolumeGO() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& BombVolumeLabel() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& BombVolumeEffect() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& WarningEffect() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& BombLeftTimeLabel() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& GameTimeLabel() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& BombCarrySprite() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& TimeWarningInfos() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& BlueInfo() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& TopInfoAnchor() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& CurRoundLabel() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppString*> T& m_SelfSideSpriteName() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = Il2CppString*> T& m_EnemySideSpriteName() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = bool> T& m_SelfSide() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& m_WarningEffect() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = float> T& m_LeftTime() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = Il2CppDictionary<uintptr_t, bool>*> T& m_SpriteActiveDic() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = bool> T& isFirstInit() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = int32_t> T& LastShowRound() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChooseBombVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelBombVolumeChoose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBombVolumeSide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTargetBombVolumeSide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowBombCarrySprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCampInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLeadingStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePlayerCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGameTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCurrentRoundText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSpriteActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSpriteActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPawnSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HidePawnSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTimeColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCustomTimeWarningInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRoundEndedStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBombUsing_OB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBombInterrupt_OB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}

	template <typename T = void> T WillShow() {
		return ((T (*)(BombGameScoreView*))(Il2CppBase() + 0x2D7D404))(this);
	}
	template <typename T = void> T ChooseBombVolume(uintptr_t pointType) {
		return ((T (*)(BombGameScoreView*, uintptr_t))(Il2CppBase() + 0x2D7D4C8))(this, pointType);
	}
	template <typename T = void> T CancelBombVolumeChoose(bool isDefused) {
		return ((T (*)(BombGameScoreView*, bool))(Il2CppBase() + 0x2D7D824))(this, isDefused);
	}
	template <typename T = void> T SetBombVolumeSide(bool selfSide) {
		return ((T (*)(BombGameScoreView*, bool))(Il2CppBase() + 0x2D7DB1C))(this, selfSide);
	}
	template <typename T = void> T UpdateTargetBombVolumeSide() {
		return ((T (*)(BombGameScoreView*))(Il2CppBase() + 0x2D7DBCC))(this);
	}
	template <typename T = void> T ShowBombCarrySprite(bool show) {
		return ((T (*)(BombGameScoreView*, bool))(Il2CppBase() + 0x2D7DE24))(this, show);
	}
	template <typename T = void> T Reset(uintptr_t resetType) {
		return ((T (*)(BombGameScoreView*, uintptr_t))(Il2CppBase() + 0x2D7DF54))(this, resetType);
	}
	template <typename T = void> T SetCampInfo() {
		return ((T (*)(BombGameScoreView*))(Il2CppBase() + 0x2D7E168))(this);
	}
	template <typename T = void> T UpdateScore(uintptr_t data, bool force) {
		return ((T (*)(BombGameScoreView*, uintptr_t, bool))(Il2CppBase() + 0x2D7E600))(this, data, force);
	}
	template <typename T = void> T UpdateLeadingStatus(uintptr_t leadingState, uintptr_t data) {
		return ((T (*)(BombGameScoreView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D7E72C))(this, leadingState, data);
	}
	template <typename T = void> T UpdatePlayerCount() {
		return ((T (*)(BombGameScoreView*))(Il2CppBase() + 0x2D7E22C))(this);
	}
	template <typename T = void> T UpdateGameTime(int32_t totalTime, int32_t leftTime) {
		return ((T (*)(BombGameScoreView*, int32_t, int32_t))(Il2CppBase() + 0x2D7E7F8))(this, totalTime, leftTime);
	}
	template <typename T = void> T UpdateCurrentRoundText() {
		return ((T (*)(BombGameScoreView*))(Il2CppBase() + 0x2D7E2F4))(this);
	}
	template <typename T = void> T SetSpriteActive(uintptr_t sprite, bool active) {
		return ((T (*)(BombGameScoreView*, uintptr_t, bool))(Il2CppBase() + 0x2D7E8F8))(this, sprite, active);
	}
	template <typename T = bool> T GetSpriteActive(uintptr_t sprite) {
		return ((T (*)(BombGameScoreView*, uintptr_t))(Il2CppBase() + 0x2D7EA60))(this, sprite);
	}
	template <typename T = void> T ShowPawnSprite(uintptr_t sprite, bool show) {
		return ((T (*)(BombGameScoreView*, uintptr_t, bool))(Il2CppBase() + 0x2D7EB64))(this, sprite, show);
	}
	template <typename T = uintptr_t> T HidePawnSprite(uintptr_t sprite) {
		return ((T (*)(BombGameScoreView*, uintptr_t))(Il2CppBase() + 0x2D7ECE8))(this, sprite);
	}
	template <typename T = void> T SetTimeColor(uintptr_t color, float interval) {
		return ((T (*)(BombGameScoreView*, uintptr_t, float))(Il2CppBase() + 0x2D7EDDC))(this, color, interval);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomTimeWarningInfo() {
		return ((T (*)(BombGameScoreView*))(Il2CppBase() + 0x2D7F02C))(this);
	}
	template <typename T = void> T UpdateRoundEndedStatus() {
		return ((T (*)(BombGameScoreView*))(Il2CppBase() + 0x2D7F0CC))(this);
	}
	template <typename T = void> T OnBombUsing_OB(uintptr_t side, float time, uintptr_t pointType) {
		return ((T (*)(BombGameScoreView*, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x2D7F164))(this, side, time, pointType);
	}
	template <typename T = void> T OnBombInterrupt_OB() {
		return ((T (*)(BombGameScoreView*))(Il2CppBase() + 0x2D7F220))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(BombGameScoreView*))(Il2CppBase() + 0x2D7F2B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset(uintptr_t P0) {
		return ((T (*)(BombGameScoreView*, uintptr_t))(Il2CppBase() + 0x2D7F2C0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ShowPawnSprite(uintptr_t P0, bool P1) {
		return ((T (*)(BombGameScoreView*, uintptr_t, bool))(Il2CppBase() + 0x2D7F2C8))(this, P0, P1);
	}

};

}
