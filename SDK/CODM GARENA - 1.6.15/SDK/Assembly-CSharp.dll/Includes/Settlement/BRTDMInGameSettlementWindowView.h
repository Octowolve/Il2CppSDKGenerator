#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class BRTDMInGameSettlementWindowView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "BRTDMInGameSettlementWindowView"));
	}

	template <typename T = uintptr_t> T& ExitTimer() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& DurationTime() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& ButtonMask() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& SelfCampIconSprite() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& SelfCampNameLabel() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& SelfCampScoreLabel() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& OtherCampIconSprite() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& OtherCampNameLabel() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& OtherCampScoreLabel() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& PlayerScoreScrollView() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& CampRoot() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& LabelScoreLeft() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& LabelScoreRight() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& LabelCampLeft() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& LabelCampRight() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& labelColorGuarderScore() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& labelColorTraitorScore() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& labelColorGuarderName() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& labelColorTraitorName() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& spriteLeftGlobalMKCamp() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& spriteRightGlobalMKCamp() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& spriteLeftGlobalIconCamp() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& spriteRightGlobalIconCamp() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& ResWinEffectAnimator() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& ResLostEffectAnimator() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& EffectAnimator2() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& labelFailBig() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& LabelExit_Camp() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& BtnConfirm_Camp() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& Result() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& Step1Root() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& Step2Root() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& playerList() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshSpectateEnemyActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTrainingRankSlogan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRankSlogan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayBRResultSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshExitTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUpTimmer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetShowWinnerRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCampRootInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCampView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCampScoreView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T Init() {
		return ((T (*)(BRTDMInGameSettlementWindowView*))(Il2CppBase() + 0x3B1B7D0))(this);
	}
	template <typename T = void> T RefreshSpectateEnemyActive() {
		return ((T (*)(BRTDMInGameSettlementWindowView*))(Il2CppBase() + 0x3B1BD94))(this);
	}
	template <typename T = void> T SetTrainingRankSlogan() {
		return ((T (*)(BRTDMInGameSettlementWindowView*))(Il2CppBase() + 0x3B1BEA4))(this);
	}
	template <typename T = void> T SetRankSlogan(int32_t rank, int32_t total, int32_t WinnerCount) {
		return ((T (*)(BRTDMInGameSettlementWindowView*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x3B1C108))(this, rank, total, WinnerCount);
	}
	template <typename T = void> T PlayBRResultSound(int32_t rank) {
		return ((T (*)(BRTDMInGameSettlementWindowView*, int32_t))(Il2CppBase() + 0x3B1BF4C))(this, rank);
	}
	template <typename T = void> T RefreshExitTime(bool ShowClock) {
		return ((T (*)(BRTDMInGameSettlementWindowView*, bool))(Il2CppBase() + 0x3B1BB10))(this, ShowClock);
	}
	template <typename T = void> T SetUpTimmer() {
		return ((T (*)(BRTDMInGameSettlementWindowView*))(Il2CppBase() + 0x3B1B934))(this);
	}
	template <typename T = void> T SetShowWinnerRoot(bool isWinner) {
		return ((T (*)(BRTDMInGameSettlementWindowView*, bool))(Il2CppBase() + 0x3B1C1D8))(this, isWinner);
	}
	template <typename T = void> T SetCampRootInfo(uintptr_t ds, uintptr_t inGameResult) {
		return ((T (*)(BRTDMInGameSettlementWindowView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3B1C434))(this, ds, inGameResult);
	}
	template <typename T = void> T SetCampView(uintptr_t localPlayerCamp) {
		return ((T (*)(BRTDMInGameSettlementWindowView*, uintptr_t))(Il2CppBase() + 0x3B1D100))(this, localPlayerCamp);
	}
	template <typename T = void> T SetCampScoreView(uintptr_t localPlayerCamp) {
		return ((T (*)(BRTDMInGameSettlementWindowView*, uintptr_t))(Il2CppBase() + 0x3B1D454))(this, localPlayerCamp);
	}
	template <typename T = void> T SetUpTimmerm__0() {
		return ((T (*)(BRTDMInGameSettlementWindowView*))(Il2CppBase() + 0x3B1D784))(this);
	}
	template <typename T = void> T SetShowWinnerRootm__1() {
		return ((T (*)(BRTDMInGameSettlementWindowView*))(Il2CppBase() + 0x3B1D78C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRTDMInGameSettlementWindowView*))(Il2CppBase() + 0x3B1D864))(this);
	}

};

}
