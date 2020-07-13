#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ReuseListItemEmptyController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ReuseListItemEmptyController"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetReuseListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetReuseListItemHide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetReuseListItemContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ReuseListItemEmptyController*))(Il2CppBase() + 0x3ACB250))(this);
	}
	template <typename T = bool> T SetReuseListData(uintptr_t list, int32_t index, uintptr_t data, int32_t width, int32_t height, bool selected) {
		return ((T (*)(ReuseListItemEmptyController*, uintptr_t, int32_t, uintptr_t, int32_t, int32_t, bool))(Il2CppBase() + 0x3ACB2F0))(this, list, index, data, width, height, selected);
	}
	template <typename T = bool> T SetReuseListItemHide(uintptr_t list, int32_t index, uintptr_t data) {
		return ((T (*)(ReuseListItemEmptyController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x3ACB3D0))(this, list, index, data);
	}
	template <typename T = uintptr_t> T GetReuseListItemContent() {
		return ((T (*)(ReuseListItemEmptyController*))(Il2CppBase() + 0x3ACB498))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ReuseListItemEmptyController*))(Il2CppBase() + 0x3ACB538))(this);
	}

};

}
