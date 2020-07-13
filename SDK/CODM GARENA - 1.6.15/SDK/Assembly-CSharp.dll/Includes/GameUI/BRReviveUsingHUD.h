#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BRReviveUsingHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BRReviveUsingHUD"));
	}

	template <typename T = uintptr_t> T& CardImg() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& CdBg() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& InterruptBtn() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& m_StartTime() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& m_TotalTime() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GamepadCancelRevive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyUseMedicineInterrupt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInterruptBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BaseCheck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(BRReviveUsingHUD*))(Il2CppBase() + 0x2DB418C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BRReviveUsingHUD*))(Il2CppBase() + 0x2DB4194))(this);
	}
	template <typename T = void> T ForceRegisterDelegates() {
		return ((T (*)(BRReviveUsingHUD*))(Il2CppBase() + 0x2DB4330))(this);
	}
	template <typename T = bool> T GamepadCancelRevive() {
		return ((T (*)(BRReviveUsingHUD*))(Il2CppBase() + 0x2DB43C8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRReviveUsingHUD*))(Il2CppBase() + 0x2DB45D0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRReviveUsingHUD*))(Il2CppBase() + 0x2DB4774))(this);
	}
	template <typename T = void> T Show(float time, int32_t seatIdx) {
		return ((T (*)(BRReviveUsingHUD*, float, int32_t))(Il2CppBase() + 0x2DB48CC))(this, time, seatIdx);
	}
	template <typename T = void> T UnShow() {
		return ((T (*)(BRReviveUsingHUD*))(Il2CppBase() + 0x2DB4A50))(this);
	}
	template <typename T = void> T OnNotifyUseMedicineInterrupt(uintptr_t msg) {
		return ((T (*)(BRReviveUsingHUD*, uintptr_t))(Il2CppBase() + 0x2DB4B38))(this, msg);
	}
	template <typename T = void> T OnInterruptBtnClick() {
		return ((T (*)(BRReviveUsingHUD*))(Il2CppBase() + 0x2DB4510))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(BRReviveUsingHUD*, float))(Il2CppBase() + 0x2DB4BE4))(this, dt);
	}
	template <typename T = bool> T BaseCheck() {
		return ((T (*)(BRReviveUsingHUD*))(Il2CppBase() + 0x2DB4D84))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(BRReviveUsingHUD*))(Il2CppBase() + 0x2DB4EF0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ForceRegisterDelegates() {
		return ((T (*)(BRReviveUsingHUD*))(Il2CppBase() + 0x2DB4EF4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRReviveUsingHUD*))(Il2CppBase() + 0x2DB4EF8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRReviveUsingHUD*))(Il2CppBase() + 0x2DB4EFC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRReviveUsingHUD*, float))(Il2CppBase() + 0x2DB4F00))(this, P0);
	}

};

}
