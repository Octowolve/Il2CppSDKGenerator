#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalMapControllerBR
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalMapController_BR"));
	}

	template <typename T = uintptr_t> T& m_MapView() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& CursorSession() {
		return *(T*)((uintptr_t)this + 0x44);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GamepadSliderEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GamepadSliderBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GamepadMark() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadClosePage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadDelete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSliderDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTacticalTeamPlayerLoginOrLogoutNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFocusSelfClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDeleteMarkBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMarkSelfBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTacticalChipMachineListChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddPlayerMark() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowMapMarksBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseMapMarksBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMapNewGuideInterface() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(TacticalMapControllerBR*))(Il2CppBase() + 0x2777F18))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(TacticalMapControllerBR*))(Il2CppBase() + 0x2777FBC))(this);
	}
	template <typename T = void> T OnShowView(uintptr_t inMsg) {
		return ((T (*)(TacticalMapControllerBR*, uintptr_t))(Il2CppBase() + 0x27783E0))(this, inMsg);
	}
	template <typename T = bool> T GamepadSliderEnd() {
		return ((T (*)(TacticalMapControllerBR*))(Il2CppBase() + 0x2779088))(this);
	}
	template <typename T = bool> T GamepadSliderBegin() {
		return ((T (*)(TacticalMapControllerBR*))(Il2CppBase() + 0x27793E4))(this);
	}
	template <typename T = bool> T GamepadMark() {
		return ((T (*)(TacticalMapControllerBR*))(Il2CppBase() + 0x277958C))(this);
	}
	template <typename T = bool> T OnGamepadClosePage() {
		return ((T (*)(TacticalMapControllerBR*))(Il2CppBase() + 0x27799F8))(this);
	}
	template <typename T = bool> T OnGamepadDelete() {
		return ((T (*)(TacticalMapControllerBR*))(Il2CppBase() + 0x2779B6C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(TacticalMapControllerBR*))(Il2CppBase() + 0x2779E1C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(TacticalMapControllerBR*))(Il2CppBase() + 0x277A954))(this);
	}
	template <typename T = void> T OnSliderChange() {
		return ((T (*)(TacticalMapControllerBR*))(Il2CppBase() + 0x277B2BC))(this);
	}
	template <typename T = void> T OnSliderDrag() {
		return ((T (*)(TacticalMapControllerBR*))(Il2CppBase() + 0x277B610))(this);
	}
	template <typename T = void> T OnTacticalTeamPlayerLoginOrLogoutNotify() {
		return ((T (*)(TacticalMapControllerBR*))(Il2CppBase() + 0x277B7C4))(this);
	}
	template <typename T = void> T OnFocusSelfClick() {
		return ((T (*)(TacticalMapControllerBR*))(Il2CppBase() + 0x277BA24))(this);
	}
	template <typename T = void> T OnDeleteMarkBtnClick() {
		return ((T (*)(TacticalMapControllerBR*))(Il2CppBase() + 0x2779C14))(this);
	}
	template <typename T = void> T OnMarkSelfBtnClick() {
		return ((T (*)(TacticalMapControllerBR*))(Il2CppBase() + 0x277BDE8))(this);
	}
	template <typename T = void> T OnTacticalChipMachineListChanged() {
		return ((T (*)(TacticalMapControllerBR*))(Il2CppBase() + 0x277C1A4))(this);
	}
	template <typename T = void> T AddPlayerMark(Il2CppVector3 Pos) {
		return ((T (*)(TacticalMapControllerBR*, Il2CppVector3))(Il2CppBase() + 0x277C4B4))(this, Pos);
	}
	template <typename T = void> T OnShowMapMarksBtnClick(uintptr_t obj) {
		return ((T (*)(TacticalMapControllerBR*, uintptr_t))(Il2CppBase() + 0x277C848))(this, obj);
	}
	template <typename T = void> T OnCloseMapMarksBtnClick(uintptr_t obj) {
		return ((T (*)(TacticalMapControllerBR*, uintptr_t))(Il2CppBase() + 0x277CA6C))(this, obj);
	}
	template <typename T = uintptr_t> T GetMapNewGuideInterface() {
		return ((T (*)(TacticalMapControllerBR*))(Il2CppBase() + 0x277CB88))(this);
	}
	template <typename T = void> T RegisterDelegatesm__0() {
		return ((T (*)(TacticalMapControllerBR*))(Il2CppBase() + 0x277CC28))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(TacticalMapControllerBR*))(Il2CppBase() + 0x277CD94))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TacticalMapControllerBR*))(Il2CppBase() + 0x277CE3C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnShowView(uintptr_t P0) {
		return ((T (*)(TacticalMapControllerBR*, uintptr_t))(Il2CppBase() + 0x277CE40))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_OnGamepadClosePage() {
		return ((T (*)(TacticalMapControllerBR*))(Il2CppBase() + 0x277CE44))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(TacticalMapControllerBR*))(Il2CppBase() + 0x277CF0C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(TacticalMapControllerBR*))(Il2CppBase() + 0x277CF10))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnTacticalTeamPlayerLoginOrLogoutNotify() {
		return ((T (*)(TacticalMapControllerBR*))(Il2CppBase() + 0x277CF14))(this);
	}

};

}
