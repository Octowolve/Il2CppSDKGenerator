#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class PVEGameTeamMateItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "PVEGameTeamMateItemView"));
	}

	template <typename T = uint32_t> T& m_PlayerId() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& DeadState() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& DyingState() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& teammateNickName() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& normalRoot() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& goldLabel() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& bossFightRoot() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& damagePercentLabel() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& DeadCounting() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& offLineObject() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& ScorePanelTrigger() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> T& damageToBoss() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& damagePercent() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& m_MPPlayerInfo() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGold() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateDeadCounting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBossFightInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDeadState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNormal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowScorePanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = float> T get_damageToBoss() {
		return ((T (*)(PVEGameTeamMateItemView*))(Il2CppBase() + 0x3AA12B4))(this);
	}
	template <typename T = void> T set_damageToBoss(float value) {
		return ((T (*)(PVEGameTeamMateItemView*, float))(Il2CppBase() + 0x3AA12BC))(this, value);
	}
	template <typename T = int32_t> T get_damagePercent() {
		return ((T (*)(PVEGameTeamMateItemView*))(Il2CppBase() + 0x3AA12C4))(this);
	}
	template <typename T = void> T set_damagePercent(int32_t value) {
		return ((T (*)(PVEGameTeamMateItemView*, int32_t))(Il2CppBase() + 0x3AA12CC))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(PVEGameTeamMateItemView*))(Il2CppBase() + 0x3AA12D4))(this);
	}
	template <typename T = uint32_t> T get_PlayerId() {
		return ((T (*)(PVEGameTeamMateItemView*))(Il2CppBase() + 0x3AA13E8))(this);
	}
	template <typename T = void> T set_PlayerId(uint32_t value) {
		return ((T (*)(PVEGameTeamMateItemView*, uint32_t))(Il2CppBase() + 0x3AA13F0))(this, value);
	}
	template <typename T = void> T SetData(uintptr_t pi) {
		return ((T (*)(PVEGameTeamMateItemView*, uintptr_t))(Il2CppBase() + 0x3AA13F8))(this, pi);
	}
	template <typename T = void> T Update() {
		return ((T (*)(PVEGameTeamMateItemView*))(Il2CppBase() + 0x3AA1610))(this);
	}
	template <typename T = void> T UpdateGold(uintptr_t playerInfo) {
		return ((T (*)(PVEGameTeamMateItemView*, uintptr_t))(Il2CppBase() + 0x3AA14F8))(this, playerInfo);
	}
	template <typename T = void> T UpdateDeadCounting() {
		return ((T (*)(PVEGameTeamMateItemView*))(Il2CppBase() + 0x3AA16B4))(this);
	}
	template <typename T = void> T UpdateBossFightInfo(int32_t rank, int32_t damagePercent) {
		return ((T (*)(PVEGameTeamMateItemView*, int32_t, int32_t))(Il2CppBase() + 0x3AA17FC))(this, rank, damagePercent);
	}
	template <typename T = void> T SetDeadState(uintptr_t state, bool bBossFlighting) {
		return ((T (*)(PVEGameTeamMateItemView*, uintptr_t, bool))(Il2CppBase() + 0x3AA1B74))(this, state, bBossFlighting);
	}
	template <typename T = void> T SetNormal(bool bNormal) {
		return ((T (*)(PVEGameTeamMateItemView*, bool))(Il2CppBase() + 0x3AA1D00))(this, bNormal);
	}
	template <typename T = void> T OnShowScorePanel(uintptr_t OBJ) {
		return ((T (*)(PVEGameTeamMateItemView*, uintptr_t))(Il2CppBase() + 0x3AA1E08))(this, OBJ);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(PVEGameTeamMateItemView*))(Il2CppBase() + 0x3AA1F48))(this);
	}

};

}
