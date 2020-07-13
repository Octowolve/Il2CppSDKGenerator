#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.CTFGame {

class CTFGameUIScene
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.CTFGame", "CTFGameUIScene"));
	}

	template <typename T = uintptr_t> T& m_FlagStatusHUD() {
		return *(T*)((uintptr_t)this + 0x278);
	}
	template <typename T = uintptr_t> T& mOneRoundView() {
		return *(T*)((uintptr_t)this + 0x27C);
	}
	template <typename T = uintptr_t> T& m_TipsHUD() {
		return *(T*)((uintptr_t)this + 0x280);
	}
	template <typename T = uintptr_t> T& m_CountDownHUD() {
		return *(T*)((uintptr_t)this + 0x284);
	}
	template <typename T = float> static T& RESPAWN_WAIT_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowEndRoundView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowEndMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStarted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTips_AddOne() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPawnDied() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowRespawnCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = uintptr_t> T get_ScoreViewControllerType() {
		return ((T (*)(CTFGameUIScene*))(Il2CppBase() + 0x2B2C154))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(CTFGameUIScene*))(Il2CppBase() + 0x2B2C210))(this);
	}
	template <typename T = void> T ShowEndRoundView(uintptr_t roundResult) {
		return ((T (*)(CTFGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B2C4FC))(this, roundResult);
	}
	template <typename T = void> T ShowEndMatch(uintptr_t result, uintptr_t reason) {
		return ((T (*)(CTFGameUIScene*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2B287F8))(this, result, reason);
	}
	template <typename T = void> T OnRoundStarted(uintptr_t msg) {
		return ((T (*)(CTFGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B2C600))(this, msg);
	}
	template <typename T = void> T OnRoundEnded(uintptr_t msg) {
		return ((T (*)(CTFGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B2C748))(this, msg);
	}
	template <typename T = void> T ShowTips(Il2CppString* str_TipsContent, bool bRed) {
		return ((T (*)(CTFGameUIScene*, Il2CppString*, bool))(Il2CppBase() + 0x2B2CEB8))(this, str_TipsContent, bRed);
	}
	template <typename T = void> T ShowTips_AddOne(Il2CppString* str_TipsContent, bool bRed) {
		return ((T (*)(CTFGameUIScene*, Il2CppString*, bool))(Il2CppBase() + 0x2B2CFF8))(this, str_TipsContent, bRed);
	}
	template <typename T = void> T OnLocalPawnDied(uintptr_t msg) {
		return ((T (*)(CTFGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B2D138))(this, msg);
	}
	template <typename T = void> T ShowRespawnCountDown() {
		return ((T (*)(CTFGameUIScene*))(Il2CppBase() + 0x2B2743C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(CTFGameUIScene*))(Il2CppBase() + 0x2B2D3E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShowEndRoundView(uintptr_t P0) {
		return ((T (*)(CTFGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B2D3E4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundStarted(uintptr_t P0) {
		return ((T (*)(CTFGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B2D3E8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnded(uintptr_t P0) {
		return ((T (*)(CTFGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B2D3EC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnLocalPawnDied(uintptr_t P0) {
		return ((T (*)(CTFGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B2D3F0))(this, P0);
	}

};

}
