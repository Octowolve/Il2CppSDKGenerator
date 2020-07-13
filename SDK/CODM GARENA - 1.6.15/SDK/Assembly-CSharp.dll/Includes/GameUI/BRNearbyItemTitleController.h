#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BRNearbyItemTitleController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BRNearbyItemTitleController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_Wrapper() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetReuseListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetReuseListItemHide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetReuseListItemContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BRNearbyItemTitleController*))(Il2CppBase() + 0x2D9D4B0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BRNearbyItemTitleController*))(Il2CppBase() + 0x2D9D3A0))(this);
	}
	template <typename T = bool> T SetReuseListData(uintptr_t list, int32_t index, uintptr_t data, int32_t width, int32_t height, bool selected) {
		return ((T (*)(BRNearbyItemTitleController*, uintptr_t, int32_t, uintptr_t, int32_t, int32_t, bool))(Il2CppBase() + 0x2DA5760))(this, list, index, data, width, height, selected);
	}
	template <typename T = bool> T SetReuseListItemHide(uintptr_t list, int32_t index, uintptr_t data) {
		return ((T (*)(BRNearbyItemTitleController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x2DA5958))(this, list, index, data);
	}
	template <typename T = uintptr_t> T GetReuseListItemContent() {
		return ((T (*)(BRNearbyItemTitleController*))(Il2CppBase() + 0x2DA5A20))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BRNearbyItemTitleController*))(Il2CppBase() + 0x2DA5BB8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRNearbyItemTitleController*))(Il2CppBase() + 0x2DA5BC0))(this);
	}

};

}
