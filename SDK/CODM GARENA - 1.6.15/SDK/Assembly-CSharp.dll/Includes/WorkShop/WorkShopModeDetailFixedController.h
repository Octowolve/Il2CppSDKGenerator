#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WorkShop {

class WorkShopModeDetailFixedController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WorkShop", "WorkShopModeDetailFixedController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptBg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnCloseClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Init() {
		return ((T (*)(WorkShopModeDetailFixedController*))(Il2CppBase() + 0xC16DC8))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(WorkShopModeDetailFixedController*))(Il2CppBase() + 0xC16ED0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(WorkShopModeDetailFixedController*))(Il2CppBase() + 0xC16F70))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(WorkShopModeDetailFixedController*))(Il2CppBase() + 0xC17418))(this);
	}
	template <typename T = void> T AdaptBg() {
		return ((T (*)(WorkShopModeDetailFixedController*))(Il2CppBase() + 0xC170A8))(this);
	}
	template <typename T = void> T UpdateData(uintptr_t data) {
		return ((T (*)(WorkShopModeDetailFixedController*, uintptr_t))(Il2CppBase() + 0xC165C8))(this, data);
	}
	template <typename T = void> T OnBtnCloseClick() {
		return ((T (*)(WorkShopModeDetailFixedController*))(Il2CppBase() + 0xC17530))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(WorkShopModeDetailFixedController*))(Il2CppBase() + 0xC17614))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(WorkShopModeDetailFixedController*))(Il2CppBase() + 0xC1761C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(WorkShopModeDetailFixedController*))(Il2CppBase() + 0xC17624))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(WorkShopModeDetailFixedController*))(Il2CppBase() + 0xC1762C))(this);
	}

};

}
