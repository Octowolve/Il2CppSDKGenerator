#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponCODTempestAimedIdleState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponCODTempestAimedIdleState"));
	}

	template <typename T = float> T& m_IdleStartTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_CrossHair() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& m_IsLastFireButtonDownTimeValid() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_LastFireButtonDownTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& mTempestWeapon() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_LastChargeStatusInTick() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T StopAim() {
		return ((T (*)(WeaponCODTempestAimedIdleState*))(Il2CppBase() + 0x1C62964))(this);
	}
	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponCODTempestAimedIdleState*))(Il2CppBase() + 0x1C62A38))(this);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WeaponCODTempestAimedIdleState*))(Il2CppBase() + 0x1C62DB8))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponCODTempestAimedIdleState*, float))(Il2CppBase() + 0x1C62FCC))(this, DeltaTime);
	}
	template <typename T = void> T BeginFire() {
		return ((T (*)(WeaponCODTempestAimedIdleState*))(Il2CppBase() + 0x1C63434))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopAim() {
		return ((T (*)(WeaponCODTempestAimedIdleState*))(Il2CppBase() + 0x1C63C60))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponCODTempestAimedIdleState*))(Il2CppBase() + 0x1C63C64))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WeaponCODTempestAimedIdleState*))(Il2CppBase() + 0x1C63C68))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponCODTempestAimedIdleState*, float))(Il2CppBase() + 0x1C63C70))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_BeginFire() {
		return ((T (*)(WeaponCODTempestAimedIdleState*))(Il2CppBase() + 0x1C63C78))(this);
	}

};

}
