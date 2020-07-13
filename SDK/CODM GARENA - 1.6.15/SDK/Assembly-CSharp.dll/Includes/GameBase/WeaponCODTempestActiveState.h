#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponCODTempestActiveState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponCODTempestActiveState"));
	}

	template <typename T = float> T& m_LastFireButtonDownTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& mTempestWeapon() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_CrossHair() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponCODTempestActiveState*))(Il2CppBase() + 0x1C61AC4))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponCODTempestActiveState*, float))(Il2CppBase() + 0x1C61CD0))(this, DeltaTime);
	}
	template <typename T = void> T StartAim() {
		return ((T (*)(WeaponCODTempestActiveState*))(Il2CppBase() + 0x1C61DB0))(this);
	}
	template <typename T = void> T BeginFire() {
		return ((T (*)(WeaponCODTempestActiveState*))(Il2CppBase() + 0x1C620FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponCODTempestActiveState*))(Il2CppBase() + 0x1C62248))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponCODTempestActiveState*, float))(Il2CppBase() + 0x1C6224C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_StartAim() {
		return ((T (*)(WeaponCODTempestActiveState*))(Il2CppBase() + 0x1C62250))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginFire() {
		return ((T (*)(WeaponCODTempestActiveState*))(Il2CppBase() + 0x1C62254))(this);
	}

};

}
