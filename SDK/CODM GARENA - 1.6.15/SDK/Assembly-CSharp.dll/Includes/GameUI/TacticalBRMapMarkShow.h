#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class TacticalBRMapMarkShow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "TacticalBRMapMarkShow"));
	}

	template <typename T = uintptr_t> T& ToggleAreaBtn() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& CheckMark() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& HideAreaMask() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& MapAreaRoot() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& bIgnoreLocalToggleBtn() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppString*> T& Show_Area_Key() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& bToggleArea() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& bMapMarkShouldShow() {
		return *(T*)((uintptr_t)this + 0x95);
	}

	template <typename T = bool> T get_MapMarkShouldShow() {
		return ((T (*)(TacticalBRMapMarkShow*))(Il2CppBase() + 0x29A7BE4))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(TacticalBRMapMarkShow*))(Il2CppBase() + 0x29A7BEC))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(TacticalBRMapMarkShow*))(Il2CppBase() + 0x29A7C9C))(this);
	}
	template <typename T = void> T RegisterEventHandlers() {
		return ((T (*)(TacticalBRMapMarkShow*))(Il2CppBase() + 0x29A7CCC))(this);
	}
	template <typename T = void> T UnRegisterEventHandlers() {
		return ((T (*)(TacticalBRMapMarkShow*))(Il2CppBase() + 0x29A7E18))(this);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(TacticalBRMapMarkShow*))(Il2CppBase() + 0x29A7F10))(this);
	}
	template <typename T = void> T OnSyncShouldShowProperty(bool bShouldShow) {
		return ((T (*)(TacticalBRMapMarkShow*, bool))(Il2CppBase() + 0x29A7F14))(this, bShouldShow);
	}
	template <typename T = void> T InitToggleState() {
		return ((T (*)(TacticalBRMapMarkShow*))(Il2CppBase() + 0x29A7C58))(this);
	}
	template <typename T = void> T DisableThis() {
		return ((T (*)(TacticalBRMapMarkShow*))(Il2CppBase() + 0x29A7F30))(this);
	}
	template <typename T = void> T OnToggleShowArea() {
		return ((T (*)(TacticalBRMapMarkShow*))(Il2CppBase() + 0x29A822C))(this);
	}
	template <typename T = void> T OnShowAreaBtnClick() {
		return ((T (*)(TacticalBRMapMarkShow*))(Il2CppBase() + 0x29A8414))(this);
	}
	template <typename T = void> T OnGlobalToggleBtnClicked(bool bToggle) {
		return ((T (*)(TacticalBRMapMarkShow*, bool))(Il2CppBase() + 0x29A8458))(this, bToggle);
	}

};

}
