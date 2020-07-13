#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class PVPSettlementWeaponExpItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "PVPSettlementWeaponExpItemController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IEasyListItemController_SetEasyListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PVPSettlementWeaponExpItemController*))(Il2CppBase() + 0x3B51280))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PVPSettlementWeaponExpItemController*))(Il2CppBase() + 0x3B51324))(this);
	}
	template <typename T = bool> T GameUI_IEasyListItemController_SetEasyListData(uintptr_t list, int32_t index, uintptr_t data) {
		return ((T (*)(PVPSettlementWeaponExpItemController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x3B51430))(this, list, index, data);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PVPSettlementWeaponExpItemController*))(Il2CppBase() + 0x3B51FB4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PVPSettlementWeaponExpItemController*))(Il2CppBase() + 0x3B51FBC))(this);
	}

};

}
