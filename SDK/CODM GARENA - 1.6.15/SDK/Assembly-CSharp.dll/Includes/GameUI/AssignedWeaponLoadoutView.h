#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class AssignedWeaponLoadoutView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "AssignedWeaponLoadoutView"));
	}

	template <typename T = uintptr_t> T& rankScrollView() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& perks() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& roleInfo() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& confirmBtn() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& mCachePanelWidth() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& mCachePanelRange() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& ProgressPanel() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& ProgressContainer() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& StaticTipContainer() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& ChangeLoadtoutTimeOverAction() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = float> T& TotalTime() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& DynamicTime() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = bool> T& bTimeCounting() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetChangeLoadoutTimeOverAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowTimePanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(AssignedWeaponLoadoutView*))(Il2CppBase() + 0x2D6713C))(this);
	}
	template <typename T = void> T SetChangeLoadoutTimeOverAction(uintptr_t callback) {
		return ((T (*)(AssignedWeaponLoadoutView*, uintptr_t))(Il2CppBase() + 0x2D65298))(this, callback);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetWeaponProperty(uintptr_t weaponInfo) {
		return ((T (*)(AssignedWeaponLoadoutView*, uintptr_t))(Il2CppBase() + 0x2D67144))(this, weaponInfo);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(AssignedWeaponLoadoutView*, float))(Il2CppBase() + 0x2D672C8))(this, dt);
	}
	template <typename T = void> T SetTime(float time, bool bFirst) {
		return ((T (*)(AssignedWeaponLoadoutView*, float, bool))(Il2CppBase() + 0x2D66684))(this, time, bFirst);
	}
	template <typename T = void> T OnShowTimePanel(bool show) {
		return ((T (*)(AssignedWeaponLoadoutView*, bool))(Il2CppBase() + 0x2D676A0))(this, show);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(AssignedWeaponLoadoutView*, float))(Il2CppBase() + 0x2D6785C))(this, P0);
	}

};

}
