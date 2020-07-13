#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.ZM {

class ZMGameUIScene
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.ZM", "ZMGameUIScene"));
	}

	template <typename T = uintptr_t> T& m_ZMZombieDescHUD() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = uintptr_t> T& m_ZMComicHUD() {
		return *(T*)((uintptr_t)this + 0x1EC);
	}
	template <typename T = bool> T& m_DuringUIFadeIn() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = bool> T& m_EnteredBattleScene() {
		return *(T*)((uintptr_t)this + 0x1F1);
	}
	template <typename T = float> static T& FADE_IN_BLACK_SCREEN_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& SHOW_MODIFIER_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& FADE_IN_TIME_UI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& lastUpdateDSTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyEnterBattleScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpeningUIProcess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FadeInBlackScreen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FadInBlackScreen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FadeInUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FadeInUI_Tween() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceFinishFadeIn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUIRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSettlement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMapChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerTakedDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfNeedVoice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = bool> T get_EnableUIFadeIn() {
		return ((T (*)(ZMGameUIScene*))(Il2CppBase() + 0x4060CA4))(this);
	}
	template <typename T = bool> T get_DuringUIFadeIn() {
		return ((T (*)(ZMGameUIScene*))(Il2CppBase() + 0x4060CAC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ZMGameUIScene*))(Il2CppBase() + 0x4060CB4))(this);
	}
	template <typename T = void> T OnNotifyEnterBattleScene(uintptr_t msg) {
		return ((T (*)(ZMGameUIScene*, uintptr_t))(Il2CppBase() + 0x4060F14))(this, msg);
	}
	template <typename T = void> T OpeningUIProcess() {
		return ((T (*)(ZMGameUIScene*))(Il2CppBase() + 0x40610F0))(this);
	}
	template <typename T = void> T FadeInBlackScreen() {
		return ((T (*)(ZMGameUIScene*))(Il2CppBase() + 0x40615B8))(this);
	}
	template <typename T = void> T FadInBlackScreen() {
		return ((T (*)(ZMGameUIScene*))(Il2CppBase() + 0x406176C))(this);
	}
	template <typename T = void> T FadeInUI(float delay) {
		return ((T (*)(ZMGameUIScene*, float))(Il2CppBase() + 0x4061844))(this, delay);
	}
	template <typename T = void> T FadeInUI_Tween() {
		return ((T (*)(ZMGameUIScene*))(Il2CppBase() + 0x40619AC))(this);
	}
	template <typename T = void> T ForceFinishFadeIn() {
		return ((T (*)(ZMGameUIScene*))(Il2CppBase() + 0x4061D00))(this);
	}
	template <typename T = uintptr_t> T GetUIRoot() {
		return ((T (*)(ZMGameUIScene*))(Il2CppBase() + 0x40613C4))(this);
	}
	template <typename T = void> T OnSettlement(uintptr_t Msg) {
		return ((T (*)(ZMGameUIScene*, uintptr_t))(Il2CppBase() + 0x4061F74))(this, Msg);
	}
	template <typename T = void> T OnMapChange(uintptr_t msg) {
		return ((T (*)(ZMGameUIScene*, uintptr_t))(Il2CppBase() + 0x406289C))(this, msg);
	}
	template <typename T = void> T OnLocalPlayerTakedDamage(uintptr_t msg) {
		return ((T (*)(ZMGameUIScene*, uintptr_t))(Il2CppBase() + 0x4062980))(this, msg);
	}
	template <typename T = bool> T IfNeedVoice() {
		return ((T (*)(ZMGameUIScene*))(Il2CppBase() + 0x4062CA0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ZMGameUIScene*))(Il2CppBase() + 0x4062D74))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyEnterBattleScene(uintptr_t P0) {
		return ((T (*)(ZMGameUIScene*, uintptr_t))(Il2CppBase() + 0x4062D7C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ForceFinishFadeIn() {
		return ((T (*)(ZMGameUIScene*))(Il2CppBase() + 0x4062D84))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnMapChange(uintptr_t P0) {
		return ((T (*)(ZMGameUIScene*, uintptr_t))(Il2CppBase() + 0x4062D8C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnLocalPlayerTakedDamage(uintptr_t P0) {
		return ((T (*)(ZMGameUIScene*, uintptr_t))(Il2CppBase() + 0x4062D94))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_IfNeedVoice() {
		return ((T (*)(ZMGameUIScene*))(Il2CppBase() + 0x4062D9C))(this);
	}

};

}
