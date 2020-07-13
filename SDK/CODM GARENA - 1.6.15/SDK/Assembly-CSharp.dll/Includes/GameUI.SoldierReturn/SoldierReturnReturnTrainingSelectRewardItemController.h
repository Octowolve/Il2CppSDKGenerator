#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.SoldierReturn {

class SoldierReturnReturnTrainingSelectRewardItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.SoldierReturn", "SoldierReturnReturnTrainingSelectRewardItemController"));
	}

	template <typename T = uintptr_t> T& _uiView() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetEasyListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInitialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SoldierReturnReturnTrainingSelectRewardItemController*))(Il2CppBase() + 0x3CB563C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SoldierReturnReturnTrainingSelectRewardItemController*))(Il2CppBase() + 0x3CB56E0))(this);
	}
	template <typename T = bool> T SetEasyListData(uintptr_t list, int32_t index, uintptr_t data) {
		return ((T (*)(SoldierReturnReturnTrainingSelectRewardItemController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x3CB5890))(this, list, index, data);
	}
	template <typename T = void> T OnInitialize() {
		return ((T (*)(SoldierReturnReturnTrainingSelectRewardItemController*))(Il2CppBase() + 0x3CB5790))(this);
	}
	template <typename T = void> T Reset(uintptr_t data) {
		return ((T (*)(SoldierReturnReturnTrainingSelectRewardItemController*, uintptr_t))(Il2CppBase() + 0x3CB59AC))(this, data);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SoldierReturnReturnTrainingSelectRewardItemController*))(Il2CppBase() + 0x3CB5D58))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SoldierReturnReturnTrainingSelectRewardItemController*))(Il2CppBase() + 0x3CB5D60))(this);
	}

};

}
