#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.DominationGame {

class DominationGameUIScene
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.DominationGame", "DominationGameUIScene"));
	}

	template <typename T = uintptr_t> T& m_SignboardHUD() {
		return *(T*)((uintptr_t)this + 0x278);
	}
	template <typename T = uintptr_t> T& mOneRoundView() {
		return *(T*)((uintptr_t)this + 0x27C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnterGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStarted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowEndRoundView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDeadReplayBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDeadReplayEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T get_ScoreViewControllerType() {
		return ((T (*)(DominationGameUIScene*))(Il2CppBase() + 0x2B34570))(this);
	}
	template <typename T = void> T OnEnterGame(uintptr_t msg) {
		return ((T (*)(DominationGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B3462C))(this, msg);
	}
	template <typename T = void> T OnRoundStarted(uintptr_t msg) {
		return ((T (*)(DominationGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B34880))(this, msg);
	}
	template <typename T = void> T ShowEndRoundView(uintptr_t roundResult) {
		return ((T (*)(DominationGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B34930))(this, roundResult);
	}
	template <typename T = void> T OnRoundEnded(uintptr_t msg) {
		return ((T (*)(DominationGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B349D0))(this, msg);
	}
	template <typename T = void> T OnDeadReplayBegin(uintptr_t msg) {
		return ((T (*)(DominationGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B35118))(this, msg);
	}
	template <typename T = void> T OnDeadReplayEnd(uintptr_t msg) {
		return ((T (*)(DominationGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B351C8))(this, msg);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnterGame(uintptr_t P0) {
		return ((T (*)(DominationGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B35278))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundStarted(uintptr_t P0) {
		return ((T (*)(DominationGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B3527C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ShowEndRoundView(uintptr_t P0) {
		return ((T (*)(DominationGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B35280))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnded(uintptr_t P0) {
		return ((T (*)(DominationGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B35284))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnDeadReplayBegin(uintptr_t P0) {
		return ((T (*)(DominationGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B35288))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnDeadReplayEnd(uintptr_t P0) {
		return ((T (*)(DominationGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B3528C))(this, P0);
	}

};

}
