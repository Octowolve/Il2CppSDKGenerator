#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class NetworkElectricShockCarAttackBehavior
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "NetworkElectricShockCarAttackBehavior"));
	}

	template <typename T = void*> T& onStartAttack() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& onStopAttack() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& m_StartAttack() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MainBehavior() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdateRepInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanShowElectricCDHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T MainBehavior() {
		return ((T (*)(NetworkElectricShockCarAttackBehavior*))(Il2CppBase() + 0x3489CE4))(this);
	}
	template <typename T = void> T OnUpdateRepInfo(uintptr_t skillRepInfo) {
		return ((T (*)(NetworkElectricShockCarAttackBehavior*, uintptr_t))(Il2CppBase() + 0x3489FD4))(this, skillRepInfo);
	}
	template <typename T = void> T OnStop() {
		return ((T (*)(NetworkElectricShockCarAttackBehavior*))(Il2CppBase() + 0x348A2CC))(this);
	}
	template <typename T = bool> static T IsCanShowElectricCDHud(uint32_t targetPlayerID, uintptr_t alpha) {
		return ((T (*)(void *, uint32_t, uintptr_t))(Il2CppBase() + 0x34727C0))(0, targetPlayerID, alpha);
	}
	template <typename T = void> T xLuaBaseProxy_MainBehavior() {
		return ((T (*)(NetworkElectricShockCarAttackBehavior*))(Il2CppBase() + 0x348A370))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnUpdateRepInfo(uintptr_t P0) {
		return ((T (*)(NetworkElectricShockCarAttackBehavior*, uintptr_t))(Il2CppBase() + 0x348A378))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnStop() {
		return ((T (*)(NetworkElectricShockCarAttackBehavior*))(Il2CppBase() + 0x348A42C))(this);
	}

};

}
