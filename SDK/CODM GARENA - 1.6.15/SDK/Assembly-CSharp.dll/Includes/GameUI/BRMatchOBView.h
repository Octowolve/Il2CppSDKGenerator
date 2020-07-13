#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BRMatchOBView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BRMatchOBView"));
	}

	template <typename T = uintptr_t> T& ButtonParabolaOn() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& ButtonParabolaOff() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& ButtonGunlineOn() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uintptr_t> T& ButtonGunlineOff() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& TeamBtn() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = uintptr_t> T& TeamBtnnBG() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& GunBtn() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = uintptr_t> T& GunBtnBG() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& GunRoot() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = bool> T& m_IsShowingGun() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = bool> T& m_IsShowingTeam() {
		return *(T*)((uintptr_t)this + 0x159);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshMatchPlayerItemList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetToggleButtonEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerGun() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerTeam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTeamHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerTransparent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T RefreshMatchPlayerItemList() {
		return ((T (*)(BRMatchOBView*))(Il2CppBase() + 0x2D96AB0))(this);
	}
	template <typename T = void> T SetToggleButtonEnable(uintptr_t buttonSprite, uintptr_t button, bool enable) {
		return ((T (*)(BRMatchOBView*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x2D96B48))(this, buttonSprite, button, enable);
	}
	template <typename T = void> T TriggerGun() {
		return ((T (*)(BRMatchOBView*))(Il2CppBase() + 0x2D9524C))(this);
	}
	template <typename T = void> T TriggerTeam() {
		return ((T (*)(BRMatchOBView*))(Il2CppBase() + 0x2D95498))(this);
	}
	template <typename T = void> T ShowTeamHud(bool show) {
		return ((T (*)(BRMatchOBView*, bool))(Il2CppBase() + 0x2D95818))(this, show);
	}
	template <typename T = void> T TriggerTransparent() {
		return ((T (*)(BRMatchOBView*))(Il2CppBase() + 0x2D96CDC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshMatchPlayerItemList() {
		return ((T (*)(BRMatchOBView*))(Il2CppBase() + 0x2D96DE4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerTransparent() {
		return ((T (*)(BRMatchOBView*))(Il2CppBase() + 0x2D96DEC))(this);
	}

};

}
