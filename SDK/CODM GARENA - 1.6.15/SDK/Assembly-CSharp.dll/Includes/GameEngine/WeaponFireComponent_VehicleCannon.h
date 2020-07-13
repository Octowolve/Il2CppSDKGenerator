#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFireComponentVehicleCannon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFireComponent_VehicleCannon"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcRealStartPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcInitVelocity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RealStartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponFireComponentVehicleCannon*, uintptr_t, bool))(Il2CppBase() + 0x2400F50))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponFireComponentVehicleCannon*))(Il2CppBase() + 0x2401028))(this);
	}
	template <typename T = Il2CppVector3> T CalcRealStartPos() {
		return ((T (*)(WeaponFireComponentVehicleCannon*))(Il2CppBase() + 0x24010E4))(this);
	}
	template <typename T = Il2CppVector3> T CalcInitVelocity() {
		return ((T (*)(WeaponFireComponentVehicleCannon*))(Il2CppBase() + 0x2401604))(this);
	}
	template <typename T = uintptr_t> T RealStartFire() {
		return ((T (*)(WeaponFireComponentVehicleCannon*))(Il2CppBase() + 0x2401878))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponFireComponentVehicleCannon*, uintptr_t, bool))(Il2CppBase() + 0x2401AB4))(this, P0, P1);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_CalcRealStartPos() {
		return ((T (*)(WeaponFireComponentVehicleCannon*))(Il2CppBase() + 0x2401AB8))(this);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_CalcInitVelocity() {
		return ((T (*)(WeaponFireComponentVehicleCannon*))(Il2CppBase() + 0x2401AC8))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_RealStartFire() {
		return ((T (*)(WeaponFireComponentVehicleCannon*))(Il2CppBase() + 0x2401AD8))(this);
	}

};

}
