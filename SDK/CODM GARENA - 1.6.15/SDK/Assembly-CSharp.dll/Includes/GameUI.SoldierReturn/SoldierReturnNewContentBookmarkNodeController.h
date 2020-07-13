#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.SoldierReturn {

class SoldierReturnNewContentBookmarkNodeController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.SoldierReturn", "SoldierReturnNewContentBookmarkNodeController"));
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
		return ((T (*)(SoldierReturnNewContentBookmarkNodeController*))(Il2CppBase() + 0x3CA9798))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SoldierReturnNewContentBookmarkNodeController*))(Il2CppBase() + 0x3CA983C))(this);
	}
	template <typename T = bool> T SetEasyListData(uintptr_t list, int32_t index, uintptr_t data) {
		return ((T (*)(SoldierReturnNewContentBookmarkNodeController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x3CA9948))(this, list, index, data);
	}
	template <typename T = void> T Reset(uintptr_t data) {
		return ((T (*)(SoldierReturnNewContentBookmarkNodeController*, uintptr_t))(Il2CppBase() + 0x3CA9A64))(this, data);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SoldierReturnNewContentBookmarkNodeController*))(Il2CppBase() + 0x3CA9C9C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SoldierReturnNewContentBookmarkNodeController*))(Il2CppBase() + 0x3CA9CA4))(this);
	}

};

}
