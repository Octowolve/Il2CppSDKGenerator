#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRQuickSkillController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRQuickSkillController"));
	}

	template <typename T = uintptr_t> T& m_SkillView() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& m_IsActivation() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& m_IsHidePropBtn() {
		return *(T*)((uintptr_t)this + 0x4D);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowProBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnActualBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPropBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FireSubWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFiringSubWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPropFireBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPropUnequipBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStandbyBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UseSkillItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQuickSkillItemChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQuickSkillItemStopProcess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeToKnife() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSkillThrowing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchThrowing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAndRefreshThrowing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideThrowing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBuilding() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchBuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginBuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelBuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndBuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStopActivation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopActivation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchActivation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSkillItemDataConf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckUseItemSpace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckOneDirectionSpace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckUseSkillButtonState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UseRemoteControlledSkillItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BRQuickSkillController*))(Il2CppBase() + 0x1B13E48))(this);
	}
	template <typename T = uintptr_t> T get_DroppedPickUpType() {
		return ((T (*)(BRQuickSkillController*))(Il2CppBase() + 0x1B13EEC))(this);
	}
	template <typename T = uintptr_t> T get_MasterSlotType() {
		return ((T (*)(BRQuickSkillController*))(Il2CppBase() + 0x1B13EF4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BRQuickSkillController*))(Il2CppBase() + 0x1B13EFC))(this);
	}
	template <typename T = void> T ShowProBtn() {
		return ((T (*)(BRQuickSkillController*))(Il2CppBase() + 0x1B142CC))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(BRQuickSkillController*))(Il2CppBase() + 0x1B143BC))(this);
	}
	template <typename T = void> T OnActualBtnClick() {
		return ((T (*)(BRQuickSkillController*))(Il2CppBase() + 0x1B1456C))(this);
	}
	template <typename T = void> T OnPropBtnClick() {
		return ((T (*)(BRQuickSkillController*))(Il2CppBase() + 0x1B15724))(this);
	}
	template <typename T = void> T FireSubWeapon(int32_t actorId) {
		return ((T (*)(BRQuickSkillController*, int32_t))(Il2CppBase() + 0x1B15ED4))(this, actorId);
	}
	template <typename T = void> T StartFiringSubWeapon() {
		return ((T (*)(BRQuickSkillController*))(Il2CppBase() + 0x1B15A38))(this);
	}
	template <typename T = void> T OnPropFireBtnClick() {
		return ((T (*)(BRQuickSkillController*))(Il2CppBase() + 0x1B160B4))(this);
	}
	template <typename T = void> T OnPropUnequipBtnClick() {
		return ((T (*)(BRQuickSkillController*))(Il2CppBase() + 0x1B164B0))(this);
	}
	template <typename T = void> T OnStandbyBtnClick(int32_t index) {
		return ((T (*)(BRQuickSkillController*, int32_t))(Il2CppBase() + 0x1B16864))(this, index);
	}
	template <typename T = void> T UseSkillItem(int32_t actorId) {
		return ((T (*)(BRQuickSkillController*, int32_t))(Il2CppBase() + 0x1B1533C))(this, actorId);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRQuickSkillController*))(Il2CppBase() + 0x1B16904))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRQuickSkillController*))(Il2CppBase() + 0x1B16AB0))(this);
	}
	template <typename T = void> T OnQuickSkillItemChanged(uintptr_t msg) {
		return ((T (*)(BRQuickSkillController*, uintptr_t))(Il2CppBase() + 0x1B16B88))(this, msg);
	}
	template <typename T = void> T OnQuickSkillItemStopProcess(uintptr_t msg) {
		return ((T (*)(BRQuickSkillController*, uintptr_t))(Il2CppBase() + 0x1B16D88))(this, msg);
	}
	template <typename T = void> T ChangeToKnife() {
		return ((T (*)(BRQuickSkillController*))(Il2CppBase() + 0x1B171A4))(this);
	}
	template <typename T = bool> T IsSkillThrowing() {
		return ((T (*)(BRQuickSkillController*))(Il2CppBase() + 0x1B16E44))(this);
	}
	template <typename T = void> T SwitchThrowing(int32_t actorId) {
		return ((T (*)(BRQuickSkillController*, int32_t))(Il2CppBase() + 0x1B1506C))(this, actorId);
	}
	template <typename T = void> T ShowAndRefreshThrowing(int32_t actorId) {
		return ((T (*)(BRQuickSkillController*, int32_t))(Il2CppBase() + 0x1B175D8))(this, actorId);
	}
	template <typename T = void> T HideThrowing() {
		return ((T (*)(BRQuickSkillController*))(Il2CppBase() + 0x1B16FD0))(this);
	}
	template <typename T = bool> T IsBuilding() {
		return ((T (*)(BRQuickSkillController*))(Il2CppBase() + 0x1B178D0))(this);
	}
	template <typename T = void> T SwitchBuild(uintptr_t config, int32_t itemID, int32_t actorId, int32_t posID) {
		return ((T (*)(BRQuickSkillController*, uintptr_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x1B1560C))(this, config, itemID, actorId, posID);
	}
	template <typename T = void> T BeginBuild(uintptr_t config, int32_t itemID, int32_t actorId, int32_t posID) {
		return ((T (*)(BRQuickSkillController*, uintptr_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x1B17A0C))(this, config, itemID, actorId, posID);
	}
	template <typename T = void> T CancelBuild() {
		return ((T (*)(BRQuickSkillController*))(Il2CppBase() + 0x1B17C78))(this);
	}
	template <typename T = void> T EndBuild() {
		return ((T (*)(BRQuickSkillController*))(Il2CppBase() + 0x1B17DA8))(this);
	}
	template <typename T = void> T OnStopActivation(uintptr_t msg) {
		return ((T (*)(BRQuickSkillController*, uintptr_t))(Il2CppBase() + 0x1B17ED0))(this, msg);
	}
	template <typename T = void> T StopActivation() {
		return ((T (*)(BRQuickSkillController*))(Il2CppBase() + 0x1B16CB8))(this);
	}
	template <typename T = void> T OnSwitchActivation(bool isActivation) {
		return ((T (*)(BRQuickSkillController*, bool))(Il2CppBase() + 0x1B1446C))(this, isActivation);
	}
	template <typename T = uintptr_t> T GetSkillItemDataConf(int32_t actorId) {
		return ((T (*)(BRQuickSkillController*, int32_t))(Il2CppBase() + 0x1B17F7C))(this, actorId);
	}
	template <typename T = bool> T CheckUseItemSpace(float size) {
		return ((T (*)(BRQuickSkillController*, float))(Il2CppBase() + 0x1B14C7C))(this, size);
	}
	template <typename T = bool> T CheckOneDirectionSpace(Il2CppVector3 pawnPosition, Il2CppVector3 direction, float size) {
		return ((T (*)(BRQuickSkillController*, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x1B18084))(this, pawnPosition, direction, size);
	}
	template <typename T = void> T CheckUseSkillButtonState() {
		return ((T (*)(BRQuickSkillController*))(Il2CppBase() + 0x1B18204))(this);
	}
	template <typename T = void> T UseRemoteControlledSkillItem(int32_t actorId) {
		return ((T (*)(BRQuickSkillController*, int32_t))(Il2CppBase() + 0x1B15158))(this, actorId);
	}
	template <typename T = void> T OnUseItem(uintptr_t msg) {
		return ((T (*)(BRQuickSkillController*, uintptr_t))(Il2CppBase() + 0x1B183A0))(this, msg);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BRQuickSkillController*))(Il2CppBase() + 0x1B1846C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRQuickSkillController*))(Il2CppBase() + 0x1B18474))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(BRQuickSkillController*))(Il2CppBase() + 0x1B18478))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnActualBtnClick() {
		return ((T (*)(BRQuickSkillController*))(Il2CppBase() + 0x1B1847C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnStandbyBtnClick(int32_t P0) {
		return ((T (*)(BRQuickSkillController*, int32_t))(Il2CppBase() + 0x1B18480))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRQuickSkillController*))(Il2CppBase() + 0x1B18484))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRQuickSkillController*))(Il2CppBase() + 0x1B18488))(this);
	}

};

}
