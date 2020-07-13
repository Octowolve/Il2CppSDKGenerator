#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ZMEndlessProgressHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ZMEndlessProgressHUD"));
	}

	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& CurrentRound() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& RoundTween() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& NextRoundBeginLeft() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& LeftCount() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& m_CurrentRound() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& AnimRoot() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& RoundProgress() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& TotalRoundRoot() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& TotalRound() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& BossRoot() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& BossIcon() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& BossName() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& BossRound() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& RoundCompleteRoot() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& RoundCompleteRoundCount() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppString*> T& CountDownTips() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& currentRoundStarted() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundInfoChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundWaitTimeChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TimerSetNextRoundBeginLeft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTaskProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncTaskProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWaveChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnActiveTreeBoss() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowRoundComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayHideRoundComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(ZMEndlessProgressHUD*))(Il2CppBase() + 0x2A503B4))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(ZMEndlessProgressHUD*))(Il2CppBase() + 0x2A503BC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ZMEndlessProgressHUD*))(Il2CppBase() + 0x2A503C8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ZMEndlessProgressHUD*))(Il2CppBase() + 0x2A50E70))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ZMEndlessProgressHUD*))(Il2CppBase() + 0x2A51050))(this);
	}
	template <typename T = void> T OnRoundInfoChange(uintptr_t MSG) {
		return ((T (*)(ZMEndlessProgressHUD*, uintptr_t))(Il2CppBase() + 0x2A51148))(this, MSG);
	}
	template <typename T = void> T OnRoundWaitTimeChange(uintptr_t MSG) {
		return ((T (*)(ZMEndlessProgressHUD*, uintptr_t))(Il2CppBase() + 0x2A511F4))(this, MSG);
	}
	template <typename T = void> T TimerSetNextRoundBeginLeft() {
		return ((T (*)(ZMEndlessProgressHUD*))(Il2CppBase() + 0x2A51680))(this);
	}
	template <typename T = void> T UpdateTaskProgress() {
		return ((T (*)(ZMEndlessProgressHUD*))(Il2CppBase() + 0x2A50A70))(this);
	}
	template <typename T = void> T OnSyncTaskProgress(int32_t currentRound, int32_t leftCount) {
		return ((T (*)(ZMEndlessProgressHUD*, int32_t, int32_t))(Il2CppBase() + 0x2A51A2C))(this, currentRound, leftCount);
	}
	template <typename T = void> T OnWaveChange() {
		return ((T (*)(ZMEndlessProgressHUD*))(Il2CppBase() + 0x2A51E68))(this);
	}
	template <typename T = void> T Show(bool bShow) {
		return ((T (*)(ZMEndlessProgressHUD*, bool))(Il2CppBase() + 0x2A40A18))(this, bShow);
	}
	template <typename T = void> T OnActiveTreeBoss(uintptr_t MSG) {
		return ((T (*)(ZMEndlessProgressHUD*, uintptr_t))(Il2CppBase() + 0x2A5227C))(this, MSG);
	}
	template <typename T = void> T OnShowRoundComplete(uintptr_t MSG) {
		return ((T (*)(ZMEndlessProgressHUD*, uintptr_t))(Il2CppBase() + 0x2A523BC))(this, MSG);
	}
	template <typename T = uintptr_t> T DelayHideRoundComplete() {
		return ((T (*)(ZMEndlessProgressHUD*))(Il2CppBase() + 0x2A524C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(ZMEndlessProgressHUD*))(Il2CppBase() + 0x2A525B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ZMEndlessProgressHUD*))(Il2CppBase() + 0x2A525B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ZMEndlessProgressHUD*))(Il2CppBase() + 0x2A525C0))(this);
	}

};

}
