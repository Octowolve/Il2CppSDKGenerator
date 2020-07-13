#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassBuyPassController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassBuyPassController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mBattlePassDS() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mBattlePassConfDS() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& CacheNormalPass() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& CacheSuperPass() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& mCacheData() {
		return *(T*)((uintptr_t)this + 0x50);
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
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNormalBuyBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSuperBuyBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportBattlePassBuyNormalBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportBattlePassBuyPlusBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMoreBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBattlePassGetPassSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportBattlePassBuyNormal_Purchase_Succeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportBattlePassBuyPlus_Purchase_Succeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNormalListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlusListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSeasonSecialUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBPBuyItemLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BattlePassBuyPassController*))(Il2CppBase() + 0x326CE8C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BattlePassBuyPassController*))(Il2CppBase() + 0x326CF30))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BattlePassBuyPassController*))(Il2CppBase() + 0x326D0B0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BattlePassBuyPassController*))(Il2CppBase() + 0x326D338))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(BattlePassBuyPassController*))(Il2CppBase() + 0x326D540))(this);
	}
	template <typename T = void> T RefreshView() {
		return ((T (*)(BattlePassBuyPassController*))(Il2CppBase() + 0x326DFBC))(this);
	}
	template <typename T = void> T OnNormalBuyBtnClick() {
		return ((T (*)(BattlePassBuyPassController*))(Il2CppBase() + 0x326EA18))(this);
	}
	template <typename T = void> T OnSuperBuyBtnClick() {
		return ((T (*)(BattlePassBuyPassController*))(Il2CppBase() + 0x326EF90))(this);
	}
	template <typename T = void> T ReportBattlePassBuyNormalBtn() {
		return ((T (*)(BattlePassBuyPassController*))(Il2CppBase() + 0x326ED7C))(this);
	}
	template <typename T = void> T ReportBattlePassBuyPlusBtn() {
		return ((T (*)(BattlePassBuyPassController*))(Il2CppBase() + 0x326F4A0))(this);
	}
	template <typename T = void> T OnMoreBtnClick() {
		return ((T (*)(BattlePassBuyPassController*))(Il2CppBase() + 0x326F6A8))(this);
	}
	template <typename T = void> T OnNotifyBattlePassGetPassSuccess(uintptr_t message) {
		return ((T (*)(BattlePassBuyPassController*, uintptr_t))(Il2CppBase() + 0x326F7B0))(this, message);
	}
	template <typename T = void> T ReportBattlePassBuyNormal_Purchase_Succeed() {
		return ((T (*)(BattlePassBuyPassController*))(Il2CppBase() + 0x326FB28))(this);
	}
	template <typename T = void> T ReportBattlePassBuyPlus_Purchase_Succeed() {
		return ((T (*)(BattlePassBuyPassController*))(Il2CppBase() + 0x326FE0C))(this);
	}
	template <typename T = void> T SetNormalListData() {
		return ((T (*)(BattlePassBuyPassController*))(Il2CppBase() + 0x326D600))(this);
	}
	template <typename T = void> T SetPlusListData() {
		return ((T (*)(BattlePassBuyPassController*))(Il2CppBase() + 0x326DB28))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(BattlePassBuyPassController*))(Il2CppBase() + 0x32700F0))(this);
	}
	template <typename T = void> T SetSeasonSecialUI() {
		return ((T (*)(BattlePassBuyPassController*))(Il2CppBase() + 0x3270A94))(this);
	}
	template <typename T = void> T SetBPBuyItemLabel(uintptr_t ItemRoot, uintptr_t type) {
		return ((T (*)(BattlePassBuyPassController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3270378))(this, ItemRoot, type);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BattlePassBuyPassController*))(Il2CppBase() + 0x3271284))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BattlePassBuyPassController*))(Il2CppBase() + 0x327128C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BattlePassBuyPassController*))(Il2CppBase() + 0x3271294))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BattlePassBuyPassController*))(Il2CppBase() + 0x327129C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(BattlePassBuyPassController*))(Il2CppBase() + 0x32712A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(BattlePassBuyPassController*))(Il2CppBase() + 0x32712AC))(this);
	}

};

}
