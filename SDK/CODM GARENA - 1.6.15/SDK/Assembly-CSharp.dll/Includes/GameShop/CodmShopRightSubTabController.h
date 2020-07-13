#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class CodmShopRightSubTabController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "CodmShopRightSubTabController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_RightSubTabList() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& m_CurrentSelectTagId() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_RightSubListController() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_ShopType() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& clickEntrance() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_Ctr() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_ChestCtr() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRightSubTabItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyShopRefresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_OnRightSubTabItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshSubTabAndShopController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitSubTabScrollView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = void> T Init() {
		return ((T (*)(CodmShopRightSubTabController*))(Il2CppBase() + 0x28CA4A4))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(CodmShopRightSubTabController*))(Il2CppBase() + 0x28CA5B0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(CodmShopRightSubTabController*))(Il2CppBase() + 0x28CA654))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(CodmShopRightSubTabController*))(Il2CppBase() + 0x28CA7C4))(this);
	}
	template <typename T = void> T UpdateView(Il2CppList<uintptr_t>* list, uintptr_t type, uintptr_t ctr) {
		return ((T (*)(CodmShopRightSubTabController*, Il2CppList<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x28CA894))(this, list, type, ctr);
	}
	template <typename T = void> T UpdateView_1(Il2CppList<uintptr_t>* list, uintptr_t type, uintptr_t ctr) {
		return ((T (*)(CodmShopRightSubTabController*, Il2CppList<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x28CAAA4))(this, list, type, ctr);
	}
	template <typename T = void> T OnRightSubTabItemClick(uintptr_t msg) {
		return ((T (*)(CodmShopRightSubTabController*, uintptr_t))(Il2CppBase() + 0x28CABD4))(this, msg);
	}
	template <typename T = void> T OnNotifyShopRefresh(uintptr_t msg) {
		return ((T (*)(CodmShopRightSubTabController*, uintptr_t))(Il2CppBase() + 0x28CAD78))(this, msg);
	}
	template <typename T = void> T OnRightSubTabItemClick_1(int32_t tagId, bool reset, int32_t index) {
		return ((T (*)(CodmShopRightSubTabController*, int32_t, bool, int32_t))(Il2CppBase() + 0x28CA9C4))(this, tagId, reset, index);
	}
	template <typename T = void> T RefreshSubTabAndShopController(int32_t tagId, bool reset, int32_t index) {
		return ((T (*)(CodmShopRightSubTabController*, int32_t, bool, int32_t))(Il2CppBase() + 0x28CAE88))(this, tagId, reset, index);
	}
	template <typename T = void> T InitSubTabScrollView() {
		return ((T (*)(CodmShopRightSubTabController*))(Il2CppBase() + 0x28CB14C))(this);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(CodmShopRightSubTabController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x28CB758))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(CodmShopRightSubTabController*, uintptr_t, int32_t))(Il2CppBase() + 0x28CB820))(this, list, userContext);
	}
	template <typename T = void> T RefreshSubTabAndShopControllerm__0() {
		return ((T (*)(CodmShopRightSubTabController*))(Il2CppBase() + 0x28CB8D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(CodmShopRightSubTabController*))(Il2CppBase() + 0x28CB8D8))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(CodmShopRightSubTabController*))(Il2CppBase() + 0x28CB8E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(CodmShopRightSubTabController*))(Il2CppBase() + 0x28CB8E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(CodmShopRightSubTabController*))(Il2CppBase() + 0x28CB8F0))(this);
	}

};

}
