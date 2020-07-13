#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Story {

class SPGameUIScenePrologue
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Story", "SPGameUIScene_Prologue"));
	}

	template <typename T = uintptr_t> T& m_PrologueDroppedPickUpConfirmButton() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& m_KnifeSwitchPrologueBtnHUD() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = uintptr_t> T& m_PrologueUseBtnHUD() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateEndHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnterGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenPausePanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPrologueDroppedPickUpConfirmButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFireModeHUDLock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyPrologueCrossHairPhase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyPrologueCrossHairStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPrologueCrossHairPhaseBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPrologueCrossHairPhaseEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrologueCrossHairStatusChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrologueCrossHairTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyKnifeSwitchPrologueBtnShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyPrologueUseBtnShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyAnimationEventCallBackEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponDamageMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReturnKeyPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = bool> T get_FastThrowWeaponForce() {
		return ((T (*)(SPGameUIScenePrologue*))(Il2CppBase() + 0x3F15A94))(this);
	}
	template <typename T = bool> T get_ScoreHUDEnabled() {
		return ((T (*)(SPGameUIScenePrologue*))(Il2CppBase() + 0x3F15A9C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SPGameUIScenePrologue*))(Il2CppBase() + 0x3F15AA4))(this);
	}
	template <typename T = void> T CreateEndHud() {
		return ((T (*)(SPGameUIScenePrologue*))(Il2CppBase() + 0x3F15FAC))(this);
	}
	template <typename T = void> T OnEnterGame(uintptr_t msg) {
		return ((T (*)(SPGameUIScenePrologue*, uintptr_t))(Il2CppBase() + 0x3F16044))(this, msg);
	}
	template <typename T = void> T OpenPausePanel() {
		return ((T (*)(SPGameUIScenePrologue*))(Il2CppBase() + 0x3F161B8))(this);
	}
	template <typename T = void> T ShowPrologueDroppedPickUpConfirmButton(uintptr_t msg) {
		return ((T (*)(SPGameUIScenePrologue*, uintptr_t))(Il2CppBase() + 0x3F16280))(this, msg);
	}
	template <typename T = void> T OnFireModeHUDLock(uintptr_t msg) {
		return ((T (*)(SPGameUIScenePrologue*, uintptr_t))(Il2CppBase() + 0x3F1651C))(this, msg);
	}
	template <typename T = void> T OnRoundEnded(uintptr_t msg) {
		return ((T (*)(SPGameUIScenePrologue*, uintptr_t))(Il2CppBase() + 0x3F1676C))(this, msg);
	}
	template <typename T = void> T OnNotifyPrologueCrossHairPhase(uintptr_t msg) {
		return ((T (*)(SPGameUIScenePrologue*, uintptr_t))(Il2CppBase() + 0x3F16B00))(this, msg);
	}
	template <typename T = void> T OnNotifyPrologueCrossHairStatus(uintptr_t msg) {
		return ((T (*)(SPGameUIScenePrologue*, uintptr_t))(Il2CppBase() + 0x3F16E44))(this, msg);
	}
	template <typename T = void> T OnPrologueCrossHairPhaseBegin() {
		return ((T (*)(SPGameUIScenePrologue*))(Il2CppBase() + 0x3F16CA8))(this);
	}
	template <typename T = void> T OnPrologueCrossHairPhaseEnd() {
		return ((T (*)(SPGameUIScenePrologue*))(Il2CppBase() + 0x3F16D50))(this);
	}
	template <typename T = void> T PrologueCrossHairStatusChange(uintptr_t status) {
		return ((T (*)(SPGameUIScenePrologue*, uintptr_t))(Il2CppBase() + 0x3F16F58))(this, status);
	}
	template <typename T = void> T PrologueCrossHairTips(bool show, Il2CppString* key, Il2CppString* targetname, Il2CppVector3 targetOffset, uintptr_t arrowType) {
		return ((T (*)(SPGameUIScenePrologue*, bool, Il2CppString*, Il2CppString*, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x3F17238))(this, show, key, targetname, targetOffset, arrowType);
	}
	template <typename T = void> T OnNotifyKnifeSwitchPrologueBtnShow(uintptr_t Msg) {
		return ((T (*)(SPGameUIScenePrologue*, uintptr_t))(Il2CppBase() + 0x3F176A8))(this, Msg);
	}
	template <typename T = void> T OnNotifyPrologueUseBtnShow(uintptr_t Msg) {
		return ((T (*)(SPGameUIScenePrologue*, uintptr_t))(Il2CppBase() + 0x3F17A60))(this, Msg);
	}
	template <typename T = void> T OnNotifyAnimationEventCallBackEnable(uintptr_t Msg) {
		return ((T (*)(SPGameUIScenePrologue*, uintptr_t))(Il2CppBase() + 0x3F17C94))(this, Msg);
	}
	template <typename T = void> T OnWeaponDamageMove(uintptr_t Msg) {
		return ((T (*)(SPGameUIScenePrologue*, uintptr_t))(Il2CppBase() + 0x3F17E54))(this, Msg);
	}
	template <typename T = bool> T OnReturnKeyPress() {
		return ((T (*)(SPGameUIScenePrologue*))(Il2CppBase() + 0x3F1802C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SPGameUIScenePrologue*))(Il2CppBase() + 0x3F18134))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CreateEndHud() {
		return ((T (*)(SPGameUIScenePrologue*))(Il2CppBase() + 0x3F18138))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnterGame(uintptr_t P0) {
		return ((T (*)(SPGameUIScenePrologue*, uintptr_t))(Il2CppBase() + 0x3F182A8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OpenPausePanel() {
		return ((T (*)(SPGameUIScenePrologue*))(Il2CppBase() + 0x3F186D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnded(uintptr_t P0) {
		return ((T (*)(SPGameUIScenePrologue*, uintptr_t))(Il2CppBase() + 0x3F186D8))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_OnReturnKeyPress() {
		return ((T (*)(SPGameUIScenePrologue*))(Il2CppBase() + 0x3F186E0))(this);
	}

};

}
