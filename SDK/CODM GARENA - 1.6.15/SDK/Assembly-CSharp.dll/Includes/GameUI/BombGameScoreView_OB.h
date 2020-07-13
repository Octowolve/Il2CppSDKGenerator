#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BombGameScoreViewOB
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BombGameScoreView_OB"));
	}

	template <typename T = uintptr_t> T& RegularSign_Defend() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& RegularSign_Attack() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& RebelSign_Defend() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& RebelSign_Attack() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& RegularVolumeLabel() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& RebelVolumeLabel() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& BombTips() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& BombTipsVolumeLabel() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& BombTipsVolumeSprite() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uintptr_t> T& BombTipsContent() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& BombSlider() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = uintptr_t> T& BombSliderVolumeLabel() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& BombSliderVolumeSprite() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = uintptr_t> T& BombSliderContent() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& RegularColor() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = uintptr_t> T& RebelColor() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = float> T& m_TotoalTime() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = float> T& m_CurTime() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& m_Side_Using() {
		return *(T*)((uintptr_t)this + 0x17C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAttackCamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChooseBombVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelBombVolumeChoose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TimerHideTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBombUsing_OB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBombInterrupt_OB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBombTipsAndSlider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = bool> T get_TickEnabled() {
		return ((T (*)(BombGameScoreViewOB*))(Il2CppBase() + 0x2D7F7E4))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(BombGameScoreViewOB*))(Il2CppBase() + 0x2D7F7EC))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(BombGameScoreViewOB*))(Il2CppBase() + 0x2D7F7F4))(this);
	}
	template <typename T = void> T Reset(uintptr_t resetType) {
		return ((T (*)(BombGameScoreViewOB*, uintptr_t))(Il2CppBase() + 0x2D7FA78))(this, resetType);
	}
	template <typename T = void> T CheckAttackCamp() {
		return ((T (*)(BombGameScoreViewOB*))(Il2CppBase() + 0x2D7F8A0))(this);
	}
	template <typename T = void> T ChooseBombVolume(uintptr_t pointType) {
		return ((T (*)(BombGameScoreViewOB*, uintptr_t))(Il2CppBase() + 0x2D7FBBC))(this, pointType);
	}
	template <typename T = void> T CancelBombVolumeChoose(bool isDefused) {
		return ((T (*)(BombGameScoreViewOB*, bool))(Il2CppBase() + 0x2D804E8))(this, isDefused);
	}
	template <typename T = void> T TimerHideTips() {
		return ((T (*)(BombGameScoreViewOB*))(Il2CppBase() + 0x2D80690))(this);
	}
	template <typename T = void> T OnBombUsing_OB(uintptr_t side, float time, uintptr_t pointType) {
		return ((T (*)(BombGameScoreViewOB*, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x2D8077C))(this, side, time, pointType);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(BombGameScoreViewOB*, float))(Il2CppBase() + 0x2D80A8C))(this, dt);
	}
	template <typename T = void> T OnBombInterrupt_OB() {
		return ((T (*)(BombGameScoreViewOB*))(Il2CppBase() + 0x2D80BE8))(this);
	}
	template <typename T = void> T UpdateScore(uintptr_t data, bool force) {
		return ((T (*)(BombGameScoreViewOB*, uintptr_t, bool))(Il2CppBase() + 0x2D80CD4))(this, data, force);
	}
	template <typename T = void> T UpdateBombTipsAndSlider(uintptr_t side) {
		return ((T (*)(BombGameScoreViewOB*, uintptr_t))(Il2CppBase() + 0x2D7FEEC))(this, side);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(BombGameScoreViewOB*))(Il2CppBase() + 0x2D80F04))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset(uintptr_t P0) {
		return ((T (*)(BombGameScoreViewOB*, uintptr_t))(Il2CppBase() + 0x2D80F08))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ChooseBombVolume(uintptr_t P0) {
		return ((T (*)(BombGameScoreViewOB*, uintptr_t))(Il2CppBase() + 0x2D80F0C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_CancelBombVolumeChoose(bool P0) {
		return ((T (*)(BombGameScoreViewOB*, bool))(Il2CppBase() + 0x2D80F10))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnBombUsing_OB(uintptr_t P0, float P1, uintptr_t P2) {
		return ((T (*)(BombGameScoreViewOB*, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x2D80F14))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BombGameScoreViewOB*, float))(Il2CppBase() + 0x2D80F2C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnBombInterrupt_OB() {
		return ((T (*)(BombGameScoreViewOB*))(Il2CppBase() + 0x2D80F30))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateScore(uintptr_t P0, bool P1) {
		return ((T (*)(BombGameScoreViewOB*, uintptr_t, bool))(Il2CppBase() + 0x2D80F34))(this, P0, P1);
	}

};

}
