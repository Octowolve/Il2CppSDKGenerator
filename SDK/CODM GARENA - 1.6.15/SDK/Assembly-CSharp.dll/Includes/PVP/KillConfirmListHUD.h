#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class KillConfirmListHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "KillConfirmListHUD"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& Messages() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& HeadIndex() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PushMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Refresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(KillConfirmListHUD*))(Il2CppBase() + 0x34840A4))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(KillConfirmListHUD*))(Il2CppBase() + 0x34840AC))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(KillConfirmListHUD*))(Il2CppBase() + 0x34840BC))(this);
	}
	template <typename T = void> T PushMessage(unsigned char killEvent, int16_t addGoldCount) {
		return ((T (*)(KillConfirmListHUD*, unsigned char, int16_t))(Il2CppBase() + 0x34840C4))(this, killEvent, addGoldCount);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(KillConfirmListHUD*))(Il2CppBase() + 0x34843F8))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(KillConfirmListHUD*))(Il2CppBase() + 0x348454C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(KillConfirmListHUD*))(Il2CppBase() + 0x348472C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(KillConfirmListHUD*))(Il2CppBase() + 0x34847D4))(this);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(KillConfirmListHUD*))(Il2CppBase() + 0x34845FC))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(KillConfirmListHUD*, float))(Il2CppBase() + 0x348487C))(this, dt);
	}
	template <typename T = bool> T get_TickEnabled() {
		return ((T (*)(KillConfirmListHUD*))(Il2CppBase() + 0x34849F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(KillConfirmListHUD*))(Il2CppBase() + 0x34849F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(KillConfirmListHUD*))(Il2CppBase() + 0x3484A00))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(KillConfirmListHUD*))(Il2CppBase() + 0x3484A08))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(KillConfirmListHUD*, float))(Il2CppBase() + 0x3484A10))(this, P0);
	}

};

}
