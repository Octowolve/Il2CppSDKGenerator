#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.SoldierReturn {

class SoldierReturnReturnTrainingTaskProgressItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.SoldierReturn", "SoldierReturnReturnTrainingTaskProgressItemController"));
	}

	template <typename T = int32_t> T& id() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& _uiView() {
		return *(T*)((uintptr_t)this + 0x40);
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
	template <typename T = uintptr_t> static T& __Hotfix0_AttachUIDragScrollView2ItemUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnItemUIClickedCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SoldierReturnReturnTrainingTaskProgressItemController*))(Il2CppBase() + 0x3CBB914))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SoldierReturnReturnTrainingTaskProgressItemController*))(Il2CppBase() + 0x3CBB9B8))(this);
	}
	template <typename T = bool> T SetEasyListData(uintptr_t list, int32_t index, uintptr_t data) {
		return ((T (*)(SoldierReturnReturnTrainingTaskProgressItemController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x3CBBAC4))(this, list, index, data);
	}
	template <typename T = void> T Reset(uintptr_t data) {
		return ((T (*)(SoldierReturnReturnTrainingTaskProgressItemController*, uintptr_t))(Il2CppBase() + 0x3CBBBF0))(this, data);
	}
	template <typename T = void> T AttachUIDragScrollView2ItemUI(uintptr_t rootUIScrollView) {
		return ((T (*)(SoldierReturnReturnTrainingTaskProgressItemController*, uintptr_t))(Il2CppBase() + 0x3CBC2CC))(this, rootUIScrollView);
	}
	template <typename T = void> T OnItemUIClickedCallback(uintptr_t data) {
		return ((T (*)(SoldierReturnReturnTrainingTaskProgressItemController*, uintptr_t))(Il2CppBase() + 0x3CBC508))(this, data);
	}
	template <typename T = void> T ResetEffect(int32_t id, bool isLast) {
		return ((T (*)(SoldierReturnReturnTrainingTaskProgressItemController*, int32_t, bool))(Il2CppBase() + 0x3CBC084))(this, id, isLast);
	}
	template <typename T = int32_t> T get_id() {
		return ((T (*)(SoldierReturnReturnTrainingTaskProgressItemController*))(Il2CppBase() + 0x3CBC07C))(this);
	}
	template <typename T = void> T set_id(int32_t value) {
		return ((T (*)(SoldierReturnReturnTrainingTaskProgressItemController*, int32_t))(Il2CppBase() + 0x3CBC074))(this, value);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SoldierReturnReturnTrainingTaskProgressItemController*))(Il2CppBase() + 0x3CBC618))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SoldierReturnReturnTrainingTaskProgressItemController*))(Il2CppBase() + 0x3CBC620))(this);
	}

};

}
