#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.DuelGame {

class DuelGameScoreUIController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.DuelGame", "DuelGameScoreUIController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x7C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStarted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGameHUDLayoutChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundCountChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundScoreChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowCurRoundWeaponTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(DuelGameScoreUIController*))(Il2CppBase() + 0x400F1F4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(DuelGameScoreUIController*))(Il2CppBase() + 0x400F298))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(DuelGameScoreUIController*))(Il2CppBase() + 0x400F5B4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(DuelGameScoreUIController*))(Il2CppBase() + 0x400F7A4))(this);
	}
	template <typename T = void> T OnRoundStarted(uintptr_t msg) {
		return ((T (*)(DuelGameScoreUIController*, uintptr_t))(Il2CppBase() + 0x400F89C))(this, msg);
	}
	template <typename T = void> T OnGameHUDLayoutChanged() {
		return ((T (*)(DuelGameScoreUIController*))(Il2CppBase() + 0x400F950))(this);
	}
	template <typename T = void> T OnRoundCountChanged(uintptr_t msg) {
		return ((T (*)(DuelGameScoreUIController*, uintptr_t))(Il2CppBase() + 0x400FAA0))(this, msg);
	}
	template <typename T = void> T OnRoundScoreChanged(uintptr_t msg) {
		return ((T (*)(DuelGameScoreUIController*, uintptr_t))(Il2CppBase() + 0x400FBBC))(this, msg);
	}
	template <typename T = void> T OnShowCurRoundWeaponTips(uintptr_t msg) {
		return ((T (*)(DuelGameScoreUIController*, uintptr_t))(Il2CppBase() + 0x400FC80))(this, msg);
	}
	template <typename T = void> T OnShowCurRoundWeaponTipsm__0() {
		return ((T (*)(DuelGameScoreUIController*))(Il2CppBase() + 0x400FF50))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(DuelGameScoreUIController*))(Il2CppBase() + 0x4010028))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(DuelGameScoreUIController*))(Il2CppBase() + 0x4010030))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(DuelGameScoreUIController*))(Il2CppBase() + 0x4010038))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(DuelGameScoreUIController*))(Il2CppBase() + 0x4010040))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundStarted(uintptr_t P0) {
		return ((T (*)(DuelGameScoreUIController*, uintptr_t))(Il2CppBase() + 0x4010048))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnGameHUDLayoutChanged() {
		return ((T (*)(DuelGameScoreUIController*))(Il2CppBase() + 0x4010050))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundCountChanged(uintptr_t P0) {
		return ((T (*)(DuelGameScoreUIController*, uintptr_t))(Il2CppBase() + 0x4010058))(this, P0);
	}

};

}
