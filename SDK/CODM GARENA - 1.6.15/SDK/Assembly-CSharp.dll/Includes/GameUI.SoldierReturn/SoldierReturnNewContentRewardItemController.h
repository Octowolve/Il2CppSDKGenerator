#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.SoldierReturn {

class SoldierReturnNewContentRewardItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.SoldierReturn", "SoldierReturnNewContentRewardItemController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SoldierReturnNewContentRewardItemController*))(Il2CppBase() + 0x3CAEAE8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SoldierReturnNewContentRewardItemController*))(Il2CppBase() + 0x3CAEB8C))(this);
	}
	template <typename T = bool> T SetEasyListData(uintptr_t list, int32_t index, uintptr_t data) {
		return ((T (*)(SoldierReturnNewContentRewardItemController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x3CAEC98))(this, list, index, data);
	}
	template <typename T = void> T Reset(uintptr_t data) {
		return ((T (*)(SoldierReturnNewContentRewardItemController*, uintptr_t))(Il2CppBase() + 0x3CAEDB4))(this, data);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SoldierReturnNewContentRewardItemController*))(Il2CppBase() + 0x3CAF024))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SoldierReturnNewContentRewardItemController*))(Il2CppBase() + 0x3CAF02C))(this);
	}

};

}
