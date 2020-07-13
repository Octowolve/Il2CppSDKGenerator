#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Story {

class SPGameUISceneTutorial
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Story", "SPGameUIScene_Tutorial"));
	}

	template <typename T = uintptr_t> T& m_PVERoundOverHUD() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = Il2CppString*> T& m_DialogContent() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = bool> T& m_ShowHitTimes() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& m_AudioPlayer() {
		return *(T*)((uintptr_t)this + 0x1A4);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnterDroppedPickUpTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeaveDroppedPickUpTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlaySoundQueue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMissileControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMissileExploded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReturnKeyPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGiveKillStreakSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMapChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = bool> T get_ScoreHUDEnabled() {
		return ((T (*)(SPGameUISceneTutorial*))(Il2CppBase() + 0x3F190F8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SPGameUISceneTutorial*))(Il2CppBase() + 0x3F15D94))(this);
	}
	template <typename T = void> T CreateEndHud() {
		return ((T (*)(SPGameUISceneTutorial*))(Il2CppBase() + 0x3F1813C))(this);
	}
	template <typename T = void> T OnEnterGame(uintptr_t msg) {
		return ((T (*)(SPGameUISceneTutorial*, uintptr_t))(Il2CppBase() + 0x3F182AC))(this, msg);
	}
	template <typename T = void> T OnEnterDroppedPickUpTrigger(uintptr_t inMsg) {
		return ((T (*)(SPGameUISceneTutorial*, uintptr_t))(Il2CppBase() + 0x3F19100))(this, inMsg);
	}
	template <typename T = void> T OnLeaveDroppedPickUpTrigger(uintptr_t inMsg) {
		return ((T (*)(SPGameUISceneTutorial*, uintptr_t))(Il2CppBase() + 0x3F191B4))(this, inMsg);
	}
	template <typename T = void> T OnPlaySoundQueue(uintptr_t msg) {
		return ((T (*)(SPGameUISceneTutorial*, uintptr_t))(Il2CppBase() + 0x3F19268))(this, msg);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(SPGameUISceneTutorial*, float))(Il2CppBase() + 0x3F19558))(this, deltaTime);
	}
	template <typename T = void> T OnMissileControl(uintptr_t msg) {
		return ((T (*)(SPGameUISceneTutorial*, uintptr_t))(Il2CppBase() + 0x3F19630))(this, msg);
	}
	template <typename T = void> T OnMissileExploded(uintptr_t msg) {
		return ((T (*)(SPGameUISceneTutorial*, uintptr_t))(Il2CppBase() + 0x3F1986C))(this, msg);
	}
	template <typename T = bool> T OnReturnKeyPress() {
		return ((T (*)(SPGameUISceneTutorial*))(Il2CppBase() + 0x3F186E4))(this);
	}
	template <typename T = void> T OnGiveKillStreakSkill(uintptr_t msg) {
		return ((T (*)(SPGameUISceneTutorial*, uintptr_t))(Il2CppBase() + 0x3F19920))(this, msg);
	}
	template <typename T = void> T OnMapChange(uintptr_t msg) {
		return ((T (*)(SPGameUISceneTutorial*, uintptr_t))(Il2CppBase() + 0x3F19AD4))(this, msg);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SPGameUISceneTutorial*))(Il2CppBase() + 0x3F19BFC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnterGame(uintptr_t P0) {
		return ((T (*)(SPGameUISceneTutorial*, uintptr_t))(Il2CppBase() + 0x3F19C04))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnterDroppedPickUpTrigger(uintptr_t P0) {
		return ((T (*)(SPGameUISceneTutorial*, uintptr_t))(Il2CppBase() + 0x3F19C0C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnLeaveDroppedPickUpTrigger(uintptr_t P0) {
		return ((T (*)(SPGameUISceneTutorial*, uintptr_t))(Il2CppBase() + 0x3F19C14))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(SPGameUISceneTutorial*, float))(Il2CppBase() + 0x3F19C1C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnMissileControl(uintptr_t P0) {
		return ((T (*)(SPGameUISceneTutorial*, uintptr_t))(Il2CppBase() + 0x3F19C24))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnMissileExploded(uintptr_t P0) {
		return ((T (*)(SPGameUISceneTutorial*, uintptr_t))(Il2CppBase() + 0x3F19C2C))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_OnReturnKeyPress() {
		return ((T (*)(SPGameUISceneTutorial*))(Il2CppBase() + 0x3F19C34))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnMapChange(uintptr_t P0) {
		return ((T (*)(SPGameUISceneTutorial*, uintptr_t))(Il2CppBase() + 0x3F19C3C))(this, P0);
	}

};

}
