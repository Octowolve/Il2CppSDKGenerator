#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.GunFightGame {

class GunFightBloodScoreHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.GunFightGame", "GunFightBloodScoreHUD"));
	}

	template <typename T = uintptr_t> T& SelfTeamScoreBar() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& OppositeTeamScoreBar() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& ScoreStateLabel() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& WiningColor() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& LosingColor() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& StateBG() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& CommonTimeLabel() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& OverTimeLabel() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& CommonTimeRoot() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& OverTimeRoot() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& OverTimeTipsRoot() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& CommonTimeEffect() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& OverTimeEffect() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& CntRoot() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& SelfCntLabel() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& EnemyCntLabel() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& SelfArrowSprite() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& EnemyArrowSprite() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& m_TimeText() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = float> T& m_OverTimeStartTime() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = float> T& m_OverTimeTotalTime() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = bool> T& m_OverTimeStopCountDown() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = bool> T& m_IsOverTime() {
		return *(T*)((uintptr_t)this + 0xE9);
	}
	template <typename T = bool> T& m_HasOverTimeVoice() {
		return *(T*)((uintptr_t)this + 0xEA);
	}
	template <typename T = bool> T& m_HasFlagCountDownVoice() {
		return *(T*)((uintptr_t)this + 0xEB);
	}
	template <typename T = bool> T& m_HasOverTimeBGM() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = int32_t> T& m_LastSelfCnt() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = int32_t> T& m_LastEnemyCnt() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = float> T& m_EndShowCntTime() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = float> static T& m_TotalShowCntTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& m_TipsBlue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& m_TipsRed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& m_TipsWhite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_lastCountTime() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = bool> T& m_ForbiddentUpdateCnt() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = float> T& m_ForbiddenUpdateCntTime() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = float> static T& m_ForbiddenUpdateCntTotalTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_GFGameInfo() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAllBGM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBloodScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCntLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnExtraTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateExtraTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReconnectComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(GunFightBloodScoreHUD*))(Il2CppBase() + 0x401E30C))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(GunFightBloodScoreHUD*))(Il2CppBase() + 0x401E314))(this);
	}
	template <typename T = uintptr_t> T get_GFGameInfo() {
		return ((T (*)(GunFightBloodScoreHUD*))(Il2CppBase() + 0x401E324))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GunFightBloodScoreHUD*))(Il2CppBase() + 0x401E430))(this);
	}
	template <typename T = void> T OnRoundStart() {
		return ((T (*)(GunFightBloodScoreHUD*))(Il2CppBase() + 0x401ED2C))(this);
	}
	template <typename T = void> T OnRoundEnd() {
		return ((T (*)(GunFightBloodScoreHUD*))(Il2CppBase() + 0x401EF34))(this);
	}
	template <typename T = void> T ResetData() {
		return ((T (*)(GunFightBloodScoreHUD*))(Il2CppBase() + 0x401EFE0))(this);
	}
	template <typename T = void> T StopAllBGM() {
		return ((T (*)(GunFightBloodScoreHUD*))(Il2CppBase() + 0x401F1B8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(GunFightBloodScoreHUD*))(Il2CppBase() + 0x401F350))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(GunFightBloodScoreHUD*))(Il2CppBase() + 0x401F4EC))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(GunFightBloodScoreHUD*))(Il2CppBase() + 0x401F5D0))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(GunFightBloodScoreHUD*, float))(Il2CppBase() + 0x401F5D8))(this, dt);
	}
	template <typename T = void> T UpdateBloodScore() {
		return ((T (*)(GunFightBloodScoreHUD*))(Il2CppBase() + 0x401E4E0))(this);
	}
	template <typename T = void> T UpdateCntLabel(int32_t SelfCnt, int32_t EnemyCnt) {
		return ((T (*)(GunFightBloodScoreHUD*, int32_t, int32_t))(Il2CppBase() + 0x401FC68))(this, SelfCnt, EnemyCnt);
	}
	template <typename T = void> T OnExtraTime(uintptr_t msg) {
		return ((T (*)(GunFightBloodScoreHUD*, uintptr_t))(Il2CppBase() + 0x4020600))(this, msg);
	}
	template <typename T = void> T UpdateExtraTime(uintptr_t msg) {
		return ((T (*)(GunFightBloodScoreHUD*, uintptr_t))(Il2CppBase() + 0x4020814))(this, msg);
	}
	template <typename T = void> T UpdateTime() {
		return ((T (*)(GunFightBloodScoreHUD*))(Il2CppBase() + 0x401F69C))(this);
	}
	template <typename T = void> T OnReconnectComplete(uintptr_t message) {
		return ((T (*)(GunFightBloodScoreHUD*, uintptr_t))(Il2CppBase() + 0x4020D14))(this, message);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(GunFightBloodScoreHUD*))(Il2CppBase() + 0x4020DE0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(GunFightBloodScoreHUD*))(Il2CppBase() + 0x4020DE8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(GunFightBloodScoreHUD*))(Il2CppBase() + 0x4020DF0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(GunFightBloodScoreHUD*, float))(Il2CppBase() + 0x4020DF8))(this, P0);
	}

};

}
