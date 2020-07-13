#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace TimiAudio.AudioLogic {

class GunFightGameAudioLogic
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "TimiAudio.AudioLogic", "GunFightGameAudioLogic"));
	}

	template <typename T = Il2CppString*> T& m_OneMore() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& m_TwoMore() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& m_FlagAppear() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& m_FlagCountDown() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& m_FlagCountDownStop() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& m_TeammateDie() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& m_WpnRefresh() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& m_CommonCountDown() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& m_OverTimeCountDown() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& m_OverTimeCountDownStop() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& m_CommonCountDownBGM() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& m_CommonCountDownBGMStop() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterEventHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnregisterEventHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOneMoreToWin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTwoMoreToWin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGameStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGameTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFlagAppear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFlagCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFlagCountDownStop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTeammateDie() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWpnRefresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCommonCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOverTimeCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOverTimeCountDownStop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartOverTimeBGM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStopOverTimeBGM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnStartMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = void> T RegisterEventHandler() {
		return ((T (*)(GunFightGameAudioLogic*))(Il2CppBase() + 0x466BC18))(this);
	}
	template <typename T = void> T UnregisterEventHandler() {
		return ((T (*)(GunFightGameAudioLogic*))(Il2CppBase() + 0x466C0EC))(this);
	}
	template <typename T = void> T OnOneMoreToWin(uintptr_t pMsg) {
		return ((T (*)(GunFightGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x466C2E0))(this, pMsg);
	}
	template <typename T = void> T OnTwoMoreToWin(uintptr_t pMsg) {
		return ((T (*)(GunFightGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x466C400))(this, pMsg);
	}
	template <typename T = void> T OnGameStart(uintptr_t pMsg) {
		return ((T (*)(GunFightGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x466C520))(this, pMsg);
	}
	template <typename T = void> T OnGameTarget(uintptr_t pMsg) {
		return ((T (*)(GunFightGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x466C6CC))(this, pMsg);
	}
	template <typename T = void> T OnFlagAppear(uintptr_t pMsg) {
		return ((T (*)(GunFightGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x466C800))(this, pMsg);
	}
	template <typename T = void> T OnFlagCountDown(uintptr_t pMsg) {
		return ((T (*)(GunFightGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x466C920))(this, pMsg);
	}
	template <typename T = void> T OnFlagCountDownStop(uintptr_t pMsg) {
		return ((T (*)(GunFightGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x466CA14))(this, pMsg);
	}
	template <typename T = void> T OnTeammateDie(uintptr_t pMsg) {
		return ((T (*)(GunFightGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x466CB08))(this, pMsg);
	}
	template <typename T = void> T OnWpnRefresh(uintptr_t pMsg) {
		return ((T (*)(GunFightGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x466CC28))(this, pMsg);
	}
	template <typename T = void> T OnCommonCountDown(uintptr_t pMsg) {
		return ((T (*)(GunFightGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x466CD48))(this, pMsg);
	}
	template <typename T = void> T OnOverTimeCountDown(uintptr_t pMsg) {
		return ((T (*)(GunFightGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x466CE68))(this, pMsg);
	}
	template <typename T = void> T OnOverTimeCountDownStop(uintptr_t pMsg) {
		return ((T (*)(GunFightGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x466CF5C))(this, pMsg);
	}
	template <typename T = void> T OnStartOverTimeBGM(uintptr_t pMsg) {
		return ((T (*)(GunFightGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x466D050))(this, pMsg);
	}
	template <typename T = void> T OnStopOverTimeBGM(uintptr_t pMsg) {
		return ((T (*)(GunFightGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x466D144))(this, pMsg);
	}
	template <typename T = void> T _OnStartMatch() {
		return ((T (*)(GunFightGameAudioLogic*))(Il2CppBase() + 0x466D238))(this);
	}
	template <typename T = void> static T _OnStartMatchm__0() {
		return ((T (*)(void *))(Il2CppBase() + 0x466D4A8))(0);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterEventHandler() {
		return ((T (*)(GunFightGameAudioLogic*))(Il2CppBase() + 0x466D590))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnregisterEventHandler() {
		return ((T (*)(GunFightGameAudioLogic*))(Il2CppBase() + 0x466D594))(this);
	}
	template <typename T = void> T xLuaBaseProxy__OnStartMatch() {
		return ((T (*)(GunFightGameAudioLogic*))(Il2CppBase() + 0x466D598))(this);
	}

};

}
