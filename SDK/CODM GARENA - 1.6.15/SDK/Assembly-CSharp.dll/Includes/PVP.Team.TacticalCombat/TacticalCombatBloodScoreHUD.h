#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.TacticalCombat {

class TacticalCombatBloodScoreHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.TacticalCombat", "TacticalCombatBloodScoreHUD"));
	}

	template <typename T = uintptr_t> T& SelfTeamScoreBar() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& OppositeTeamScoreBar() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& LosingState() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& WinningState() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& TimeBarList() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& DataPackArrivedTips() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& DataPackLostTips() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& EnemyHaveDataPackTips() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& WeHaveDataPackTips() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = float> T& m_GameLeftTime() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& m_GameStarted() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& mBombGameClass() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& m_CurTimeItemState() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = bool> T& m_ShowTips() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& m_TipsDuration() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = float> static T& m_TipsTotalTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_TCGameUIScene() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& m_TCGameInfo() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBloodScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeTimeBarState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisActiveAllTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryShowTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ChangeTimeBarState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGameLeftTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReconnectComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = void> T StartCountDown() {
		return ((T (*)(TacticalCombatBloodScoreHUD*))(Il2CppBase() + 0x34CBB88))(this);
	}
	template <typename T = void> T StopCountDown() {
		return ((T (*)(TacticalCombatBloodScoreHUD*))(Il2CppBase() + 0x34CBCD4))(this);
	}
	template <typename T = uintptr_t> T get_m_CurTimeItem() {
		return ((T (*)(TacticalCombatBloodScoreHUD*))(Il2CppBase() + 0x34CBE78))(this);
	}
	template <typename T = uintptr_t> T get_TCGameUIScene() {
		return ((T (*)(TacticalCombatBloodScoreHUD*))(Il2CppBase() + 0x34CBEBC))(this);
	}
	template <typename T = uintptr_t> T get_TCGameInfo() {
		return ((T (*)(TacticalCombatBloodScoreHUD*))(Il2CppBase() + 0x34CBFC4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(TacticalCombatBloodScoreHUD*))(Il2CppBase() + 0x34CC0D0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(TacticalCombatBloodScoreHUD*))(Il2CppBase() + 0x34CCC3C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(TacticalCombatBloodScoreHUD*))(Il2CppBase() + 0x34CCDD8))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(TacticalCombatBloodScoreHUD*))(Il2CppBase() + 0x34CCEBC))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(TacticalCombatBloodScoreHUD*, float))(Il2CppBase() + 0x34CCEC4))(this, dt);
	}
	template <typename T = void> T OnRoundEnd(uintptr_t result) {
		return ((T (*)(TacticalCombatBloodScoreHUD*, uintptr_t))(Il2CppBase() + 0x34CD378))(this, result);
	}
	template <typename T = void> T UpdateBloodScore() {
		return ((T (*)(TacticalCombatBloodScoreHUD*))(Il2CppBase() + 0x34CC2E8))(this);
	}
	template <typename T = void> T UpdateTime(float dt) {
		return ((T (*)(TacticalCombatBloodScoreHUD*, float))(Il2CppBase() + 0x34CBD88))(this, dt);
	}
	template <typename T = void> T UpdateTips(float dt) {
		return ((T (*)(TacticalCombatBloodScoreHUD*, float))(Il2CppBase() + 0x34CD28C))(this, dt);
	}
	template <typename T = void> T ChangeTimeBarState(uintptr_t state, bool showTips) {
		return ((T (*)(TacticalCombatBloodScoreHUD*, uintptr_t, bool))(Il2CppBase() + 0x34CCA88))(this, state, showTips);
	}
	template <typename T = void> T DisActiveAllTips() {
		return ((T (*)(TacticalCombatBloodScoreHUD*))(Il2CppBase() + 0x34CD64C))(this);
	}
	template <typename T = void> T TryShowTips() {
		return ((T (*)(TacticalCombatBloodScoreHUD*))(Il2CppBase() + 0x34CDCF0))(this);
	}
	template <typename T = void> T ChangeTimeBarState_1(uintptr_t msg) {
		return ((T (*)(TacticalCombatBloodScoreHUD*, uintptr_t))(Il2CppBase() + 0x34CDE50))(this, msg);
	}
	template <typename T = void> T UpdateGameLeftTime(uintptr_t msg) {
		return ((T (*)(TacticalCombatBloodScoreHUD*, uintptr_t))(Il2CppBase() + 0x34CE478))(this, msg);
	}
	template <typename T = void> T OnReconnectComplete(uintptr_t msg) {
		return ((T (*)(TacticalCombatBloodScoreHUD*, uintptr_t))(Il2CppBase() + 0x34CE5CC))(this, msg);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(TacticalCombatBloodScoreHUD*))(Il2CppBase() + 0x34CED9C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(TacticalCombatBloodScoreHUD*))(Il2CppBase() + 0x34CEDA4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(TacticalCombatBloodScoreHUD*))(Il2CppBase() + 0x34CEDAC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(TacticalCombatBloodScoreHUD*, float))(Il2CppBase() + 0x34CEDB4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnd(uintptr_t P0) {
		return ((T (*)(TacticalCombatBloodScoreHUD*, uintptr_t))(Il2CppBase() + 0x34CEDBC))(this, P0);
	}

};

}
