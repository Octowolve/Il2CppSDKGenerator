#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class PVPSettlementWeaponExpDetailController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "PVPSettlementWeaponExpDetailController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& ctr() {
		return *(T*)((uintptr_t)this + 0x4C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnExitClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReturnKeyClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IEasyListCallback_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IEasyListCallback_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PVPSettlementWeaponExpDetailController*))(Il2CppBase() + 0x3B4FBB4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PVPSettlementWeaponExpDetailController*))(Il2CppBase() + 0x3B4FC58))(this);
	}
	template <typename T = void> T UpdateView(uintptr_t ds) {
		return ((T (*)(PVPSettlementWeaponExpDetailController*, uintptr_t))(Il2CppBase() + 0x3B4FF20))(this, ds);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PVPSettlementWeaponExpDetailController*))(Il2CppBase() + 0x3B50044))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PVPSettlementWeaponExpDetailController*))(Il2CppBase() + 0x3B501DC))(this);
	}
	template <typename T = void> T OnBtnExitClicked() {
		return ((T (*)(PVPSettlementWeaponExpDetailController*))(Il2CppBase() + 0x3B5030C))(this);
	}
	template <typename T = void> T OnReturnKeyClick(uintptr_t Msg) {
		return ((T (*)(PVPSettlementWeaponExpDetailController*, uintptr_t))(Il2CppBase() + 0x3B503C0))(this, Msg);
	}
	template <typename T = void> T GameUI_IEasyListCallback_OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(PVPSettlementWeaponExpDetailController*, uintptr_t, int32_t))(Il2CppBase() + 0x3B5047C))(this, list, userContext);
	}
	template <typename T = bool> T GameUI_IEasyListCallback_OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(PVPSettlementWeaponExpDetailController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3B50530))(this, list, controller, index);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PVPSettlementWeaponExpDetailController*))(Il2CppBase() + 0x3B505F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PVPSettlementWeaponExpDetailController*))(Il2CppBase() + 0x3B50600))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PVPSettlementWeaponExpDetailController*))(Il2CppBase() + 0x3B50608))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PVPSettlementWeaponExpDetailController*))(Il2CppBase() + 0x3B50610))(this);
	}

};

}
