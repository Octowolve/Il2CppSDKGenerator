#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class PVEAIActionReacationHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "PVEAIAction_ReacationHandler"));
	}

	template <typename T = uintptr_t> T& SeePlayerHandleBy() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& TakeDamageHandleBy() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& EnterActionVolumeHandleBy() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& HandleModeReference() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& SeePlayerAIBehavior() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& TakeDamageAIBehavior() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& EnterActionVolumeAIBehavior() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHandleMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSeePlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTakeDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnterActionVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(PVEAIActionReacationHandler*))(Il2CppBase() + 0x436FE80))(this);
	}
	template <typename T = uintptr_t> T GetHandleMode(uintptr_t ChannelType) {
		return ((T (*)(PVEAIActionReacationHandler*, uintptr_t))(Il2CppBase() + 0x4370004))(this, ChannelType);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(PVEAIActionReacationHandler*))(Il2CppBase() + 0x43700DC))(this);
	}
	template <typename T = void> T OnSeePlayer() {
		return ((T (*)(PVEAIActionReacationHandler*))(Il2CppBase() + 0x43701AC))(this);
	}
	template <typename T = void> T OnTakeDamage() {
		return ((T (*)(PVEAIActionReacationHandler*))(Il2CppBase() + 0x4370254))(this);
	}
	template <typename T = void> T OnEnterActionVolume() {
		return ((T (*)(PVEAIActionReacationHandler*))(Il2CppBase() + 0x43702FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnter() {
		return ((T (*)(PVEAIActionReacationHandler*))(Il2CppBase() + 0x43703A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnExit() {
		return ((T (*)(PVEAIActionReacationHandler*))(Il2CppBase() + 0x43703A8))(this);
	}

};

}
