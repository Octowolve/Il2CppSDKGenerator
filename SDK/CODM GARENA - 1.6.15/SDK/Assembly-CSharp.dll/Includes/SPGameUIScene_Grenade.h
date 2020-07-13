#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SPGameUISceneGrenade
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SPGameUIScene_Grenade"));
	}

	template <typename T = uintptr_t> T& m_SPGrenadeEndRoundHud() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = bool> T& m_IsEndMatch() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = int32_t> T& m_RoundEndNum() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnterGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStarted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyUpdateTaskProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyPawnAvatarChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyShowCombatHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyHideCombatHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundTimeChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = bool> T get_IsShowDomSignboardHUD() {
		return ((T (*)(SPGameUISceneGrenade*))(Il2CppBase() + 0x391B5F0))(this);
	}
	template <typename T = bool> T get_IsShowRoundNumHud() {
		return ((T (*)(SPGameUISceneGrenade*))(Il2CppBase() + 0x391B5F8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SPGameUISceneGrenade*))(Il2CppBase() + 0x391B600))(this);
	}
	template <typename T = void> T OnEnterGame(uintptr_t msg) {
		return ((T (*)(SPGameUISceneGrenade*, uintptr_t))(Il2CppBase() + 0x391B9DC))(this, msg);
	}
	template <typename T = void> T OnRoundStarted(uintptr_t msg) {
		return ((T (*)(SPGameUISceneGrenade*, uintptr_t))(Il2CppBase() + 0x391BF9C))(this, msg);
	}
	template <typename T = void> T OnRoundEnded(uintptr_t msg) {
		return ((T (*)(SPGameUISceneGrenade*, uintptr_t))(Il2CppBase() + 0x391C118))(this, msg);
	}
	template <typename T = void> T NotifyUpdateTaskProgress(uintptr_t Msg) {
		return ((T (*)(SPGameUISceneGrenade*, uintptr_t))(Il2CppBase() + 0x391C56C))(this, Msg);
	}
	template <typename T = void> T OnNotifyPawnAvatarChanged(uintptr_t msg) {
		return ((T (*)(SPGameUISceneGrenade*, uintptr_t))(Il2CppBase() + 0x391CCB0))(this, msg);
	}
	template <typename T = void> T OnNotifyShowCombatHud(uintptr_t msg) {
		return ((T (*)(SPGameUISceneGrenade*, uintptr_t))(Il2CppBase() + 0x391D39C))(this, msg);
	}
	template <typename T = void> T OnNotifyHideCombatHud(uintptr_t msg) {
		return ((T (*)(SPGameUISceneGrenade*, uintptr_t))(Il2CppBase() + 0x391D4B0))(this, msg);
	}
	template <typename T = void> T OnRoundTimeChanged(uintptr_t msg) {
		return ((T (*)(SPGameUISceneGrenade*, uintptr_t))(Il2CppBase() + 0x391D5C0))(this, msg);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SPGameUISceneGrenade*))(Il2CppBase() + 0x391D728))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnterGame(uintptr_t P0) {
		return ((T (*)(SPGameUISceneGrenade*, uintptr_t))(Il2CppBase() + 0x391D72C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundStarted(uintptr_t P0) {
		return ((T (*)(SPGameUISceneGrenade*, uintptr_t))(Il2CppBase() + 0x391D730))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnded(uintptr_t P0) {
		return ((T (*)(SPGameUISceneGrenade*, uintptr_t))(Il2CppBase() + 0x391D734))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_NotifyUpdateTaskProgress(uintptr_t P0) {
		return ((T (*)(SPGameUISceneGrenade*, uintptr_t))(Il2CppBase() + 0x391D738))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyPawnAvatarChanged(uintptr_t P0) {
		return ((T (*)(SPGameUISceneGrenade*, uintptr_t))(Il2CppBase() + 0x391D73C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyShowCombatHud(uintptr_t P0) {
		return ((T (*)(SPGameUISceneGrenade*, uintptr_t))(Il2CppBase() + 0x391D740))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyHideCombatHud(uintptr_t P0) {
		return ((T (*)(SPGameUISceneGrenade*, uintptr_t))(Il2CppBase() + 0x391D744))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundTimeChanged(uintptr_t P0) {
		return ((T (*)(SPGameUISceneGrenade*, uintptr_t))(Il2CppBase() + 0x391D748))(this, P0);
	}

};

}
