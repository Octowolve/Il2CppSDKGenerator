#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class DeadReplayHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "DeadReplayHUD"));
	}

	template <typename T = uintptr_t> T& TimeElapsedLabel() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& TimeElapsedSlider() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& AimTargetSprite() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppVector2> T& AimTargetSpriteOffset() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& DeadPlayerLabel() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& ChangeLoadoutRoot() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& SwitchBagBtn() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& TitleLabel() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& DoubleClickTipsLabel() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& WeaponKill() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& WeaponKill_FinalKill() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& KillDetailShow() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& DeadReplayRoot() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& FinalKillReplayRoot() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& FinialKillTimeLabel() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& OpeningEffect() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& FadeInEffect() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& callingcardTemplate() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& callingcardTemplateFinalKill() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& m_TouchTimes() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& m_LastTouchTime() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& m_DeadReplayMgr() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = bool> T& m_UseScreenEffect() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& m_AimTarget() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& m_AimTargetHeadTrans() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& m_CameraTrans() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = bool> T& bShowAttachment() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = bool> T& bShowFinalKillAttachment() {
		return *(T*)((uintptr_t)this + 0xE9);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadSwitchBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadSkip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDeadReplayManager() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyKillerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustGameLogoPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAimTargetSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLeftTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TimerFadeIn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TimerTimeScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPlayOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnToggleAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnToggleAttachmentFinalKill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(DeadReplayHUD*))(Il2CppBase() + 0x3441214))(this);
	}
	template <typename T = bool> T OnGamepadSwitchBag() {
		return ((T (*)(DeadReplayHUD*))(Il2CppBase() + 0x3441220))(this);
	}
	template <typename T = bool> T OnGamepadSkip() {
		return ((T (*)(DeadReplayHUD*))(Il2CppBase() + 0x34414A8))(this);
	}
	template <typename T = void> T ForceRegisterDelegates() {
		return ((T (*)(DeadReplayHUD*))(Il2CppBase() + 0x344165C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(DeadReplayHUD*))(Il2CppBase() + 0x34416F4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(DeadReplayHUD*))(Il2CppBase() + 0x34419DC))(this);
	}
	template <typename T = void> T SetDeadReplayManager(uintptr_t deadReplayMgr) {
		return ((T (*)(DeadReplayHUD*, uintptr_t))(Il2CppBase() + 0x3441CB4))(this, deadReplayMgr);
	}
	template <typename T = void> T SetActive(bool value, bool enableOptimize) {
		return ((T (*)(DeadReplayHUD*, bool, bool))(Il2CppBase() + 0x3441D64))(this, value, enableOptimize);
	}
	template <typename T = void> T ApplyKillerInfo() {
		return ((T (*)(DeadReplayHUD*))(Il2CppBase() + 0x3441EE8))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(DeadReplayHUD*))(Il2CppBase() + 0x3442AEC))(this);
	}
	template <typename T = void> T AdjustGameLogoPosition(uintptr_t gameLogoType) {
		return ((T (*)(DeadReplayHUD*, uintptr_t))(Il2CppBase() + 0x3442758))(this, gameLogoType);
	}
	template <typename T = void> T UpdateAimTargetSprite() {
		return ((T (*)(DeadReplayHUD*))(Il2CppBase() + 0x3444228))(this);
	}
	template <typename T = void> T UpdateLeftTime() {
		return ((T (*)(DeadReplayHUD*))(Il2CppBase() + 0x3444A54))(this);
	}
	template <typename T = void> T TimerFadeIn() {
		return ((T (*)(DeadReplayHUD*))(Il2CppBase() + 0x3444DEC))(this);
	}
	template <typename T = void> T TimerTimeScale() {
		return ((T (*)(DeadReplayHUD*))(Il2CppBase() + 0x3444F08))(this);
	}
	template <typename T = void> T CheckPlayOver() {
		return ((T (*)(DeadReplayHUD*))(Il2CppBase() + 0x3444FB4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(DeadReplayHUD*))(Il2CppBase() + 0x344525C))(this);
	}
	template <typename T = void> T OnSwitchBag() {
		return ((T (*)(DeadReplayHUD*))(Il2CppBase() + 0x3441368))(this);
	}
	template <typename T = void> T OnToggleAttachment() {
		return ((T (*)(DeadReplayHUD*))(Il2CppBase() + 0x3442C40))(this);
	}
	template <typename T = void> T OnToggleAttachmentFinalKill() {
		return ((T (*)(DeadReplayHUD*))(Il2CppBase() + 0x3445324))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ForceRegisterDelegates() {
		return ((T (*)(DeadReplayHUD*))(Il2CppBase() + 0x344573C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(DeadReplayHUD*))(Il2CppBase() + 0x3445744))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(DeadReplayHUD*))(Il2CppBase() + 0x344574C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetActive(bool P0, bool P1) {
		return ((T (*)(DeadReplayHUD*, bool, bool))(Il2CppBase() + 0x3445754))(this, P0, P1);
	}

};

}
