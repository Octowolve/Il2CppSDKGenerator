#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BRSelectChipHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BRSelectChipHUD"));
	}

	template <typename T = uintptr_t> T& ContentRoot() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& OpenBtn() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& OpenBtnSprite() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& OpenBtnLabel() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& SelectRoot() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& SelectRootAnim() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& DelayShowRoot() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& ConfirmBtn() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& CannotConfirm() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& LockConfirm() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& ForbiddenConfim() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& ChipGrid() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& RightSelectRoot() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& ItemTemplate() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& selectItemIdDic() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& chipItemList() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& firstChipItem() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = int32_t> T& m_DefaultSelectedId() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& TeammateGrid() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& TeammateTemplate() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& teammateItemList() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& CountDown() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& CountDownFx() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& ChipSelectRoot() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& SelectRootBG() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& SelectRootBG_2() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& SelectRootBG_3() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& CloseBtn() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& ChipSprite() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& ChipName() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& UltSkillIcon() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& UltSkillName() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& UltSkillDesc() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& PerkIcon() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& PerkName() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& PerkDesc() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppString*> T& loc_second() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = bool> T& bInited() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& m_CurrentSeletedChip() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = bool> T& m_bConfirmSelf() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = bool> T& bCanConfirm() {
		return *(T*)((uintptr_t)this + 0x119);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_TeamMateSelectChipIds() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = bool> T& m_HasSelectDefault() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadConfirmChip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SelectNextChip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadLeft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadRight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SelectDefaultChip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshConfirmBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowChipInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpenClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConfirmBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseMaskClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyPlayerChipChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTeammateInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddTeammate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TrySeletPending() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifySelectChipSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyPreSelectChip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSelectRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayShowSelectRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayChipItemAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAllItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideAllChipItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneReconnectSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyGetOwnChipInfos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckChipLock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGameReconnectSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}

	template <typename T = uintptr_t> T get_CurrentSeletedChip() {
		return ((T (*)(BRSelectChipHUD*))(Il2CppBase() + 0x2DB50D0))(this);
	}
	template <typename T = void> T set_CurrentSeletedChip(uintptr_t value) {
		return ((T (*)(BRSelectChipHUD*, uintptr_t))(Il2CppBase() + 0x2DB50D8))(this, value);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(BRSelectChipHUD*))(Il2CppBase() + 0x2DB530C))(this);
	}
	template <typename T = uint64_t> T get_ActiveGameHudState() {
		return ((T (*)(BRSelectChipHUD*))(Il2CppBase() + 0x2DB5314))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(BRSelectChipHUD*))(Il2CppBase() + 0x2DB5320))(this);
	}
	template <typename T = void> T ForceRegisterDelegates() {
		return ((T (*)(BRSelectChipHUD*))(Il2CppBase() + 0x2DB532C))(this);
	}
	template <typename T = bool> T OnGamepadConfirmChip() {
		return ((T (*)(BRSelectChipHUD*))(Il2CppBase() + 0x2DB5500))(this);
	}
	template <typename T = bool> T OnGamepadOpen() {
		return ((T (*)(BRSelectChipHUD*))(Il2CppBase() + 0x2DB581C))(this);
	}
	template <typename T = void> T SelectNextChip(int32_t deltaIndex) {
		return ((T (*)(BRSelectChipHUD*, int32_t))(Il2CppBase() + 0x2DB5AC4))(this, deltaIndex);
	}
	template <typename T = bool> T OnGamepadUp() {
		return ((T (*)(BRSelectChipHUD*))(Il2CppBase() + 0x2DB5F34))(this);
	}
	template <typename T = bool> T OnGamepadDown() {
		return ((T (*)(BRSelectChipHUD*))(Il2CppBase() + 0x2DB602C))(this);
	}
	template <typename T = bool> T OnGamepadLeft() {
		return ((T (*)(BRSelectChipHUD*))(Il2CppBase() + 0x2DB6124))(this);
	}
	template <typename T = bool> T OnGamepadRight() {
		return ((T (*)(BRSelectChipHUD*))(Il2CppBase() + 0x2DB621C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRSelectChipHUD*))(Il2CppBase() + 0x2DB6314))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRSelectChipHUD*))(Il2CppBase() + 0x2DB68EC))(this);
	}
	template <typename T = void> T OnCloseBtnClick() {
		return ((T (*)(BRSelectChipHUD*))(Il2CppBase() + 0x2DB6D74))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BRSelectChipHUD*))(Il2CppBase() + 0x2DB7558))(this);
	}
	template <typename T = void> T SelectDefaultChip() {
		return ((T (*)(BRSelectChipHUD*))(Il2CppBase() + 0x2DB7C4C))(this);
	}
	template <typename T = void> T RefreshAll() {
		return ((T (*)(BRSelectChipHUD*))(Il2CppBase() + 0x2DB50E0))(this);
	}
	template <typename T = void> T RefreshConfirmBtn() {
		return ((T (*)(BRSelectChipHUD*))(Il2CppBase() + 0x2DB89B0))(this);
	}
	template <typename T = void> T ShowChipInfo(uintptr_t conf) {
		return ((T (*)(BRSelectChipHUD*, uintptr_t))(Il2CppBase() + 0x2DB8FE0))(this, conf);
	}
	template <typename T = void> T OnOpenClick() {
		return ((T (*)(BRSelectChipHUD*))(Il2CppBase() + 0x2DB5908))(this);
	}
	template <typename T = void> T OnConfirmBtnClick(uintptr_t obj) {
		return ((T (*)(BRSelectChipHUD*, uintptr_t))(Il2CppBase() + 0x2DB564C))(this, obj);
	}
	template <typename T = void> T OnCloseMaskClick(uintptr_t obj) {
		return ((T (*)(BRSelectChipHUD*, uintptr_t))(Il2CppBase() + 0x2DB9408))(this, obj);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(BRSelectChipHUD*))(Il2CppBase() + 0x2DB94B8))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(BRSelectChipHUD*, float))(Il2CppBase() + 0x2DB94C0))(this, dt);
	}
	template <typename T = void> T OnNotifyPlayerChipChange(uintptr_t msg) {
		return ((T (*)(BRSelectChipHUD*, uintptr_t))(Il2CppBase() + 0x2DB997C))(this, msg);
	}
	template <typename T = void> T RefreshTeammateInfo() {
		return ((T (*)(BRSelectChipHUD*))(Il2CppBase() + 0x2DB7F50))(this);
	}
	template <typename T = void> T OnSyncPlayerInfo(uint32_t playerID, uint32_t propertyID, uintptr_t msg) {
		return ((T (*)(BRSelectChipHUD*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x2DB9DE4))(this, playerID, propertyID, msg);
	}
	template <typename T = void> T AddTeammate(uint32_t playerId) {
		return ((T (*)(BRSelectChipHUD*, uint32_t))(Il2CppBase() + 0x2DBA028))(this, playerId);
	}
	template <typename T = void> T TrySeletPending(uintptr_t conf) {
		return ((T (*)(BRSelectChipHUD*, uintptr_t))(Il2CppBase() + 0x2DBA0D4))(this, conf);
	}
	template <typename T = void> T OnNotifySelectChipSuccess(uintptr_t msg) {
		return ((T (*)(BRSelectChipHUD*, uintptr_t))(Il2CppBase() + 0x2DBA2A8))(this, msg);
	}
	template <typename T = void> T OnNotifyPreSelectChip(uintptr_t msg) {
		return ((T (*)(BRSelectChipHUD*, uintptr_t))(Il2CppBase() + 0x2DBA358))(this, msg);
	}
	template <typename T = void> T ShowSelectRoot(bool bShow) {
		return ((T (*)(BRSelectChipHUD*, bool))(Il2CppBase() + 0x2DB6F90))(this, bShow);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(BRSelectChipHUD*))(Il2CppBase() + 0x2DBA6CC))(this);
	}
	template <typename T = uintptr_t> T DelayShowSelectRoot() {
		return ((T (*)(BRSelectChipHUD*))(Il2CppBase() + 0x2DBA9B0))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(BRSelectChipHUD*))(Il2CppBase() + 0x2DBAA90))(this);
	}
	template <typename T = void> T PlayChipItemAnim() {
		return ((T (*)(BRSelectChipHUD*))(Il2CppBase() + 0x2DBAB40))(this);
	}
	template <typename T = void> T ShowAllItem() {
		return ((T (*)(BRSelectChipHUD*))(Il2CppBase() + 0x2DBAF38))(this);
	}
	template <typename T = void> T HideAllChipItem() {
		return ((T (*)(BRSelectChipHUD*))(Il2CppBase() + 0x2DBA488))(this);
	}
	template <typename T = void> T OnZoneReconnectSuccess() {
		return ((T (*)(BRSelectChipHUD*))(Il2CppBase() + 0x2DBB1D0))(this);
	}
	template <typename T = void> T OnNotifyGetOwnChipInfos(uintptr_t MSG) {
		return ((T (*)(BRSelectChipHUD*, uintptr_t))(Il2CppBase() + 0x2DBB440))(this, MSG);
	}
	template <typename T = uintptr_t> T CheckChipLock(int32_t chipId) {
		return ((T (*)(BRSelectChipHUD*, int32_t))(Il2CppBase() + 0x2DB8E78))(this, chipId);
	}
	template <typename T = void> T OnGameReconnectSuccess() {
		return ((T (*)(BRSelectChipHUD*))(Il2CppBase() + 0x2DBB764))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ForceRegisterDelegates() {
		return ((T (*)(BRSelectChipHUD*))(Il2CppBase() + 0x2DBB814))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRSelectChipHUD*))(Il2CppBase() + 0x2DBB818))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRSelectChipHUD*))(Il2CppBase() + 0x2DBB81C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(BRSelectChipHUD*))(Il2CppBase() + 0x2DBB820))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRSelectChipHUD*, float))(Il2CppBase() + 0x2DBB824))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncPlayerInfo(uint32_t P0, uint32_t P1, uintptr_t P2) {
		return ((T (*)(BRSelectChipHUD*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x2DBB828))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(BRSelectChipHUD*))(Il2CppBase() + 0x2DBB848))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(BRSelectChipHUD*))(Il2CppBase() + 0x2DBB84C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnZoneReconnectSuccess() {
		return ((T (*)(BRSelectChipHUD*))(Il2CppBase() + 0x2DBB850))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnGameReconnectSuccess() {
		return ((T (*)(BRSelectChipHUD*))(Il2CppBase() + 0x2DBB854))(this);
	}

};

}
