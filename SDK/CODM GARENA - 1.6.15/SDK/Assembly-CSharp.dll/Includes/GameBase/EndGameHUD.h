#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class EndGameHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "EndGameHUD"));
	}

	template <typename T = uintptr_t> T& labelScoreLeft() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& labelScoreRight() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& labelLeft() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& labelRight() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& labelFailBig() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& spriteLeftGlobalMKCamp() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& spriteRightGlobalMKCamp() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& spriteLeftGlobalIconCamp() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& spriteRightGlobalIconCamp() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& spriteLeftCTFIconCamp() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& spriteRightCTFIconCamp() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& LeftGlobalCampNameLabel() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& RightGlobalCampNameLabel() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& LeftCTFTotalScore() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& LeftCTFTotalFlag() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& RightCTFTotalScore() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& RightCTFTotalFlag() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& labelColorGuarderScore() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& labelColorTraitorScore() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& labelColorGuarderName() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& labelColorTraitorName() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& OBAnimator() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& RegularRoot() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& RebelRoot() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& ResWinEffectAnimator() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& ResLostEffectAnimator() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& PVPCommonMatchDetailAnimator() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& DrawAnimator() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& CTFMatchDetailAnimator() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = int32_t> T& DelayEndGame() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& WinResultReason() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& OBResultReason() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& LostResultReason() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& DrawResultReaon() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeforeLoadLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowRoundResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayMatchDetailAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginSettlement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCTFGameInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(EndGameHUD*))(Il2CppBase() + 0x41098C0))(this);
	}
	template <typename T = uint64_t> T get_ActiveGameHudState() {
		return ((T (*)(EndGameHUD*))(Il2CppBase() + 0x41098C8))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(EndGameHUD*))(Il2CppBase() + 0x41098D4))(this);
	}
	template <typename T = void> T BeforeLoadLevel(uintptr_t msg) {
		return ((T (*)(EndGameHUD*, uintptr_t))(Il2CppBase() + 0x4109AD4))(this, msg);
	}
	template <typename T = void> T ResetData() {
		return ((T (*)(EndGameHUD*))(Il2CppBase() + 0x4109984))(this);
	}
	template <typename T = void> T ShowRoundResult(uintptr_t inGameResult) {
		return ((T (*)(EndGameHUD*, uintptr_t))(Il2CppBase() + 0x4109B80))(this, inGameResult);
	}
	template <typename T = void> T PlayMatchDetailAnimation(Il2CppString* statName) {
		return ((T (*)(EndGameHUD*, Il2CppString*))(Il2CppBase() + 0x410B608))(this, statName);
	}
	template <typename T = void> T BeginSettlement() {
		return ((T (*)(EndGameHUD*))(Il2CppBase() + 0x410B7E4))(this);
	}
	template <typename T = void> T SetCTFGameInfo() {
		return ((T (*)(EndGameHUD*))(Il2CppBase() + 0x410B31C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(EndGameHUD*))(Il2CppBase() + 0x410BA2C))(this);
	}

};

}
