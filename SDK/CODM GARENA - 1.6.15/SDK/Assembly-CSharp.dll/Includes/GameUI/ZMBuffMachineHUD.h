#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ZMBuffMachineHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ZMBuffMachineHUD"));
	}

	template <typename T = uintptr_t> T& Open_NewGuideText() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& Open_NewGuideEffect() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& BuyBuff_NewGuideText() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& UpgradeBuff_NewGuideEffect() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& UpgradeBuff_NewGuideText() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& MenuRoot() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& CloseBtn() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& CurrentPoint() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& PendingSaleScrollView() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& PendingSaleGrid() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& PendingSaleItemTemplate() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& SellingItems() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& OwningItems() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = int32_t> T& m_CurrentSelectBuffUniqueId() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& EmptyRoot() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& NoneBuffRoot() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& ContentRoot() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& SelectName() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& SelectLevel() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& NextLevelRoot() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& SelectNextLevel() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& SelectDesc() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& SellBtn() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& SellGetPoint() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& UpgradeRoot() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& UpgradeBtn() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& UpgradeNeedPoint() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& MaxLevelRoot() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& AddBuffLevel() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& NotEnoughRoot() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& NotEnoughPoint() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& ButtonRoot() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& BuyButton() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& ButtonTable() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& LevelMaxButton() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& LockButton() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& UpgradeBuff() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& UpgradeBuffSelected() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& UpgradeBuffLock() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& UpgradeLeftTime() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& DropConfirmWindow() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& DropConfirm() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& DropCancel() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& DropDesc() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& DropGold() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = int32_t> T& m_CurrentUpgradeBuffId() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = bool> T& m_UpradeLock() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AllTweenMenu() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AllTweenDrop() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = int32_t> T& GamepadSelectedIndex() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& VisibleSellingItems() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = int32_t> T& currentDescBuffUniqueID() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = bool> T& bPendingSell() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = bool> T& bPendingUpgrade() {
		return *(T*)((uintptr_t)this + 0x14D);
	}
	template <typename T = bool> T& bPendingBuyUgradeBuff() {
		return *(T*)((uintptr_t)this + 0x14E);
	}
	template <typename T = bool> T& bHasFinishTutorial() {
		return *(T*)((uintptr_t)this + 0x14F);
	}
	template <typename T = bool> T& bTutorial_TryBuff() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = bool> T& bTutorial_TryClose() {
		return *(T*)((uintptr_t)this + 0x151);
	}
	template <typename T = bool> T& bTutorial_TryUpgrade() {
		return *(T*)((uintptr_t)this + 0x152);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MenuRootShowing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SelectOwnedBuff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GamepadOwnedBuffNext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GamepadOwnedBuffPrevious() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MoveBuff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GamepadBuffMoveUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GamepadBuffMoveDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryShowBuffMachineButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnterBuffMachine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeftBuffMachine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowBuyButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowMenu() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBuyButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseMenuButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBuffLevelChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckOwn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentSelectBuffUniqueId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOwnBuffSelectState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SelectFirstBuff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SelectLastBuff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDesc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCurrentSelectBuffInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSellBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowDropConfirmWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDropConfrim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDropCancel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdateBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdateBuffClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowUpgradeContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUpgradeBuffHighLight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckUpgradeBuffUnlock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayTween() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBuyBuffItemSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSafeActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessTutorial_BuyBuff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessTutorial_UpgradeBuff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessTutorial_Close() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessTutorial_Finish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ZMBuffMachineHUD*))(Il2CppBase() + 0x2A442E4))(this);
	}
	template <typename T = bool> T MenuRootShowing() {
		return ((T (*)(ZMBuffMachineHUD*))(Il2CppBase() + 0x2A44864))(this);
	}
	template <typename T = void> T SelectOwnedBuff(int32_t delta) {
		return ((T (*)(ZMBuffMachineHUD*, int32_t))(Il2CppBase() + 0x2A44940))(this, delta);
	}
	template <typename T = bool> T GamepadOwnedBuffNext() {
		return ((T (*)(ZMBuffMachineHUD*))(Il2CppBase() + 0x2A44EAC))(this);
	}
	template <typename T = bool> T GamepadOwnedBuffPrevious() {
		return ((T (*)(ZMBuffMachineHUD*))(Il2CppBase() + 0x2A44FCC))(this);
	}
	template <typename T = void> T MoveBuff(int32_t delta) {
		return ((T (*)(ZMBuffMachineHUD*, int32_t))(Il2CppBase() + 0x2A450EC))(this, delta);
	}
	template <typename T = bool> T GamepadBuffMoveUp() {
		return ((T (*)(ZMBuffMachineHUD*))(Il2CppBase() + 0x2A45604))(this);
	}
	template <typename T = bool> T GamepadBuffMoveDown() {
		return ((T (*)(ZMBuffMachineHUD*))(Il2CppBase() + 0x2A45724))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ZMBuffMachineHUD*))(Il2CppBase() + 0x2A45844))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ZMBuffMachineHUD*))(Il2CppBase() + 0x2A45DA0))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(ZMBuffMachineHUD*))(Il2CppBase() + 0x2A461D0))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(ZMBuffMachineHUD*))(Il2CppBase() + 0x2A461D8))(this);
	}
	template <typename T = void> T TryShowBuffMachineButton(bool bEnter) {
		return ((T (*)(ZMBuffMachineHUD*, bool))(Il2CppBase() + 0x2A461E8))(this, bEnter);
	}
	template <typename T = void> T OnEnterBuffMachine() {
		return ((T (*)(ZMBuffMachineHUD*))(Il2CppBase() + 0x2A462A4))(this);
	}
	template <typename T = void> T OnLeftBuffMachine() {
		return ((T (*)(ZMBuffMachineHUD*))(Il2CppBase() + 0x2A4635C))(this);
	}
	template <typename T = bool> T ShouldShow() {
		return ((T (*)(ZMBuffMachineHUD*))(Il2CppBase() + 0x2A46410))(this);
	}
	template <typename T = void> T ShowBuyButton(bool bShow) {
		return ((T (*)(ZMBuffMachineHUD*, bool))(Il2CppBase() + 0x2A44488))(this, bShow);
	}
	template <typename T = void> T ShowMenu(bool bShow) {
		return ((T (*)(ZMBuffMachineHUD*, bool))(Il2CppBase() + 0x2A445DC))(this, bShow);
	}
	template <typename T = void> T OnBuyButtonClick() {
		return ((T (*)(ZMBuffMachineHUD*))(Il2CppBase() + 0x2A47918))(this);
	}
	template <typename T = void> T OnCloseMenuButtonClick() {
		return ((T (*)(ZMBuffMachineHUD*))(Il2CppBase() + 0x2A47D58))(this);
	}
	template <typename T = void> T OnNotifyBuffLevelChanged(uintptr_t MSG) {
		return ((T (*)(ZMBuffMachineHUD*, uintptr_t))(Il2CppBase() + 0x2A48340))(this, MSG);
	}
	template <typename T = bool> T CheckOwn(int32_t buffId) {
		return ((T (*)(ZMBuffMachineHUD*, int32_t))(Il2CppBase() + 0x2A483EC))(this, buffId);
	}
	template <typename T = void> T InitPanel() {
		return ((T (*)(ZMBuffMachineHUD*))(Il2CppBase() + 0x2A465BC))(this);
	}
	template <typename T = void> T SetCurrentSelectBuffUniqueId(int32_t id) {
		return ((T (*)(ZMBuffMachineHUD*, int32_t))(Il2CppBase() + 0x2A49428))(this, id);
	}
	template <typename T = void> T SetOwnBuffSelectState() {
		return ((T (*)(ZMBuffMachineHUD*))(Il2CppBase() + 0x2A4A34C))(this);
	}
	template <typename T = void> T SelectFirstBuff() {
		return ((T (*)(ZMBuffMachineHUD*))(Il2CppBase() + 0x2A49000))(this);
	}
	template <typename T = void> T SelectLastBuff() {
		return ((T (*)(ZMBuffMachineHUD*))(Il2CppBase() + 0x2A491C4))(this);
	}
	template <typename T = void> T SetDesc(int32_t buffUniqueID) {
		return ((T (*)(ZMBuffMachineHUD*, int32_t))(Il2CppBase() + 0x2A4A694))(this, buffUniqueID);
	}
	template <typename T = void> T ShowCurrentSelectBuffInfo() {
		return ((T (*)(ZMBuffMachineHUD*))(Il2CppBase() + 0x2A49788))(this);
	}
	template <typename T = void> T OnSellBtnClick() {
		return ((T (*)(ZMBuffMachineHUD*))(Il2CppBase() + 0x2A4B2C4))(this);
	}
	template <typename T = void> T ShowDropConfirmWindow(bool bShow) {
		return ((T (*)(ZMBuffMachineHUD*, bool))(Il2CppBase() + 0x2A4B36C))(this, bShow);
	}
	template <typename T = void> T OnDropConfrim() {
		return ((T (*)(ZMBuffMachineHUD*))(Il2CppBase() + 0x2A4B5C0))(this);
	}
	template <typename T = void> T OnDropCancel() {
		return ((T (*)(ZMBuffMachineHUD*))(Il2CppBase() + 0x2A4B684))(this);
	}
	template <typename T = void> T OnUpdateBtnClick() {
		return ((T (*)(ZMBuffMachineHUD*))(Il2CppBase() + 0x2A4B72C))(this);
	}
	template <typename T = void> T OnUpdateBuffClick(uintptr_t obj) {
		return ((T (*)(ZMBuffMachineHUD*, uintptr_t))(Il2CppBase() + 0x2A44DD8))(this, obj);
	}
	template <typename T = void> T ShowUpgradeContent() {
		return ((T (*)(ZMBuffMachineHUD*))(Il2CppBase() + 0x2A4ADB4))(this);
	}
	template <typename T = void> T SetUpgradeBuffHighLight(bool bHL) {
		return ((T (*)(ZMBuffMachineHUD*, bool))(Il2CppBase() + 0x2A4BF34))(this, bHL);
	}
	template <typename T = bool> T CheckUpgradeBuffUnlock(bool bUpgradeMax) {
		return ((T (*)(ZMBuffMachineHUD*, bool))(Il2CppBase() + 0x2A494E0))(this, bUpgradeMax);
	}
	template <typename T = void> T PlayTween(Il2CppArray<uintptr_t>* allTween) {
		return ((T (*)(ZMBuffMachineHUD*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2A47224))(this, allTween);
	}
	template <typename T = void> T OnBuyBuffItemSuccess(int32_t buffuid) {
		return ((T (*)(ZMBuffMachineHUD*, int32_t))(Il2CppBase() + 0x2A4C028))(this, buffuid);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(ZMBuffMachineHUD*))(Il2CppBase() + 0x2A4C624))(this);
	}
	template <typename T = void> T ChangeEffect(bool showEffect, uintptr_t itemType, Il2CppString* tipsText, uintptr_t fadeAction) {
		return ((T (*)(ZMBuffMachineHUD*, bool, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x2A4C72C))(this, showEffect, itemType, tipsText, fadeAction);
	}
	template <typename T = bool> T IsSafeActive(uintptr_t itemType) {
		return ((T (*)(ZMBuffMachineHUD*, uintptr_t))(Il2CppBase() + 0x2A4C9D4))(this, itemType);
	}
	template <typename T = uintptr_t> T get_InGameTutorialHUD() {
		return ((T (*)(ZMBuffMachineHUD*))(Il2CppBase() + 0x2A4CD40))(this);
	}
	template <typename T = void> T ProcessTutorial_BuyBuff() {
		return ((T (*)(ZMBuffMachineHUD*))(Il2CppBase() + 0x2A4732C))(this);
	}
	template <typename T = void> T ProcessTutorial_UpgradeBuff() {
		return ((T (*)(ZMBuffMachineHUD*))(Il2CppBase() + 0x2A4C140))(this);
	}
	template <typename T = void> T ProcessTutorial_Close() {
		return ((T (*)(ZMBuffMachineHUD*))(Il2CppBase() + 0x2A4BA50))(this);
	}
	template <typename T = void> T ProcessTutorial_Finish() {
		return ((T (*)(ZMBuffMachineHUD*))(Il2CppBase() + 0x2A480EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(ZMBuffMachineHUD*))(Il2CppBase() + 0x2A4CF68))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ZMBuffMachineHUD*))(Il2CppBase() + 0x2A4CF70))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ZMBuffMachineHUD*))(Il2CppBase() + 0x2A4CF78))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(ZMBuffMachineHUD*))(Il2CppBase() + 0x2A4CF80))(this);
	}

};

}
