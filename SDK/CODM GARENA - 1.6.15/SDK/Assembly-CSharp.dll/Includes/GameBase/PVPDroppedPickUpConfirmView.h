#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PVPDroppedPickUpConfirmView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PVPDroppedPickUpConfirmView"));
	}

	template <typename T = uintptr_t> T& T_TargetClickedHandler_Setting() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& m_Container() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& m_Weapon() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_Attatches() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& m_Table() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& mPickUp() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_PickupBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_SetClickHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUIBanClickType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedHideInGamepad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeedHideUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T T_PickupBtnClick() {
		return ((T (*)(PVPDroppedPickUpConfirmView*))(Il2CppBase() + 0x2DD3724))(this);
	}
	template <typename T = void> T T_SetClickHandler(uintptr_t clickHandler) {
		return ((T (*)(PVPDroppedPickUpConfirmView*, uintptr_t))(Il2CppBase() + 0x2DD47D4))(this, clickHandler);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(PVPDroppedPickUpConfirmView*))(Il2CppBase() + 0x2DD487C))(this);
	}
	template <typename T = uintptr_t> T GetUIBanClickType() {
		return ((T (*)(PVPDroppedPickUpConfirmView*))(Il2CppBase() + 0x2DD4884))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(PVPDroppedPickUpConfirmView*))(Il2CppBase() + 0x2DD4928))(this);
	}
	template <typename T = bool> T NeedHideInGamepad() {
		return ((T (*)(PVPDroppedPickUpConfirmView*))(Il2CppBase() + 0x2DD4930))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(PVPDroppedPickUpConfirmView*))(Il2CppBase() + 0x2DD49D0))(this);
	}
	template <typename T = void> T SetItem(uintptr_t droppedPickUp) {
		return ((T (*)(PVPDroppedPickUpConfirmView*, uintptr_t))(Il2CppBase() + 0x2DD3CA4))(this, droppedPickUp);
	}
	template <typename T = bool> T IsHide(uintptr_t droppedPickUp) {
		return ((T (*)(PVPDroppedPickUpConfirmView*, uintptr_t))(Il2CppBase() + 0x2DD410C))(this, droppedPickUp);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(PVPDroppedPickUpConfirmView*))(Il2CppBase() + 0x2DD4E2C))(this);
	}
	template <typename T = void> T RefreshTable() {
		return ((T (*)(PVPDroppedPickUpConfirmView*))(Il2CppBase() + 0x2DD4C68))(this);
	}
	template <typename T = bool> T IsNeedHideUI() {
		return ((T (*)(PVPDroppedPickUpConfirmView*))(Il2CppBase() + 0x2DD4EF8))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(PVPDroppedPickUpConfirmView*, float))(Il2CppBase() + 0x2DD5150))(this, dt);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetUIBanClickType() {
		return ((T (*)(PVPDroppedPickUpConfirmView*))(Il2CppBase() + 0x2DD5748))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_NeedHideInGamepad() {
		return ((T (*)(PVPDroppedPickUpConfirmView*))(Il2CppBase() + 0x2DD5750))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(PVPDroppedPickUpConfirmView*))(Il2CppBase() + 0x2DD5758))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(PVPDroppedPickUpConfirmView*, float))(Il2CppBase() + 0x2DD5760))(this, P0);
	}

};

}
