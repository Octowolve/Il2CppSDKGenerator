#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class PayResReceiveBoxesController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "PayResReceiveBoxesController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_ShopPaymentDS() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCancel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConfirm() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T get_ShopPaymentDS() {
		return ((T (*)(PayResReceiveBoxesController*))(Il2CppBase() + 0x235823C))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PayResReceiveBoxesController*))(Il2CppBase() + 0x23582EC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PayResReceiveBoxesController*))(Il2CppBase() + 0x2358390))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PayResReceiveBoxesController*))(Il2CppBase() + 0x2358780))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PayResReceiveBoxesController*))(Il2CppBase() + 0x2358960))(this);
	}
	template <typename T = void> T OnCancel() {
		return ((T (*)(PayResReceiveBoxesController*))(Il2CppBase() + 0x2358ADC))(this);
	}
	template <typename T = void> T OnConfirm() {
		return ((T (*)(PayResReceiveBoxesController*))(Il2CppBase() + 0x2358B90))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PayResReceiveBoxesController*))(Il2CppBase() + 0x2358F1C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PayResReceiveBoxesController*))(Il2CppBase() + 0x2358F24))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PayResReceiveBoxesController*))(Il2CppBase() + 0x2358F2C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PayResReceiveBoxesController*))(Il2CppBase() + 0x2358F34))(this);
	}

};

}
