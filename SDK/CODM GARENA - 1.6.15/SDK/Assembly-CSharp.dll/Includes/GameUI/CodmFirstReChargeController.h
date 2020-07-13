#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class CodmFirstReChargeController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "CodmFirstReChargeController"));
	}

	template <typename T = bool> static T& IsSendCloseEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _view() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnGoToClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnCloseClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(CodmFirstReChargeController*))(Il2CppBase() + 0x3DE45B0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(CodmFirstReChargeController*))(Il2CppBase() + 0x3DE4684))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(CodmFirstReChargeController*))(Il2CppBase() + 0x3DE47C0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(CodmFirstReChargeController*))(Il2CppBase() + 0x3DE4B6C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(CodmFirstReChargeController*))(Il2CppBase() + 0x3DE4D5C))(this);
	}
	template <typename T = void> T OnBtnGoToClick() {
		return ((T (*)(CodmFirstReChargeController*))(Il2CppBase() + 0x3DE4F08))(this);
	}
	template <typename T = void> T OnBtnCloseClick() {
		return ((T (*)(CodmFirstReChargeController*))(Il2CppBase() + 0x3DE50EC))(this);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(CodmFirstReChargeController*, uintptr_t, int32_t))(Il2CppBase() + 0x3DE51D0))(this, list, userContext);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(CodmFirstReChargeController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3DE52B4))(this, list, controller, index);
	}
	template <typename T = void> T WillClose() {
		return ((T (*)(CodmFirstReChargeController*))(Il2CppBase() + 0x3DE53AC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(CodmFirstReChargeController*))(Il2CppBase() + 0x3DE5524))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(CodmFirstReChargeController*))(Il2CppBase() + 0x3DE552C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(CodmFirstReChargeController*))(Il2CppBase() + 0x3DE5534))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(CodmFirstReChargeController*))(Il2CppBase() + 0x3DE553C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(CodmFirstReChargeController*))(Il2CppBase() + 0x3DE5544))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillClose() {
		return ((T (*)(CodmFirstReChargeController*))(Il2CppBase() + 0x3DE554C))(this);
	}

};

}
