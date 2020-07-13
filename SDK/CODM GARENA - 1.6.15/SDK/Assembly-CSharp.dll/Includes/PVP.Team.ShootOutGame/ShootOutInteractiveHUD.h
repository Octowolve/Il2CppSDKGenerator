#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.ShootOutGame {

class ShootOutInteractiveHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.ShootOutGame", "ShootOutInteractiveHUD"));
	}

	template <typename T = uintptr_t> T& ProgressObejct() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& ProgressBar() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uint32_t> T& activeTime_MS() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& startProgress() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = float> T& m_startTime() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowInteractive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCommonButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCommonGamepadButtonLongpressed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCancelButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ShootOutInteractiveHUD*))(Il2CppBase() + 0x34C7928))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ShootOutInteractiveHUD*))(Il2CppBase() + 0x34C7A70))(this);
	}
	template <typename T = void> T ShowInteractive(uintptr_t param) {
		return ((T (*)(ShootOutInteractiveHUD*, uintptr_t))(Il2CppBase() + 0x34C7BB8))(this, param);
	}
	template <typename T = void> T OnStartProgress(uintptr_t msg) {
		return ((T (*)(ShootOutInteractiveHUD*, uintptr_t))(Il2CppBase() + 0x34C7F80))(this, msg);
	}
	template <typename T = void> T OnCommonButtonClick() {
		return ((T (*)(ShootOutInteractiveHUD*))(Il2CppBase() + 0x34C81E4))(this);
	}
	template <typename T = bool> T OnCommonGamepadButtonLongpressed() {
		return ((T (*)(ShootOutInteractiveHUD*))(Il2CppBase() + 0x34C831C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ShootOutInteractiveHUD*))(Il2CppBase() + 0x34C83D0))(this);
	}
	template <typename T = void> T OnCancelButtonClick() {
		return ((T (*)(ShootOutInteractiveHUD*))(Il2CppBase() + 0x34C8654))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ShootOutInteractiveHUD*))(Il2CppBase() + 0x34C881C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ShootOutInteractiveHUD*))(Il2CppBase() + 0x34C8824))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShowInteractive(uintptr_t P0) {
		return ((T (*)(ShootOutInteractiveHUD*, uintptr_t))(Il2CppBase() + 0x34C882C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnStartProgress(uintptr_t P0) {
		return ((T (*)(ShootOutInteractiveHUD*, uintptr_t))(Il2CppBase() + 0x34C8834))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnCommonButtonClick() {
		return ((T (*)(ShootOutInteractiveHUD*))(Il2CppBase() + 0x34C883C))(this);
	}

};

}
