#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class PVPMatchOBController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "PVPMatchOBController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_FreeViewController() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& m_ShowingUI() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& m_NextBtnClickTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& m_ShowSpectatingHUD() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& m_SwitchShowSpectatingHUD() {
		return *(T*)((uintptr_t)this + 0x4D);
	}
	template <typename T = bool> T& m_IsOpenning() {
		return *(T*)((uintptr_t)this + 0x4E);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAndSaveBtnClickTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayerItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPackBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTransparentBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowUIBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnToggleBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTopSliderChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMiddleSliderChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBottomSliderChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowObserverHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HaveSpectatingPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeToFreeView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeTo3p() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpectateModeChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshSpectateModeChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseUIBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseAllUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenAllUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PVPMatchOBController*))(Il2CppBase() + 0x3AAEEC8))(this);
	}
	template <typename T = bool> T CheckAndSaveBtnClickTime() {
		return ((T (*)(PVPMatchOBController*))(Il2CppBase() + 0x3AAEF6C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PVPMatchOBController*))(Il2CppBase() + 0x3AAF058))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PVPMatchOBController*))(Il2CppBase() + 0x3AAF8FC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PVPMatchOBController*))(Il2CppBase() + 0x3AAFE58))(this);
	}
	template <typename T = void> T OnPlayerItemClick(uintptr_t sender) {
		return ((T (*)(PVPMatchOBController*, uintptr_t))(Il2CppBase() + 0x3AB0380))(this, sender);
	}
	template <typename T = void> T OnPackBtnClick() {
		return ((T (*)(PVPMatchOBController*))(Il2CppBase() + 0x3AB08B4))(this);
	}
	template <typename T = void> T OnTransparentBtnClick() {
		return ((T (*)(PVPMatchOBController*))(Il2CppBase() + 0x3AB0B30))(this);
	}
	template <typename T = void> T OnShowUIBtnClick() {
		return ((T (*)(PVPMatchOBController*))(Il2CppBase() + 0x3AB0BF4))(this);
	}
	template <typename T = void> T OnToggleBtnClick() {
		return ((T (*)(PVPMatchOBController*))(Il2CppBase() + 0x3AB0FB8))(this);
	}
	template <typename T = void> T OnTopSliderChanged() {
		return ((T (*)(PVPMatchOBController*))(Il2CppBase() + 0x3AB1350))(this);
	}
	template <typename T = void> T OnMiddleSliderChanged() {
		return ((T (*)(PVPMatchOBController*))(Il2CppBase() + 0x3AB182C))(this);
	}
	template <typename T = void> T OnBottomSliderChanged() {
		return ((T (*)(PVPMatchOBController*))(Il2CppBase() + 0x3AB1C70))(this);
	}
	template <typename T = void> T OnShowObserverHud(uintptr_t Msg) {
		return ((T (*)(PVPMatchOBController*, uintptr_t))(Il2CppBase() + 0x3AB2160))(this, Msg);
	}
	template <typename T = bool> T HaveSpectatingPawn() {
		return ((T (*)(PVPMatchOBController*))(Il2CppBase() + 0x3AB2868))(this);
	}
	template <typename T = void> T ChangeToFreeView() {
		return ((T (*)(PVPMatchOBController*))(Il2CppBase() + 0x3AB2A80))(this);
	}
	template <typename T = void> T ChangeTo3p() {
		return ((T (*)(PVPMatchOBController*))(Il2CppBase() + 0x3AB3068))(this);
	}
	template <typename T = void> T OnSpectateModeChange() {
		return ((T (*)(PVPMatchOBController*))(Il2CppBase() + 0x3AB3168))(this);
	}
	template <typename T = void> T RefreshSpectateModeChange(uintptr_t spectatingTarget) {
		return ((T (*)(PVPMatchOBController*, uintptr_t))(Il2CppBase() + 0x3AB23E4))(this, spectatingTarget);
	}
	template <typename T = void> T OnCloseUIBtnClick() {
		return ((T (*)(PVPMatchOBController*))(Il2CppBase() + 0x3AB35A4))(this);
	}
	template <typename T = void> T CloseAllUI() {
		return ((T (*)(PVPMatchOBController*))(Il2CppBase() + 0x3AB366C))(this);
	}
	template <typename T = void> T OpenAllUI() {
		return ((T (*)(PVPMatchOBController*))(Il2CppBase() + 0x3AB44B0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PVPMatchOBController*))(Il2CppBase() + 0x3AB52EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PVPMatchOBController*))(Il2CppBase() + 0x3AB52F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PVPMatchOBController*))(Il2CppBase() + 0x3AB52FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PVPMatchOBController*))(Il2CppBase() + 0x3AB5304))(this);
	}

};

}
