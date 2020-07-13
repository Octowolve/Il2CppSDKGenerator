#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class PVPMatchOBView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "PVPMatchOBView"));
	}

	template <typename T = uintptr_t> T& OBSpectateModeBtn() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& OBSpectateModeBG() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& LogoSprite() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& PackBtn() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& PackRoot() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& PackArrow() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& RegularRoot() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& RebelRoot() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& RegularItemList() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& RebelItemList() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& RegularTween() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& RebelTween() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& RegularColor() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& RebelColor() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& FFATopColor() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& FFANormalColor() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& ShowUIBtn() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& ShowUIBtnBG() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& TransparentBtn() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& TransparentBtnBG() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& TransparentRoot() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& TopSlider() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& MiddleSlider() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& BottomSlider() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& TopLabel() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& MiddleLabel() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& BottomLabel() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& CloseUIBtn() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& CloseUIBtnLable() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& ToggleBtn() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& ToggleBtnSprite() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_RebelPlayerInfoList() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_RegularPlayerInfoList() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = bool> T& m_IsShowingPlayer() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = bool> T& m_IsShowingTransparent() {
		return *(T*)((uintptr_t)this + 0x131);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAndroidEscape() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshMatchPlayerItemList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Sorter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerTween() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerTransparent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(PVPMatchOBView*))(Il2CppBase() + 0x3AB5454))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(PVPMatchOBView*))(Il2CppBase() + 0x3AB545C))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(PVPMatchOBView*))(Il2CppBase() + 0x3AB5468))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(PVPMatchOBView*, float))(Il2CppBase() + 0x3AB5470))(this, dt);
	}
	template <typename T = void> T CheckAndroidEscape() {
		return ((T (*)(PVPMatchOBView*))(Il2CppBase() + 0x3AB5540))(this);
	}
	template <typename T = void> T RefreshMatchPlayerItemList() {
		return ((T (*)(PVPMatchOBView*))(Il2CppBase() + 0x3AB5664))(this);
	}
	template <typename T = int32_t> T Sorter(uintptr_t a, uintptr_t b) {
		return ((T (*)(PVPMatchOBView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3AB6218))(this, a, b);
	}
	template <typename T = void> T TriggerTween() {
		return ((T (*)(PVPMatchOBView*))(Il2CppBase() + 0x3AB096C))(this);
	}
	template <typename T = void> T TriggerTransparent() {
		return ((T (*)(PVPMatchOBView*))(Il2CppBase() + 0x3AB652C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(PVPMatchOBView*, float))(Il2CppBase() + 0x3AB66C0))(this, P0);
	}

};

}
