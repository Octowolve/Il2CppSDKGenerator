#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.INFGame {

class InfectGameTipHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.INFGame", "InfectGameTipHUD"));
	}

	template <typename T = uintptr_t> T& tipRoot() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& countDownRoot() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& countDown() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& countDowntipMsg() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& delayedCountDownTime() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& InfectedEffect() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& countDownTipsRoot() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& HumanGameTips() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& HumanGameCampInfo() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& HumanGameTargetInfo() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& InfectedGameTips() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& InfectedGameCampInfo() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& InfectedGameTargetInfo() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& HumanInfectedTips() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& HumanInfectedLabel() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppString*> static T& SurvivorCampIconName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& InfectedCampIconName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_FirstShowFlag() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& m_SelfCampChanged() {
		return *(T*)((uintptr_t)this + 0xB9);
	}
	template <typename T = uintptr_t> T& infectGameInfo() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = void*> T& tipQueue() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FirstHumanMutatePrepare() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayedCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCampChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowNextTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideMsgTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MutateCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FirstHumanMutateReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFirstInfected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = uintptr_t> T get_m_INFGameInfo() {
		return ((T (*)(InfectGameTipHUD*))(Il2CppBase() + 0x403CCC8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(InfectGameTipHUD*))(Il2CppBase() + 0x403CDD4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(InfectGameTipHUD*))(Il2CppBase() + 0x403CF70))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(InfectGameTipHUD*, float))(Il2CppBase() + 0x403D054))(this, dt);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(InfectGameTipHUD*))(Il2CppBase() + 0x403D450))(this);
	}
	template <typename T = void> T FirstHumanMutatePrepare(uintptr_t Msg) {
		return ((T (*)(InfectGameTipHUD*, uintptr_t))(Il2CppBase() + 0x403D458))(this, Msg);
	}
	template <typename T = void> T DelayedCountDown() {
		return ((T (*)(InfectGameTipHUD*))(Il2CppBase() + 0x403D564))(this);
	}
	template <typename T = void> T OnCampChange(uintptr_t Msg) {
		return ((T (*)(InfectGameTipHUD*, uintptr_t))(Il2CppBase() + 0x403DAC0))(this, Msg);
	}
	template <typename T = void> T AddTip(Il2CppString* tipMsg, bool survivorCamp, float msgDuration) {
		return ((T (*)(InfectGameTipHUD*, Il2CppString*, bool, float))(Il2CppBase() + 0x403D300))(this, tipMsg, survivorCamp, msgDuration);
	}
	template <typename T = void> T ShowNextTip() {
		return ((T (*)(InfectGameTipHUD*))(Il2CppBase() + 0x403DD10))(this);
	}
	template <typename T = void> T HideMsgTip() {
		return ((T (*)(InfectGameTipHUD*))(Il2CppBase() + 0x403DF2C))(this);
	}
	template <typename T = void> T MutateCountDown() {
		return ((T (*)(InfectGameTipHUD*))(Il2CppBase() + 0x403D6D0))(this);
	}
	template <typename T = void> T FirstHumanMutateReady() {
		return ((T (*)(InfectGameTipHUD*))(Il2CppBase() + 0x403E084))(this);
	}
	template <typename T = void> T HideTip() {
		return ((T (*)(InfectGameTipHUD*))(Il2CppBase() + 0x403E578))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(InfectGameTipHUD*))(Il2CppBase() + 0x403E784))(this);
	}
	template <typename T = void> T OnFirstInfected(uintptr_t Msg) {
		return ((T (*)(InfectGameTipHUD*, uintptr_t))(Il2CppBase() + 0x403E790))(this, Msg);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(InfectGameTipHUD*))(Il2CppBase() + 0x403E8B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(InfectGameTipHUD*))(Il2CppBase() + 0x403E8BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(InfectGameTipHUD*, float))(Il2CppBase() + 0x403E8C4))(this, P0);
	}

};

}
