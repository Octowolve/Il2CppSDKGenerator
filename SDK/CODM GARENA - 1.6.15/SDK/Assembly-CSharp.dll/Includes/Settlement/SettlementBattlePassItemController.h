#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class SettlementBattlePassItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "SettlementBattlePassItemController"));
	}

	template <typename T = uintptr_t> T& m_View() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IEasyListItemController_SetEasyListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SettlementBattlePassItemController*))(Il2CppBase() + 0x3B57E34))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SettlementBattlePassItemController*))(Il2CppBase() + 0x3B57ED8))(this);
	}
	template <typename T = bool> T GameUI_IEasyListItemController_SetEasyListData(uintptr_t list, int32_t index, uintptr_t data) {
		return ((T (*)(SettlementBattlePassItemController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x3B57FE4))(this, list, index, data);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SettlementBattlePassItemController*))(Il2CppBase() + 0x3B5A294))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SettlementBattlePassItemController*))(Il2CppBase() + 0x3B5A29C))(this);
	}

};

}
