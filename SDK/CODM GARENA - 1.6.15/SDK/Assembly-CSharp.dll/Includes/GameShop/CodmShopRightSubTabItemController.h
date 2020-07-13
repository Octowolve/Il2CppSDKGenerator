#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class CodmShopRightSubTabItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "CodmShopRightSubTabItemController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& m_Index() {
		return *(T*)((uintptr_t)this + 0x40);
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetEasyListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Init() {
		return ((T (*)(CodmShopRightSubTabItemController*))(Il2CppBase() + 0x28CBA40))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(CodmShopRightSubTabItemController*))(Il2CppBase() + 0x28CBB4C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(CodmShopRightSubTabItemController*))(Il2CppBase() + 0x28CBBF0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(CodmShopRightSubTabItemController*))(Il2CppBase() + 0x28CBD7C))(this);
	}
	template <typename T = bool> T SetEasyListData(uintptr_t list, int32_t index, uintptr_t dataObj) {
		return ((T (*)(CodmShopRightSubTabItemController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x28CBEF0))(this, list, index, dataObj);
	}
	template <typename T = void> T OnBtnClick() {
		return ((T (*)(CodmShopRightSubTabItemController*))(Il2CppBase() + 0x28CC5A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(CodmShopRightSubTabItemController*))(Il2CppBase() + 0x28CC7C0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(CodmShopRightSubTabItemController*))(Il2CppBase() + 0x28CC7C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(CodmShopRightSubTabItemController*))(Il2CppBase() + 0x28CC7D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(CodmShopRightSubTabItemController*))(Il2CppBase() + 0x28CC7D8))(this);
	}

};

}
