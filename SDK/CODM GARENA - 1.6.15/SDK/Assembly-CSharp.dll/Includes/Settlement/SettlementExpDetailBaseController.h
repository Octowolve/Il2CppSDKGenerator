#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class SettlementExpDetailBaseController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "SettlementExpDetailBaseController"));
	}

	template <typename T = uintptr_t> T& _baseView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_WinnerCircleCtrl() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_safeBoxThumbnailCtr() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_WeaponExpListController() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ShowList() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_WeaponItemDatas() {
		return *(T*)((uintptr_t)this + 0x50);
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
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupExpViewData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareExpViewData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowActiveItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowActiveConsume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSafeBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShowPlayAgainPopWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWillShowPlayAgain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayAgainTeamInfoUpdateNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnWeaponExpDetailClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnNextClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelUpAnimEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReturnKeyClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneReconnectSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}

	template <typename T = uintptr_t> T get_settlementDs() {
		return ((T (*)(SettlementExpDetailBaseController*))(Il2CppBase() + 0x295CB30))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SettlementExpDetailBaseController*))(Il2CppBase() + 0x295CBCC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SettlementExpDetailBaseController*))(Il2CppBase() + 0x295CECC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SettlementExpDetailBaseController*))(Il2CppBase() + 0x295D088))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(SettlementExpDetailBaseController*))(Il2CppBase() + 0x295E290))(this);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(SettlementExpDetailBaseController*))(Il2CppBase() + 0x295E7D8))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(SettlementExpDetailBaseController*))(Il2CppBase() + 0x295E87C))(this);
	}
	template <typename T = void> T SetupExpViewData() {
		return ((T (*)(SettlementExpDetailBaseController*))(Il2CppBase() + 0x295E384))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T PrepareExpViewData(uintptr_t ds) {
		return ((T (*)(SettlementExpDetailBaseController*, uintptr_t))(Il2CppBase() + 0x295E95C))(this, ds);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(SettlementExpDetailBaseController*))(Il2CppBase() + 0x295ECB4))(this);
	}
	template <typename T = void> T ShowActiveItem() {
		return ((T (*)(SettlementExpDetailBaseController*))(Il2CppBase() + 0x295DB90))(this);
	}
	template <typename T = void> T ShowActiveConsume() {
		return ((T (*)(SettlementExpDetailBaseController*))(Il2CppBase() + 0x295DFC8))(this);
	}
	template <typename T = void> T ShowSafeBox() {
		return ((T (*)(SettlementExpDetailBaseController*))(Il2CppBase() + 0x295D814))(this);
	}
	template <typename T = void> T CheckShowPlayAgainPopWindow() {
		return ((T (*)(SettlementExpDetailBaseController*))(Il2CppBase() + 0x295D484))(this);
	}
	template <typename T = void> T OnWillShowPlayAgain(uintptr_t msg) {
		return ((T (*)(SettlementExpDetailBaseController*, uintptr_t))(Il2CppBase() + 0x295F1C0))(this, msg);
	}
	template <typename T = void> T OnPlayAgainTeamInfoUpdateNtf(uintptr_t Msg) {
		return ((T (*)(SettlementExpDetailBaseController*, uintptr_t))(Il2CppBase() + 0x295D5C4))(this, Msg);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(SettlementExpDetailBaseController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x295F5E8))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(SettlementExpDetailBaseController*, uintptr_t, int32_t))(Il2CppBase() + 0x295F6E0))(this, list, userContext);
	}
	template <typename T = void> T OnBtnWeaponExpDetailClicked() {
		return ((T (*)(SettlementExpDetailBaseController*))(Il2CppBase() + 0x295F7D0))(this);
	}
	template <typename T = void> T OnBtnNextClicked() {
		return ((T (*)(SettlementExpDetailBaseController*))(Il2CppBase() + 0x295F8EC))(this);
	}
	template <typename T = void> T OnLevelUpAnimEnd(uintptr_t msg) {
		return ((T (*)(SettlementExpDetailBaseController*, uintptr_t))(Il2CppBase() + 0x295F9D0))(this, msg);
	}
	template <typename T = void> T OnReturnKeyClick(uintptr_t Msg) {
		return ((T (*)(SettlementExpDetailBaseController*, uintptr_t))(Il2CppBase() + 0x295FB90))(this, Msg);
	}
	template <typename T = void> T OnZoneReconnectSuccess() {
		return ((T (*)(SettlementExpDetailBaseController*))(Il2CppBase() + 0x295FD30))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SettlementExpDetailBaseController*))(Il2CppBase() + 0x295FE44))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SettlementExpDetailBaseController*))(Il2CppBase() + 0x295FE4C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SettlementExpDetailBaseController*))(Il2CppBase() + 0x295FE54))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(SettlementExpDetailBaseController*))(Il2CppBase() + 0x295FE5C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(SettlementExpDetailBaseController*))(Il2CppBase() + 0x295FE64))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(SettlementExpDetailBaseController*))(Il2CppBase() + 0x295FE6C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnZoneReconnectSuccess() {
		return ((T (*)(SettlementExpDetailBaseController*))(Il2CppBase() + 0x295FE74))(this);
	}

};

}
