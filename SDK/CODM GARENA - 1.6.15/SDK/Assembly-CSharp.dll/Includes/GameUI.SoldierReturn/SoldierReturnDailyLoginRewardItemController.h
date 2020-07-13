#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.SoldierReturn {

class SoldierReturnDailyLoginRewardItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.SoldierReturn", "SoldierReturnDailyLoginRewardItemController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_ResetItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Adaptation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnItemUIClickedCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SoldierReturnDailyLoginRewardItemController*))(Il2CppBase() + 0x3CA46C4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SoldierReturnDailyLoginRewardItemController*))(Il2CppBase() + 0x3CA4768))(this);
	}
	template <typename T = bool> T SetEasyListData(uintptr_t list, int32_t index, uintptr_t dataObj) {
		return ((T (*)(SoldierReturnDailyLoginRewardItemController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x3CA4A8C))(this, list, index, dataObj);
	}
	template <typename T = void> T ResetItem(uintptr_t data) {
		return ((T (*)(SoldierReturnDailyLoginRewardItemController*, uintptr_t))(Il2CppBase() + 0x3CA4D60))(this, data);
	}
	template <typename T = void> T Adaptation() {
		return ((T (*)(SoldierReturnDailyLoginRewardItemController*))(Il2CppBase() + 0x3CA487C))(this);
	}
	template <typename T = void> T OnItemUIClickedCallback(uintptr_t data) {
		return ((T (*)(SoldierReturnDailyLoginRewardItemController*, uintptr_t))(Il2CppBase() + 0x3CA52B8))(this, data);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SoldierReturnDailyLoginRewardItemController*))(Il2CppBase() + 0x3CA53D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SoldierReturnDailyLoginRewardItemController*))(Il2CppBase() + 0x3CA53DC))(this);
	}

};

}
