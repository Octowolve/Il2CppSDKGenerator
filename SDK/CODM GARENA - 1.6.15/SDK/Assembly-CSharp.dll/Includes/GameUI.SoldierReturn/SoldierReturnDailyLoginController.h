#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.SoldierReturn {

class SoldierReturnDailyLoginController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.SoldierReturn", "SoldierReturnDailyLoginController"));
	}

	template <typename T = uintptr_t> T& _uiView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& _itemListController() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& ITEM_COLUMN_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ITEM_ROW_COUNT() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClaimBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInitialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitScrollView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowRewardItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetClaimBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRectSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRewardData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildDailyLoginData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SoldierReturnDailyLoginController*))(Il2CppBase() + 0x3CA2528))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SoldierReturnDailyLoginController*))(Il2CppBase() + 0x3CA25FC))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(SoldierReturnDailyLoginController*))(Il2CppBase() + 0x3CA29D0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SoldierReturnDailyLoginController*))(Il2CppBase() + 0x3CA2DEC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SoldierReturnDailyLoginController*))(Il2CppBase() + 0x3CA2F60))(this);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(SoldierReturnDailyLoginController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x3CA30BC))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T OnClaimBtnClicked() {
		return ((T (*)(SoldierReturnDailyLoginController*))(Il2CppBase() + 0x3CA31C4))(this);
	}
	template <typename T = void> T OnInitialize() {
		return ((T (*)(SoldierReturnDailyLoginController*))(Il2CppBase() + 0x3CA2740))(this);
	}
	template <typename T = void> T InitPanel(int32_t width, int32_t height) {
		return ((T (*)(SoldierReturnDailyLoginController*, int32_t, int32_t))(Il2CppBase() + 0x3CA355C))(this, width, height);
	}
	template <typename T = void> T InitScrollView() {
		return ((T (*)(SoldierReturnDailyLoginController*))(Il2CppBase() + 0x3CA369C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(SoldierReturnDailyLoginController*))(Il2CppBase() + 0x3CA3930))(this);
	}
	template <typename T = void> T ShowRewardItem() {
		return ((T (*)(SoldierReturnDailyLoginController*))(Il2CppBase() + 0x3CA3A0C))(this);
	}
	template <typename T = void> T ResetClaimBtn() {
		return ((T (*)(SoldierReturnDailyLoginController*))(Il2CppBase() + 0x3CA3B60))(this);
	}
	template <typename T = void> T GetRectSize(uintptr_t width, uintptr_t height) {
		return ((T (*)(SoldierReturnDailyLoginController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CA329C))(this, width, height);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetRewardData() {
		return ((T (*)(SoldierReturnDailyLoginController*))(Il2CppBase() + 0x3CA3EE8))(this);
	}
	template <typename T = uintptr_t> T BuildDailyLoginData(int32_t index, Il2CppList<int32_t>* specials, uintptr_t reward, int32_t canClaimDayNumber, int32_t claimedDayNumber) {
		return ((T (*)(SoldierReturnDailyLoginController*, int32_t, Il2CppList<int32_t>*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x3CA4314))(this, index, specials, reward, canClaimDayNumber, claimedDayNumber);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SoldierReturnDailyLoginController*))(Il2CppBase() + 0x3CA455C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SoldierReturnDailyLoginController*))(Il2CppBase() + 0x3CA4564))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(SoldierReturnDailyLoginController*))(Il2CppBase() + 0x3CA456C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SoldierReturnDailyLoginController*))(Il2CppBase() + 0x3CA4574))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SoldierReturnDailyLoginController*))(Il2CppBase() + 0x3CA457C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(SoldierReturnDailyLoginController*))(Il2CppBase() + 0x3CA4584))(this);
	}

};

}
