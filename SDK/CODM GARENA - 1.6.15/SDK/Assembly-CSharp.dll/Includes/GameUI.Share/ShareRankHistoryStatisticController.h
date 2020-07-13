#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Share {

class ShareRankHistoryStatisticController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Share", "ShareRankHistoryStatisticController"));
	}

	template <typename T = uintptr_t> T& _uiView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& _rankHistoryItemListController() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ShareRankHistoryStatisticController*))(Il2CppBase() + 0x4499E90))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ShareRankHistoryStatisticController*))(Il2CppBase() + 0x4499F34))(this);
	}
	template <typename T = void> T Show(uintptr_t data, int32_t width, int32_t height) {
		return ((T (*)(ShareRankHistoryStatisticController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x4497C90))(this, data, width, height);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ShareRankHistoryStatisticController*))(Il2CppBase() + 0x449A1C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ShareRankHistoryStatisticController*))(Il2CppBase() + 0x449A1CC))(this);
	}

};

}
