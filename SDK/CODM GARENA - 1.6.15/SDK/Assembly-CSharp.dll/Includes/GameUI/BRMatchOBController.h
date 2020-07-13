#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BRMatchOBController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BRMatchOBController"));
	}

	template <typename T = uintptr_t> T& m_BrView() {
		return *(T*)((uintptr_t)this + 0x50);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnGunBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTeamBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowTeamHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshUIWidgets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTopSliderChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMiddleSliderChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnToggleButtonParabolaClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnToggleButtonGunlineClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeToFreeView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpectateModeChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BRMatchOBController*))(Il2CppBase() + 0x2D946A0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BRMatchOBController*))(Il2CppBase() + 0x2D94744))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRMatchOBController*))(Il2CppBase() + 0x2D94B70))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRMatchOBController*))(Il2CppBase() + 0x2D94EA8))(this);
	}
	template <typename T = void> T OnGunBtnClick() {
		return ((T (*)(BRMatchOBController*))(Il2CppBase() + 0x2D95194))(this);
	}
	template <typename T = void> T OnTeamBtnClick() {
		return ((T (*)(BRMatchOBController*))(Il2CppBase() + 0x2D953E0))(this);
	}
	template <typename T = void> T OnShowTeamHud(bool show) {
		return ((T (*)(BRMatchOBController*, bool))(Il2CppBase() + 0x2D95754))(this, show);
	}
	template <typename T = void> T RefreshUIWidgets() {
		return ((T (*)(BRMatchOBController*))(Il2CppBase() + 0x2D94920))(this);
	}
	template <typename T = void> T OnTopSliderChanged() {
		return ((T (*)(BRMatchOBController*))(Il2CppBase() + 0x2D9591C))(this);
	}
	template <typename T = void> T OnMiddleSliderChanged() {
		return ((T (*)(BRMatchOBController*))(Il2CppBase() + 0x2D95D24))(this);
	}
	template <typename T = void> T OnToggleButtonParabolaClick() {
		return ((T (*)(BRMatchOBController*))(Il2CppBase() + 0x2D9606C))(this);
	}
	template <typename T = void> T OnToggleButtonGunlineClick() {
		return ((T (*)(BRMatchOBController*))(Il2CppBase() + 0x2D96194))(this);
	}
	template <typename T = void> T ChangeToFreeView() {
		return ((T (*)(BRMatchOBController*))(Il2CppBase() + 0x2D962BC))(this);
	}
	template <typename T = void> T OnSpectateModeChange() {
		return ((T (*)(BRMatchOBController*))(Il2CppBase() + 0x2D96494))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BRMatchOBController*))(Il2CppBase() + 0x2D969CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRMatchOBController*))(Il2CppBase() + 0x2D969D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRMatchOBController*))(Il2CppBase() + 0x2D969DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRMatchOBController*))(Il2CppBase() + 0x2D969E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnTopSliderChanged() {
		return ((T (*)(BRMatchOBController*))(Il2CppBase() + 0x2D969EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnMiddleSliderChanged() {
		return ((T (*)(BRMatchOBController*))(Il2CppBase() + 0x2D969F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ChangeToFreeView() {
		return ((T (*)(BRMatchOBController*))(Il2CppBase() + 0x2D969FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnSpectateModeChange() {
		return ((T (*)(BRMatchOBController*))(Il2CppBase() + 0x2D96A04))(this);
	}

};

}
