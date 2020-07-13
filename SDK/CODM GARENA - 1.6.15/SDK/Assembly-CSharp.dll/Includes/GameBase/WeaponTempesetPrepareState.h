#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponTempesetPrepareState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponTempesetPrepareState"));
	}

	template <typename T = uintptr_t> T& mTempestWeapon() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_CrossHair() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_LastFireButtonDownTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& IsCancel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopCharge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponTempesetPrepareState*, float))(Il2CppBase() + 0x45894C4))(this, DeltaTime);
	}
	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponTempesetPrepareState*))(Il2CppBase() + 0x45895D4))(this);
	}
	template <typename T = void> T BeginFire() {
		return ((T (*)(WeaponTempesetPrepareState*))(Il2CppBase() + 0x4589A90))(this);
	}
	template <typename T = void> T StopFire() {
		return ((T (*)(WeaponTempesetPrepareState*))(Il2CppBase() + 0x4589BA0))(this);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WeaponTempesetPrepareState*))(Il2CppBase() + 0x4589CF0))(this);
	}
	template <typename T = void> T StopCharge() {
		return ((T (*)(WeaponTempesetPrepareState*))(Il2CppBase() + 0x458A264))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponTempesetPrepareState*, float))(Il2CppBase() + 0x458A494))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponTempesetPrepareState*))(Il2CppBase() + 0x458A49C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginFire() {
		return ((T (*)(WeaponTempesetPrepareState*))(Il2CppBase() + 0x458A4A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopFire() {
		return ((T (*)(WeaponTempesetPrepareState*))(Il2CppBase() + 0x458A4AC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WeaponTempesetPrepareState*))(Il2CppBase() + 0x458A4B4))(this);
	}

};

}
