#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutPvpGameView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutPvpGameView"));
	}

	template <typename T = uintptr_t> T& Title1Label() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& Title2Label() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& ProgressConainer() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& ProgressPanel() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& StaticTipContainer() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& LoadoutNameLabel() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& MainWeaponCell() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& ViceWeaponCell() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& RoleCell() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& RoleSkillCell() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& LethalCell() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& TacticalCell() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& Perk1Cell() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& Perk2Cell() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& Perk3Cell() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Tabs() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& EquipLoadoutBtn() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> T& mCachePanelWidth() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& mCachePanelRange() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = bool> T& bFirstShow() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = float> T& TotalTime() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> T& DynamicTime() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = bool> T& bTimeCounting() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_SetTabView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTabView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideAllTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowTimePanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T T_SetTabView(int32_t currentShowIndex) {
		return ((T (*)(LoadoutPvpGameView*, int32_t))(Il2CppBase() + 0x1F1D7A8))(this, currentShowIndex);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(LoadoutPvpGameView*))(Il2CppBase() + 0x1F21AA0))(this);
	}
	template <typename T = void> T SetTabView(int32_t currentShowIndex) {
		return ((T (*)(LoadoutPvpGameView*, int32_t))(Il2CppBase() + 0x1F203A0))(this, currentShowIndex);
	}
	template <typename T = void> T HideAllTab() {
		return ((T (*)(LoadoutPvpGameView*))(Il2CppBase() + 0x1F21CCC))(this);
	}
	template <typename T = void> T SetTime(float time, bool bFirst) {
		return ((T (*)(LoadoutPvpGameView*, float, bool))(Il2CppBase() + 0x1F2105C))(this, time, bFirst);
	}
	template <typename T = void> T OnShowTimePanel(bool show) {
		return ((T (*)(LoadoutPvpGameView*, bool))(Il2CppBase() + 0x1F21E38))(this, show);
	}
	template <typename T = void> T Update() {
		return ((T (*)(LoadoutPvpGameView*))(Il2CppBase() + 0x1F220C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(LoadoutPvpGameView*))(Il2CppBase() + 0x1F22404))(this);
	}

};

}
