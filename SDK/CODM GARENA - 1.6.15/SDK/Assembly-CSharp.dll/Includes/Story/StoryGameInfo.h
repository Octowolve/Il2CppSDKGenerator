#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Story {

class StoryGameInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Story", "StoryGameInfo"));
	}

	template <typename T = bool> T& IsNeedGuide() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = bool> T& IsNeedMonsterIntro() {
		return *(T*)((uintptr_t)this + 0xF1);
	}
	template <typename T = bool> T& m_IsTimeCounting() {
		return *(T*)((uintptr_t)this + 0xF2);
	}
	template <typename T = float> T& m_MatchLeftTime() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = bool> T& m_SpecialFireAmmunition() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = float> T& m_WeaponCurrentAmmoScale() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = float> T& m_WeaponCarriedAmmoScale() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = bool> T& m_IsBeginDamageState_Prologue() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = bool> T& m_IsEndDamageState_Prologue() {
		return *(T*)((uintptr_t)this + 0x105);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckEndGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnExitMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEndMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartTimeCounting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyShouldIntroduce() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GiveWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddAllInventory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Slomo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSlomo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = bool> T get_IsTimeCounting() {
		return ((T (*)(StoryGameInfo*))(Il2CppBase() + 0x3F1D45C))(this);
	}
	template <typename T = float> T get_MatchLeftTime() {
		return ((T (*)(StoryGameInfo*))(Il2CppBase() + 0x3F1351C))(this);
	}
	template <typename T = void> T set_MatchLeftTime(float value) {
		return ((T (*)(StoryGameInfo*, float))(Il2CppBase() + 0x3F13950))(this, value);
	}
	template <typename T = void> T set_SpecialFireAmmunition(bool value) {
		return ((T (*)(StoryGameInfo*, bool))(Il2CppBase() + 0x3F1D464))(this, value);
	}
	template <typename T = bool> T get_SpecialFireAmmunition() {
		return ((T (*)(StoryGameInfo*))(Il2CppBase() + 0x3F1D46C))(this);
	}
	template <typename T = float> T get_WeaponCurrentAmmoScale() {
		return ((T (*)(StoryGameInfo*))(Il2CppBase() + 0x3F1D474))(this);
	}
	template <typename T = void> T set_WeaponCurrentAmmoScale(float value) {
		return ((T (*)(StoryGameInfo*, float))(Il2CppBase() + 0x3F1D47C))(this, value);
	}
	template <typename T = float> T get_WeaponCarriedAmmoScale() {
		return ((T (*)(StoryGameInfo*))(Il2CppBase() + 0x3F1D484))(this);
	}
	template <typename T = void> T set_WeaponCarriedAmmoScale(float value) {
		return ((T (*)(StoryGameInfo*, float))(Il2CppBase() + 0x3F1D48C))(this, value);
	}
	template <typename T = bool> T get_CanQuickSwitchWeapon() {
		return ((T (*)(StoryGameInfo*))(Il2CppBase() + 0x3F1D494))(this);
	}
	template <typename T = bool> T get_CanThrowWeapon() {
		return ((T (*)(StoryGameInfo*))(Il2CppBase() + 0x3F1D49C))(this);
	}
	template <typename T = bool> T get_IsBeginDamageState_Prologue() {
		return ((T (*)(StoryGameInfo*))(Il2CppBase() + 0x3F1D4A4))(this);
	}
	template <typename T = void> T set_IsBeginDamageState_Prologue(bool value) {
		return ((T (*)(StoryGameInfo*, bool))(Il2CppBase() + 0x3F1D4AC))(this, value);
	}
	template <typename T = bool> T get_IsEndDamageState_Prologue() {
		return ((T (*)(StoryGameInfo*))(Il2CppBase() + 0x3F1D4B4))(this);
	}
	template <typename T = void> T set_IsEndDamageState_Prologue(bool value) {
		return ((T (*)(StoryGameInfo*, bool))(Il2CppBase() + 0x3F1D4BC))(this, value);
	}
	template <typename T = bool> T get_ShouldDisableAimAssistance() {
		return ((T (*)(StoryGameInfo*))(Il2CppBase() + 0x3F1D4C4))(this);
	}
	template <typename T = bool> T CheckEndGame() {
		return ((T (*)(StoryGameInfo*))(Il2CppBase() + 0x3F13D84))(this);
	}
	template <typename T = void> T OnStartMatch() {
		return ((T (*)(StoryGameInfo*))(Il2CppBase() + 0x3F135D8))(this);
	}
	template <typename T = void> T OnExitMatch() {
		return ((T (*)(StoryGameInfo*))(Il2CppBase() + 0x3F1D4CC))(this);
	}
	template <typename T = void> T OnEndMatch() {
		return ((T (*)(StoryGameInfo*))(Il2CppBase() + 0x3F14C68))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(StoryGameInfo*, float))(Il2CppBase() + 0x3F13B38))(this, deltaTime);
	}
	template <typename T = void> T StartTimeCounting() {
		return ((T (*)(StoryGameInfo*))(Il2CppBase() + 0x3F18BC0))(this);
	}
	template <typename T = bool> T NotifyShouldIntroduce(uintptr_t aiPawn) {
		return ((T (*)(StoryGameInfo*, uintptr_t))(Il2CppBase() + 0x3F1D574))(this, aiPawn);
	}
	template <typename T = bool> T GiveWeapon(uintptr_t inPawn) {
		return ((T (*)(StoryGameInfo*, uintptr_t))(Il2CppBase() + 0x3F1D61C))(this, inPawn);
	}
	template <typename T = bool> T AddAllInventory(uintptr_t inPawn) {
		return ((T (*)(StoryGameInfo*, uintptr_t))(Il2CppBase() + 0x3F1D6C4))(this, inPawn);
	}
	template <typename T = void> T Slomo(float inTimeScale, uintptr_t inCallBack, float inDelayRealTime) {
		return ((T (*)(StoryGameInfo*, float, uintptr_t, float))(Il2CppBase() + 0x3F1D76C))(this, inTimeScale, inCallBack, inDelayRealTime);
	}
	template <typename T = uintptr_t> T StartSlomo(float inTimeScale, uintptr_t inCallBack, float inDelayRealTime) {
		return ((T (*)(StoryGameInfo*, float, uintptr_t, float))(Il2CppBase() + 0x3F1D8CC))(this, inTimeScale, inCallBack, inDelayRealTime);
	}
	template <typename T = bool> T xLuaBaseProxy_CheckEndGame() {
		return ((T (*)(StoryGameInfo*))(Il2CppBase() + 0x3F1D9F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnStartMatch() {
		return ((T (*)(StoryGameInfo*))(Il2CppBase() + 0x3F1D9FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnExitMatch() {
		return ((T (*)(StoryGameInfo*))(Il2CppBase() + 0x3F1DA04))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEndMatch() {
		return ((T (*)(StoryGameInfo*))(Il2CppBase() + 0x3F1DA0C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(StoryGameInfo*, float))(Il2CppBase() + 0x3F1DA14))(this, P0);
	}

};

}
