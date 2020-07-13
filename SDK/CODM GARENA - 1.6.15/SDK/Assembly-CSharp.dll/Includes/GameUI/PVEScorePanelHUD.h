#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class PVEScorePanelHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "PVEScorePanelHUD"));
	}

	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& Classical() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& Raid() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& TeamMateGrid() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& ItemTemplate() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& AllRound() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& AllTeamMate() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& DamageTag() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& CloseMask() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& BossIcon() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& RoundTitle() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = bool> T& m_bBossRound() {
		return *(T*)((uintptr_t)this + 0xA8);
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
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Refresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentRound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMaskClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBossShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyRefreshScorePanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = bool> T get_BossRound() {
		return ((T (*)(PVEScorePanelHUD*))(Il2CppBase() + 0x3AA44B4))(this);
	}
	template <typename T = void> T set_BossRound(bool value) {
		return ((T (*)(PVEScorePanelHUD*, bool))(Il2CppBase() + 0x3AA44BC))(this, value);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(PVEScorePanelHUD*))(Il2CppBase() + 0x3AA4588))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(PVEScorePanelHUD*))(Il2CppBase() + 0x3AA4590))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PVEScorePanelHUD*))(Il2CppBase() + 0x3AA459C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PVEScorePanelHUD*))(Il2CppBase() + 0x3AA46B0))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(PVEScorePanelHUD*))(Il2CppBase() + 0x3AA476C))(this);
	}
	template <typename T = void> T Show() {
		return ((T (*)(PVEScorePanelHUD*))(Il2CppBase() + 0x3AA4D2C))(this);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(PVEScorePanelHUD*))(Il2CppBase() + 0x3AA4E20))(this);
	}
	template <typename T = void> T SetCurrentRound(int32_t roundCount) {
		return ((T (*)(PVEScorePanelHUD*, int32_t))(Il2CppBase() + 0x3AA537C))(this, roundCount);
	}
	template <typename T = void> T OnMaskClick(uintptr_t obj, bool bPress) {
		return ((T (*)(PVEScorePanelHUD*, uintptr_t, bool))(Il2CppBase() + 0x3AA5CAC))(this, obj, bPress);
	}
	template <typename T = void> T OnBossShow(uintptr_t bossPawn) {
		return ((T (*)(PVEScorePanelHUD*, uintptr_t))(Il2CppBase() + 0x3AA5DB8))(this, bossPawn);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(PVEScorePanelHUD*))(Il2CppBase() + 0x3AA5E68))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(PVEScorePanelHUD*, float))(Il2CppBase() + 0x3AA5E70))(this, dt);
	}
	template <typename T = void> T OnNotifyRefreshScorePanel(uintptr_t MSG) {
		return ((T (*)(PVEScorePanelHUD*, uintptr_t))(Il2CppBase() + 0x3AA5F80))(this, MSG);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PVEScorePanelHUD*))(Il2CppBase() + 0x3AA6080))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PVEScorePanelHUD*))(Il2CppBase() + 0x3AA6088))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(PVEScorePanelHUD*))(Il2CppBase() + 0x3AA6090))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(PVEScorePanelHUD*, float))(Il2CppBase() + 0x3AA6098))(this, P0);
	}

};

}
