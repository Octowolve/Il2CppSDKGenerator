#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassBuyPassActivityController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassBuyPassActivityController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_ReportBattlePassBuyNormalBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSuperBuyBtnClick() {
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

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BattlePassBuyPassActivityController*))(Il2CppBase() + 0x32686CC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BattlePassBuyPassActivityController*))(Il2CppBase() + 0x3268770))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BattlePassBuyPassActivityController*))(Il2CppBase() + 0x32688F0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BattlePassBuyPassActivityController*))(Il2CppBase() + 0x3268B78))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(BattlePassBuyPassActivityController*))(Il2CppBase() + 0x3268D80))(this);
	}
	template <typename T = void> T RefreshView() {
		return ((T (*)(BattlePassBuyPassActivityController*))(Il2CppBase() + 0x32697FC))(this);
	}
	template <typename T = void> T OnNormalBuyBtnClick() {
		return ((T (*)(BattlePassBuyPassActivityController*))(Il2CppBase() + 0x326A258))(this);
	}
	template <typename T = void> T ReportBattlePassBuyNormalBtn() {
		return ((T (*)(BattlePassBuyPassActivityController*))(Il2CppBase() + 0x326A508))(this);
	}
	template <typename T = void> T OnSuperBuyBtnClick() {
		return ((T (*)(BattlePassBuyPassActivityController*))(Il2CppBase() + 0x326A71C))(this);
	}
	template <typename T = void> T ReportBattlePassBuyPlusBtn() {
		return ((T (*)(BattlePassBuyPassActivityController*))(Il2CppBase() + 0x326AB74))(this);
	}
	template <typename T = void> T OnMoreBtnClick() {
		return ((T (*)(BattlePassBuyPassActivityController*))(Il2CppBase() + 0x326AD84))(this);
	}
	template <typename T = void> T OnNotifyBattlePassGetPassSuccess(uintptr_t message) {
		return ((T (*)(BattlePassBuyPassActivityController*, uintptr_t))(Il2CppBase() + 0x326B3BC))(this, message);
	}
	template <typename T = void> T ReportBattlePassBuyNormal_Purchase_Succeed() {
		return ((T (*)(BattlePassBuyPassActivityController*))(Il2CppBase() + 0x326B838))(this);
	}
	template <typename T = void> T ReportBattlePassBuyPlus_Purchase_Succeed() {
		return ((T (*)(BattlePassBuyPassActivityController*))(Il2CppBase() + 0x326BB1C))(this);
	}
	template <typename T = void> T SetNormalListData() {
		return ((T (*)(BattlePassBuyPassActivityController*))(Il2CppBase() + 0x3268E40))(this);
	}
	template <typename T = void> T SetPlusListData() {
		return ((T (*)(BattlePassBuyPassActivityController*))(Il2CppBase() + 0x3269368))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BattlePassBuyPassActivityController*))(Il2CppBase() + 0x326C898))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BattlePassBuyPassActivityController*))(Il2CppBase() + 0x326C8A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BattlePassBuyPassActivityController*))(Il2CppBase() + 0x326C8A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BattlePassBuyPassActivityController*))(Il2CppBase() + 0x326C8B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(BattlePassBuyPassActivityController*))(Il2CppBase() + 0x326C8B8))(this);
	}

};

}
