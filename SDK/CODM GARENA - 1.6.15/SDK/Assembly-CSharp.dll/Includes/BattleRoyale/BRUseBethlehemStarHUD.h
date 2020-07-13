#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRUseBethlehemStarHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRUseBethlehemStarHUD"));
	}

	template <typename T = float> T& WaiteSwithWeaponTime() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& UseBtn() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& hasStarSprite() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& withoutStarSprite() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& bHasStar() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& m_HideBtnTime() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& m_WaitingSwithWeaponTime() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& m_BethlehemStarItemID() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppString*> T& USE_BETHLEHEMSTAR_FAILED() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUIBanClickType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBagChangeState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Hide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUseItemFailed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUseBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoUseBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestUseBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutoSetBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBtnActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = uintptr_t> T get_BrEventBtnType() {
		return ((T (*)(BRUseBethlehemStarHUD*))(Il2CppBase() + 0x263CD94))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(BRUseBethlehemStarHUD*))(Il2CppBase() + 0x263CD9C))(this);
	}
	template <typename T = uintptr_t> T GetUIBanClickType() {
		return ((T (*)(BRUseBethlehemStarHUD*))(Il2CppBase() + 0x263CDA4))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(BRUseBethlehemStarHUD*, float))(Il2CppBase() + 0x263CE48))(this, dt);
	}
	template <typename T = void> T WillClose() {
		return ((T (*)(BRUseBethlehemStarHUD*))(Il2CppBase() + 0x263D120))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BRUseBethlehemStarHUD*))(Il2CppBase() + 0x263D1DC))(this);
	}
	template <typename T = void> T OnBagChangeState(uintptr_t baseEventMsg) {
		return ((T (*)(BRUseBethlehemStarHUD*, uintptr_t))(Il2CppBase() + 0x263D3E8))(this, baseEventMsg);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRUseBethlehemStarHUD*))(Il2CppBase() + 0x263D5E4))(this);
	}
	template <typename T = void> T ForceRegisterDelegates() {
		return ((T (*)(BRUseBethlehemStarHUD*))(Il2CppBase() + 0x263D72C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRUseBethlehemStarHUD*))(Il2CppBase() + 0x263D7C4))(this);
	}
	template <typename T = bool> T OnGamepadBtn() {
		return ((T (*)(BRUseBethlehemStarHUD*))(Il2CppBase() + 0x263D900))(this);
	}
	template <typename T = void> T Show(int32_t itemID, bool hasStar) {
		return ((T (*)(BRUseBethlehemStarHUD*, int32_t, bool))(Il2CppBase() + 0x263DBE8))(this, itemID, hasStar);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(BRUseBethlehemStarHUD*))(Il2CppBase() + 0x263DCCC))(this);
	}
	template <typename T = void> T OnUseItemFailed() {
		return ((T (*)(BRUseBethlehemStarHUD*))(Il2CppBase() + 0x263DD7C))(this);
	}
	template <typename T = void> T OnUseBtn() {
		return ((T (*)(BRUseBethlehemStarHUD*))(Il2CppBase() + 0x263DA48))(this);
	}
	template <typename T = void> T DoUseBtn(bool checkClickBtn) {
		return ((T (*)(BRUseBethlehemStarHUD*, bool))(Il2CppBase() + 0x263D00C))(this, checkClickBtn);
	}
	template <typename T = void> T RequestUseBtn() {
		return ((T (*)(BRUseBethlehemStarHUD*))(Il2CppBase() + 0x263DF18))(this);
	}
	template <typename T = void> T ChangeBtnState() {
		return ((T (*)(BRUseBethlehemStarHUD*))(Il2CppBase() + 0x263E08C))(this);
	}
	template <typename T = void> T AutoSetBtnState(bool bHasStar) {
		return ((T (*)(BRUseBethlehemStarHUD*, bool))(Il2CppBase() + 0x263D4DC))(this, bHasStar);
	}
	template <typename T = void> T SetBtnActive(bool showUseBtn) {
		return ((T (*)(BRUseBethlehemStarHUD*, bool))(Il2CppBase() + 0x263DE24))(this, showUseBtn);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetUIBanClickType() {
		return ((T (*)(BRUseBethlehemStarHUD*))(Il2CppBase() + 0x263E124))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRUseBethlehemStarHUD*, float))(Il2CppBase() + 0x263E12C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_WillClose() {
		return ((T (*)(BRUseBethlehemStarHUD*))(Il2CppBase() + 0x263E134))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(BRUseBethlehemStarHUD*))(Il2CppBase() + 0x263E13C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRUseBethlehemStarHUD*))(Il2CppBase() + 0x263E144))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ForceRegisterDelegates() {
		return ((T (*)(BRUseBethlehemStarHUD*))(Il2CppBase() + 0x263E14C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRUseBethlehemStarHUD*))(Il2CppBase() + 0x263E154))(this);
	}

};

}
