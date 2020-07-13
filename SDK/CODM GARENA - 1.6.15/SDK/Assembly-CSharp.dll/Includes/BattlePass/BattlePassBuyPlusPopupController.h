#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassBuyPlusPopupController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassBuyPlusPopupController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& mBattlePassDS() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& battlepassConf() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& splvConfList() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& awardList() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& plusChargeConf() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& HundrendAwardList() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& TenAwardList() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& OthersAwardList() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& FirstLevel() {
		return *(T*)((uintptr_t)this + 0x6C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBattlePassGetPassSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBuyPlusBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAwardConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LevelAwardListCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortByItemType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getCurSpChargeConf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BattlePassBuyPlusPopupController*))(Il2CppBase() + 0x3271AF0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BattlePassBuyPlusPopupController*))(Il2CppBase() + 0x3271B94))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BattlePassBuyPlusPopupController*))(Il2CppBase() + 0x3271F24))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BattlePassBuyPlusPopupController*))(Il2CppBase() + 0x32720BC))(this);
	}
	template <typename T = void> T OnNotifyBattlePassGetPassSuccess(uintptr_t message) {
		return ((T (*)(BattlePassBuyPlusPopupController*, uintptr_t))(Il2CppBase() + 0x32721EC))(this, message);
	}
	template <typename T = void> T OnBuyPlusBtnClick() {
		return ((T (*)(BattlePassBuyPlusPopupController*))(Il2CppBase() + 0x3272424))(this);
	}
	template <typename T = void> T SetData() {
		return ((T (*)(BattlePassBuyPlusPopupController*))(Il2CppBase() + 0x326AE8C))(this);
	}
	template <typename T = void> T GetAwardConfig(int32_t pre, int32_t curent) {
		return ((T (*)(BattlePassBuyPlusPopupController*, int32_t, int32_t))(Il2CppBase() + 0x32727F8))(this, pre, curent);
	}
	template <typename T = void> T LevelAwardListCount() {
		return ((T (*)(BattlePassBuyPlusPopupController*))(Il2CppBase() + 0x3272D2C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T SortByItemType(Il2CppList<uintptr_t>* list) {
		return ((T (*)(BattlePassBuyPlusPopupController*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3273508))(this, list);
	}
	template <typename T = void> T getCurSpChargeConf() {
		return ((T (*)(BattlePassBuyPlusPopupController*))(Il2CppBase() + 0x3271D1C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BattlePassBuyPlusPopupController*))(Il2CppBase() + 0x32736C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BattlePassBuyPlusPopupController*))(Il2CppBase() + 0x32736D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BattlePassBuyPlusPopupController*))(Il2CppBase() + 0x32736D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BattlePassBuyPlusPopupController*))(Il2CppBase() + 0x32736E0))(this);
	}

};

}
