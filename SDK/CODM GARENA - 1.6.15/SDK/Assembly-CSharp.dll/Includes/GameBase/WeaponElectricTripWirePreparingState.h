#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponElectricTripWirePreparingState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponElectricTripWirePreparingState"));
	}

	template <typename T = uintptr_t> T& m_ProjComponent() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_ThrowProjectileTrackEffect() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& m_IsShowingTrackEffect() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_HasStartFire() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = Il2CppVector3> T& CAMERA_OFFSET_3P() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> T get_ThrowProjectileTrackIsValid() {
		return ((T (*)(WeaponElectricTripWirePreparingState*))(Il2CppBase() + 0x1C66C48))(this);
	}
	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponElectricTripWirePreparingState*))(Il2CppBase() + 0x1C66C70))(this);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WeaponElectricTripWirePreparingState*))(Il2CppBase() + 0x1C66FAC))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponElectricTripWirePreparingState*, float))(Il2CppBase() + 0x1C672E4))(this, DeltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponElectricTripWirePreparingState*))(Il2CppBase() + 0x1C677EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WeaponElectricTripWirePreparingState*))(Il2CppBase() + 0x1C677F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponElectricTripWirePreparingState*, float))(Il2CppBase() + 0x1C677FC))(this, P0);
	}

};

}
