#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.SoldierReturn {

class SoldierReturnReturnTrainingTaskContentItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.SoldierReturn", "SoldierReturnReturnTrainingTaskContentItemController"));
	}

	template <typename T = uintptr_t> T& _uiView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& _itemListController() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _data() {
		return *(T*)((uintptr_t)this + 0x44);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnClaimBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEasyListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInitialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitLayout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitListController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetClaimBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Switch2UI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SoldierReturnReturnTrainingTaskContentItemController*))(Il2CppBase() + 0x3CB5F54))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SoldierReturnReturnTrainingTaskContentItemController*))(Il2CppBase() + 0x3CB5FF8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SoldierReturnReturnTrainingTaskContentItemController*))(Il2CppBase() + 0x3CB61B8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SoldierReturnReturnTrainingTaskContentItemController*))(Il2CppBase() + 0x3CB62EC))(this);
	}
	template <typename T = void> T OnClaimBtnClicked() {
		return ((T (*)(SoldierReturnReturnTrainingTaskContentItemController*))(Il2CppBase() + 0x3CB6408))(this);
	}
	template <typename T = bool> T SetEasyListData(uintptr_t list, int32_t index, uintptr_t data) {
		return ((T (*)(SoldierReturnReturnTrainingTaskContentItemController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x3CB6868))(this, list, index, data);
	}
	template <typename T = void> T OnInitialize() {
		return ((T (*)(SoldierReturnReturnTrainingTaskContentItemController*))(Il2CppBase() + 0x3CB610C))(this);
	}
	template <typename T = void> T InitLayout() {
		return ((T (*)(SoldierReturnReturnTrainingTaskContentItemController*))(Il2CppBase() + 0x3CB6C8C))(this);
	}
	template <typename T = void> T InitListController() {
		return ((T (*)(SoldierReturnReturnTrainingTaskContentItemController*))(Il2CppBase() + 0x3CB6E78))(this);
	}
	template <typename T = void> T Reset(uintptr_t data) {
		return ((T (*)(SoldierReturnReturnTrainingTaskContentItemController*, uintptr_t))(Il2CppBase() + 0x3CB6984))(this, data);
	}
	template <typename T = void> T ResetClaimBtn(uintptr_t state) {
		return ((T (*)(SoldierReturnReturnTrainingTaskContentItemController*, uintptr_t))(Il2CppBase() + 0x3CB70F4))(this, state);
	}
	template <typename T = void> T Switch2UI() {
		return ((T (*)(SoldierReturnReturnTrainingTaskContentItemController*))(Il2CppBase() + 0x3CB6520))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SoldierReturnReturnTrainingTaskContentItemController*))(Il2CppBase() + 0x3CB758C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SoldierReturnReturnTrainingTaskContentItemController*))(Il2CppBase() + 0x3CB7594))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SoldierReturnReturnTrainingTaskContentItemController*))(Il2CppBase() + 0x3CB759C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SoldierReturnReturnTrainingTaskContentItemController*))(Il2CppBase() + 0x3CB75A4))(this);
	}

};

}
