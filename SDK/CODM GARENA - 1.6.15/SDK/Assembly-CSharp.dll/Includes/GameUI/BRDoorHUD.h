#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BRDoorHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BRDoorHUD"));
	}

	template <typename T = uintptr_t> T& DoorRoot() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& DoorLabel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& AutoLabel() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& ClickDoorCD() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& m_LastClickDoorTime() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uint32_t> T& m_CurrentDoorUID() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& m_IsDoorOpen() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_DoorList() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> static T& CheckPawnInDoor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Enable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTouchDoorClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSetAutoClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InnerRemoveDoor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InnerSetDoorInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDoorInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldShowDoorHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InnerCheckCloseDoorHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAutoLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uintptr_t> T get_mPawnSwitchState() {
		return ((T (*)(BRDoorHUD*))(Il2CppBase() + 0x2D8BA9C))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(BRDoorHUD*))(Il2CppBase() + 0x2D8BAA8))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(BRDoorHUD*))(Il2CppBase() + 0x2D8BAB0))(this);
	}
	template <typename T = uint64_t> T get_ActiveGameHudState() {
		return ((T (*)(BRDoorHUD*))(Il2CppBase() + 0x2D8BAC0))(this);
	}
	template <typename T = void> T Enable() {
		return ((T (*)(BRDoorHUD*))(Il2CppBase() + 0x2D8BACC))(this);
	}
	template <typename T = void> T OnTouchDoorClick() {
		return ((T (*)(BRDoorHUD*))(Il2CppBase() + 0x2D8BD68))(this);
	}
	template <typename T = void> T OnSetAutoClick() {
		return ((T (*)(BRDoorHUD*))(Il2CppBase() + 0x2D8C1D0))(this);
	}
	template <typename T = void> T InnerRemoveDoor(uint32_t uid) {
		return ((T (*)(BRDoorHUD*, uint32_t))(Il2CppBase() + 0x2D8C378))(this, uid);
	}
	template <typename T = uintptr_t> T InnerSetDoorInfo(uint32_t uid, bool isOpen) {
		return ((T (*)(BRDoorHUD*, uint32_t, bool))(Il2CppBase() + 0x2D8C518))(this, uid, isOpen);
	}
	template <typename T = void> T ResetHUD() {
		return ((T (*)(BRDoorHUD*))(Il2CppBase() + 0x2D8C7E0))(this);
	}
	template <typename T = void> T SetDoorInfo(bool isInDoor, uint32_t uid, bool isOpen) {
		return ((T (*)(BRDoorHUD*, bool, uint32_t, bool))(Il2CppBase() + 0x2D8C998))(this, isInDoor, uid, isOpen);
	}
	template <typename T = bool> T ShouldShowDoorHUD() {
		return ((T (*)(BRDoorHUD*))(Il2CppBase() + 0x2D8CAD0))(this);
	}
	template <typename T = void> T InnerCheckCloseDoorHUD() {
		return ((T (*)(BRDoorHUD*))(Il2CppBase() + 0x2D8CBE4))(this);
	}
	template <typename T = void> T SetAutoLabel(bool enableAutoOpenDoor) {
		return ((T (*)(BRDoorHUD*, bool))(Il2CppBase() + 0x2D8BC24))(this, enableAutoOpenDoor);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(BRDoorHUD*, float))(Il2CppBase() + 0x2D8CD7C))(this, dt);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(BRDoorHUD*))(Il2CppBase() + 0x2D8D228))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRDoorHUD*, float))(Il2CppBase() + 0x2D8D2B4))(this, P0);
	}

};

}
