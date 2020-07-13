#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BuffEffectDroneInterfere
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BuffEffect_DroneInterfere"));
	}

	template <typename T = uintptr_t> T& m_Effect() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& m_IsLocalPlayerInInterferedState() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_BeginInInterferedStateTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> static T& MAX_INTERFERED_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerEffectImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerEffectOverImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T TriggerEffectImpl() {
		return ((T (*)(BuffEffectDroneInterfere*))(Il2CppBase() + 0x3753728))(this);
	}
	template <typename T = void> T TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectDroneInterfere*))(Il2CppBase() + 0x3754214))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BuffEffectDroneInterfere*, float))(Il2CppBase() + 0x3754718))(this, deltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffectImpl() {
		return ((T (*)(BuffEffectDroneInterfere*))(Il2CppBase() + 0x37548CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectDroneInterfere*))(Il2CppBase() + 0x37548D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BuffEffectDroneInterfere*, float))(Il2CppBase() + 0x37548D4))(this, P0);
	}

};

}
