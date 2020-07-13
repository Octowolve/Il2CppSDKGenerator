#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassAwardController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassAwardController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mDataStore() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mBattlePassConfDs() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& mShowEnd() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& mWillItemid() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> static T& SelectedItemId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& SelectedAwardIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneReconnectSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLevel_1Data() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBattlePassNewReceiveItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDataWithOutLevelUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetReceiveData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseCommonBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnContinue_BtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPurchaseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNextBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWillGetScrollView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAwardConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlusAwardList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowWeaponInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponAssetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnModelResChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCommonAvatarView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAvatarAnchorPosX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseAwardShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBattlePassAwardItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}

	template <typename T = bool> T get_ShowEnd() {
		return ((T (*)(BattlePassAwardController*))(Il2CppBase() + 0x325CF9C))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BattlePassAwardController*))(Il2CppBase() + 0x325CFA4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BattlePassAwardController*))(Il2CppBase() + 0x325D048))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(BattlePassAwardController*))(Il2CppBase() + 0x325D1C0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BattlePassAwardController*))(Il2CppBase() + 0x325D2D8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BattlePassAwardController*))(Il2CppBase() + 0x325D680))(this);
	}
	template <typename T = void> T OnZoneReconnectSuccess() {
		return ((T (*)(BattlePassAwardController*))(Il2CppBase() + 0x325D928))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(BattlePassAwardController*))(Il2CppBase() + 0x325DB58))(this);
	}
	template <typename T = void> T SetData(int32_t preLv, int32_t curLv) {
		return ((T (*)(BattlePassAwardController*, int32_t, int32_t))(Il2CppBase() + 0x325DC1C))(this, preLv, curLv);
	}
	template <typename T = void> T SetLevel_1Data() {
		return ((T (*)(BattlePassAwardController*))(Il2CppBase() + 0x325E5D8))(this);
	}
	template <typename T = void> T GetBattlePassNewReceiveItems() {
		return ((T (*)(BattlePassAwardController*))(Il2CppBase() + 0x325E384))(this);
	}
	template <typename T = void> T SetDataWithOutLevelUp() {
		return ((T (*)(BattlePassAwardController*))(Il2CppBase() + 0x325E8F0))(this);
	}
	template <typename T = void> T SetReceiveData() {
		return ((T (*)(BattlePassAwardController*))(Il2CppBase() + 0x325EB60))(this);
	}
	template <typename T = void> T InitView() {
		return ((T (*)(BattlePassAwardController*))(Il2CppBase() + 0x325DE90))(this);
	}
	template <typename T = void> T OnCloseCommonBtnClick() {
		return ((T (*)(BattlePassAwardController*))(Il2CppBase() + 0x325F368))(this);
	}
	template <typename T = void> T OnContinue_BtnClick() {
		return ((T (*)(BattlePassAwardController*))(Il2CppBase() + 0x325F40C))(this);
	}
	template <typename T = void> T OnPurchaseBtnClick() {
		return ((T (*)(BattlePassAwardController*))(Il2CppBase() + 0x32611BC))(this);
	}
	template <typename T = void> T OnNextBtnClick() {
		return ((T (*)(BattlePassAwardController*))(Il2CppBase() + 0x3261360))(this);
	}
	template <typename T = void> T SetWillGetScrollView() {
		return ((T (*)(BattlePassAwardController*))(Il2CppBase() + 0x325F1A4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetAwardConfig(int32_t pre, int32_t curent) {
		return ((T (*)(BattlePassAwardController*, int32_t, int32_t))(Il2CppBase() + 0x3261460))(this, pre, curent);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetPlusAwardList(int32_t preLevel) {
		return ((T (*)(BattlePassAwardController*, int32_t))(Il2CppBase() + 0x326167C))(this, preLevel);
	}
	template <typename T = void> T ShowWeaponInfo() {
		return ((T (*)(BattlePassAwardController*))(Il2CppBase() + 0x325F910))(this);
	}
	template <typename T = void> T SetWeaponAssetInfo() {
		return ((T (*)(BattlePassAwardController*))(Il2CppBase() + 0x3262350))(this);
	}
	template <typename T = void> T OnModelResChanged() {
		return ((T (*)(BattlePassAwardController*))(Il2CppBase() + 0x326251C))(this);
	}
	template <typename T = void> T ShowCommonAvatarView(bool bShow) {
		return ((T (*)(BattlePassAwardController*, bool))(Il2CppBase() + 0x325F04C))(this, bShow);
	}
	template <typename T = float> T GetAvatarAnchorPosX() {
		return ((T (*)(BattlePassAwardController*))(Il2CppBase() + 0x326270C))(this);
	}
	template <typename T = void> T CloseAwardShow() {
		return ((T (*)(BattlePassAwardController*))(Il2CppBase() + 0x325E7C0))(this);
	}
	template <typename T = void> T OnNotifyBattlePassAwardItemClick(uintptr_t message) {
		return ((T (*)(BattlePassAwardController*, uintptr_t))(Il2CppBase() + 0x3262978))(this, message);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BattlePassAwardController*))(Il2CppBase() + 0x3262F4C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BattlePassAwardController*))(Il2CppBase() + 0x3262F54))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(BattlePassAwardController*))(Il2CppBase() + 0x3262F5C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BattlePassAwardController*))(Il2CppBase() + 0x3262F64))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BattlePassAwardController*))(Il2CppBase() + 0x3262F6C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnZoneReconnectSuccess() {
		return ((T (*)(BattlePassAwardController*))(Il2CppBase() + 0x3262F74))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(BattlePassAwardController*))(Il2CppBase() + 0x3262F7C))(this);
	}

};

}
