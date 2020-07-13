#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class CommodityItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "CommodityItemController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Init() {
		return ((T (*)(CommodityItemController*))(Il2CppBase() + 0x28CCE40))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(CommodityItemController*))(Il2CppBase() + 0x28CCF4C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(CommodityItemController*))(Il2CppBase() + 0x28CCFEC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(CommodityItemController*))(Il2CppBase() + 0x28CD094))(this);
	}
	template <typename T = void> T SetData(uintptr_t shopPaymentInfo) {
		return ((T (*)(CommodityItemController*, uintptr_t))(Il2CppBase() + 0x28CD13C))(this, shopPaymentInfo);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(CommodityItemController*))(Il2CppBase() + 0x28CD230))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(CommodityItemController*))(Il2CppBase() + 0x28CD238))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(CommodityItemController*))(Il2CppBase() + 0x28CD240))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(CommodityItemController*))(Il2CppBase() + 0x28CD248))(this);
	}

};

}
