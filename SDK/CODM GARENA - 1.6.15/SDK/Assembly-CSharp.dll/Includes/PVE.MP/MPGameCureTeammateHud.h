#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class MPGameCureTeammateHud
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "MPGameCureTeammateHud"));
	}

	template <typename T = uintptr_t> T& m_saveTeammateProgressLabel() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_SaveOtherProgressBar() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_HealBtn() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& m_IsHealingOtherPlayer() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUIBanClickType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyCanHealTeammate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CureTeammateButtonClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyCanNotHealTeammate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLocalPlayerBeInterrupted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyTeammateRevived() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLocalPlayerSaveTeammate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyHealTeammateSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(MPGameCureTeammateHud*))(Il2CppBase() + 0x4606FC8))(this);
	}
	template <typename T = uintptr_t> T GetUIBanClickType() {
		return ((T (*)(MPGameCureTeammateHud*))(Il2CppBase() + 0x4606FD0))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(MPGameCureTeammateHud*))(Il2CppBase() + 0x4607074))(this);
	}
	template <typename T = uint64_t> T get_ActiveGameHudState() {
		return ((T (*)(MPGameCureTeammateHud*))(Il2CppBase() + 0x4607084))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(MPGameCureTeammateHud*))(Il2CppBase() + 0x4607090))(this);
	}
	template <typename T = void> T OnNotifyCanHealTeammate(uintptr_t Msg) {
		return ((T (*)(MPGameCureTeammateHud*, uintptr_t))(Il2CppBase() + 0x46073F8))(this, Msg);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(MPGameCureTeammateHud*))(Il2CppBase() + 0x460751C))(this);
	}
	template <typename T = void> T CureTeammateButtonClicked() {
		return ((T (*)(MPGameCureTeammateHud*))(Il2CppBase() + 0x46076A0))(this);
	}
	template <typename T = void> T OnNotifyCanNotHealTeammate(uintptr_t Msg) {
		return ((T (*)(MPGameCureTeammateHud*, uintptr_t))(Il2CppBase() + 0x4607A98))(this, Msg);
	}
	template <typename T = void> T OnNotifyLocalPlayerBeInterrupted(uintptr_t Msg) {
		return ((T (*)(MPGameCureTeammateHud*, uintptr_t))(Il2CppBase() + 0x4607BE0))(this, Msg);
	}
	template <typename T = void> T OnNotifyTeammateRevived(uintptr_t Msg) {
		return ((T (*)(MPGameCureTeammateHud*, uintptr_t))(Il2CppBase() + 0x4607CAC))(this, Msg);
	}
	template <typename T = void> T OnNotifyLocalPlayerSaveTeammate(uintptr_t Msg) {
		return ((T (*)(MPGameCureTeammateHud*, uintptr_t))(Il2CppBase() + 0x4607D78))(this, Msg);
	}
	template <typename T = void> T OnNotifyHealTeammateSuccess(uintptr_t Msg) {
		return ((T (*)(MPGameCureTeammateHud*, uintptr_t))(Il2CppBase() + 0x4607F44))(this, Msg);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetUIBanClickType() {
		return ((T (*)(MPGameCureTeammateHud*))(Il2CppBase() + 0x4608094))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(MPGameCureTeammateHud*))(Il2CppBase() + 0x460809C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(MPGameCureTeammateHud*))(Il2CppBase() + 0x46080A4))(this);
	}

};

}
