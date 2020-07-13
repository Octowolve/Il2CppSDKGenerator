#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.HardPoint {

class HardPointUIScene
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.HardPoint", "HardPointUIScene"));
	}

	template <typename T = uintptr_t> T& m_SignboardHUD() {
		return *(T*)((uintptr_t)this + 0x278);
	}
	template <typename T = uintptr_t> T& m_HpScoreHUD() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDeadReplayBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDeadReplayEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHardPointCampChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T get_HpScoreHUD() {
		return ((T (*)(HardPointUIScene*))(Il2CppBase() + 0x402D60C))(this);
	}
	template <typename T = uintptr_t> T get_ScoreViewControllerType() {
		return ((T (*)(HardPointUIScene*))(Il2CppBase() + 0x402D744))(this);
	}
	template <typename T = void> T OnEnterGame(uintptr_t msg) {
		return ((T (*)(HardPointUIScene*, uintptr_t))(Il2CppBase() + 0x402D800))(this, msg);
	}
	template <typename T = void> T OnRoundStarted(uintptr_t msg) {
		return ((T (*)(HardPointUIScene*, uintptr_t))(Il2CppBase() + 0x402DA58))(this, msg);
	}
	template <typename T = void> T OnRoundEnded(uintptr_t msg) {
		return ((T (*)(HardPointUIScene*, uintptr_t))(Il2CppBase() + 0x402DB0C))(this, msg);
	}
	template <typename T = void> T OnDeadReplayBegin(uintptr_t msg) {
		return ((T (*)(HardPointUIScene*, uintptr_t))(Il2CppBase() + 0x402DBC0))(this, msg);
	}
	template <typename T = void> T OnDeadReplayEnd(uintptr_t msg) {
		return ((T (*)(HardPointUIScene*, uintptr_t))(Il2CppBase() + 0x402DC74))(this, msg);
	}
	template <typename T = void> T OnHardPointCampChanged(int32_t hpID, uintptr_t hpState, int32_t occupyTime, int32_t matchTime) {
		return ((T (*)(HardPointUIScene*, int32_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x402B24C))(this, hpID, hpState, occupyTime, matchTime);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnterGame(uintptr_t P0) {
		return ((T (*)(HardPointUIScene*, uintptr_t))(Il2CppBase() + 0x402DD28))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundStarted(uintptr_t P0) {
		return ((T (*)(HardPointUIScene*, uintptr_t))(Il2CppBase() + 0x402DD30))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnded(uintptr_t P0) {
		return ((T (*)(HardPointUIScene*, uintptr_t))(Il2CppBase() + 0x402DD38))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnDeadReplayBegin(uintptr_t P0) {
		return ((T (*)(HardPointUIScene*, uintptr_t))(Il2CppBase() + 0x402DD40))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnDeadReplayEnd(uintptr_t P0) {
		return ((T (*)(HardPointUIScene*, uintptr_t))(Il2CppBase() + 0x402DD48))(this, P0);
	}

};

}
