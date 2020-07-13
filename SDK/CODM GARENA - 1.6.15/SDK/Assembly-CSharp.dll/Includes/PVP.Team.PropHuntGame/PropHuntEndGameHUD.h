#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.PropHuntGame {

class PropHuntEndGameHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.PropHuntGame", "PropHuntEndGameHUD"));
	}

	template <typename T = uintptr_t> T& m_Panel() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_SelfPlayerInfo() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_TopPlayerInfo() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& WinPanel() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& LosePanel() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppString*> static T& HumanIconName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PropIconName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeforeLoadLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowRoundResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetViewData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetViewItemData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginSettlement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(PropHuntEndGameHUD*))(Il2CppBase() + 0x3496220))(this);
	}
	template <typename T = uint64_t> T get_ActiveGameHudState() {
		return ((T (*)(PropHuntEndGameHUD*))(Il2CppBase() + 0x3496228))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(PropHuntEndGameHUD*))(Il2CppBase() + 0x3496234))(this);
	}
	template <typename T = void> T BeforeLoadLevel(uintptr_t msg) {
		return ((T (*)(PropHuntEndGameHUD*, uintptr_t))(Il2CppBase() + 0x349641C))(this, msg);
	}
	template <typename T = void> T ResetData() {
		return ((T (*)(PropHuntEndGameHUD*))(Il2CppBase() + 0x34962E4))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(PropHuntEndGameHUD*))(Il2CppBase() + 0x34964C8))(this);
	}
	template <typename T = void> T ShowRoundResult(uintptr_t inGameResult) {
		return ((T (*)(PropHuntEndGameHUD*, uintptr_t))(Il2CppBase() + 0x3496600))(this, inGameResult);
	}
	template <typename T = void> T SetViewData(uintptr_t view, bool isHuman, bool isWin) {
		return ((T (*)(PropHuntEndGameHUD*, uintptr_t, bool, bool))(Il2CppBase() + 0x3496B2C))(this, view, isHuman, isWin);
	}
	template <typename T = void> T SetViewItemData(uintptr_t item, uintptr_t playerInfo, bool isHuman) {
		return ((T (*)(PropHuntEndGameHUD*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x349719C))(this, item, playerInfo, isHuman);
	}
	template <typename T = void> T BeginSettlement() {
		return ((T (*)(PropHuntEndGameHUD*))(Il2CppBase() + 0x3497CD0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(PropHuntEndGameHUD*))(Il2CppBase() + 0x3497E60))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(PropHuntEndGameHUD*))(Il2CppBase() + 0x3497E68))(this);
	}

};

}
